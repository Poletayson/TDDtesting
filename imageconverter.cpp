#include "imageconverter.h"

ImageConverter::ImageConverter()
{

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
    return QSize (874, 874);
}
