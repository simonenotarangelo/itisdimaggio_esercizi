const prompt=require('prompt-sync')();

let frase;

frase=prompt("Inserisci frase:");

for(let i=frase.length;i>=0;i--)
{
    console.log(frase[i]);
}