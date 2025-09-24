import java.util.Scanner;
public class code{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int qn = sc.nextInt();
		for(int i = 0; i< qn; i++){
			int R = 0, B = 0;
			int tam = sc.nextInt();
			String red = "", blue = "";
			red = sc.next();
			blue = sc.next();
			for(int j = 0; j < tam; j++){
				if(red.charAt(j) > blue.charAt(j)){
					R++;
				}else if(red.charAt(j) < blue.charAt(j)){
					B++;
				}
			}
			if(R>B){
				System.out.println("RED\n");
			}else if(B>R){
				System.out.println("BLUE\n");
			}else{
				System.out.println("EQUAL\n");
			}
		}	
	}
}
