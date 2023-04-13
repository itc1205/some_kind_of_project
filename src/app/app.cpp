#include "app.hpp"

Lab::Lab(QWidget *parent) : QMainWindow(parent) {
  ui.setupUi(this);
  connect_ui();
  setup_tab1();
  setup_tab2();
  setup_tab3();
}

void Lab::show_message(QString str) { ui.statusbar->showMessage(str, 1500); }
