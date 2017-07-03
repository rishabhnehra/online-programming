import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class SherlockAndArray {

    static String solve(int[] a){
      int leftsum = 0;
      int rightsum = arraysum(a);
      for(int i = 0; i < a.length; i++){
        if(i != 0)
          leftsum += a[i-1];
        rightsum = rightsum - a[i];
        if(leftsum == rightsum)
          return "YES";
      }
      return "NO";
    }

    static int arraysum(int[] a){
      int sum = 0;
      for(int i = 0; i < a.length; i++)
        sum += a[i];
      return sum;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for(int a0 = 0; a0 < T; a0++){
            int n = in.nextInt();
            int[] a = new int[n];
            for(int a_i=0; a_i < n; a_i++)
                a[a_i] = in.nextInt();
            System.out.println(solve(a));
        }
    }
}
