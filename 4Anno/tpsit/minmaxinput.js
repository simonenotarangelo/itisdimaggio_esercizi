const prompt=require('prompt-sync')();

let n,n1,n2,n3;

n=prompt("Inserisci 1° numero: ");
n1=prompt("Inserisci 2° numero: ");
n2=prompt("Inserisci 3° numero: ");
n3=prompt("Inserisci 4° numero: ");

let mag,min;
mag=Math.max(n,n1,n2,n3);
min=Math.min(n,n1,n2,n3);

console.log("Il numero maggiore è ",mag,", il numero minore è ",min);