TITLE esercitazione per verifica
;implementare un programma che permetta di:
;1-Caricare in memoria un vettore di N interi(N >=5 e <=10)
;2-Contare il numero degli elementi pari(quindi anche quelli dispari)
;3-Visualizzare il vettore e quindi il numero degli elementi pari e dispari
;lo zero non deve essere contato ne tra i pari ne tra i dispari ma pu• essere accettato in input
DATA SEGMENT
  DIECI DB 10
  N DB ?
  VET DB 10 DUP(?)
  MSG1 DB 13,10,'Inserisci lunghezza vettore : $'
  MSG2 DB 13,10,'Inserisci elemento vettore : $'
  MSG3 DB 13,10,'Stampa vettore : $'
  MSG4 DB 13,10,'Pari : $'
  MSG5 DB 13,10,'Dispari : $'
DATA ENDS

CODE SEGMENT
  ASSUME CS:CODE,DS:DATA
  inizio:MOV AX,DATA
         MOV DS,AX
         ;inizio programma
label1: LEA DX,MSG1
        MOV AH,9
        INT 21H
        MOV AH,1
        INT 21H
        SUB AL,30H
        MUL DIECI
        MOV N,AL
        ;seconda cifra
        MOV AH,1
        INT 21H
        SUB AL,30H
        ADD N,AL        
        CMP N,10
        JA label1
        ;inizializzazione cx per loop
        MOV CL,N
        MOV CH,0
        MOV SI,0
label2: LEA DX,MSG2
        MOV AH,9
        INT 21H
        ;input elementi
        MOV AH,1
        INT 21H
        SUB AL,30H
        MOV [VET+SI],AL
        INC SI
        LOOP label2
	

        MOV AH,4CH
        INT 21H
CODE ENDS
END inizio
