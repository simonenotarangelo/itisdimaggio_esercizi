 class   Test
{
    Aereo Boeing747= new Aereo();
    
    
    int main()
    {
        Boeing747.inizializza_parametri(183000,988,416,86928);
        
        
        Boeing747.decolla();   
        
        Boeing747.accellera(988);
        Boeing747.rallenta(988);
        Boeing747.accellera(988);
        Boeing747.get_info_aereo();
        Boeing747.Rifornisci();
        Boeing747.get_info_aereo();
        return 0;
    }
    
}
