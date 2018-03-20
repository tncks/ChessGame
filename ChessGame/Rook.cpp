#include "stdafx.h"
#include "Rook.h"

//#define myabs(x) ((x)<0 ? -(x):(x))

Rook::Rook(unsigned int iTeam) : Pieces(Pieces::Rook, iTeam)
{

}

bool Rook::Move(int ax, int ay, int bx, int by) const {
	if ((ax == bx) && (ay!=by))
	{
		return Pieces::Move(ax, ay, bx, by);
	}
	else if ((ay == by) && (ax!=bx)) {
		return Pieces::Move(ax, ay, bx, by);
	}

	return false;
}