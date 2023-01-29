import java.util.Scanner;

public class TeamOlympiad {

  public static void main(String[] args) {
    
    Scanner input = new Scanner(System.in);
    
    int one=0, two=0, three=0, m, n, i;

    n = input.nextInt();
    
    int[] on = new int[n];
    int[] tw = new int[n];
    int[] th = new int[n];
    
    int[] num = new int[n];
    
    for(i=0; i<n; i++){
      num[i] = input.nextInt();
    }
    
    for(i=0; i<n; i++){
      if(num[i]==1){
        on[one] = i;
        one++;
      }
      else if(num[i]==2){
        tw[two] = i;
        two++;
      }
      else{
        th[three] = i;
        three++;
      }
    }
    
    m = min(one, two, three);
    
    //System.out.println(one+" "+two+" "+three);
    
    System.out.println(m);
    
    for(i=0; i<m; i++){
      System.out.println((on[i]+1)+" "+(tw[i]+1)+" "+(th[i]+1);
    }    
  }
  
  static int min(int a, int b, int c){
    int mini = a;
    if(b<mini) mini = b;
    if(c<mini) mini = c;
    return mini;
  }

}
