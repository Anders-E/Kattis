package ecoins;

public class Main {
    
    // KattIO class handles all input
    private static Kattio io;

    public static void main(String[] args) {
        io = new Kattio(System.in, System.out);
        
        // Number of problems
        int n = io.getInt();
        
        // Solve n e-Coin problems
        for (int i = 0; i < n; i++)
            eCoins();
        
        // Close I/O
        io.close();
    }
    
    public static void eCoins() {        
        // m: number of different ecoin types
        int m = io.getInt();
        // s: value of the e-modulus that shall be matched exactly
        int s = io.getInt();

        // Create wallet for e-coins
        EWallet wallet = new EWallet(s);
        
        // Add m different ecoin types
        for (int i = 0; i < m; i++)
            wallet.addECoin(new ECoin(io.getInt(), io.getInt()));
        
        // Calculate minimum amount of coins needed to reach e-modulus s
        int min = wallet.minCoinsNecessary();
        
        // Print results
        if (min == Integer.MAX_VALUE)
            System.out.println("not possible");
        else
            System.out.println(min);
    }
    
}
