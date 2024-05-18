import java.util.Scanner;

public class Treno {
    Scanner scanner = new Scanner(System.in);

    int e;
    Carrozza array[];

    Treno() {
        System.out.print("Inserisci il numero di carrozze: ");     
        e = scanner.nextInt();
        array = new Carrozza[e];
        
        for(int i=0;i<e;i++){
            array[i]=new Carrozza(i);
        }
    }
    
    void stampa(){
        System.out.println("POSTI");
                
        for(int i=0;i<e;i++){
            System.out.println("Carrozza "+i);
            array[i].stampaMatrice();
        }
    }
    
    void prenota(){
        int scelta;
        
        System.out.println("Inserire carrozza da cui prenotare: ");
        scelta = scanner.nextInt();
        int riga,colonna;
        
        do{
            System.out.println("Inserire riga: ");
            riga = scanner.nextInt();
            
            System.out.println("Inserire colonna: ");
            colonna = scanner.nextInt();
        }while((riga<0 || riga>4)&&(colonna<0 || colonna>20));
        
        array[scelta].prenotaPosto(riga,colonna);
    }
    
    void annulla_prenotazione(){
        int scelta;
        
        System.out.println("Inserisci carrozza in cui cancellare la prenotazione: ");
        scelta = scanner.nextInt();
        array[scelta]=new Carrozza(scelta);
        int riga,colonna;
        
        do{
            System.out.println("Inserire riga: ");
            riga = scanner.nextInt();
            
            System.out.println("Inserire colonna: ");
            colonna = scanner.nextInt();
        }while((riga<0 && riga>4)&&(colonna<0 && colonna>20));
        
        array[scelta].cancellaPrenotazione(riga,colonna);
    }
    
    void generazione(){
        System.out.println("Quanti posti vuoi prenotare?");
        int n=scanner.nextInt();
        int i=0;
        boolean full=false,situa=false;
        do{
            situa=array[i].genera(n);
            i++;
        }while(situa==false && i<=e);
        
        if(i==e){
            System.out.println("Posti non trovati");
        }
    }
}
