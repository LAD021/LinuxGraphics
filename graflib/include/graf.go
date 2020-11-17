package grafLib

/*
#cgo CFLAGS: -I./
#cgo LDFLAGS: -L./shared -lgraf
#include "graf.h"
*/
import "C"
import (
	"fmt"
)

func gotry(x int64) int64 {
	var a := int64(C.try(C.int(x)))
	fmt.Println(a + 1)
}
