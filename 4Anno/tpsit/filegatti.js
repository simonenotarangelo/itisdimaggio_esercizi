const prompt=require('prompt-sync')();

let gatti,n;

gatti=prompt("Inserisci quanti gatti ci sono: ");
n=prompt("Inserisci quanti gatti ci sono in ogni fila: ");

let file;
file=gatti/n;
file=Math.round(file);
let miss;
miss=gatti-(file*n);

console.log("Ci sono ",file," file e mancano ",miss," per completare la fila");