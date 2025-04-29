public class BankAccountConcurrency {

    static class Account {
        private double balance = 0.0;

        public synchronized void deposit(double amount) {
            balance += amount;
        }

        public double getBalance() {
            return balance;
        }
    }

    static class Worker extends Thread {
        private final Account account;
        private final int iterations;

        public Worker(Account account, int iterations) {
            this.account = account;
            this.iterations = iterations;
        }

        @Override
        public void run() {
            for (int i = 0; i < iterations; i++) {
                account.deposit(1.0);
            }
        }
    }

    public static void main(String[] args) {
        if (args.length < 2) {
            System.err.println("Usage: java BankAccountConcurrency <num_threads> <iterations>");
            System.exit(1);
        }

        int numThreads = Integer.parseInt(args[0]);
        int iterations = Integer.parseInt(args[1]);

        if (numThreads > 32) {
            System.out.println("Too many threads. Defaulting to 32.");
            numThreads = 32;
        }

        Account account = new Account();
        System.out.printf("initial balance = %.2f%n", account.getBalance());

        Thread[] threads = new Thread[numThreads];

        for (int i = 0; i < numThreads; i++) {
            threads[i] = new Worker(account, iterations);
            threads[i].start();
        }

        for (int i = 0; i < numThreads; i++) {
            try {
                threads[i].join();
            } catch (InterruptedException e) {
                System.err.println("Thread interrupted");
            }
        }

        System.out.printf("final balance = %.2f%n", account.getBalance());
    }
}
