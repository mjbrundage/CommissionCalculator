package NumbersDemo;
// Filename: NumberDemo.java
// Programmer: Matt Brundage II
// Date: 3/1/21
// Test

public class NumbersDemo {
    public static void main (String args[]) {
        int myNum1 = 4;
        int myNum2 = 33;
        displayTwiceTheNumber(myNum1);
        displayNumberPlusFive(myNum1);
        displayNumberSquared(myNum1);
        displayTwiceTheNumber(myNum2);
        displayNumberPlusFive(myNum2);
        displayNumberSquared(myNum2);
    }
    public static void displayTwiceTheNumber(int n) {
        int total;
        total = n * 2;
        System.out.println(n + " times 2 is " + total);
    }
    public static void displayNumberPlusFive(int n) {
        int total;
        total = n + 5;
        System.out.println(n + " plus 5 is " + total);
    }
    public static void displayNumberSquared(int n) {
        int total;
        total = n * n;
        System.out.println(n + " squared is " + total);
    }
}