package q1;

import java.util.*;
import java.io.*;
public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt(); // Scanner has functions to read ints, longs, strings, chars, etc.
        for (int i = 1; i <= t; ++i) {
            int n = in.nextInt();
            int k = in.nextInt();
            in.nextLine();
            String s = in.nextLine();
            int k1 = 0;
            int l;
            if(s.length() %2 == 0){
                l = s.length()/2;
            }
            else{
                l = (s.length()/2) + 1;
            }
            for(int j = 0; j < l; j++){
                Character c1 = s.charAt(j);
                Character c2 = s.charAt(n-j-1);
                if(!c1.equals(c2))
                    k1++;
                System.out.println(c1 + "\n");
            }
            System.out.println(k1);
            System.out.println("Case #" + i + ": " + Math.abs(k-k1));
        }
    }
}

