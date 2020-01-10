#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include "webview.h"
#include "tabbar.h"
#include "topwidget.h"
#include "tocsidebar.h"
#include "about.h"
#include "contentmanagerside.h"
#include "localkiwixserver.h"
#include "tocbar.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    TabBar*   getTabBar();
    TopWidget* getTopWidget();
    QStackedWidget* getSideDockWidget();
    ContentManagerSide* getSideContentManager();
    TocBar* getTocBar();
    void openTocBar();

protected slots:
    void toggleFullScreen();

private:
    Ui::MainWindow *mp_ui;
    About     *mp_about;
    LocalKiwixServer *mp_localKiwixServer;
    TocBar* mp_tocBar;
};

#endif // MAINWINDOW_H
