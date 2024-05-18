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

function input()
{
    let x;
    x=parseInt(prompt("Inserisci numero: "));

    return x;
}

function coppiaak(A,k)
{
    let verifica;
    for(let i=0;i<(A.length)-1;i=i+2)
    {
        if((A[i]+A[i+1])==k)
            verifica=true;
        else
        {
            verifica=false;
            break;
        }
    }

    if(verifica==true)
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

    let A=[1,2,3,0,2,1];
    let k=3;
    switch(scelta)
    {
        case 1:ris=inputintinarray();console.log(ris);break;
        case 2:ris=input();console.log(ris);break;
        case 3:ris=coppiaak(A,k);console.log(ris);break;
    }
}

main();