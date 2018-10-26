
public class SimpleThread extends Thread {
    private String myName;

    public SimpleThread(String str) {
        myName = str;
    }

    public void run() {
        // Código executado pelo thread
        for (int i = 0; i < 10; i++)
            System.out.println(i + " " + myName);
        System.out.println("DONE! " + myName); // fim
    }
}