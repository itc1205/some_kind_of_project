#include "app.hpp"

void Lab::connect_ui() {
  ui.add_word_tab1->connect(ui.add_word_tab1, &QAbstractButton::clicked, this,
                            &Lab::addWord_tab1);
  ui.delete_selected_tab1->connect(ui.delete_selected_tab1,
                                   &QAbstractButton::clicked, this,
                                   &Lab::removeWord_tab1);
  ui.add_spotsmen_tab2->connect(ui.add_spotsmen_tab2, &QAbstractButton::clicked,
                                this, &Lab::addSportsmen_tab2);
  ui.delete_sportsmen_tab2->connect(ui.delete_sportsmen_tab2,
                                    &QAbstractButton::clicked, this,
                                    &Lab::removeSportsmen_tab2);
}