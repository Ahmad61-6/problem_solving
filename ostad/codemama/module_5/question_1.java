package ostad.codemama.module_5;

import java.util.ArrayList;
import java.util.Scanner;

public class question_1 {

    public static ArrayList<Integer> findingTheLps(String str) {
        int n = str.length();
        ArrayList<Integer> lps = new ArrayList<>();

        // Initialize lps with 0
        for (int i = 0; i < n; i++) {
            lps.add(0);
        }

        int len = 0;
        int i = 1;

        while (i < n) {
            if (str.charAt(i) == str.charAt(len)) {
                len++;
                lps.set(i, len);
                i++;
            } else {
                if (len != 0) {
                    len = lps.get(len - 1);
                } else {
                    lps.set(i, 0);
                    i++;
                }
            }
        }
        return lps;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        String reverse = new StringBuilder(str).reverse().toString();

        String T = str + "#" + reverse;

        ArrayList<Integer> lps = findingTheLps(T);

        int longestPalSuffix = lps.get(T.length() - 1);

        String remaining = str.substring(0, str.length() - longestPalSuffix);
        String answer = new StringBuilder(remaining).reverse().toString() + str;

        System.out.println(answer);
        sc.close();
    }
}
