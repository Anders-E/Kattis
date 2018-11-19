public class ECoins {

    private static Kattio io;
    private static EWallet wallet;
    private static int m; // number of different ecoin types
    private static int s; // value of the e-modulus that shall be matched exactly

    public static void main(String[] args) {
        io = new Kattio(System.in, System.out);
        // Number of problems
        int n = io.getInt();
        for (int i = 0; i < n; i++)
            eCoins();
        io.close();
    }

    public static void readInput() {
        m = io.getInt();
        s = io.getInt();
        wallet = new EWallet(s);
        for (int i = 0; i < m; i++)
            wallet.addECoin(new ECoin(io.getInt(), io.getInt()));
    }
    
    public static void eCoins() {
        readInput();
        int min = wallet.minCoinsNecessary();
        if (min == 999)
            System.out.println("not possible");
        else
            System.out.println(min);
    }

}
