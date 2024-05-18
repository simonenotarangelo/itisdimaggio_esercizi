const prompt=require('prompt-sync')();

function inputintinarray()
{
    let vet=[];
    let n=0;
    while(n!==-1)
    {
        console.log("Inserisci numero: (termina con -1)");
        n=parseInt(prompt(">"));
        if(n!==-1)
            vet.push(n);
    }
    return vet;
}

function arrayab()
{
    let A=[5,6,7,8,9,11,44,56,11,342];
    let B=[12,34,1,23,4,199,2,26,4,278];
    let somma=0, somma1=0;
    for(let i=0;i<10;i++)
    {
        if(i%2==0)
            somma=somma+A[i];
        else
            somma1=somma1+B[i];
    }

    if(somma>somma1)
        return true;
    else
        return false;
}

function main()
{
    let scelta;
    console.log("Scegli programma:\n1\n2\n3\n");
    scelta=parseInt(prompt(">"));
    let ris;
    switch(scelta)
    {
        case 1:ris=inputintinarray();console.log(ris);break;
        case 2:ris=arrayab();console.log(ris);break;
        case 3:break;
    }
}

main();