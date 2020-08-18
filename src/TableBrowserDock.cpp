#include "TableBrowserDock.h"
#include "MainWindow.h"

TableBrowserDock::TableBrowserDock(QWidget* parent, MainWindow* mainWindow)
    : QDockWidget(parent),
      main_window(mainWindow)
{
}

void TableBrowserDock::closeEvent(QCloseEvent*)
{
    // Normally dock widgets are not deleted when they are closed. Make sure to delete these
    // because they can consume a lot of memory and we would need to figure out if they are
    // visible whenever we loop over them.
    deleteLater();
}
