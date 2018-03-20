#include "stdafx.h"
#include "Pieces.h"
#include "ChessGraphics.h"
#include <string>

const char* ChessGraphics::ToChar(const Pieces *pPiece) {

	if (pPiece == 0)
	{
		const char* letter = "  ";
		return letter;
	}
	else {
		if (pPiece->Type == Pieces::King) {
			const char* letter2 = "ŷ";
			return letter2;
		}
		else if (pPiece->Type == Pieces::Queen) {
			const char* letter3 = "��";
			return letter3;
		}
		else if (pPiece->Type == Pieces::Bishop) {
			const char* letter4 = "��";
			return letter4;
		}
		else if (pPiece->Type == Pieces::Knight) {
			const char* letter5 = "��";
			return letter5;
		}
		else if (pPiece->Type == Pieces::Rook) {
			const char* letter6 = "��";
			return letter6;
		}
		else if (pPiece->Type == Pieces::Pawn) {
			const char* letter7 = "��";
			return letter7;
		}
		else {
			return 0;
		}
	}

	return 0;
}