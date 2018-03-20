#include "stdafx.h"
#include "Knight.h"

#define myabs(x) ((x)<0 ? -(x):(x))

Knight::Knight(unsigned int iTeam) : Pieces(Pieces::Knight, iTeam)
{

}

bool Knight::Move(int ax, int ay, int bx, int by) const {
	if ((myabs(ax-bx)==1 && myabs(ay-by)==2)||(myabs(ax-bx)==2 && myabs(ay-by)==1))
	{
		return Pieces::Move(ax, ay, bx, by);
	}

	return false;
}