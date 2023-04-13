#include "app.hpp"

void Lab::setup_tab1() {
  first_model = new QStringListModel;
  first_list = new QStringList;

  ui.listView_tab1->setModel(first_model);
}

void Lab::update_common_word() {
  auto common_chars = find_common_chars(*first_list);

  if (common_chars.isEmpty()) {
    ui.common_chars_tab1->setText("Общих букв нет");
  } else {
    ui.common_chars_tab1->setText(common_chars);
  }
}

void Lab::addWord_tab1() {
  if (!ui.delete_selected_tab1->isEnabled()) {
    ui.delete_selected_tab1->setEnabled(true);
  }

  if (ui.lineEdit_tab1->text().isEmpty()) {
    show_message(QString("Строчка ввода пуста!"));
    return;
  }

  first_list->append(ui.lineEdit_tab1->text());
  first_model->setStringList(*first_list);

  update_common_word();

  show_message("Было введено слово: " + ui.lineEdit_tab1->text());
  ui.lineEdit_tab1->clear();
  ui.lineEdit_tab1->text().clear();
}

void Lab::removeWord_tab1() {
  if (!ui.listView_tab1->selectionModel()->hasSelection()) {
    return;
  }

  auto index = ui.listView_tab1->selectionModel()->selectedIndexes();

  if (first_list->empty()) {
    ui.common_chars_tab1->setText("Общих букв нет");
    ui.delete_selected_tab1->setEnabled(false);
    return;
  }

  show_message(("Было удалено слово: " + index.first().data().toString()));
  first_list->removeAt(index.first().row());
  first_model->setStringList(*first_list);

  update_common_word();

  if (first_list->empty()) {
    ui.delete_selected_tab1->setEnabled(false);
  }
}
