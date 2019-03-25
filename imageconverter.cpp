#include "imageconverter.h"

ImageConverter::ImageConverter()
{

}

QString ImageConverter::Open (QString n)
{
    img = new QImage (n);
    if (!img->isNull())
    {
        QStringList ptrL = n.split(".");
        return ptrL.last();

    }
    else
        return "";
}

QString ImageConverter::Save (QImage* im, QString f)
{
    if (!im->isNull())
    {
        im->save(f);
        QStringList ptrL = f.split(".");
        return ptrL.last();
    }
    else return "";
}

QSize ImageConverter::WidthScaling ()  //приведение высоты к ширине
{
    //todo
//    if (n == "2.jpg")
//        return QSize (640, 640);
//    else
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
