#include "stdio.h"
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);  

  while (t--) {
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
   
    int m = max(max(x,y),z);

    if ((x == m && y == m) ||
        (y == m && z == m) ||
        (x == m && z == m)) {
      printf("YES\n%d %d %d\n", m, 
        min(min(x,y),z),
        min(min(x,y),z));
    } else {
      printf("NO\n");
    }
  }

	return 0;
}
