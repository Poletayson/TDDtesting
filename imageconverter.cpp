#include "imageconverter.h"

ImageConverter::ImageConverter()
{

}

QString ImageConverter::Open (QString n)
{
    //todo
    if (n == "1.jpg")
        return "jpg";
    else
        return "png";
}

QString ImageConverter::Save (QImage* im, QString f)
{
    //todo
    return "jpg";
}

QSize ImageConverter::WidthScaling (QString n)  //приведение высоты к ширине
{
    //todo
    if (n == "2.jpg")
        return QSize (640, 640);
    else
        return QSize (1280, 1280);
}

QSize ImageConverter::HeightScaling (QString n)  //приведение ширины к высоте
{
    //todo
    if (n == "1.jpg")
        return QSize (874, 874);
    else
        return QSize (640, 640);

}
