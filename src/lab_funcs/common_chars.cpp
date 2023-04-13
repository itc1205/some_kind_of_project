#include "funcs.hpp"
#include <algorithm>

void copy_set_to_string(const QSet<QChar> &set, QString &string) {
  for (const auto &chr : set) {
    string.push_back(chr);
  }
}

void copy_string_to_set(const QString &string, QSet<QChar> &set) {
  for (const auto &chr : string) {
    set.insert(chr);
  }
}

void intersect_all(QStringList &list, QSet<QChar> &set) {
  if (list.isEmpty()) {
    return;
  }

  copy_string_to_set(list[0], set);
  for (const auto &string : list) {
    QSet<QChar> buffer;
    copy_string_to_set(string, buffer);
    set.intersect(buffer);
  }
}

void sort_string(QString &str) { std::sort(str.begin(), str.end()); }

QString find_common_chars(QStringList &list) {
  QString common_chars;
  QSet<QChar> set;

  intersect_all(list, set);
  copy_set_to_string(set, common_chars);
  sort_string(common_chars);
  return common_chars;
}