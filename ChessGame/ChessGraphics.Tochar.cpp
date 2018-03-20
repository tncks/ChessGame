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
			const char* letter2 = "Å·";
			return letter2;
		}
		else if (pPiece->Type == Pieces::Queen) {
			const char* letter3 = "Äý";
			return letter3;
		}
		else if (pPiece->Type == Pieces::Bishop) {
			const char* letter4 = "ºñ";
			return letter4;
		}
		else if (pPiece->Type == Pieces::Knight) {
			const char* letter5 = "³ª";
			return letter5;
		}
		else if (pPiece->Type == Pieces::Rook) {
			const char* letter6 = "·è";
			return letter6;
		}
		else if (pPiece->Type == Pieces::Pawn) {
			const char* letter7 = "Æù";
			return letter7;
		}
		else {
			return 0;
		}
	}

	return 0;
}