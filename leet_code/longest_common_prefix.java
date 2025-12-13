import java.util.Arrays;

public class longest_common_prefix {
    public static String longestCommonPrefix(String[] str){
        StringBuilder sb = new StringBuilder();
        Arrays.sort(str);
        char[] first_element = str[0].toCharArray();
        char[] last_element = str[str.length-1].toCharArray();

        for(int i = 0;i<first_element.length;i++){
            if(first_element[i] != last_element[i])
                break;
                sb.append(first_element[i]);
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        String[] str= {"dog","racecar","car"};
        System.out.println(longestCommonPrefix(str));
    }
    
}
