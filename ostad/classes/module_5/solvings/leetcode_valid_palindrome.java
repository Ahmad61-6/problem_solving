public class leetcode_valid_palindrome{
    public static boolean isPalindromeOptimized(String s){
        if(s.length() == 0) return true;
        StringBuilder sb = new StringBuilder();

        // for(char c : s.toCharArray()){
        //     if(c>='a' && c<='z'){
        //         sb.append(c);
        //     }
        //     else if(c>='0' && c<='9'){
        //         sb.append(c);
        //     }
        //     else if(c>='A' && c<='Z'){
        //         sb.append(c +('a' - 'A'));
        //     }
        // }
        for (char c : s.toCharArray()) {
        if (Character.isLetterOrDigit(c)) {
            sb.append(Character.toLowerCase(c));
        }
    }

        int left = 0;
        int right = sb.length()-1;
        while(left <= right){
            if(sb.charAt(left) != sb.charAt(right)){
                return false;
            }
            left++;
            right--;
        }        
        return true;
    }
    public static boolean isPalindrome(String s){
        if(s.length() == 0) return true;
        String regex = "[^a-zA-Z0-9]";
        String newString = s.replaceAll(regex, "").toLowerCase();
        int left = 0;
        int right = newString.length()-1;
        while(left < right){
            if(newString.charAt(left) != newString.charAt(right)){
                return false;
            }
            left++;
            right --;
        }
        return true;
    }
    public static void main(String[] args) {
        String s =  "A man, a plan, a canal: Panama";
        System.out.println(isPalindrome(s));
        System.out.println(isPalindromeOptimized(s));      
    }
}