#pragma once

#include "Pieces.h"

class Rook : public Pieces {
private:
	bool bFirst = true;
public:
	Rook(unsigned int iTeam);

	bool Move(int ax, int ay, int bx, int by) const;
};