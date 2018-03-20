#include "stdafx.h"
#include "Pieces.h"

Pieces::Pieces(unsigned int iType, unsigned int iTeam)
	:iType(iType), iTeam(iTeam)
{
}

Pieces::Pieces(const Pieces &piece)
	: iType(piece.iType), iTeam(piece.iTeam)
{
}

bool Pieces::Attack(int ax, int ay, int bx, int by) const
{
	return true;
}