class Veicolo_a_motore
{
    int cilindrata,assi,marce,posti,marcia_corrente;
    String alimentazione;
    float vmax,km_percorsi,carburante_max,carburante_corr,consumo_medio;
    boolean stato;
    
    Veicolo_a_motore(int cilindrata,int assi,int marce, int posti,String alimentazione,float vmax,float carburante_max,float consumo_medio)
    {
        this.cilindrata=cilindrata;
        this.assi = assi;
        this.marce = marce;
        this.posti = posti;
        this.alimentazione = alimentazione;
        this.vmax = vmax;
        this.carburante_max = carburante_max;
        this.consumo_medio = consumo_medio;
        carburante_corr=carburante_max;
    }    
    
    
    void accendi()
    {
        stato=true;
    }
    
    void spegni()
    {
        stato=false;
    }
    
    void percorri(float km)
    {
        if(km/consumo_medio>carburante_corr)
        {
            km_percorsi=km_percorsi+(carburante_corr*consumo_medio);
            System.out.println("hai percorso solo: "+carburante_corr*consumo_medio+" km");
            carburante_corr=0;
            stato=false;
            System.out.println("la tua auto si e' spenta perche hai finito il carburante");
        }
        else{
            System.out.println("Hai percorso "+km+" km");
            km_percorsi+=km;
            carburante_corr-=km/consumo_medio;
            
        }
    }

    void aumenta_marcia(int quant_marcia)
    {
        if(stato)
        {
            if(marcia_corrente+quant_marcia<=marce)
            {
                marcia_corrente=marcia_corrente+quant_marcia;               
            }else{
                System.out.println("Non e' possibile aumentare marcia.");
            }

        }
        else
        {
            System.out.println("L'auto non e' in moto.");
        }
    }
    
    void scala_marcia(int quant_marcia)
    {
        if(stato)
        {
            if(marcia_corrente-quant_marcia>0)
            {
                marcia_corrente=marcia_corrente-quant_marcia;               
            }else{
                System.out.println("Non e' possibile scalare marcia.");
            }

        }
        else
        {
            System.out.println("L'auto non e' in moto.");
        }
    }
    
    void display()
    {
        System.out.println("------------------------------");
        if(stato)
            System.out.println("Stato: Accesa");
        else
            System.out.println("Stato: Spenta");
            
        System.out.println("Chilometri percorsi: "+km_percorsi+" km");
        System.out.println("Carburante corrente: "+carburante_corr+" L");
        System.out.println("Marcia corrente: "+marcia_corrente);
        System.out.println("------------------------------");

    }
    
    void rifornisci(float rifornimento)
    {
        if(carburante_corr<carburante_max)
        {
            if(carburante_corr+rifornimento>carburante_max)
                carburante_corr=carburante_max;
            else
                carburante_corr+=rifornimento;
        }else{
            System.out.println("Il tuo carburante e' gia al massimo.");

        }
        
    }
    
    
    
}
