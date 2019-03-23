#ifndef IMAGECONVERTER_H
#define IMAGECONVERTER_H

#include <QObject>
#include <QSize>

class ImageConverter
{
public:
    ImageConverter();
    QSize WidthScaling (QString n);
    QSize HeightScaling (QString n);
};

#endif // IMAGECONVERTER_H
