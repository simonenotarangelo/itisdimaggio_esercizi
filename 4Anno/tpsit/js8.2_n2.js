const prompt = require('prompt-sync')();

function arrint(vet)
{
    for(let i=0;i<20;i++)
    {
        vet[i]=Math.floor(Math.random()*1000);
    }
}

function arrsomma(A)
{
    let somma=0;
    let giri=A.length;
    for(let i=0;i<giri;i++)
    {
        if(A[i]%2==0)
            somma=somma+A[i];
    }

    return somma;
}

function main()
{
    let scelta;
    let vet=[];

    let A=[5,22,21,5,66,743,23,12];

    scelta=parseInt(prompt("Avvia funzione:\n>1\n>2\n"));
    switch(scelta)
    {
        case 1:arrint(vet);console.log(vet);break;
        case 2:arrsomma(A);console.log("La somma dei numeri pari è: ",arrsomma);break;
    }
}

main();