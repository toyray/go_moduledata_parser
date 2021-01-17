package main

import "fmt"

type Updater interface {
	UpdateQty(qty int, rounds int) int
}

type custom struct {
	name  string
	qty   int
	legit bool
	toys  map[int]string
}

func (c *custom) UpdateQty(qty int, rounds int) int {
	for i := 0; i < rounds; i++ {
		c.qty = c.qty + qty
	}
	return c.qty
}

func (c custom) PrintName(greeting string) {
	if len(c.name) != 0 {
		fmt.Printf("%s %s ", greeting, c.name)
	}
}

func main() {
	c := &custom{
		name:  "Wheee",
		qty:   -33,
		legit: false,
		toys:  map[int]string{1: "thiss", 2: "thatt"},
	}

	fmt.Printf("%s\n", c.name)
	fmt.Printf("%d\n", c.qty)
	fmt.Printf("%t\n", c.legit)
	fmt.Printf("%#v\n", c.toys)

	c.PrintName("Hello World!")
	c.UpdateQty(111, 3)

	var u Updater
	u = c
	u.UpdateQty(11, 8)

	fmt.Printf("%v\n", c)
}
