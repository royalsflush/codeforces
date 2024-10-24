#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;

vector< pair<int, int> > a;
int t,n;

bool cmp(pair<int, int> l, pair<int, int> r) {
  if (min(l.first, l.second) == min(r.first, r.second)) {
    return max(l.first, l.second) < max(r.first, r.second);
  }

  return min(l.first, l.second) < min(r.first, r.second);
}

int main() {
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    a.clear();

    for (int i=0; i<n; i++) {
      int x,y;
      scanf("%d %d", &x,&y);

      a.push_back(make_pair(x,y));
    }

    sort(a.begin(), a.end(), cmp);

    for(int i=0; i<n; i++)
      printf("%d %d ", a[i].first, a[i].second);
    printf("\n");
  }
  return 0;
}
