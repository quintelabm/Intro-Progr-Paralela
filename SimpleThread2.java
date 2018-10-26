class SimpleThread2 implements Runnable {

    private String nome;

    public SimpleThread2(String str) {
        nome = str;
    }

    public void run() {
        // Código executado pelo thread
        for (int i = 0; i < 10; i++)
            System.out.println(i + " " + nome);
        System.out.println("DONE! " + nome); // fim
    }
}
