packege main

import "fmt"

func main(){
	var a, b int
	fmt.Scan(&a, &b)

	var multiple int = a * b
	if multiple % 2 == 0 {
		fmt.Pringln("Even")
	}
	else{
		fmt.Println("Odd")
	}
}