# 980 Div. 1

## Concatenation of arrays

I believe this problem has a very simple solution (still untested), I believe
this is a special type of pair sort. The intuition I have for this is as
follows: I think we want the array with the minimum element to come first, and
to apply that recursively. Whenever a minimum element is outside of that,
we have to spend inversions to put it there. Best case scenario is going to be
that it's the same quantity of inversions.

Consider [1, 10] [2, 2]:
1, 10, 2, 2 --> 2 inversions
2, 2, 1, 10 --> 2 inversions

Now consider [3,4] [1,2] [3,3]:
1,2,3,3,3,4 --> 0 inversions
3,3,3,4,1,2 --> have to pull the 1 and 2 two out of last, many more
3,4,3,3,1,2 --> even worse
Etc...

I'll try to implement that in C++ first. Update: I got two solutions working
now, one for Python and one for C++. And now three: and additional Golang one.

## Skipping

For this second problem, I'm pretty confident that it's some dynamic
programming, but I can't quite settle on the state for it. The biggest problem
I'm hitting is that we can't keep track of the problems we already saw (n is
too large). The recursion isn't clear to me either because you keep jumping
around.

Things that I tried:

* a[i], where i is the bound of the array, and a[i] is the best score you can
get --> doesn't work because we don't have a neat bound like this
* a[i][j], where i is the bound of the array, j is whether you submit the
problem or not, and a[i][j] is the best score of it. Doesn't work for the same
reason

An observation is that you can always decide to submit a bunch of problems in
order, and just "go down the array". Actually, here's a bit of a stupid idea:
how much "score" do you have to sacrifice to get to index i? My dumb idea here
is that you decide that problem i is the first problem you're gonna submit, and
you submit everything after it. Then you don't have to keep track of the
problems anymore, you can just do sum[i] - sacrifice[i]. I actually don't think
this works, because you might want to submit a problem to get a huge b[i] in its
neighbour

I have cheated and looked at the tutorial (
https://codeforces.com/blog/entry/135341). I was in the general vicinity of the
idea, and the key observation that I was missing was that, if I solve a problem
to get to a larger b, even if earlier (before the max problem), that will be
accounted in the prefix sum anyway, so I absolutely can use the idea of sum[i]
- sacrifice[i] that I was thinking. Very neat :)

Then the modelling of this is, of course, a graph with a shortest path
algorithm. Since it's sparse, Dijkstra with adjacency lists will do. Now just
have to code it. Calculating the prefix sums is trivial. The solution is the 
larger of the differences
