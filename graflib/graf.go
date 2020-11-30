package graflib

/*
#include "graf.h"
*/
import "C"

type GfSize = C.GfSize

func GfGetScreenSize() GfSize {
	i := 1
	return i
}
