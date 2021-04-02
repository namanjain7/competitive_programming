import java.util.*;

public class Main{

	public static void solve(){
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		if(s.length() == 1){
			System.out.println(s);
			return;
			}
		char[] arr = s.toCharArray();
		Set<Character> set = new HashSet<Character>();
		s = new String();
		for(char c : arr){
			if(set.contains(c)){
				continue;
			}
			else{
				set.add(c);
				s += c;
			}
		}
		System.out.println(s);
		
		
	}

	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		for(int i = 0; i < t; i++){
			solve();
		}
		return;
	}
}
