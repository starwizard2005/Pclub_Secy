Given an array of length _n_ consisting of only non-negative integers. The value at a particular index indicates the price of that index. Now starting from the beginning of the array, we have to buy the value at the zeroeth index(let us assume that value is x). Now we can either skip the next _x_ indexes or we buy the value at the first index and proceed according to the same rule. <br/>Your task is to find the minimum cost to traverse the array.Note that while skipping _x_ indexes, if the index becomes larger than the size of the array, the (index - the size of array) will be added to the cost i.e. it is ideal to end at the last element, while skipping indexes.

**Input** <br/>
First line is _n_ which denotes the number of elements in the array <br/>
The second line contains n space separated non-negative integers

**Constraints** <br/>
_2<=n<=10^4_
 
 **Output** <br/>
 A single number denoting the minimum cost to traverse the array

**Example** <br/>
_Input_ <br/>
5 <br/>
9 3 1 1 1

_Output_ <br/>
12

**Explanation**
We first buy the first element 9. Now if we skip the next _9_ indexes, we would have traversed the full array, but since our index is now bigger than the size we add (current index = _9_ - size = _5_) _4_ giving us the total cost as _13_. <br/>Instead, if we now dont skip and buy the second index and then skip the next _3_ elements, we arrive at exactly the end of the array, giving us a total cost of _9+3 = 12_. This is the lowest possible cost to traverse the array(You can try other methods yourself to arrive at the conclusion)
