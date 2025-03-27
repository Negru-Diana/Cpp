/********************************************************************************
** Form generated from reading UI file 'inchiriere_filme.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCHIRIERE_FILME_H
#define UI_INCHIRIERE_FILME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inchiriere_filmeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *inchiriere_filmeClass)
    {
        if (inchiriere_filmeClass->objectName().isEmpty())
            inchiriere_filmeClass->setObjectName("inchiriere_filmeClass");
        inchiriere_filmeClass->resize(600, 400);
        menuBar = new QMenuBar(inchiriere_filmeClass);
        menuBar->setObjectName("menuBar");
        inchiriere_filmeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(inchiriere_filmeClass);
        mainToolBar->setObjectName("mainToolBar");
        inchiriere_filmeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(inchiriere_filmeClass);
        centralWidget->setObjectName("centralWidget");
        inchiriere_filmeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(inchiriere_filmeClass);
        statusBar->setObjectName("statusBar");
        inchiriere_filmeClass->setStatusBar(statusBar);

        retranslateUi(inchiriere_filmeClass);

        QMetaObject::connectSlotsByName(inchiriere_filmeClass);
    } // setupUi

    void retranslateUi(QMainWindow *inchiriere_filmeClass)
    {
        inchiriere_filmeClass->setWindowTitle(QCoreApplication::translate("inchiriere_filmeClass", "inchiriere_filme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inchiriere_filmeClass: public Ui_inchiriere_filmeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCHIRIERE_FILME_H
