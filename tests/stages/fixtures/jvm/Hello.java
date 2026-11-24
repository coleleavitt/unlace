// Source of Hello.class, the class-file fixture of tests/stages/kuna-jvm.toml.
//
//   javac --release 8 -g:none -d . Hello.java && mv demo/Hello.class .
//   jar cf hello.jar demo/Hello.class   (from a directory holding demo/Hello.class)
package demo;

public class Hello {
    static int counter;
    int value;
    long total;

    public Hello(int value) {
        this.value = value;
    }

    public static int add(int a, int b) {
        return a + b;
    }

    public static long mulWide(long a, int b) {
        return a * b + 7L;
    }

    public int getValue() {
        return value + counter;
    }

    public void bump(long by) {
        total += by;
        counter++;
    }

    public static void greet(String name) {
        System.out.println(name);
        System.out.println("hello");
    }

    public static int pick(int k) {
        switch (k) {
            case 0: return 10;
            case 1: return 11;
            case 2: return 12;
            case 3: return 13;
            default: return -1;
        }
    }

    public static int[] fill(int n) {
        int[] out = new int[n];
        for (int i = 0; i < n; i++) {
            out[i] = add(i, n);
        }
        return out;
    }
}
