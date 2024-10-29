# 656 Div. 3

## Three Pairwise Maximums

This is a bit of an arbitrary problem. You have: 

* x = max(a,b)
* y = max(a,c)
* z = max(b,c)

That means essentially that one of these numbers is repeated (because if we
don't have a repeated number, then one of them is not the max of one of the
pairs).

Implemented in C++ and Python. And now in Golang.

## Restore the Permutation by Merger

n is pretty small in this problem (<=50), so we can simply keep track of the
numbers we have already seen and discard duplicates.

Edit: it seems that, in my original implementation, I did something slightly
more complex than that: I added things to the permutation and I would search
in the permutation itself if I already added that element. Literally the
interpretation of the problem. I'll leave it like this for the C++
implementation, will do Golang and Python with the new idea
