#include <QApplication>
#include "MainWindow.h"

#include <iostream>

/*!
*
* @file
*
* @brief
* @author F. Aubert
*
*/

int main(int argc, char *argv[]) {
  QApplication application(argc,argv);


  MainWindow mainWindow;
  mainWindow.show();


  int finished=application.exec();

  return finished;

}

