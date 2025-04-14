#include <stdio.h>
#include <stdlib.h>

class Coordinate{
	public:
		int x;
		int y;
};

class Sprite{
	public:
		int XCoordinate;
		int YCoordinate;
		Coordinate TopCorner;
		Coordinate BottomCorner;
	
	void move(Sprite Sprite, int NewX, int NewY){
		Sprite.XCoordinate = NewX;
		Sprite.YCoordinate = NewY;
	}
};

int main()
{
        return 0;
}
