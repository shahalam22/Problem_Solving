import java.util.Scanner;
public class SarejaAndDima {

  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();
    int[] a = new int[n];
    int i, start, end, sareja=0, dima=0;
    for(i=0; i<n; i++){
      a[i] = input.nextInt();
    }
    start = 0;
    end = n-1;
    for(i=0; i<n; i++){
      if(i%2==0){
        if(a[start]>=a[end]){
          sareja = sareja + a[start];
          start++;
        }
        else if(a[start]<a[end]){
          sareja = sareja + a[end];
          end--;
        }
      }
      else {
        if(a[start]>=a[end]){
          dima += a[start];
          start++;
        }
        else if(a[start]<a[end]){
          dima += a[end];
          end--;
        }
      }
    }
    
    System.out.println(sareja+" "+dima);
  }

}
