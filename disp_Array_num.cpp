#include <Siv3D.hpp>
#include <iostream>

void Main() {
  const Font font(30);
  const int num[3] = {0, 1, 2};
  while (System::Update()) {
    int x = 0;

    for (auto e : num) {
      font(num[e]).draw(x, 0);
      x += 100;
    }
  }
}
