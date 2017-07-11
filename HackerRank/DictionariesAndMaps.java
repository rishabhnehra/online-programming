// https://www.hackerrank.com/challenges/30-dictionaries-and-maps
import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;

public class DictionariesAndMaps{
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    Map<String, Integer> phoneBook = new HashMap<String, Integer>();
    for(int i = 0; i < n; i++){
      String name = in.next();
      int number = in.nextInt();
      phoneBook.put(name, number);
    }

    for(int i = 0; i < n; i++){
      String name = in.next();
      if(phoneBook.get(name) == null){
        System.out.println("Not found");
      }else {
        System.out.println(name+"="+phoneBook.get(name));
      }
    }
  }
}
