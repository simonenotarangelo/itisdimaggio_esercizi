public class Carrozza {
    private char[][] totposti;
    int carrozze;

    public Carrozza(int n_carrozza) {
        this.carrozze = carrozze;
        
        totposti = new char[4][20];
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 20; j++) {
                totposti[i][j] = '-';
            }
        }
    }
    public void stampaMatrice() {       
       for (int j = 0; j < 20; j++) {
        for (int i = 0; i < 4; i++) {
            System.out.print(totposti[i][j] + " ");
        }
        System.out.println();
    }

    disponibili();
    }

    public void prenotaPosto(int riga, int colonna) {
        if (riga >= 1 && riga <= 4 && colonna >= 1 && colonna <= 20) {
            if (totposti[riga - 1][colonna - 1] == '-') {
                totposti[riga - 1][colonna - 1] = 'X';
                System.out.println("Prenotazione effettuata");
            } else {
                System.out.println("Posto non disponibile. Scegli posto.");
            }
        } else {
            System.out.println("Errore. Scegli riga da 1-20, colonna 1-4.");
        }
    }

    public void cancellaPrenotazione(int riga, int colonna){
        if (riga >= 1 && riga <= 4 && colonna >= 1 && colonna <= 20) {
            if (totposti[riga - 1][colonna - 1] == 'X') {
                totposti[riga - 1][colonna - 1] = '-';
                System.out.println("Cancellazione fatta.");
            } else {
                System.out.println("Il posto era libero.");
            }
        } else {
            System.out.println("Errore. Scegli riga da 1-20, colonna 1-4.");
        }
    }
    
    public boolean controllo(int riga,int colonna){  
        if(totposti[riga][colonna]=='-'){
            return true;
        }
        return false;
    }
    
    public boolean genera(int prenotati){
        boolean presente=false;
        if(prenotati==1){
            presente=false;
            
            for(int c=0;c<20;c++){
                presente=false;
                if(totposti[0][c]=='-'){
                    totposti[0][c]='X';
                    presente=true;
                }else if(totposti[1][c]=='-'){
                    totposti[1][c]='X';
                    presente=true;
                }else if(totposti[2][c]=='-'){
                    totposti[2][c]='X';
                    presente=true;
                }else if(totposti[3][c]=='-'){
                    totposti[3][c]='X';
                    presente=true;
                }
                
                if(presente)
                    break;
            }
        }else if(prenotati==2){
            presente=false;

            for(int c=0;c<20;c++){
                presente=false;
                if(totposti[0][c]=='-' && totposti[1][c]=='-'){
                    totposti[0][c]='X';
                    totposti[1][c]='X';
                    presente=true;
                }
                else if((totposti[2][c]=='-' && totposti[3][c]=='-')){
                    totposti[2][c]='X';
                    totposti[3][c]='X';
                    presente=true;
                }
                if(presente)
                    break;
            }
        }
        else if(prenotati==3){
            presente=false;
            for(int c=0;c<20;c++){
                if(totposti[0][c]=='-' && totposti[1][c]=='-' && totposti[2][c]=='-'){
                    totposti[0][c]='X';
                    totposti[1][c]='X';
                    totposti[2][c]='X';
                    presente=true;
                }
                else if((totposti[1][c]=='-' && totposti[2][c]=='-' && totposti[3][c]=='-')){
                    totposti[1][c]='X';
                    totposti[2][c]='X';
                    totposti[3][c]='X';
                    presente=true;
                }
                if(presente)
                    break;
            }
            
        }else if(prenotati==4){
            for(int c=0;c<20;c++){
                presente=true;
                for(int r=0;r<4;r++){
                    if(totposti[r][c]!='-')
                        presente=false;
                }
                if(presente){
                    for(int j=0;j<4;j++)
                        totposti[j][c]='X';
                    break;
                    }
            }
            
            if(presente==false){
                for(int c=0;c<19;c++){
                    presente=false;
                    if(totposti[0][c]=='-'&& totposti[1][c]==totposti[0][c]&&
                      totposti[0][c+1]==totposti[0][c]&&totposti[1][c+1]==totposti[0][c]){
                        totposti[0][c]='X';
                        totposti[1][c]='X';
                        totposti[0][c+1]='X';
                        totposti[1][c+1]='X';
                        presente=true;
                    }else if(totposti[2][c]=='-'&& totposti[3][c]==totposti[2][c]&&
                      totposti[2][c+1]==totposti[2][c]&&totposti[3][c+1]==totposti[2][c]){
                        totposti[2][c]='X';
                        totposti[3][c]='X';
                        totposti[2][c+1]='X';
                        totposti[3][c+1]='X';
                        presente=true;
                    }
                    if(presente)
                        break;
                }
            }
        }else if(prenotati==5){
            presente=false;
            for(int i=0;i<5;i++){
                for(int c=0;c<20;c++){
                    presente=false;
                    if(totposti[0][c]=='-'){
                        totposti[0][c]='X';
                        presente=true;
                    }else if(totposti[1][c]=='-'){
                        totposti[1][c]='X';
                        presente=true;
                    }else if(totposti[2][c]=='-'){
                        totposti[2][c]='X';
                        presente=true;
                    }else if(totposti[3][c]=='-'){
                        totposti[3][c]='X';
                        presente=true;
                    }
                    
                    if(presente)
                        break;
                }
            }
        }else if(prenotati==6){
            presente=false;
            for(int i=0;i<6;i++){
                for(int c=0;c<20;c++){
                    presente=false;
                    if(totposti[0][c]=='-'){
                        totposti[0][c]='X';
                        presente=true;
                    }else if(totposti[1][c]=='-'){
                        totposti[1][c]='X';
                        presente=true;
                    }else if(totposti[2][c]=='-'){
                        totposti[2][c]='X';
                        presente=true;
                    }else if(totposti[3][c]=='-'){
                        totposti[3][c]='X';
                        presente=true;
                    }
                    
                    if(presente)
                        break;
                }
            }
        }
            
        if(presente)
            return true;
        else
            return false;
    }
    
    public void disponibili(){
        int conta = 0;
        for (int k = 0; k < 20; k++) {
            for (int i = 0; i < 4; i++) {
                if (totposti[i][k] == '-')
                    conta++;
            }
            }
        
        System.out.println("Posti rimanenti in tutto il treno --->"+conta);
    }
}