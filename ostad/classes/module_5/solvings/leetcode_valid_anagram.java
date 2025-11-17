import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

/* 
 * The time complexity of this solution is O(n log n) due to the sorting step, where n is the length of the strings.
 * The space complexity is O(1) if we ignore the space used for sorting, otherwise
 */
public class leetcode_valid_anagram{

    public static boolean isAnagram(String s, String t){
        if(s.length() != t.length()) return false;
        char[] arrS = s.toCharArray();
        char[] arrT = t.toCharArray();
        Arrays.sort(arrS);
        Arrays.sort(arrT);
        if(Arrays.equals(arrS,arrT)) return true;

        return false;
    }

    public static boolean isAnagram2(String s, String t){
         if(s.length() != t.length()) return false;
        Map<Character, Integer> s_map = new HashMap<>();
        for(char c : s.toCharArray()){
            s_map.put(c, s_map.getOrDefault(c, 0) + 1);
        }
        for(char c : t.toCharArray()){
            if(!s_map.containsKey(c) || s_map.get(c) == 0){
                return false;
            }
            s_map.put(c, s_map.get(c) - 1);
        }
        for(int count : s_map.values()){
            if(count!=0) return false;
        }
    
        return true;
    }
    public static void main(String[] args) {

        String s = "anagram";
        String t = "nagaram";
        System.out.println(isAnagram(s,t));
        System.out.println(isAnagram2(s,t));
    }

}