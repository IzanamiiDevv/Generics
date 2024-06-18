public class Main {
    public static <T> void print(T value) {
        if (value instanceof Integer || value instanceof Float || value instanceof Double) {
            System.out.println("This is a Number");
            System.out.println(value);
        } else if (value instanceof String) {
            System.out.println("This is a String");
            String strValue = (String) value;
            StringBuilder modifiedValue = new StringBuilder(strValue);
            modifiedValue.setCharAt(0, 'D');
            System.out.println(modifiedValue.toString());
        } else {
            System.out.println("Unknown Type");
            System.out.println(value);
        }
    }

    public static void main(String[] args) {
        print("Hello World");
        print(1234);
    }
}
