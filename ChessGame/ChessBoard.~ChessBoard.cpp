#include "stdafx.h"
#include "ChessBoard.h"

ChessBoard::~ChessBoard(void)
{	
	for (unsigned int i = 0; i < 8; i++)
	{
		for (unsigned int j = 0; j < 8; j++)
		{
			if (pBoard[i][j] != 0)
			{
				delete pBoard[i][j];
			}
		}
	}
}
