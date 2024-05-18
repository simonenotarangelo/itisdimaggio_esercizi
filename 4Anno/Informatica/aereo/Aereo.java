 

  class Aereo{
    float peso,vmax,posti,capcarb,vcorrente=0,cc;
    boolean stato;
    
    void get_info_aereo(){
        System.out.println("Peso: "+peso+" Kg");
        System.out.println("Velocita massima: "+vmax+" km/h");
        System.out.println("Posti: "+posti);    
        System.out.println("Capacita carburante: "+capcarb+" L");
        System.out.println("Stato: "+stato);
        System.out.println("Velocita corrente: "+vcorrente+" km/h");
        System.out.println("Carburante Corrente: "+cc+" L");
        System.out.println("------------------------------");
    }
    
    void inizializza_parametri(float pes,float vmaxx,int postii,float carburante){
        peso=pes;
        vmax=vmaxx;
        posti=postii;
        capcarb=carburante;
        cc=carburante;
    }
    
    void decolla(){
        stato=true;
        
    }
    
    void accellera(float velocita){
        if(stato){
            if(velocita+vcorrente>vmax){
                velocita=vmax-vcorrente;
            }
                vcorrente=vcorrente+velocita;
        }
        
        check_carburante(velocita);
    }
    
    void rallenta(float velocita){
        if(stato){
            if(vcorrente<velocita){
            velocita=vcorrente;
            stato=false;
            }
            vcorrente=vcorrente-velocita;
        }     
    }
    
    void Atterra(){
        stato=false;
        vcorrente=0;
    }
    
    void Rifornisci(){
        cc=capcarb;
        
    }
    
    void check_carburante(float velocita)
    {
        float carb_togliere=velocita/1000*capcarb;
        if(carb_togliere>cc){
                carb_togliere=cc;
            }
            cc=cc-carb_togliere;
            
        if(cc==0)
        {
            Atterra();
        }
    }
}
