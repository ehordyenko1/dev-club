public class VectorMain {
    public static void main(String[] args) {
        Vector x = new Vector(5, 6);
        Vector y = new Vector(1, 2);

        System.out.println(y.len());    

        System.out.println(x.substraction(y));
    }
}