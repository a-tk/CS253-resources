public class Vararg {

    static void strlist(String... strings) {
        for (String s : strings) {
            System.out.println(s);
        }
    }

    public static void main(String[] args) {
        strlist("string1", "string2", "string3");
        strlist("string1", "string3");
        
        //strlist("string1", "string3", 1234);
    }
}
