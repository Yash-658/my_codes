// https://takeuforward.org/plus/dsa/problems/find-the-repeating-and-missing-number?source=strivers-sde-sheet
// TC: O(n) SC: O(1)
// this is the maths solution, there's a XOR solution too~ https://youtu.be/2D0D8HE6uak?si=ywfExrdPbBJwA2CX&t=1202, try to implemenent it too, its easy

// class Solution {
// public:
    // vector<int> findTwoElement(vector<int>& arr) {
        // int n = arr.size();

        // long long sum = 0, sumSq = 0;
        // long long Sn = 1LL * n * (n + 1) / 2;
        // long long SnSq = 1LL * n * (n + 1) * (2*n + 1) / 6;

        // for (int i : arr) {
        //     sum += i;
        //     sumSq += 1LL * i * i;
        // }

        // long long eq1 = sum - Sn;              // x - y
        // long long eq2 = (sumSq - SnSq) / eq1;  // x + y

        // long long x = (eq1 + eq2) / 2;         // repeating
        // long long y = x - eq1;                 // missing

        // return {(int)x, (int)y};
