/********************************************************************************
** Form generated from reading UI file 'exerciseform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISEFORM_H
#define UI_EXERCISEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExerciseForm
{
public:
    QWidget *gridLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_BackBtn;
    QLabel *label;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *ExerciseForm)
    {
        if (ExerciseForm->objectName().isEmpty())
            ExerciseForm->setObjectName(QStringLiteral("ExerciseForm"));
        ExerciseForm->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/read-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExerciseForm->setWindowIcon(icon);
        gridLayoutWidget = new QWidget(ExerciseForm);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 381, 281));
        verticalLayout = new QVBoxLayout(gridLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_BackBtn = new QPushButton(gridLayoutWidget);
        m_BackBtn->setObjectName(QStringLiteral("m_BackBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_BackBtn->sizePolicy().hasHeightForWidth());
        m_BackBtn->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(m_BackBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ExerciseForm);

        QMetaObject::connectSlotsByName(ExerciseForm);
    } // setupUi

    void retranslateUi(QWidget *ExerciseForm)
    {
        ExerciseForm->setWindowTitle(QApplication::translate("ExerciseForm", "Form", 0));
        m_BackBtn->setText(QApplication::translate("ExerciseForm", "Back", 0));
        label->setText(QApplication::translate("ExerciseForm", "Question", 0));
        pushButton->setText(QApplication::translate("ExerciseForm", "Answer", 0));
        pushButton_2->setText(QApplication::translate("ExerciseForm", "Good", 0));
        pushButton_3->setText(QApplication::translate("ExerciseForm", "nomal", 0));
        pushButton_4->setText(QApplication::translate("ExerciseForm", "Bad", 0));
    } // retranslateUi

};

namespace Ui {
    class ExerciseForm: public Ui_ExerciseForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISEFORM_H
