
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Set;
import java.util.Stack;
import java.util.TreeSet;


 
 
public class ck {
 

	
	public static void main(String[] args) throws NumberFormatException, IOException{
		
		Scanner in = new Scanner(System.in);
		
		int n = in.nextInt();
//		in.nextLine();
//		
//		int arr[] = new int[n];
//		
//		for(int i = 0;i<n;i++){
//			arr[i] = in.nextInt();
//		}
				
		//ArrayList<Integer> list = new ArrayList<Integer>();
		//HashSet<Integer> set = new HashSet<Integer>();
                int ans =0;
                while( (n--) > 0 ){
                int a = in.nextInt();
		int b =in.nextInt();
                int c=in.nextInt();
                if((a==1 && b==1) || (b==1 && c==1) || (a==1 && c==1))
                    ans++;
                
                }
		
		
		
		System.out.println(ans);
}
}