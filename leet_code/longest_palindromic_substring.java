import java.util.Scanner;

public class longest_palindromic_substring {


    public static String Solution(String str){
       String result = "";
       int resultLen = 0;
        int j,k;
        for(int i = 0 ; i<str.length(); i++){
            j = i;k=i;
            while (j>=0 && k<str.length() && str.charAt(j) == str.charAt(k)) {
               if((k-j+1) > resultLen){
                result = str.substring(j,k+1);
                resultLen = k-j+1;
               }
               j--;k++;
                
            }

            j = i ; k = i + 1;
             while (j>=0 && k<str.length() && str.charAt(j) == str.charAt(k)) {
               if((k-j+1) > resultLen){
                result = str.substring(j,k+1);
                resultLen = k-j+1;
               }
               j--;k++;
                
            }


        }
      
        return result;

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the string input: ");
        String str = sc.next();
        System.out.println(Solution(str));
        sc.close();
    }
    
}
