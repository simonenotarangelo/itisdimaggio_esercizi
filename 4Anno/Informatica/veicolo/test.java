class test
{
    
    int main()
    {
    Veicolo_a_motore Nissan_Micra=new Veicolo_a_motore(1198,3,5,5,"benzina",170,41,13);
    Nissan_Micra.accendi();
    Nissan_Micra.percorri(50);
    Nissan_Micra.display();
    Nissan_Micra.aumenta_marcia(2);
    Nissan_Micra.scala_marcia(5);
    Nissan_Micra.display();  
    Nissan_Micra.percorri(250);
    Nissan_Micra.percorri(10);
    Nissan_Micra.percorri(300);
    //Nissan_Micra.scala_marcia(1);
    Nissan_Micra.display();
    Nissan_Micra.rifornisci(20);
    Nissan_Micra.rifornisci(50);
    Nissan_Micra.display();
    return 0;
    }
}
