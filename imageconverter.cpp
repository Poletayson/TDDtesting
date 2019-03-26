#include "imageconverter.h"

ImageConverter::ImageConverter()
{
    img = new QImage ();
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
    if (im != Q_NULLPTR)
    {
        if (!im->isNull())
        {
            im->save(f);
            QStringList ptrL = f.split(".");
            return ptrL.last();
        }
        else return "";
    }
    else return "";
}

QSize ImageConverter::WidthScaling ()  //приведение высоты к ширине
{
    img = new QImage(img->scaled(img->width(), img->width()));
    return img->size();
}

QSize ImageConverter::HeightScaling ()  //приведение ширины к высоте
{
    img = new QImage(img->scaled(img->height(), img->height()));
    return img->size();
}
