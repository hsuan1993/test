/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *gridGroupBox_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *m_pErrMsgLabel;
    QWidget *m_pAllItemsWidget;
    QTableWidget *m_pAllItemsTbl;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *m_pExerciseBtn;
    QToolButton *m_pHideBtn;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *m_pDetailsGBox;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *m_pCreateBtn;
    QPushButton *m_pUpdateBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_pDeleteBtn;
    QFrame *frame_2;
    QTableWidget *m_pDetailsTbl;
    QGroupBox *m_pCreateGBox;
    QGridLayout *gridLayout_7;
    QLineEdit *m_pEntityEdit;
    QLineEdit *m_pQuesEdit;
    QLineEdit *m_pAnswerEdit;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *m_pSaveBtn;
    QPushButton *m_pResetBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(801, 473);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/read-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridGroupBox_2 = new QGroupBox(centralWidget);
        gridGroupBox_2->setObjectName(QStringLiteral("gridGroupBox_2"));
        gridGroupBox_2->setMinimumSize(QSize(422, 400));
        gridGroupBox_2->setMaximumSize(QSize(422, 400));
        gridLayout_3 = new QGridLayout(gridGroupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_pErrMsgLabel = new QLabel(gridGroupBox_2);
        m_pErrMsgLabel->setObjectName(QStringLiteral("m_pErrMsgLabel"));

        horizontalLayout_3->addWidget(m_pErrMsgLabel);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        m_pAllItemsWidget = new QWidget(gridGroupBox_2);
        m_pAllItemsWidget->setObjectName(QStringLiteral("m_pAllItemsWidget"));
        sizePolicy.setHeightForWidth(m_pAllItemsWidget->sizePolicy().hasHeightForWidth());
        m_pAllItemsWidget->setSizePolicy(sizePolicy);
        m_pAllItemsWidget->setMinimumSize(QSize(420, 500));
        m_pAllItemsTbl = new QTableWidget(m_pAllItemsWidget);
        m_pAllItemsTbl->setObjectName(QStringLiteral("m_pAllItemsTbl"));
        m_pAllItemsTbl->setGeometry(QRect(1, 11, 401, 331));

        gridLayout_3->addWidget(m_pAllItemsWidget, 1, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_pExerciseBtn = new QToolButton(gridGroupBox_2);
        m_pExerciseBtn->setObjectName(QStringLiteral("m_pExerciseBtn"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/stopwatch-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_pExerciseBtn->setIcon(icon1);
        m_pExerciseBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(m_pExerciseBtn);

        m_pHideBtn = new QToolButton(gridGroupBox_2);
        m_pHideBtn->setObjectName(QStringLiteral("m_pHideBtn"));
        m_pHideBtn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        m_pHideBtn->setArrowType(Qt::RightArrow);

        horizontalLayout_2->addWidget(m_pHideBtn);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 2, 1, 1);


        horizontalLayout->addWidget(gridGroupBox_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_pDetailsGBox = new QGroupBox(centralWidget);
        m_pDetailsGBox->setObjectName(QStringLiteral("m_pDetailsGBox"));
        gridLayout_6 = new QGridLayout(m_pDetailsGBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        m_pCreateBtn = new QPushButton(m_pDetailsGBox);
        m_pCreateBtn->setObjectName(QStringLiteral("m_pCreateBtn"));

        horizontalLayout_4->addWidget(m_pCreateBtn);

        m_pUpdateBtn = new QPushButton(m_pDetailsGBox);
        m_pUpdateBtn->setObjectName(QStringLiteral("m_pUpdateBtn"));

        horizontalLayout_4->addWidget(m_pUpdateBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        m_pDeleteBtn = new QPushButton(m_pDetailsGBox);
        m_pDeleteBtn->setObjectName(QStringLiteral("m_pDeleteBtn"));

        horizontalLayout_4->addWidget(m_pDeleteBtn);


        gridLayout_6->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        frame_2 = new QFrame(m_pDetailsGBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 200));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        m_pDetailsTbl = new QTableWidget(frame_2);
        m_pDetailsTbl->setObjectName(QStringLiteral("m_pDetailsTbl"));
        m_pDetailsTbl->setGeometry(QRect(1, 10, 315, 181));

        gridLayout_6->addWidget(frame_2, 0, 0, 1, 1);


        verticalLayout_2->addWidget(m_pDetailsGBox);

        m_pCreateGBox = new QGroupBox(centralWidget);
        m_pCreateGBox->setObjectName(QStringLiteral("m_pCreateGBox"));
        gridLayout_7 = new QGridLayout(m_pCreateGBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        m_pEntityEdit = new QLineEdit(m_pCreateGBox);
        m_pEntityEdit->setObjectName(QStringLiteral("m_pEntityEdit"));

        gridLayout_7->addWidget(m_pEntityEdit, 0, 1, 1, 1);

        m_pQuesEdit = new QLineEdit(m_pCreateGBox);
        m_pQuesEdit->setObjectName(QStringLiteral("m_pQuesEdit"));

        gridLayout_7->addWidget(m_pQuesEdit, 1, 1, 1, 1);

        m_pAnswerEdit = new QLineEdit(m_pCreateGBox);
        m_pAnswerEdit->setObjectName(QStringLiteral("m_pAnswerEdit"));

        gridLayout_7->addWidget(m_pAnswerEdit, 2, 1, 1, 1);

        label_11 = new QLabel(m_pCreateGBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_7->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(m_pCreateGBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_7->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(m_pCreateGBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_7->addWidget(label_13, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        m_pSaveBtn = new QPushButton(m_pCreateGBox);
        m_pSaveBtn->setObjectName(QStringLiteral("m_pSaveBtn"));

        horizontalLayout_6->addWidget(m_pSaveBtn);

        m_pResetBtn = new QPushButton(m_pCreateGBox);
        m_pResetBtn->setObjectName(QStringLiteral("m_pResetBtn"));

        horizontalLayout_6->addWidget(m_pResetBtn);


        gridLayout_7->addLayout(horizontalLayout_6, 3, 1, 1, 1);


        verticalLayout_2->addWidget(m_pCreateGBox);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 801, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Anki", 0));
        m_pErrMsgLabel->setText(QApplication::translate("MainWindow", "Error Message...", 0));
        m_pExerciseBtn->setText(QApplication::translate("MainWindow", "Exercise", 0));
        m_pHideBtn->setText(QApplication::translate("MainWindow", "Show Details", 0));
        m_pCreateBtn->setText(QApplication::translate("MainWindow", "Create", 0));
        m_pUpdateBtn->setText(QApplication::translate("MainWindow", "Update", 0));
        m_pDeleteBtn->setText(QApplication::translate("MainWindow", "Delete", 0));
        label_11->setText(QApplication::translate("MainWindow", "Answer", 0));
        label_12->setText(QApplication::translate("MainWindow", "Question", 0));
        label_13->setText(QApplication::translate("MainWindow", "Entity", 0));
        m_pSaveBtn->setText(QApplication::translate("MainWindow", "Save", 0));
        m_pResetBtn->setText(QApplication::translate("MainWindow", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
