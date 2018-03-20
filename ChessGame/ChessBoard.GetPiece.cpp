#include "stdafx.h"
#include "ChessBoard.h"

Pieces *ChessBoard::GetPiece(int x, int y)
{
	if (x >= 0 && x < 8 && y >= 0 && y < 8)
	{
		return pBoard[x][y];
	}

	return 0;
}

const Pieces *ChessBoard::GetPiece(int x, int y) const {
	if (x >= 0 && x < 8 && y >= 0 && y < 8)
	{
		return pBoard[x][y];
	}

	return 0;
}