#ifndef IMAGECONVERTER_H
#define IMAGECONVERTER_H

#include <QObject>
#include <QSize>
#include <QImage>
#include <QDir>
#include <QFileDialog>

class ImageConverter
{
public:
    QImage* img;
    ImageConverter();
    QString Open (QString n);
    QSize WidthScaling ();
    QSize HeightScaling ();
    QString Save (QImage* im, QString f);
};

#endif // IMAGECONVERTER_H
