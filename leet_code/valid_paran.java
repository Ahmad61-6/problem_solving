
import java.util.HashMap;
import java.util.Stack;

class valid_paran{
    public static boolean isValid(String str){
        if(str.charAt(0)== '}' || str.charAt( 0)== ')' || str.charAt(0) == ']'){
            return false;
        }

        Stack<Character> stack = new Stack<>();
             HashMap<Character, Character> paran = new HashMap<>();
        paran.put(')', '(');
         paran.put('}', '{');
          paran.put(']', '[');

        for(int i = 0 ;i<str.length(); i++){
            if(str.charAt(i)== '(' || str.charAt( i)== '{' || str.charAt(i) == '['){
                stack.push(str.charAt(i));
            }
            else{
                if(!stack.empty()){
                    if(stack.peek() == paran.get(str.charAt(i))){
                        stack.pop();
                    }
                     else{
                    return false;
                }
                }
               
            }
        }
        if(stack.empty()){
            return true;
        }
        else{
            return false;
        }
            
    //     ArrayList<Character> list_1 = new ArrayList<>();
    //             ArrayList<Character> list_2 = new ArrayList<>();


    //     HashMap<Character, Character> paran = new HashMap<>();
    //     paran.put('{', '}');
    //      paran.put('(', ')');
    //       paran.put('[', ']');
        
    //    for(int i = 0 ; i< str.length()/2;i++){
    // list_1.add(str.charAt(i));
    // list_2.add(str.charAt(str.length()-1-i));
    //    }
    //    System.out.println(list_1);
    //    System.out.println(list_2);

    //   for (int i = 0 ;i< str.length()/2; i ++){
    //     char value  = list_1.get(i);
    //     System.out.println(value);
    //     char mapValue = paran.get(value);
    //     System.out.println(mapValue);
    //     if(mapValue == list_2.get(i)){
    //         continue;
    //     }
    //     return false;
       
    //   }
    
    }
    public static void main(String[] args) {
    System.out.println(isValid("[])"));
    }
}