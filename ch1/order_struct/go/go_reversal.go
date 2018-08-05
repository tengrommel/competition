package main

import (
	"fmt"
)

func main() {
	var input int
	fmt.Scanln(&input)
	output := (input%10)*100 + (input/10%10)*10 + input/100
	fmt.Println(output)
}
