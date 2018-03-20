#include "stdafx.h"
#include <iostream>
#include "ChessConsole.h"
#include "ChessBoard.h"
#include "ChessGraphics.h"

int ChessConsole::Run(void)
{
	while (true) {
		std::system("cls");
		graphics.Render();

		ExecuteCommand();
	}

	return 0;
}