import java.util.HashMap;

public class task_2 {
    public static void encrypt_decrypt(String str){
 
        HashMap<Character,Integer> encryptMap = new HashMap<>();
         for(char c : str.toCharArray()){
            if (encryptMap.containsKey(c)) {
                encryptMap.put(c, encryptMap.get(c)+1);
                
            }
            else{
                encryptMap.put(c, 1);
            }
         }
         System.out.println(encryptMap);
         String reverse = new StringBuilder(str).reverse().toString();
         System.out.println("a"+1);

        //  for(int i = 0;i<str.length();i++){
        //     char c = str.charAt(i);
        //     encryptMap.get
        //  }
        StringBuilder decBuilder = new StringBuilder();
        for(int i = 0 ; i< reverse.length(); i++){
            char c = reverse.charAt(i);
           decBuilder.append(encryptMap.get(c)).append(c);
        }
        System.out.println("Decrypted String: "+decBuilder.toString());
    
    }
    public static void main(String[] args) {
        String str = "ostad";
        encrypt_decrypt(str);
    }
    
}
