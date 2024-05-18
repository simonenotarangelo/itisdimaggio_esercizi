const prompt=require ('prompt-sync')();

/*
5.
*/

let n=new Set([1,2,3,4]);

let array=Array.from(n);
console.log(array[0]); //stampa 1

prompt("premi invio per metodo spread");

let vet=[...n];
console.log(vet[0]);

//console.log(n);
