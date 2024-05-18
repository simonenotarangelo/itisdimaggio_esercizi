const prompt=require ('prompt-sync')();

/*
3.
*/

let n=new Set('Ciao');
n.add('Telefono');
console.log(n);

let presenza=n.has('Ciao');

console.log(presenza);//esce false perché in teoria è diviso a lettere

let presenza1=n.has('Telefono');
console.log(presenza1);//esce true perché Telefono lo prende come parola intera
