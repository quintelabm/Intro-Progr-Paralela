
public class ThreadExemplo {
    public static void main(String[] args) {
        new SimpleThread("thread 1").start();
        new SimpleThread("thread 2").start();
    }
}