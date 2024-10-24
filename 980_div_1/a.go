package main
import (
  "fmt"
  "slices"
) 

func main() {
  var t int

  fmt.Scan(&t)

  for t>0 {
    var n int

    t--
    fmt.Scan(&n)
    var a = make([][2]int, n)

    for i:=0; i<n; i++ {
      fmt.Scan(&a[i][0], &a[i][1])
    }

    slices.SortFunc(a, func(i [2]int, j [2]int) int {
      if min(i[0],i[1]) == min(j[0],j[1]) {
        return max(i[0],i[1]) - max(j[0],j[1])
      }
      return min(i[0],i[1]) - min(j[0],j[1])
    })

    for i:=0; i<n; i++ {
      fmt.Printf("%d %d ", a[i][0],a[i][1])
    }
    fmt.Print("\n")
  }
}
