package ecoins;

import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
import static java.lang.Math.min;
import java.util.ArrayList;
import java.util.HashMap;

public class EWallet {
        
    // Value of the e-modulus that shall be matched exactly
    private final int s;
    // For memoization
    private final int[][] coinsReq;
    // E-coins in wallet
    private final ArrayList<ECoin> coins = new ArrayList<>();
    
    private int minCoins = Integer.MAX_VALUE;
    
    public EWallet(int s) {
        this.s = s;
        coinsReq = new int[s][s];
    }
    
    public int minCoinsNecessary() {
        minCoinsNecessary(0, 0, 0);
        return minCoins;
    }
    
    
    public void minCoinsNecessary(int c, int it, int n) {
        // If a memoized result already exists and is better, return
        if (isMemoized(c, it) && coinsReq[c][it] <= n)
            return;
        
        // Calculate current e-modulus
        double mod = eModulus(c, it);
        
        // If modulus equal to goal
        if (mod == s)
            minCoins = min(minCoins, n);
        // Else keep searching
        else if (mod < s)
            for (ECoin coin : coins)
                minCoinsNecessary(c + coin.c, it + coin.it, n + 1);
        
        memoize(c, it, n);
    }
    
    private boolean isMemoized(int c, int it) {
        return coinsReq[c][it] != 0;
    }
    
    private void memoize(int c, int it, int n ) {
        coinsReq[c][it] = n;
    }
    
    private double eModulus(int c, int it) {
        return sqrt(pow(c, 2) + pow(it, 2));
    }

    public void addECoin(ECoin coin) {
        coins.add(coin);
    }
    
}
