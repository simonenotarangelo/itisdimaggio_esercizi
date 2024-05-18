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

function coppiaak(A,x,y)
{
    let verifica;
    
    for(let i=0;i<A.length;i++)
    {
        if(A[i]==x)
            if(A[i+1]==y)
                verifica=true;
            else
                verifica=false;
    }

    if(verifica==true)
        return true;
    else
        return false;
}


function main()
{
    let scelta;
    console.log("Scegli programma:\n1\n2\n3");
    scelta=parseInt(prompt(">"));
    let ris;
    let A=[1,3,0,12,7,3,0];
    let x=3, y=0;

    switch(scelta)
    {
        case 1:ris=inputintinarray();console.log(ris);break;
        case 2:ris=input();console.log(ris);break;
        case 3:ris=coppiaak(A,x,y);console.log(ris);break;
        case 4:;break;
    }
}

main();