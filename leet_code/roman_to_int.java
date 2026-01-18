package leet_code;

import java.util.Map;

public class roman_to_int {



    public static void solution(String str){
        Map<Character,Integer> roman_map  = Map.of(
            'I',1,
            'V',5,
            'X',10,
            'L',50,
            'C',100,
            'D',500,
            'M',1000
        );
        int sum = roman_map.get(str.charAt(str.length()-1));

        for(int i = str.length() -1 ; i >= 1 ; i--){
            char  ch = str.charAt(i);
            
            if(roman_map.get(ch) > roman_map.get(str.charAt(i-1))){
                sum = sum - roman_map.get(str.charAt(i-1));
            }
            else{
                sum = sum + roman_map.get(str.charAt(i-1));
            }
        }
        System.out.println(sum);
        
    }
    public static void main(String[] args) {
        String str = "LVIII";
        solution(str);
    }
    
}
