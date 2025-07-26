// Most efficient~ O(n) & O(1)

// You first check feasibility with max_freq > (n+1)/2, which is key.
// Then you greedily place the most frequent character in even indices (0, 2, 4...) — to ensure maximum distance.
// Finally, you fill the rest — and the rest will naturally not clash, because the worst-case was already handled!


// class Solution {
// public:
//     string reorganizeString(string s) {
//         int size = s.length();
//         vector<int> freq(26, 0);
//         int max_freq = 0;
//         char max_freq_char;

//         // making the freq array and also getting the max freq and max freq char~
//         for(int i = 0; i < size; i++) {
//             int ind = s[i] - 'a';
//             freq[ind]++;
            
//             if(max_freq < freq[ind]) {
//                 max_freq = freq[ind];
//                 max_freq_char = ind + 'a';
//             }
//         }

//         // now check if the max_freq is > ceil(size/2), if it is, then no possible ans is possible~
//         if(max_freq > (size+1)/2) return "";
        
//         string res(size, ' ');

//         // now fill the max_freq_letter in the string alternatively~
//         int ind = 0;
//         while(max_freq > 0) {
//             res[ind] = max_freq_char;
//             max_freq--;
//             ind += 2;
//         }

// // now fill the rest of the elements, now order doesn't matter cuz they will always be filled       alternatively

//         for(int i = 0; i < 26; i++) {
//             if(i == max_freq_char - 'a') continue;
//             while(freq[i] > 0) {
//                 if(ind >= size) ind = 1;
//                 res[ind] = i + 'a';

//                 ind += 2;
//                 freq[i]--;
//             }
//         }

//         return res;
//     }
// };