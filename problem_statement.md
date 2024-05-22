Given an array of length $n$ consisting of only non-negative integers. The value at a particular index indicates the price of that index. It is mandatory to buy the value at the zeroth index. Now we proceed according to the following rule: <br/>
Whenever we buy a particular index (assume cost = $x$ and index = $i$) we can either traverse through the next $x$ indexes of the array for free and reach index = $i+x+1$ and buy the value at index  = $i+x+1$ or we have reach index = $i+1$ and buy the value at this index, until we have reached an index $>=$ the size of the array - 1. <br/>
Your task is to achieve this in the minimum possible cost and print this cost.

**NOTE** <br/>
If while skipping $x$ indexes, if the index becomes larger than the size of the array, then a penalty will be levied, and the maximum element of the array will be added to the current cost.

**Input** <br/>
First line is $n$ which denotes the number of elements in the array <br/>
The second line contains the elements (non-negative integers) of the array

**Constraints** <br/>
$2<=n<=10^4$
 
 **Output** <br/>
 A single number denoting the minimum cost to traverse the array

**Example** <br/>
_Input_ <br/>
5 <br/>
9 3 1 1 1

_Output_ <br/>
14

**Explanation** <br/>
We first buy the first element 9. Now if we skip the next 9 indexes, we would have traversed the full array, but since our index is now bigger than the size we add (current index = _9_ - size = _5_) _4_ giving us the total cost as _13_. <br/>Instead, if we now dont skip and buy the second index and then skip the next _3_ elements, we arrive at exactly the end of the array, giving us a total cost of _9+3 = 12_. This is the lowest possible cost to traverse the array(You can try other methods yourself to arrive at the conclusion)
