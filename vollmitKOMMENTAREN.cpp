#include <iostream>//Das  L�dt die Bibliothek glaub ich...
//+++ um so mehr + vor dem kommentar steht, um so wichtiger ist er.( ich werde wahrscheinlich ab zeile 12 damit aufh�ren weil es soviel kommentare sind)
//ich entschuldige mich hier f�r rechtschreibfehler, Ich war an machen Tagen verdammt m�de, OK.
//ignorier des GR�NE wenn du willst, ich hab �bertrieben mit den Kommentaren. Tut mir leid.
//copyright DAVID MATHEJA (wichtig). hat mich 2 wertvolle stunden gekostet.( update 5h)
//version 2.3 (egal
//�ndere die kommentarfarbe zu hellgrau wenn es dich ernsthaft st�rt. ist schon ok f�r mich...
//Es handelt sich hier um ein simples iergendwas zussammengeschmissen f�r lernzwecke Programm.
//Ich hafte net f�r schaden den dieses Programm verursacht. LOL.(mehr sag ich net dazu)
//ernsthaft du solltest aufpassen was du hier machst, ganz besonders solltest du aufpassen dass du dieses programm nicht als dein eigenes preis gibst. (dann bekommst n problem mit mir)
int main()//+++was es macht? nix. ist aber wichtig.
// vielleicht fragst du dich, was sollen die Komentare?. gute Frage... 
//tu dir keinen zwang an unnn�tige Kommentare zu l�schen(auch wenn es mich  nebenbei viel zeit gekostet hat). nach einem kommentar kommt kein code mehr.

{	//+++mit der komischen klammer f�ngt das programmieren erst richtig an, ausser du kappierst hier nix.

	double flache;//+++double, meine lieblings variable...(sie kann kommazahlen, und zwar deutlich mehr als float) 
	double umfang;
	double radius;
	double durchmesser;
	const double pi = 3.14;//+const macht aus der variable eine Konstante. (eine FESTE ZAHL)
	int a = 12; //+damit wird die variable a erschaffen, genauer erkl�rt: int steht f�r einen variablen typen der nur nat�rliche zahlen benutzen kann,und zwar belegt er genau 4 bytes (32bit). in deinem 
				//+Arbeitsspeicher, egal was du da drin speicherst. mit dem = wird des gleich auf 12 gesetzt. wenn du nur eine sehr kurze variable brauchst nimm bool (; genau 1 bit. (0 oder 1 halt.)
				//+wenn bool dir dann doch zu wenig ist gibt es noch short, 2byte (16bit). vielleicht hast du dich schon immer gewundert, was ist ein bit und ein byte. 1 bit= 0 oder 1 und 1byte = 8bits
	std::cout << "TEST 197";//alles was im "HALLO! hier" ist wird als text ausgegeben.
	
	std::cout << "\n\nPROGRAMM ERFOLGREICH GELADEN\n\tEIN VIRUS WURDE ENTDECKT! SIE M�SSEN JETZT UPGRADEN, HEUTE F�R NUR 199,98�!!!11!!!1!\n\n\nbeeilung, ich meins ernst .\nEnter dr�cken um Hinweise zu bekommen (ES FALLEN DIE NORMALEN(NAJA) GEB�HREN AN";
			// mit \n, wie du oben sehen kannst, sorgt daf�r das eine neue zeile beginnt. und \t ist ein tab, also			ein grosser abstand.	
	std::cin.get();//Hier wird der User aufgefordert die ENTER taste zu dr�cken. Praktisch bei story spielen.(nein.) (warum?) (einmal auf enter gedr�ckt, wird diese funktion immer �bersprungen
	
				   //nebenbei, Ich bin Hier um zu programmieren und net der beste in deutsch, ok?
	
	std::cout << "\n\nsie m�ssen mindestens... ach geb einfach dein alter ein um dieses programm spielen zu k�nnen (KEINE BUCHSTABEN! DA ST�RZT ES AB!)\n";
	
	std::cin >> a;
	
	std::cout << "\ndanke f�r IHRE kaufbest�tigung (;. mit" << a << "milionen euros\n der VIRU� ist fertig geladen\n(die dinger sind net einfach zu machen, aber du bekommst heute einen GRATIS!!1!!!)";

t:;
	std::cout << "willkommen beim \t-`,Taschenrechner�,- \n (ein altes programm von mir, nicht zu viel erwarten)\n\n";



	b:;// darf ich vorstellen? mit wem red ich hier �berhaupt... egal, das Hier ist b, es ist einfach nur b. wenn befohlen wird goto b; dann landet der compiler wieder hier.( wichtig f�r sp�ter
			//hier k�nnte auch ein anderer buchstabe oder wort stehen, es ist wie ein portal welches ein gegenst�ck ben�tigt wie goto b;   ACHTUNG! es darf keine ZAHL sein, kein existierender BEFEHL,
	        //und keine VARIABLE. wenn du einfach  nur buchstaben nimmst die noch nicht als irgendwas benutzt werden bist du auf der sicheren seite.



	std::cout << "\n\nWILLKOMMEN ZUM TOLLEN RECHENDINGSBUMS!\ngebe den durchmesser ein. Es geht  um einen Kreis, falls du den Titel nicht lesen kannst.\nDURCHMESSER EINGEBEN:   ";
	std::cin >> durchmesser;// hier wird eine eingabe aufgefordert, die bewirkt das die Variable durchmesser auf die eingabe gesetzt wird. Sehr wichtig!
	radius = durchmesser / 2;//BERECHNUNGEN
	umfang = pi*durchmesser;//FORMELN
	flache = pi * (radius*radius);//WIRD NICHT AUF DEM BILDSCHIRM GEZEIGT
	
	std::cout << "UMFANG  " << umfang;// textausgabe mit anschliesender Variablen auslesung.
	
	std::cout << "\n FL�CHENINHALT  " << flache;// sollte leicht zu verstehen sein, genau wie 1 weiter oben
	
	std::cout << "\n RADIUS ist" << radius;//+das gleiche wie oben...
	
	std::cout << "\n Nochmal\n 2:Men�/Copyright\negal: programm beendet sich\n";
	
                        std::cout << \n\n 1:"
	std::cin >> a; // hier wird der benutzer mal wieder aufgefordert eine variable
	if (a == 1)					// falls (a ist 1)                      an dieser stelle solltest du wissen das es �bersprungen wird wenn es nicht zutrifft, also zb. wenn a den wert 5 besitzt. 
	{
		system("cls");			//tu das {bla bla}
		goto b;
	}
	else if (a == 2)				//sonst falls (a ist 2)
	{
		system("cls");			//tu das {bla bla}
		std::cout << "copyright von DAVID MATHEJA. \n ich weiss zwar net genau was ein copyright ist, \nich weiss aber das das mein Programm ist was du da benutzt. (;\n\n1: Pi berechner \n3:Taschenrechner\n";
		std::cin >> a;
		if (a == 1) {      //du kannst auch mehrere if ineinander machen, falls mehreres zutrffen muss um an ein bestimmtes ziel zu kommen

			goto b;
		}
		else if (a == 3) {
			system("cls");
			goto t;
		}
	}
	else  //sonst (also wenn nichts der vorherigen zutrifft) mach das programm weiter.


		std::cin.get();// das ist unn�tig. einmal auf enter, immer auf enter. MERKEN!
	std::cout <<"uhafhfdhasfoashfoidshnconasnxnkjalnxjnxjlnjnaojoiqoiwueoiqwuerioewuriojhfdskjcnsikykamdmsaondjosnfnajsdfndjnfjdncjasmndksalkdslkdk";//der User sieht des eh net
	return 0;// endlich bin ich hier angekommen. Hier wird dem compiler gesagt: hat funktioniert, programm jetzt schliesen.

} // das ENDE. nach der klammer kommt NICHTS.




//hello world.



//COPYRIGHT von diesem quelltext geh�rt DAVID MATHEJA.         MADE IN GERMANY
//Bearbeitet mit Microsoft Visual Studio (Copyright Microsoft denk ich mal...)