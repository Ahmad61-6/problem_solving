import java.util.Arrays;
import java.util.Scanner;

public class first_non_repeating_character {
    static final int MAX_CHAR = 26;
    public static char firstNonReapeating(String str){
        int[] visited = new int[MAX_CHAR];
        Arrays.fill(visited, -1);
        for(int i = 0 ; i<str.length(); i++){
            int index = str.charAt(i) - 'a';
            if(visited[index] == -1){
                visited[index] = i;
            }
            else{
                visited[index] = -2;
            }
        }

        int min_index = -1;
        for(int i = 0;i< MAX_CHAR; i++){
           if(visited[i] >= 0 && (min_index == -1 || visited[i] < visited[min_index])){
            min_index = i;
           }
        }
        
        return (min_index == -1) ? '$' : str.charAt(visited[min_index]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        System.out.println(firstNonReapeating(str));

        sc.close();
    }
}
