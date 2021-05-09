package q2;

import java.util.*;
import java.io.*;
public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int t = in.nextInt(); // Scanner has functions to read ints, longs, strings, chars, etc.
        for (int i = 1; i <= t; ++i) {
            int r = in.nextInt();
            int c = in.nextInt();
            int[][] mat = new int[r][c];
            for(int p = 0; p < r; p++) {
                for (int q = 0; q < c; q++) {
                    mat[p][q] = in.nextInt();
                }
            }
            for(int p = 0; p < r; p++){
                for(int q = 0; q < c; q++){

                }
            }

        }
    }
}

