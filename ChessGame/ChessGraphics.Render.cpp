#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include "ChessBoard.h"
#include "ChessGraphics.h"
#include "Pieces.h"

void ChessGraphics::Render(void) const {
	using namespace std;

	char szBottom[] = "ABCDEFGH";
	
	const Pieces *pTarget = 0;

	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			if (i == 8)
			{
				if (j == 0)
				{
					cout << "  ";
				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
					cout << szBottom[j - 1] << " ";
				}
				continue;
			}
			if (j == 0) {

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
				cout << 8 - i << " ";
			}
			else {
				pTarget = pBoard->GetPiece(j - 1, i);
				if (pTarget && pTarget->Team == Pieces::Black) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);

				}
				else {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}

				cout << ToChar(pTarget);
			}
		}
		cout << endl;
	}

	return;
}