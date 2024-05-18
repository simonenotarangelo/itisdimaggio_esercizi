import java.util.Scanner;

class Carrozza {
    int pd = 80;
    int[][] posti = new int[20][4];

    Carrozza() {
        for (int[] riga : posti)
            java.util.Arrays.fill(riga, 0);
    }

    void book(int p) {
        for (int i = 0; i < p; i++) {
            boolean occupato;
            do
            {
                occupato = false;
                System.out.println((i + 1) + " posto");
                System.out.println("Riga: ");
                int riga = new Scanner(System.in).nextInt() - 1;
                System.out.println("Colonna: ");
               int colonna = -1;
               while (colonna < 0 || colonna >= 4) 
               {
                    System.out.println("Colonna (A, B, C, D): ");
                    String inputColonna = new Scanner(System.in).next().toUpperCase();
                    
                    if (posti[riga][colonna] == 0) {
                        posti[riga][colonna] = 1;
                        pd--;
                    } else {
                        System.out.println("Questo posto è occupato. Riprova.");
                        occupato = true;
}

                }

            } while (occupato);
        }
    }

    void delete(int p) {
        for (int i = 0; i < p; i++) {
            boolean libero;
            do {
                libero = false;
                System.out.println((i + 1) + " posto");
                System.out.println("Riga: ");
                int riga = new Scanner(System.in).nextInt() - 1;
                System.out.println("Colonna: ");
                int colonna = "ABCD".indexOf(new Scanner(System.in).next());
                if (posti[riga][colonna] == 1) {
                    posti[riga][colonna] = 0;
                    pd++;
                } else {
                    System.out.println("Questo posto è libero. Riprova.");
                    libero = true;
                }
            } while (libero);
        }
    }

    void display() {
        System.out.println("Posti disponibili: " + pd);
    }

    void visualizza() {
        int posti_occ = 80 - pd;
        System.out.println("   A B   C D");
        for (int r = 0; r < 20; r++) {
            System.out.print((r < 9 ? "0" : "") + (r + 1) + " ");
            for (int c = 0; c < 4; c++) {
                if (posti[r][c] == 1) {
                    System.out.print((c == 1 ? "X | " : "X "));
                    posti_occ--;
                } else {
                    System.out.print((c == 1 ? "- | " : "- "));
                }
            }
            System.out.println();
        }
    }

    boolean genera(int prenotati) {
        boolean presente = false;
        for (int r = 0; r < 20; r++) {
            presente = false;
            if (prenotati == 2 && (posti[r][0] == 0 && posti[r][1] == 0 || posti[r][2] == 0 && posti[r][3] == 0)) {
                posti[r][0] = posti[r][1] = posti[r][2] = posti[r][3] = 1;
                presente = true;
            } else if (prenotati == 3 && (posti[r][0] == 0 && posti[r][1] == 0 && posti[r][2] == 0 ||
                    posti[r][1] == 0 && posti[r][2] == 0 && posti[r][3] == 0)) {
                posti[r][0] = posti[r][1] = posti[r][2] = posti[r][3] = 1;
                presente = true;
            } else if (prenotati == 4 && r < 19 && (
                    posti[r][0] == 0 && posti[r][1] == 0 && posti[r + 1][0] == 0 && posti[r + 1][1] == 0 ||
                            posti[r][2] == 0 && posti[r][3] == 0 && posti[r + 1][2] == 0 && posti[r + 1][3] == 0)) {
                posti[r][0] = posti[r][1] = posti[r + 1][0] = posti[r + 1][1] = posti[r][2] = posti[r][3] =
                        posti[r + 1][2] = posti[r + 1][3] = 1;
                presente = true;
            }
            if (presente) break;
        }
        return presente;
    }
}
        
        
    
    


