import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.io.IOException;
import java.util.HashMap;
import java.util.*;

class anagramcounting {
    public static BigInteger factorial(int num) {
        BigInteger re = BigInteger.ONE;
        for (int i = 2; i <= num; i++) {
            re = re.multiply(BigInteger.valueOf(i));
        }
        return re;
    }

    public static BigInteger product(HashMap<Integer,Integer> nums) {
        BigInteger re = BigInteger.ONE;
        for (Map.Entry<Integer, Integer> num : nums.entrySet()) {
            if (num.getKey() > 1) {
                re = re.multiply(factorial(num.getKey()).pow(num.getValue()));
            }
        }
        return re;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = in.readLine()) != null) {
            int total = line.length();
            HashMap<Character,Integer> hash = new HashMap<>();
            HashMap<Integer,Integer> hashNum = new HashMap<>();
            for (int i = 0; i < total; i++) {
                char c = line.charAt(i);
                int oldval = hash.getOrDefault(c, 0);
                hash.put(c, oldval+1);
            }

            for (int num : hash.values()) {
                int oldval = hashNum.getOrDefault(num, 0);
                hashNum.put(num, oldval+1);
            }
            BigInteger top = factorial(total);
            BigInteger bot = product(hashNum);
            // System.err.println(hash);
            // System.err.println(hashNum);
            System.out.println(top.divide(bot));

        }
    }
}

