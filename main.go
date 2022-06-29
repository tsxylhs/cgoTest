package main

// #include <stdio.h>
// #include <stdlib.h>
//#cgo LDFLAGS: -L . -lapi -lstdc++
// #cgo CFLAGS: -I ./
// #include "api.h"
import "C"
import (
	"fmt"
	"unsafe"
)

func main() {

	C.sayHelloWorld(C.CString("hello,world"))
	C.sayWhat(C.CString("啥玩意！"))
	cs := C.CString("hello")
	result := C.foo(cs)
	str := C.GoString(result)
	C.free(unsafe.Pointer(cs))
	C.free(unsafe.Pointer(result))
	fmt.Println(str)

}
