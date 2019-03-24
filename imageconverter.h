#ifndef IMAGECONVERTER_H
#define IMAGECONVERTER_H

#include <QObject>
#include <QSize>
#include <QImage>

class ImageConverter
{
public:
    QImage* img;
    ImageConverter();
    QString Open (QString n);
    QSize WidthScaling (QString n);
    QSize HeightScaling (QString n);
    QString Save (QImage* im, QString f);
};

#endif // IMAGECONVERTER_H
