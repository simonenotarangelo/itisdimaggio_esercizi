const prompt = require('prompt-sync')();

function intinvet(vet)
{
    let lunghezza;
    lunghezza=prompt("Inserisci lunghezza array:");
    for(let i=0;i<lunghezza;i++)
    {
        vet[i]=parseInt(prompt("Inserisci elemento vettore:"));
    }
    console.log();

    return  vet;
}

function occorrenzex(A,x)
{
    x=parseInt(prompt("Inserisci x:"));

    let occorrenze=A.filter(A=>x);
    return occorrenze.length;
}

function main()
{
    let scelta;
    console.log("Scegli funzione");
    scelta=parseInt(prompt("1,2,3 ?"));
    let vet=[];
    let A=[5,4,3,2,1,7,8,9,6,6,8,8,8,8,3,3,2,1,22,2,2,2,4];
    let x;

    switch(scelta)
    {
        case 1:intinvet(vet);console.log(vet);break;
        case 2:console.log("Numero elementi uguali",occorrenzex(A,x));break;
        case 3:break;
    }    
}

main();