const prompt= require('prompt-sync')();

function aggiuntaAtt(attivitaDaFare)
{
   let nuovaatt;
   nuovaatt=prompt("Inserisci nuova attività da inserire: ");
   let priorita;
   priorita=prompt("Priorità 1 o 2:");
   
   let att;
   att=priorita+nuovaatt;
   
   attivitaDaFare.push(att);
}

const stampaArray=(attivitaDaFare) => console.log(attivitaDaFare);

function trovaAtt(attivitaDaFare)
{
   console.log("Inserisci stringa da ricercare: ");
   let stringaDaRicercare;
   stringaDaRicercare = prompt();

   if(attivitaDaFare.find(elemento => elemento === stringaDaRicercare))
      return true;
   else
      return false;
}

function conteggioAtt(attivitaDaFare)
{
   let cont;
   cont=attivitaDaFare.length;

   console.log("Ci sono ",cont," attività");
}

function ordinaAlfabeticamente(attivitaDaFare)
{
   attivitaDaFare.sort();
   console.log(attivitaDaFare);
}

function creaLista(attivitaDaFare)
{
   return attivitaDaFare.join(", ");
}

function filtraAttivita(attivitaDaFare)
{
   return attivitaDaFare.filter();
}

function main()
{
   let attivitaDaFare=["1Fare la spesa","1Pulire la casa","1Studiare per l'esame","2Andare in palestra","2Preparare la cena","1Leggere un libro","1Scrivere una mail","2Organizzare il guardaroba","2Guardare un film"];

   let catena;

   let scelta;

  do
  {
   console.log("\nScegli programma:\n1)Aggiungi attività\n2)Stampa attività\n3)Ricerca attività\n4)Conteggio attività\n5)Ordina alfabeticamente\n6)Concatenazione stringhe\n7)Filtraggio priorità\n");
   console.log("---Termina con -1");
   scelta=parseInt(prompt());

   
   switch(scelta)
   {
       case 1:aggiuntaAtt(attivitaDaFare);break;
       case 2:stampaArray(attivitaDaFare);break;
       case 3:console.log(trovaAtt(attivitaDaFare));break;
       case 4:conteggioAtt(attivitaDaFare);break;
       case 5:ordinaAlfabeticamente(attivitaDaFare);break;
       case 6:catena=creaLista(attivitaDaFare);console.log(catena);break;
       case 7:console.log(filtraAttivita(attivitaDaFare));break;
   }
  }while(scelta!==-1);

}

main();