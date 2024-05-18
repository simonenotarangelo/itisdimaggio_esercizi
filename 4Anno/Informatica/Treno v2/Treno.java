import java.util.Scanner;

class Treno {
    private int n_carrozze, indice = 0;
    private Carrozza[] treno_classe;

    Treno() {
        System.out.println("Inserire il numero di carrozze:");
        n_carrozze = new Scanner(System.in).nextInt();
        treno_classe = new Carrozza[n_carrozze];
        for (int i = 0; i < n_carrozze; i++)
            treno_classe[i] = new Carrozza();
    }

    void scelta() throws Exception {
        System.out.println("Scegliere o generare casualmente? s/g");
        if (new Scanner(System.in).next().equals("s")) {
            prenotazione_normale();
        } else
            generazione();
    }

    void prenotazione_normale() throws Exception {
        System.out.println("Su quale carrozza operare?");
        indice = new Scanner(System.in).nextInt() - 1;
        if (indice >= n_carrozze || indice < 0) {
            throw new Exception("Non esiste questa carrozza");
        } else {
            System.out.println("Quanti posti prenotare?");
            treno_classe[indice].book(new Scanner(System.in).nextInt());
            treno_classe[indice].visualizza();
        }
    }

    void cancellazione() throws Exception {
        System.out.println("Su quale carrozza operare?");
        indice = new Scanner(System.in).nextInt() - 1;
        if (indice >= n_carrozze || indice < 0) {
            throw new Exception("Non esiste questa carrozza");
        } else {
            System.out.println("Quanti posti cancellare?");
            treno_classe[indice].delete(new Scanner(System.in).nextInt());
            treno_classe[indice].visualizza();
        }
    }

    void visualizzazione() {
        System.out.println("Quale carrozza visualizzare?");
        treno_classe[new Scanner(System.in).nextInt() - 1].visualizza();
    }

    void informazioni() {
        System.out.println("Carrozza numero: ");
        int ind = new Scanner(System.in).nextInt() - 1;
        System.out.print("Posti occupati: ");
        System.out.println(80 - treno_classe[ind].pd);
        System.out.print("Posti disponibili: ");
        System.out.println(treno_classe[ind].pd);
    }

    void generazione() {
        System.out.println("Quanti posti si vogliono prenotare?");
        int scelta = new Scanner(System.in).nextInt();
        int i = 0;
        boolean condizione = false;
        do {
            condizione = treno_classe[i].genera(scelta);
            i++;
        } while (!condizione && i < n_carrozze);
        if (i == n_carrozze)
            System.out.println("Posti non trovati in nessuna carrozza. Ci dispiace.");
    }
}

