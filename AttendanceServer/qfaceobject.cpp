#include "qfaceobject.h"
#include <QDebug>

QFaceObject::QFaceObject(QObject *parent) : QObject(parent)
{
    //初始化
    seeta::ModelSetting FDmode("./model/fd_2_00.dat", seeta::ModelSetting::CPU, 0);
    seeta::ModelSetting PDmode("./model/pd_2_00_pts5.dat", seeta::ModelSetting::CPU, 0);
    seeta::ModelSetting FRmode("./model/fr_2_10.dat", seeta::ModelSetting::CPU, 0);
    this->fengineptr = new seeta::FaceEngine(FDmode, PDmode, FRmode);

    //导入已有的人脸数据库
    this->fengineptr->Load("./face.db");
}

QFaceObject::~QFaceObject()
{
    delete fengineptr;
}

int64_t QFaceObject::face_register(cv::Mat &faceImage)
{
    //把opencv的Mat数据转化为seetaFace的数据
    SeetaImageData sImage;
    sImage.data = faceImage.data;
    sImage.width = faceImage.cols;
    sImage.height = faceImage.rows;
    sImage.channels = faceImage.channels();

    int64_t faceId = this->fengineptr->Register(sImage); //注册成功返回一个人脸ID并保存到当前目录;失败则返回-1
    if(faceId >= 0)
    {
        fengineptr->Save("./face.db");
        qDebug() << "faceID:" << faceId << endl;
    }
    return faceId;
}

//人脸查询，成功则返回相应faceId
int QFaceObject::face_query(cv::Mat &faceImage)
{
    //把opencv的Mat数据转化为seetaFace的数据
    SeetaImageData sImage;
    sImage.data = faceImage.data;
    sImage.width = faceImage.cols;
    sImage.height = faceImage.rows;
    sImage.channels = faceImage.channels();

    float similarity = 0;
    int64_t faceId = fengineptr->Query(sImage, &similarity); //运行时间较长

    if(similarity > 0.7)
    {
        emit sendFaceId(faceId); //相似度大于0.85则通过信号返回faceID
    }
    else
    {
        emit sendFaceId(-1); //否则返回无效ID
    }
    return faceId;
}
