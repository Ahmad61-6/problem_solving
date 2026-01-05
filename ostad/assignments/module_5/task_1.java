public class task_1 {
    public static void kOstad(String str1, String str2, int k){
        int[] str1Fr = new int[26];
        int[] str2Fr = new int[26];

        for (char c : str1.toCharArray()){
            str1Fr[c-'a']++;
        }
         for (char c : str2.toCharArray()){
            str2Fr[c-'a']++;
        }
       
        int totalExcess = 0;
        int totalDeficit = 0;

        for(int i = 0 ; i< 26 ; i++){
            int diff = str1Fr[i] - str2Fr[i];

            if(diff> 0){
                totalExcess+=diff;
            }
            else{
                totalDeficit+= Math.abs(diff);
            }
        }
        System.out.println(totalExcess + " "+ totalDeficit);
        int max =Math.max(totalExcess, totalDeficit);

        if(max<=k){
            System.out.println("Yes");
        }
        else{
                        System.out.println("No");

        }

    }
    public static void main(String[] args) {
        kOstad("ostad", "boss", 1);
    }
    
}
