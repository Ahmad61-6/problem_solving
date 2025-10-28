package ostad.classes.module_5;

public class slidiing_window_in_java {
    public static void main(String[] args) {
        
        int [] numbers = {2,4,7,5,3,2,1,9,0,8};

        int window_size = 3;
        int max_sum = 0;

        for (int i = 0; i < window_size; i++){
            max_sum += numbers[i];
        }
        int current_sum = 0;
        for(int i = 1 ; i<numbers.length-window_size;i++){
            
            current_sum = max_sum - numbers[i-1] + numbers[i+window_size-1];
            System.out.println("-------------------");
            System.out.println(max_sum+" - " + numbers[i-1] + " + " + numbers[i+window_size-1]);
            System.out.println("max_sum: " + max_sum);
            System.out.println("Current Sum: " + current_sum);
            System.out.println("-------------------");
            if(current_sum > max_sum){
                max_sum = current_sum;
            }
        }
        System.out.println("Maximum Sum of " + window_size + " consecutive numbers is: " + max_sum);

    
    }
}
