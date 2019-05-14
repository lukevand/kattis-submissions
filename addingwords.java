import java.io.*;
import java.util.HashMap;
import javax.script.ScriptEngineManager;

public class addingwords {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        HashMap<Integer,String> mapNumStr = new HashMap<>();
        HashMap<String,Integer> mapStrNum = new HashMap<>();
        while ((line = in.readLine()) != null) {
            String[] cmd = line.split(" ");
            if (cmd[0].equals("def")) {
                mapNumStr.put(Integer.parseInt(cmd[2]), cmd[1]);
                mapStrNum.put(cmd[1], Integer.parseInt(cmd[2]));

            } else if (cmd[0].equals("clear")) {
                mapNumStr.clear();
                mapStrNum.clear();

            } else if (cmd[0].equals("calc")) {
                boolean unknown = false;

                int re = Integer.MAX_VALUE;
                if (mapStrNum.get(cmd[1]) != null) {
                    re = mapStrNum.get(cmd[1]);

                    for (int i = 2; !cmd[i].equals("="); i+=2) {
                        if ((mapStrNum.get(cmd[i+1]) == null) || (mapStrNum.get(cmd[i-1]) == null)) {
                            unknown = true;
                        } else {
                            switch (cmd[i].charAt(0)) {
                                case '+':
                                    re += mapStrNum.get(cmd[i+1]);
                                    break;
                                case '-':
                                    re -= mapStrNum.get(cmd[i+1]);
                                    break;
                            }
                        }
                    }
                } else {
                    unknown = true;
                }

                // System.out.println(mapNumStr);
                // System.out.println(mapStrNum);
                System.out.printf("%s ", line.substring(5, line.length()));

                if (unknown || mapNumStr.get(re) == null) {
                    System.out.printf("unknown");
                } else if (mapNumStr.containsKey(re)) {
                    System.out.printf("%s", mapNumStr.get(re));
                }
                System.out.printf("\n");

            }
        }

    }
}


