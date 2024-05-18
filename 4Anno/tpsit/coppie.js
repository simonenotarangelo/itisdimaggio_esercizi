const prompt=require('prompt-sync')();

let numero;

numero=prompt("Inserisci numero: ");

let j=numero;

console.log("Le coppie sono: ");
for(let i=0;i<=j;i++,j--)
{
    console.log(i,"+",j);
}
