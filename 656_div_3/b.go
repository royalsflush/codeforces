package main
import (
  "fmt"
)

func main() {
  var t int
  fmt.Scan(&t)

  for t>0 {
    t--
    var n int
    fmt.Scan(&n)

    a := make([]int, 2*n)
    seen := make([]bool, 2*n) 

    for i := range 2*n {
      fmt.Scan(&a[i]) 
      seen[i] = false
    }

    for i := range 2*n {
      if !seen[a[i]] {
        fmt.Printf("%d ", a[i])
        seen[a[i]]=true
      }
    }
    fmt.Printf("\n")
  }
}
