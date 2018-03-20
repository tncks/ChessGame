#pragma once

class Pieces;
class ChessBoard;

class ChessGraphics {
private:
	const ChessBoard *pBoard = 0;

public:
	ChessGraphics(const ChessBoard *pBoard);

	void Render(void) const;
	static const char* ToChar(const Pieces *pPiece);
};