import java.util.Scanner;

public class Test {
    Treno oggetto = new Treno();
    Scanner scanner = new Scanner(System.in);
    
    void menu() {
        int scelta;
        
        do{
            System.out.println("1-Visualizza posti occupati;");
            System.out.println("2-Prenota posto;");
            System.out.println("3-Cancella posti;");
            System.out.println("4-Prenotazione casuale;");
            System.out.println("5-Interrompi prenotazione;");
            System.out.println(">");
            scelta = scanner.nextInt();
            
            switch(scelta){
                case 1: oggetto.stampa();break;
                case 2: oggetto.prenota();break;
                case 3: oggetto.annulla_prenotazione();break;
                case 4: oggetto.generazione();break;
            }
        }while(scelta>0 && scelta<=4);
        
        System.out.println("FATTO");
    }
}
