#include <app.hpp>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  Lab lab;
  lab.show();
  return app.exec();
}
