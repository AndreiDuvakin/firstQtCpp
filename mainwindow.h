#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "src/game/game.h"
#include <QGraphicsRectItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void resizeEvent(QResizeEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    Game game;
    QGraphicsScene *scene;

    void resizeTable();
    void renderTable();

 private slots:
    void updateGame();
    void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
