/* 
This problem has 3 approaches~
IMP

1) simply cloning and then repeatedly taking the distance of the random node in old and then travelling that much distance in new, TC = O(n^2), SC = O(1)
2) simply cloning and then maintaining a old_to_new map that maps old nodes with their respective copy of new nodes, then new_node->random = old_to_new[old_node->random], TC = O(n), SC = O(n)
3) VERY GOOD LOGIC, changing links, TC = O(n), SC = O(1),, most optimised solution,, read 2) first before trying this one~

You have done all three here: https://leetcode.com/problems/copy-list-with-random-pointer/


*/