const prompt=require("prompt-sync")();
class Biblioteca 
{
    constructor() 
    {
        this.libri = new Map(); // Mappa per memorizzare i libri (ID come chiave, oggetto libro come valore)
        this.idLibri = new Set(); // Set per tracciare gli ID univoci dei libri
    }


// Aggiungi un nuovo libro alla collezione
create(id, titolo, autore, annoPubblicazione)
{
    id = prompt("Inserisci l'ID del libro:");
    titolo = prompt("Inserisci il titolo del libro:");
    autore = prompt("Inserisci l'autore del libro:");
    annoPubblicazione = prompt("Inserisci l'anno di pubblicazione del libro:");

    if (!this.idLibri.has(id)) //vedo se l'ID del libro non esiste gia
    {   // Verifica che l'ID del libro sia univoco
        this.libri.set(id, { titolo, autore, annoPubblicazione });//aggiungo con la chiave "id" il libro alla collezione
        this.idLibri.add(id);
        console.log("Libro con ID ${id} aggiunto alla collezione.");
    } 
    else 
    {
        console.log("Errore: ID del libro già esistente.");
    }
}

// Visualizza le informazioni di un libro specifico o di tutta la collezione
read(id) 
{
    if (id) 
    { // Se viene fornito un ID, visualizza le informazioni del libro corrispondente
        if (this.libri.has(id)) 
        {
            const libro = this.libri.get(id);
            console.log("Informazioni del libro con ID ${id}:, libro");
        } 
    else 
        {
            console.log("Errore: Il libro con ID ${id} non è presente nella collezione.");
        }
    } 
    else 
    { // Altrimenti, visualizza le informazioni di tutti i libri nella collezione
        console.log("Informazioni di tutti i libri nella collezione:");
        for (let [id, libro] of this.libri) 
        {
            console.log("ID: ${id}, Titolo: ${libro.titolo}, Autore: ${libro.autore}, Anno di pubblicazione: ${libro.annoPubblicazione}");
        }
    }
}

// Aggiorna le informazioni di un libro esistente
update(id, nuovoTitolo, nuovoAutore, nuovoAnnoPubblicazione) 
{
    id = prompt("Inserisci l'ID del libro da aggiornare:");
    nuovoTitolo = prompt("Inserisci il nuovo titolo del libro:");
    nuovoAutore = prompt("Inserisci il nuovo autore del libro:");
    nuovoAnnoPubblicazione = prompt("Inserisci il nuovo anno di pubblicazione del libro:");

    if (this.libri.has(id)) 
    {
        const libro = this.libri.get(id);
        libro.titolo = nuovoTitolo;
        libro.autore = nuovoAutore;
        libro.annoPubblicazione = nuovoAnnoPubblicazione;
        console.log("Informazioni del libro con ID ${id} aggiornate.");
    } 
    else 
    {
        console.log("Errore: Il libro con ID ${id} non è presente nella collezione.");
    }
}

// Elimina un libro dalla collezione
eliminaLibro(id) 
{
    if (this.libri.has(id)) 
    {
        this.libri.delete(id);
        this.idLibri.delete(id);
        console.log("Libro con ID ${id} eliminato dalla collezione.");
    } 
    else 
    {
        console.log("Errore: Il libro con ID ${id} non è presente nella collezione.");
    }
}
}
// Esempio di utilizzo
const biblioteca = new Biblioteca();
biblioteca.create(); // Aggiungi un nuovo libro
biblioteca.update(); // Aggiorna le informazioni di un libro esistente
biblioteca.read(); // Visualizza le informazioni di tutti i libri