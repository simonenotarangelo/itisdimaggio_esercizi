import java.util.Scanner;

public class Test {
    public static void main() throws Exception {
        Treno frecciarossa23 = new Treno();
        int scelta;
        do {
            System.out.println("Menu'");
            System.out.println("1)Scegli posto");
            System.out.println("2)Rimuovi posto");
            System.out.println("3)Occupati/Liberi");
            System.out.println("4)Visualizza carrozza");
            System.out.println("0)Esci");
            scelta = new Scanner(System.in).nextInt();
            switch (scelta) {
                case 1:
                    frecciarossa23.scelta();
                    break;
                case 2:
                    frecciarossa23.cancellazione();
                    break;
                case 3:
                    frecciarossa23.informazioni();
                    break;
                case 4:
                    frecciarossa23.visualizzazione();
                    break;
            }
        } while (scelta != 0);
    }
}
