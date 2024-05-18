import java.io.*;

public class Scan {
    private int indice = -1;
    private String str = "";

    public void scanner() {
        InputStreamReader lettore = new InputStreamReader(System.in);
        BufferedReader input = new BufferedReader(lettore);

        try {
            int carattere;
            while ((carattere = input.read()) != -1) {
                char c = (char) carattere;

                if (c == '\n' || c == ';') {
                    break; // Interrompe la lettura quando incontra '\n' o ';'
                } else {
                    str += c;
                }
            }
        } catch (IOException e) {
            System.out.println("Si è verificato un errore: " + e);
        }
    }

    public String token() {
        String[] vettore = str.split("");
        indice++;
        if (indice < vettore.length) {
            return vettore[indice];
        } else {
            return null; // Restituisce null se non ci sono più token
        }
    }

    public int proxInt() throws NumberFormatException {
        String nextToken = token();
        if (nextToken != null) {
            return Integer.parseInt(nextToken);
        } else {
            throw new NumberFormatException("Nessun token disponibile");
        }
    }

    public float proxReal() throws NumberFormatException {
        String nextToken = token();
        if (nextToken != null) {
            return Float.parseFloat(nextToken);
        } else {
            throw new NumberFormatException("Nessun token disponibile");
        }
    }

    public String proxStr() {
        String nextToken = token();
        if (nextToken != null) {
            return nextToken;
        } else {
            return null;
        }
    }

    public String prox() {
        return str;
    }

}
