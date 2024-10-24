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
