public class Overload5 {

    static class OverloadDemo {

        // Default Constructor
        OverloadDemo() {
            System.out.println("Default Constructor");
        }

        // Parameterized Constructor
        OverloadDemo(int a) {
            System.out.println("Parameterized Constructor = " + a);
        }

        // Method Overloading
        void display() {
            System.out.println("Display Method");
        }

        void display(int a) {
            System.out.println("Display Integer = " + a);
        }

        void display(int a, int b) {
            System.out.println("Sum = " + (a + b));
        }
    }

    public static void main(String[] args) {

        OverloadDemo obj1 = new OverloadDemo();
        OverloadDemo obj2 = new OverloadDemo(10);

        obj1.display();
        obj1.display(50);
        obj1.display(10, 30);
    }
}
