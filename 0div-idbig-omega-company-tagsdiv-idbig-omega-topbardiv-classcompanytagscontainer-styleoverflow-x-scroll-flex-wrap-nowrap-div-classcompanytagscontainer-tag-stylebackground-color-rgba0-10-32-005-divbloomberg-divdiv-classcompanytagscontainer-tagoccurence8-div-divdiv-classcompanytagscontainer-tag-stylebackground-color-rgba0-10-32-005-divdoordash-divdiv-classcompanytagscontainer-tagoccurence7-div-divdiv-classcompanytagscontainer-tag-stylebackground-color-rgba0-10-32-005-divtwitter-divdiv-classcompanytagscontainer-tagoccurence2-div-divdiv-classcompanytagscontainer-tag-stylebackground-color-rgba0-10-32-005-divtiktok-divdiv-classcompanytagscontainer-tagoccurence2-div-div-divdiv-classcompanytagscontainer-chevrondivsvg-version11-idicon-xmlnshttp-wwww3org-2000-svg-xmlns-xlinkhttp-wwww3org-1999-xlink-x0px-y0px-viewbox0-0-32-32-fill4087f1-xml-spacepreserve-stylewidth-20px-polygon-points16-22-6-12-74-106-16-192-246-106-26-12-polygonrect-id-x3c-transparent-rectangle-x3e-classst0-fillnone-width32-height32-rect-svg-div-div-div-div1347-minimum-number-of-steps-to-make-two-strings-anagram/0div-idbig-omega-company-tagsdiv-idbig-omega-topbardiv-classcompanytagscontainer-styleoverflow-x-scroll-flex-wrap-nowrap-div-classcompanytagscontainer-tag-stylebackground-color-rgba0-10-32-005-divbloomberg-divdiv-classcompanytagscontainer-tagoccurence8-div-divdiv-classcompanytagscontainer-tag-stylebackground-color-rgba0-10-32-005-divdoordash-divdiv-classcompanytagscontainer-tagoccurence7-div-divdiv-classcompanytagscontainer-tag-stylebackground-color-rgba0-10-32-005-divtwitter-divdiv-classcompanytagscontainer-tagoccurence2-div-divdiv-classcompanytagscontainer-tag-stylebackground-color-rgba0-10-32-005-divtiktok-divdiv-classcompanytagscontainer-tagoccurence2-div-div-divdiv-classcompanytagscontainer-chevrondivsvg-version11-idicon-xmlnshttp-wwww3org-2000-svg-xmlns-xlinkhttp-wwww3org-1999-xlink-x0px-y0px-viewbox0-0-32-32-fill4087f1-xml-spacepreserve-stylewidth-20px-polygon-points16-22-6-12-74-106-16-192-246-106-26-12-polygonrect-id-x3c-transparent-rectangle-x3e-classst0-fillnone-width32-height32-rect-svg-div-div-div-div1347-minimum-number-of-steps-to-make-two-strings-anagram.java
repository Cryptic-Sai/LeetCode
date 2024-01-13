class Solution {
 public int minSteps(String s, String t) {
     if(s.equals(t))return 0; //removed this as it is already given length of two strings are same! silly mistake        
     
     int n = s.length(), ans = 0;
     int[] arr = new int[26];
 	char[] sc=s.toCharArray();   //converted string to char array
 	char[] tc=t.toCharArray();   //converted string to char array
     for(int i = 0; i < n; i++) {
         arr[sc[i] - 'a']++;
         arr[tc[i] - 'a']--;
     }
     for(int i : arr) if(i > 0) ans += i;
     return ans;
 }
} 