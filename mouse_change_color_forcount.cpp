#include <Siv3D.hpp>

void Main() {

  const Rect rect1(20, 20, 100, 100);
  const Rect rect2(120, 120, 100, 100);

  int count1 = 0;
  int count2 = 0;

  while (System::Update()) {

    if (rect1.leftPressed() == 1) {
      count1++;
    }
    if (rect2.leftPressed() == 1) {
      count2++;
    }

    if (count1 % 3 == 0) rect1.draw(Palette::White);
    if (count1 % 3 == 1) rect1.draw(Palette::Red);
    if (count1 % 3 == 2) rect1.draw(Palette::Blue);
    if (count2 % 3 == 0) rect2.draw(Palette::White);
    if (count2 % 3 == 1) rect2.draw(Palette::Red);
    if (count2 % 3 == 2) rect2.draw(Palette::Blue);
  }
}
