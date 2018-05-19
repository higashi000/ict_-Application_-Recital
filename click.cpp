#include <Siv3D.hpp>

using namespace s3d;

void Main()
{
  Point pos(200, 200);
  Point hjkl(400, 200);

  Graphics::SetBackground(Palette::White);

	while (System::Update())
	{
    if (KeyH.pressed()) {
      hjkl.x--;
    }
		if (KeyRight.pressed()) {
      pos.x++;
		}

    if (KeyL.pressed()) {
      hjkl.x++;
    }
		if (KeyLeft.pressed()) {
      pos.x--;
		}

    if (KeyK.pressed()) {
      hjkl.y--;
    }
    if (KeyUp.pressed()) {
      --pos.y;
    }

    if (KeyJ.pressed()) {
      hjkl.y++;
    }
    if (KeyDown.pressed()) {
      ++pos.y;
    }

    Rect(hjkl, 70, 70).draw(Palette::Red);
    Circle(pos, 70).draw(Palette::Black);
	}
}
