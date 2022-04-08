/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionIniciar;
    QAction *actionDetener;
    QAction *actionCerrar;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *radio;
    QDoubleSpinBox *pyo;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QDoubleSpinBox *pxo;
    QDoubleSpinBox *vxo;
    QDoubleSpinBox *vyo;
    QDoubleSpinBox *masa;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QPushButton *agregar;
    QMenuBar *menuBar;
    QMenu *Simulacion;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1008, 667);
        actionIniciar = new QAction(MainWindow);
        actionIniciar->setObjectName(QString::fromUtf8("actionIniciar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagen/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIniciar->setIcon(icon);
        actionDetener = new QAction(MainWindow);
        actionDetener->setObjectName(QString::fromUtf8("actionDetener"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagen/stop.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDetener->setIcon(icon1);
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagen/exit.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCerrar->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(740, 10, 257, 501));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        radio = new QDoubleSpinBox(gridLayoutWidget);
        radio->setObjectName(QString::fromUtf8("radio"));
        radio->setMaximum(1000.000000000000000);

        gridLayout->addWidget(radio, 7, 2, 1, 1);

        pyo = new QDoubleSpinBox(gridLayoutWidget);
        pyo->setObjectName(QString::fromUtf8("pyo"));
        pyo->setMinimum(-8000.000000000000000);
        pyo->setMaximum(8000.000000000000000);
        pyo->setSingleStep(100.000000000000000);

        gridLayout->addWidget(pyo, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 1, 1, 2);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 1, 1, 2);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 6, 1, 1, 1);

        pxo = new QDoubleSpinBox(gridLayoutWidget);
        pxo->setObjectName(QString::fromUtf8("pxo"));
        pxo->setMinimum(-8000.000000000000000);
        pxo->setMaximum(8000.000000000000000);
        pxo->setSingleStep(100.000000000000000);
        pxo->setValue(0.000000000000000);

        gridLayout->addWidget(pxo, 1, 1, 1, 1);

        vxo = new QDoubleSpinBox(gridLayoutWidget);
        vxo->setObjectName(QString::fromUtf8("vxo"));
        vxo->setMinimum(-100.000000000000000);
        vxo->setMaximum(100.000000000000000);

        gridLayout->addWidget(vxo, 4, 1, 1, 1);

        vyo = new QDoubleSpinBox(gridLayoutWidget);
        vyo->setObjectName(QString::fromUtf8("vyo"));
        vyo->setMinimum(-100.000000000000000);
        vyo->setMaximum(100.000000000000000);

        gridLayout->addWidget(vyo, 4, 2, 1, 1);

        masa = new QDoubleSpinBox(gridLayoutWidget);
        masa->setObjectName(QString::fromUtf8("masa"));
        masa->setMaximum(100000.000000000000000);
        masa->setSingleStep(1000.000000000000000);

        gridLayout->addWidget(masa, 7, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 6, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 2);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 721, 581));
        agregar = new QPushButton(centralWidget);
        agregar->setObjectName(QString::fromUtf8("agregar"));
        agregar->setGeometry(QRect(810, 530, 131, 51));
        agregar->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1008, 26));
        Simulacion = new QMenu(menuBar);
        Simulacion->setObjectName(QString::fromUtf8("Simulacion"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(Simulacion->menuAction());
        Simulacion->addAction(actionIniciar);
        Simulacion->addAction(actionDetener);
        Simulacion->addAction(actionCerrar);
        Simulacion->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionIniciar->setText(QApplication::translate("MainWindow", "Iniciar", nullptr));
        actionDetener->setText(QApplication::translate("MainWindow", "Detener", nullptr));
        actionCerrar->setText(QApplication::translate("MainWindow", "Cerrar", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Posici\303\263n inicial y", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Vel inicial x", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Vel inicial y", nullptr));
        label->setText(QApplication::translate("MainWindow", "Posici\303\263n inicial x", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Masa", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Radio", nullptr));
        agregar->setText(QApplication::translate("MainWindow", "Agregar planeta", nullptr));
        Simulacion->setTitle(QApplication::translate("MainWindow", "Simulaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
