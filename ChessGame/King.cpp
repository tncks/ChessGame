#include "stdafx.h"
#include "King.h"

#define myabs(x) ((x)<0 ? -(x):(x))

King::King(unsigned int iTeam)
	: Pieces(Pieces::King, iTeam)
{
	
}

bool King::Move(int ax, int ay, int bx, int by) const {
	if (ax == bx && myabs(ay-by)==1)
	{
		return Pieces::Move(ax, ay, bx, by);
	}
	else if (ay == by && myabs(ax-bx)==1) {
		return Pieces::Move(ax, ay, bx, by);
	}
	else {
		if (myabs(ax - bx) == 1 && myabs(ay - by)==1)
		{
			return Pieces::Move(ax, ay, bx, by);
		}
	}

	return false;
}