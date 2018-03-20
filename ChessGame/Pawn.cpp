#include "stdafx.h"
#include "Pawn.h"

#define myabs(x) ((x)<0 ? -(x):(x))

Pawn::Pawn(unsigned int iTeam) : Pieces(Pieces::Pawn, iTeam)
{

}

bool Pawn::Move(int ax, int ay, int bx, int by) const {
	if ((ax==bx)&&(myabs(by-ay)==1)) {
		return Pieces::Move(ax, ay, bx, by);
	}
	
	// 지금은 구현 안했는데 처음에 시작할때 bFirst=true 이면 Pawn 한번에 두칸 이동할수 있으니까 -> 한칸 or 두칸 선택제로 이동하는거 구현해줘야함

	return false;
}