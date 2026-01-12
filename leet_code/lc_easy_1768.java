package leet_code;

public class lc_easy_1768 {
    public static String solution(String str1, String str2){
        int len1 = str1.length();
        int len2 = str2.length();
        int minlen = Math.min(len1, len2);

        StringBuilder sb = new StringBuilder();

        for(int i = 0 ; i< minlen ; i++){
            sb.append(str1.charAt(i));
            sb.append(str2.charAt(i));

        }

        if(len1>len2){
            sb.append(str1.substring(minlen));
        }
        else if(len2>len1){
            sb.append(str2.substring(minlen));
        }
      return sb.toString();

    }

    public static void main(String[] args) {
        System.out.println(solution("abcd", "pq"));
    }
    
}
