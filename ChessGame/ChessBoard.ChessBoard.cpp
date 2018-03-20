#include "stdafx.h"
#include "ChessBoard.h"
#include "Pieces.h"
#include "King.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"
#include "Rook.h"
#include "Pawn.h"

ChessBoard::ChessBoard(bool bStd) {
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			pBoard[i][j] = 0;
		}
	}

	if (bStd)
	{
		unsigned int iCampTeam = Pieces::Black;
		unsigned int iCampPosition[2] = { 0, 1 };

		for (unsigned int i = 0; i < 2; i++)
		{
			pBoard[4][iCampPosition[0]] = new King(iCampTeam);
			pBoard[3][iCampPosition[0]] = new Queen(iCampTeam);
			pBoard[2][iCampPosition[0]] = new Bishop(iCampTeam);
			pBoard[5][iCampPosition[0]] = new Bishop(iCampTeam);
			pBoard[1][iCampPosition[0]] = new Knight(iCampTeam);
			pBoard[6][iCampPosition[0]] = new Knight(iCampTeam);
			pBoard[0][iCampPosition[0]] = new Rook(iCampTeam);
			pBoard[7][iCampPosition[0]] = new Rook(iCampTeam);

			for (unsigned int j = 0; j < 8; j++)
			{
				pBoard[j][iCampPosition[1]] = new Pawn(iCampTeam);
			}

			iCampPosition[0] = 7;
			iCampPosition[1] = 6;
			iCampTeam = Pieces::White;
		}
	}
}

bool ChessBoard::MoveTo(int ax, int ay, int bx, int by)
{
	if (pBoard[ax][ay]) {
		delete pBoard[ax][ay];
	}

	pBoard[ax][ay] = pBoard[bx][by];

	pBoard[bx][by] = 0;

	return true;
}