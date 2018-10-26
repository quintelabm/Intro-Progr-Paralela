class Teste {

    public static void main(String[] args) {
        // Cria um objeto que possui um método run()
        Runnable runnable = new SimpleThread2("Thread 1");
        // Cria um objeto que possui um método run()
        Runnable runnable2 = new SimpleThread2("Thread 2");
        // Cria uma nova thread usando um objeto runnable
        Thread thread = new Thread(runnable);
        // Cria outra thread
        Thread thread2 = new Thread(runnable2);
        // inicia a thread
        thread.start();
        // inicia a outra thread
        thread2.start();
    }

}