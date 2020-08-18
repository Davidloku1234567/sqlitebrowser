#ifndef TABLEBROWSERDOCK_H
#define TABLEBROWSERDOCK_H

#include <QDockWidget>

class MainWindow;

class TableBrowserDock : public QDockWidget
{
    Q_OBJECT

public:
    explicit TableBrowserDock(QWidget* parent, MainWindow* mainWindow);

signals:
    void activated();

protected:
    void closeEvent(QCloseEvent*) override;

private:
    MainWindow* main_window;
};

#endif
