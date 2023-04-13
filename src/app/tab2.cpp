#include "app.hpp"
#include <string>

void Lab::setup_tab2() { ui.table_of_sportsmens_out->setSortingEnabled(false); }

void Lab::refresh_data_tab2() {
  auto tbl_in = ui.table_of_sportsmens_in;
  auto tbl_out = ui.table_of_sportsmens_out;

  tbl_in->clear();
  tbl_out->clear();

  auto data_out = get_list_of_ordered_sportsmens(sportsmens);
  for (const auto &data : data_out) {
    auto item = new QTreeWidgetItem;
    auto buffer = new QString(std::to_string(data).data());
    item->setText(0, *buffer);
    tbl_out->addTopLevelItem(item);
  }
  for (auto &pair : sportsmens) {
    auto item = new QTreeWidgetItem;
    auto buffer = new QString(std::to_string(pair.first).data());
    auto buffer2 = new QString(std::to_string(pair.second).data());

    item->setText(0, *buffer);
    item->setText(1, *buffer2);
    tbl_in->addTopLevelItem(item);
  }
}

void Lab::addSportsmen_tab2() {
  auto first_value = ui.fisrt_spotsmen_num_tab2->value();
  auto second_value = ui.second_sportsmen_num_tab2->value();

  if (first_value == second_value) {
    show_message("Спортсмен не может стоять сам за собой");
    return;
  }

  if (sportsmens.find(first_value) != sportsmens.end()) {
    show_message("Спортсмен уже записан");
    return;
  }

  sportsmens.insert_or_assign(first_value, second_value);

  refresh_data_tab2();
}

void Lab::removeSportsmen_tab2() {

  auto item = ui.table_of_sportsmens_in->currentItem();
  if (item == nullptr) {
    show_message("Поле спортсменов пусто.");
    return;
  }

  auto first_value = item->data(0, Qt::ItemDataRole());
  auto second_value = item->data(1, Qt::ItemDataRole());

  show_message("Спортсмен с номером: " + first_value.value<QString>() +
               " стоящий после: " + second_value.value<QString>() +
               " был удален");
  sportsmens.erase(first_value.toInt());

  delete item;

  refresh_data_tab2();
}