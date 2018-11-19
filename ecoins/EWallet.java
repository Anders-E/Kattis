import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
import static java.lang.Math.min;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;

public class EWallet {

    private final int s; // Value of the e-modulus that shall be matched exactly
    private final ArrayList<ECoin> coins;
    private final Map<Integer, Map<Integer, Integer>> memo;

    public EWallet(int s) {
        this.s = s;
        coins = new ArrayList<>();
        memo = new HashMap<>();
    }

    public int minCoinsNecessary() {
        return minCoinsNecessary(0, 0, 0);
    }

    public int minCoinsNecessary(int c, int it, int n) {
        if (getMemoization(c, it) <= n)
            return 999;

        double eModulus = eModulus(c, it);
        memoize(c, it, n);
        if (eModulus == s)
            return n;
        if (eModulus > s)
            return 999;
        
        int minCoins = 999;
        for (ECoin coin : coins)
            minCoins = min(minCoins, minCoinsNecessary(c + coin.c, it + coin.it, n + 1));

        return minCoins;
    }

    private double eModulus(int c, int it) {
        return sqrt(pow(c, 2) + pow(it, 2));
    }

    public void addECoin(ECoin coin) {
        coins.add(coin);
    }

    private int getMemoization(int c, int it) {
        if (memo.containsKey(c)) 
            if (memo.get(c).containsKey(it))
                return memo.get(c).get(it);
        return 999;
    }

    private void memoize(int c, int it, int n) {
        if (!memo.containsKey(c))
            memo.put(c, new HashMap<>());
        memo.get(c).put(it, n);
    }
}
