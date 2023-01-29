import java.util.Scanner;
public class Borze {

  public static void main(String[] args) {
    
    Scanner input = new Scanner(System.in);
    
    String str = input.next();
    
    char[] ch = str.toCharArray();
    
    for(int i=0; i<str.length(); i++){
      if(ch[i]=='.'){
        System.out.print(0);
      }
      else if(ch[i]=='-'){
        if(ch[i+1]=='.'){
          System.out.print(1);
          i++;
        }
        else{
          System.out.print(2);
          i++;
        }
      }
    }
    
  }

}
