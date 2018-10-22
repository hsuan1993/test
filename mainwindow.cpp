#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //init frame
    ui->m_InitFrame->setHidden(false);
    QObject::connect(ui->m_ExerciseBtn, SIGNAL(clicked()), this, SLOT(OnExercise()));

    //create frame


    //exercise frame
    ui->m_ExerciseFrame->setHidden(true);
    QObject::connect(ui->m_BackBtn, SIGNAL(clicked()), this, SLOT(OnBack()));


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::OnExercise()
{
//    ui->m_text->setText("Ok");
    ui->m_InitFrame->setHidden(true);
    ui->m_ExerciseFrame->setHidden(false);

}

void MainWindow::OnBack()
{
    ui->m_InitFrame->setHidden((false));
    ui->m_ExerciseFrame->setHidden(true);

}
