import java.util.HashMap;
import java.util.Map;

public class task_2 {
    public static void encrypt_decrypt(String str){
        Map<Character, Integer> charCount = new HashMap<Character,Integer>();
        for(int i = 0 ; i < str.length(); i++){

            char ch = str.charAt(i);
            if(charCount.containsKey(ch)){
                charCount.put(ch, charCount.get(ch)+1);
            }
            else{
                charCount.put(ch
                    , 1);
            }
        } 
        System.out.println(charCount);
        StringBuilder sb = new StringBuilder();
        
    
    }
    public static void main(String[] args) {
        String str = "helloworld";
        encrypt_decrypt(str);
    }
    
}
