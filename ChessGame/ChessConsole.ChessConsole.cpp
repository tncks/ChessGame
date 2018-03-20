#include "stdafx.h"
#include <iostream>
#include <string>
#include "ChessConsole.h"
#include "ChessBoard.h"
#include "Pieces.h"

using namespace std;

ChessConsole::ChessConsole(ChessConsole &program)
	: graphics(&board)
{

}

ChessConsole::ChessConsole(void)
	: graphics(&board)
{

}

void ChessConsole::ExecuteCommand(void)
{
	string param[2];

	int x[2] = { 0, };
	int y[2] = { 0, };

	Pieces *pTarget = 0;

	cin >> param[0] >> param[1];

	x[0] = param[0][0] - 'A'; // A=0, B=1, C=2
	y[0] = 7 - (param[0][1] - '1'); // 

	x[1] = param[1][0] - 'A';
	y[1] = 7 - (param[1][1] - '1');

	pTarget = board.GetPiece(x[0], y[0]);

	/*if (board.GetPiece(x[1], y[1])) {
		if (pTarget->Attack(x[1], y[1], x[0], y[0])) {
			board.MoveTo(x[1], y[1], x[0], y[0]);
		}
	}
	else {
		if (pTarget->Move(x[1], y[1], x[0], y[0])) {
			board.MoveTo(x[1], y[1], x[0], y[0]);
		}
	}*/

	if (pTarget->Team == iTeam)
	{
		if (board.GetPiece(x[1], y[1]) && pTarget->Team == iTeam) {
			if (pTarget->Attack(x[1], y[1], x[0], y[0])) {
				if (board.MoveTo(x[1], y[1], x[0], y[0])) {
					iTeam = !iTeam;
				}
			}
		} else {
			if (pTarget->Move(x[1], y[1], x[0], y[0])) {
				if (board.MoveTo(x[1], y[1], x[0], y[0])) {
					iTeam = !iTeam;
				}
			}
		}
	}
	
	return;
}