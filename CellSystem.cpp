#include "CellSystem.h"

template<class T>
CellSystem ConstructCellSystem<T>(Vector<SurfaceT<T>>& In) {
	CellSystem C;
	//C.T = T;
	C.Cell = In;

	return C;
}

bool Free(CellSystem& C) {
	Free(C.Cell);
	return true;
}