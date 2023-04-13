#pragma once

#include <QAbstractButton>
#include <QDebug>
#include <QStringList>
#include <QStringListModel>
#include <QWidget>
#include <UI.hpp>
#include <funcs.hpp>
#include <queue>

class Lab : public QMainWindow {
  Q_OBJECT
public:
  explicit Lab(QWidget *parent = nullptr);
private slots:
  // Tab1
  void addWord_tab1();
  void removeWord_tab1();
  // Tab2
  void addSportsmen_tab2();
  void removeSportsmen_tab2();
  // Tab 3
  void interp_next_tab3();

private:
  void connect_ui();
  void update_common_word();
  void show_message(QString str);
  Ui::MainWindow ui;
  // Tab 1
  void setup_tab1();
  QStringListModel *first_model;
  QStringList *first_list;
  // Tab 2
  void setup_tab2();
  void refresh_data_tab2();
  std::map<int, int> sportsmens;
  // Tab 3
  void setup_tab3();
  void push_tab3();
  void pop_tab3();
  void front_tab3();
  void size_tab3();
  void clear_tab3();
  void exit_tab3();
  std::queue<int> queue_tab3;
};