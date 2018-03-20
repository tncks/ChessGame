#pragma once

#include "ChessBoard.h"
#include "ChessGraphics.h"
#include "Pieces.h"

class ChessConsole
{
private:
	ChessBoard board;
	ChessGraphics graphics;

	unsigned int iTeam = Pieces::Black;
private:
	ChessConsole(ChessConsole &program);

	void ExecuteCommand(void);
public:
	ChessConsole(void);

	int Run(void);
};