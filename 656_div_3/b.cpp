#include "stdio.h"
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a;
vector<int> p;
int n,t;

int main() {
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);

    for (int i = 0; i<2*n; i++) {
      int x;
      scanf("%d", &x);
      a.push_back(x);
    }

    for (int i = 0; i < 2*n; ++i) {
      if (find(p.begin(), p.end(), a[i]) == p.end()) {
        p.push_back(a[i]);
      }
    }

    for (int i=0; i<n; ++i)
      printf("%d ", p[i]);
    printf("\n");

    a.clear(); p.clear();
  }

  return 0;
}
