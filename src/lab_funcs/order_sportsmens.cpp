#include "funcs.hpp"
#include <algorithm>
#include <qdebug.h>

QList<int> get_list_of_ordered_sportsmens(std::map<int, int> map) {
  QList<int> list;

  for (auto const &pair : map) {
    if (map.find(pair.second) == map.end()) {
      list.insert(0, pair.first);

    } else {
      auto value = std::find(list.begin(), list.end(), pair.second);

      if (value < list.end()) {
        list.insert(value + 1, pair.first);
      } else {
        list.push_back(pair.first);
      }
    }
  }

  return list;
}