#include <QPainter>
#include "RGBCircle.h"

RGBCircle::RGBCircle(QWidget *parent) {
    setParent(parent);
    redCircle = QPixmap("..\\res\\red.png");
    greenCircle = QPixmap("..\\res\\green.png");
    blueCircle = QPixmap("..\\res\\blue.png");
    currentCircle = redCircle;
    setGeometry(redCircle.rect());
}
void RGBCircle::paintEvent(QPaintEvent *event) {
    QPainter p(this);
    p.drawPixmap(event->rect(), currentCircle);
}
void RGBCircle::setRed() {
    currentCircle = redCircle;
    update();
}
void RGBCircle::setGreen() {
    currentCircle = greenCircle;
    update();
}
void RGBCircle::setBlue() {
    currentCircle = blueCircle;
    update();
}