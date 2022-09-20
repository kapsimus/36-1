#pragma once
#include <QWidget>
#include <QPixmap>
#include <QPaintEvent>

class RGBCircle: public QWidget {
    //Q_OBJECT
public:
    RGBCircle() = default;
    RGBCircle(QWidget *parent);
    void paintEvent(QPaintEvent *event) override;
    void setRed();
    void setGreen();
    void setBlue();
private:
    QPixmap currentCircle;
    QPixmap redCircle;
    QPixmap greenCircle;
    QPixmap blueCircle;
};