#include "stdafx.h"
#include "Pieces.h"

bool Pieces::Move(int ax, int ay, int bx, int by) const {
	return ((!(ax < 0 || ax >= 8 || ay < 0 || ay >= 8)) &&
		(!(ax == bx && ay == by)));
}