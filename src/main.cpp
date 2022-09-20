#include <QApplication>
#include <QSlider>
#include <QVBoxLayout>
#include <QPainter>
#include "RGBCircle.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    auto *window = new QWidget;
    window->setFixedSize(200,230);
    auto *qvBoxLayout = new QVBoxLayout(window);
    auto *circle = new RGBCircle(window);
    auto *slider = new QSlider(Qt::Orientation::Horizontal);
    slider->setMaximum(100);
    slider->setMinimum(0);
    qvBoxLayout->addWidget(circle);
    qvBoxLayout->addWidget(slider);
    QObject::connect(slider, &QSlider::valueChanged, [&circle](int newValue)
        {
            if (newValue < 33) circle->setRed();
            else if (newValue > 66) circle->setBlue();
            else circle->setGreen();
        });
    window->show();
    return QApplication::exec();
}
