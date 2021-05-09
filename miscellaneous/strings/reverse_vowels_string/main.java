class Solution {
    public String reverseVowels(String s) {
        int l = 0, r = s.length() - 1;
        String vowels = "aeiouAEIOU";
        char[] arr = s.toCharArray();
        while(l < r){
            while(l < r && !vowels.contains(arr[l] + "")){
                l++;
            }
            while(l < r && !vowels.contains(arr[r] + "")){
                r--;
            }
            char c = arr[l];
            arr[l] = arr[r];
            arr[r] = c;
            l++;
            r--;
        }
        return new String(arr);
    }
}
