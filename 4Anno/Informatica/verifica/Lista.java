public class Lista
{
    Nodo testa;
    Nodo corrente;
    
    void push(String citta)
    {
        if(testa==null)
        {
            testa=new Nodo(citta);
            corrente=testa;
        }
        else
        {
            corrente.p=new Nodo(citta);
            corrente=corrente.p;
        }
    }
    
    void get()
    {
        corrente=testa;
        
        while(corrente!=null)
        {
            System.out.println("Città: "+corrente.citta);
            corrente=corrente.p;
        }
    }
    
    void stampapenultimo()
    {
        if(testa==null || testa.p==null)
        {
            System.out.println("Lista troppo corta!");
        }
        
        Nodo penultimo=testa;
        Nodo ultimo=testa.p;
        
        while(ultimo.p!=null)
        {
            penultimo=ultimo;
            ultimo=ultimo.p;
        }
        System.out.println("Penultimo elemento: "+penultimo.citta);
    }
}