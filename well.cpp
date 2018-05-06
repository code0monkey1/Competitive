/**
 * Created by chiranjeev on 5/31/2016.
 */
import  java.util.Scanner;
import  java.math.BigInteger;
import java.util.Arrays;

 class main {
     public static String[] subsequences(String str){
    if(str.size() == 0){
      String output[] = new String[1];
      output[0] = "";
      return  output;
    }
    String smallOutput[] = subsequences(str.substring(1));
    String output[] = new String[2*smallOutput.length];
    for(int i = 0; i < smallOutput.length; i++){
      output[i] = smallOutput[i];
    }
    for(int i = 0; i < smallOutput.length; i++){
      output[i + smallOutput.length] = str.charAt(0) + smallOutput[i];
    } 
    return output;
  }


    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        int T=s.nextInt();
        while (T--> 0) {

             
             String str= s.next();
      String[] strarr= subsequences(str);
      Arrays.sort(strarr);
      
      for(int i=0;i<strarr.length;i++){
          
          System.out.println(strarr[i]);
      }

    }
}
}

