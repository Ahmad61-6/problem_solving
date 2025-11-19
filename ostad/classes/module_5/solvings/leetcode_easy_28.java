
public class leetcode_easy_28 {
     public static int strStr(String haystack, String needle) {
        int n = haystack.length();
        int m = needle.length();
            if (m == 0) return 0;
        if (m > n) return -1;
        int hash = 0,result = 0;
         for(int i = 0 ; i <m ; i++){
            hash += needle.charAt(i)- 'A';
         }
         for(int i = 0 ; i < m ; i++){
            result += haystack.charAt(i) - 'A';
         }
         if(result == hash){
            if(haystack.substring(0,m).equals(needle)){
                return 0;
            }
         }

         for(int i = 1 ; i<=n-m ; i++){
            result = result - (haystack.charAt(i-1)-'A') + (haystack.charAt(i+m-1)-'A');
              if(result == hash){
            if(haystack.substring(i,i+m).equals(needle)){
                return i;
            }
         }

         }
        return -1;
    }
    public static void main(String[] args) {
        String haystack = "hello";
        String needle = "ll";
        System.out.println(strStr(haystack, needle));
        
    }
}
