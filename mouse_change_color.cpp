#include <Siv3D.hpp>

void Main() {

  const Rect rect(20, 20, 100, 100);

  Stopwatch stopwatch;
  bool judg = false;

  while (System::Update()) {

    if (rect.leftPressed() == 1 && judg == false) {
      stopwatch.start();
      judg = true;
    }
    else if (rect.leftPressed() == 1 && judg == true) {
      stopwatch.pause();
      judg = false;
    }

    if (stopwatch.ms() <= 500) {
      rect.draw(Palette::White);
    }
    if (501 <= stopwatch.ms() && stopwatch.ms() <= 1000) {
      rect.draw(Palette::Red);
    }
    if (1001 <= stopwatch.ms() && stopwatch.ms() <= 1500) {
      rect.draw(Palette::Blue);
    }
    if (stopwatch.ms() > 1500) {
      stopwatch.reset();
    }
  }
}
