
#include <iostream>		//Das  L�dt die Bibliothek glaub ich... (update: JA tut es)
	//+++ um so mehr + vor dem kommentar steht, um so wichtiger ist er.( ich werde wahrscheinlich schon ab zeile 30 damit aufh�ren weil es soviel kommentare sind(update: naja...)
	//ich entschuldige mich hier f�r rechtschreibfehler, Ich war an machen Tagen verdammt m�de, OK.
	//ignorier des GR�NE wenn du willst, ich hab �bertrieben mit den Kommentaren. Tut mir leid.
	//copyright DAVID MATHEJA (wichtig). hat mich 2 wertvolle stunden gekostet.( update MEHR!)
	//version 2.3 (egal, da ich eh kein update mehr mach, und ich keine vorherige version in umlauf bringe(aus GR�NDEN)
	//�ndere die kommentarfarbe zu hellgrau wenn es dich ernsthaft st�rt. ist schon ok f�r mich...
	//Es handelt sich hier um ein simples iergendwas zussammengeschmissen f�r lernzwecke Programm.
	//Ich hafte net f�r schaden den dieses Programm verursacht. LOL.(mehr sag ich net dazu)
	//ernsthaft du solltest aufpassen was du hier machst, ganz besonders solltest du aufpassen dass du dieses programm nicht als dein eigenes preis gibst. (dann bekommst n problem mit mir)

























int main()					//+++was es macht? nix. ist aber wichtig.
							// vielleicht fragst du dich, was sollen die Komentare?. gute Frage... 
							//tu dir keinen zwang an unnn�tige Kommentare zu l�schen(auch wenn es mich  nebenbei viel zeit gekostet hat). nach einem kommentar kommt kein code mehr.

{		//+++mit der komischen klammer f�ngt das programmieren erst richtig an, ausser du kappierst hier nix.

	double flache;	//+++double, meine lieblings variable...(sie kann kommazahlen, und zwar deutlich mehr als float) 
	double umfang;
	double radius;
	double zahl1;
	double zahl2;
	double durchmesser;
	const double pi = 3.14;		//+const macht aus der variable eine Konstante. (eine FESTE ZAHL)
	
	int a = 12; //+damit wird die variable a erschaffen, genauer erkl�rt: int steht f�r einen variablen typen der nur nat�rliche zahlen benutzen kann,und zwar belegt er genau 4 bytes (32bit). in deinem																																												mir war langweilig, also ignoriere das folgende srg`fX1hKjd#aYvfiHdNmhaGtShkegjUak-aqijkjcdh
				//+Arbeitsspeicher, egal was du da drin speicherst. mit dem = wird des gleich auf 12 gesetzt. wenn du nur eine sehr kurze variable brauchst nimm bool (; genau 1 bit. (0 oder 1 halt.)
				//+wenn bool dir dann doch zu wenig ist gibt es noch short, 2byte (16bit). vielleicht hast du dich schon immer gewundert, was ist ein bit und ein byte. 1 bit= 0 oder 1 und 1byte = 8bits
	std::cout << "TEST 213 (ich hab eh irgendwann mal vergessen zu z�hlen, es f�hlte sich aber ganz genau so an wie es da steht.)";//alles was im "HALLO! hier" ist wird als text ausgegeben.

	std::cout << "\n\nPROGRAMM ERFOLGREICH GELADEN\n\tEIN VIRUS WURDE ENTDECKT! SIE M�SSEN JETZT UPGRADEN, HEUTE F�R NUR 199,98�!!!11!!!1!\n\n\nbeeilung, ich meins ernst .\nEnter dr�cken um Hinweise zu bekommen (ES FALLEN DIE NORMALEN(NAJA) GEB�HREN AN";
	// mit \n, wie du oben sehen kannst, sorgt daf�r das eine neue zeile beginnt. und \t ist ein tab, also			ein grosser abstand.	
	std::cin.get();//Hier wird der User aufgefordert die ENTER taste zu dr�cken. Praktisch bei story spielen.(nein.) (warum?) (einmal auf enter gedr�ckt, wird diese funktion immer �bersprungen

				   //nebenbei, Ich kann trotz der ganzen rechtschreibfehler garantieren das es 0 Fehler im code gibt. (!keine garantie!)

	std::cout << "\n\nsie m�ssen mindestens... ach geb einfach dein alter ein um dieses programm spielen zu k�nnen (KEINE BUCHSTABEN! DA ST�RZT ES AB!)\n";

	std::cin >> a;

	std::cout << "\ndanke f�r IHRE kaufbest�tigung (;. mit " << a << " milionen euros\n der VIRU� ist fertig geladen\n(die dinger sind net einfach zu machen, aber du bekommst heute einen GRATIS!!1!!!)";


	



b:;// darf ich vorstellen? mit wem red ich hier �berhaupt... egal, das Hier ist b, es ist einfach nur b. wenn befohlen wird goto b; dann landet der compiler wieder hier.( wichtig f�r sp�ter
		//hier k�nnte auch ein anderer buchstabe oder wort stehen, es ist wie ein portal welches ein gegenst�ck ben�tigt wie goto b;   ACHTUNG! es darf keine ZAHL sein, kein existierender BEFEHL,
		//und keine VARIABLE. wenn du einfach  nur buchstaben nimmst die noch nicht als irgendwas benutzt werden bist du auf der sicheren seite.



	std::cout << "\n\nWILLKOMMEN ZUM TOLLEN RECHENDINGSBUMS!\ngebe den durchmesser ein. Es geht  um einen Kreis, falls du den Titel nicht lesen kannst.\nw�rst du mal lieber als du 5 warst in die schule gegangen anstatt zu kiffen\n DURCHMESSER EINGEBEN:   ";
	std::cin >> durchmesser;// hier wird eine eingabe aufgefordert, die bewirkt das die Variable durchmesser auf die eingabe gesetzt wird. Sehr wichtig!
	
	radius = durchmesser / 2;//BERECHNUNGEN
	umfang = pi * durchmesser;//FORMELN
	flache = pi * (radius*radius);//WIRD NICHT AUF DEM BILDSCHIRM GEZEIGT

	std::cout << "UMFANG  " << umfang;// textausgabe mit anschliesender Variablen auslesung.

	std::cout << "\n FL�CHENINHALT  " << flache;// sollte leicht zu verstehen sein, genau wie 1 weiter oben

	std::cout << "\n RADIUS ist" << radius;//+das gleiche wie oben...

	std::cout << "\n 1: Nochmal\n 2:Men�/Copyright\negal: programm beendet sich\n";

		std::cin >> a; // hier wird der benutzer mal wieder aufgefordert eine variable
	if (a == 1)					// falls (a ist 1)                      an dieser stelle solltest du wissen das es �bersprungen wird wenn es nicht zutrifft, also zb. wenn a den wert 5 besitzt. 
	{
		system("cls");			//tu das {bla bla}
		goto b;
	}
	else if (a == 2)				//sonst falls (a ist 2)
	{
	m:;
		system("cls");			//tu das {bla bla}
		
		std::cout << "copyright von DAVID MATHEJA. \n ich weiss zwar net genau was ein copyright ist, \nich weiss aber das das mein Programm ist was du da benutzt. (;\n\n1: Pi berechner \n3:Taschenrechner\n";
		
		std::cin >> a;
		
		if (a == 1) {      //du kannst auch mehrere if ineinander machen, falls mehreres zutrffen muss um an ein bestimmtes ziel zu kommen

			goto b;
		}
		
		else if (a == 3) {
		
		t:;
			system("cls");
			
			std::cout << "COPYRIGHT@DAVIDMATHEJA 17.02.2018\n mathejadavid@gmail.com\n willkommen beim \t-`,Taschenrechner�,- \n (ein altes programm von mir, nicht zu viel erwarten)\n\n";
		    std::cout << "\n1. ZAHL EINGEBEN \n";
			
			std::cin >> zahl1;						//eingabeaufforderung. die variable merkt sich die zahl und wartet. (variablen warten nicht, sie sind privatversichert)  nur ein scherz.
			
			std::cout << "\n ZAHL 2 EINGEBEN\n";
			
			std::cin >> zahl2;      //das gleiche wie oben... (ich rechne damit dass du genug humor hast um sowas zu verstehen, und am ende nicht irgendein dreck von dir gibst.)
			
			std::cout << "\n" << zahl1 << "+" <<zahl2 << "=" << zahl1+zahl2;	//Variablen geben ihren wert aus wenn sie ohne "geschrieben" werden	//hier werden die zwei zuvor eingegebenen Zahlen mit  (+,-,*,/) kombiniert. zahl1 ist immer am anfang!!!!
			std::cout << zahl1 << "-" <<zahl2 << "=" << zahl1-zahl2;			//in C++ hat jeder anfang auch ein Ende zb: {Formel } , (bedingung) ,oder auch std::cout<< der output ;		Das ;semikolon muss nach jedem zeilenende mit befehlen kommen!										
			std::cout << zahl1 << "*" <<zahl2 << "=" << zahl1*zahl2;
			std::cout 		/*gv�ujhvjhbvdgAsvqImDvfjhvmtahTkhjEhjGahkjjacgh*/<< zahl1 << "/" << zahl2 << "=" << zahl1/zahl2; 
			std::cout << "\n\n keine haftung bei Virus \n 1:Wiederholen \n 2:Pi berechnung\n3: HAUPTMEN�\n";
			
			std::cin >> a;
			
			if (a == 1) {
				system("cls");  //r�umt auf (l�scht die konsole) variablen bleiben nat�rlich erhalten!
				goto t;         //quasi ein portal zu t:;


			}
			else if (a == 2) { //wichtig "=" ist eine zuweisung. zb.(a w�re dann 2(a=2))(!!!in dem fall erzeugt es aber einen error!!!). "==" ist eine logische br�cke (ist a gleich 2?)
				system("cls");														//ich benutze a als variable f�r men�verzeichnisse, und alle anderen buchstaben f�r den goto befehl.
				goto b;																//du kannst auch w�rter nehmen. Erinnere dich, keine zahlen am anfang
			}
			else if (a == 3) {
				system("cls");
				goto m;

			}



		}
	}
	else  //else auch "sonst" genannt. (also wenn nichts der vorherigen zutrifft) mach das programm weiter.


		std::cin.get();// das ist unn�tig. einmal auf enter, immer auf enter. MERKEN!
	std::cout << "uhafhfdQhasfYoashBfoidshnconaYsnxnkjalnxjnxjlnjnadoajvoidiqomiawtuheeojiaqwuerioewuriojhfdskjcnsikykamdmsaondjosnfnajBsRdfndjnfjUdncjasmndksalkdslkdk";//der User sieht des eh net
	return 0;// endlich bin ich hier angekommen. Hier wird dem compiler gesagt: hat funktioniert, programm jetzt schliesen.

} // das ENDE. nach der klammer kommt NICHTS.

//das kleinste C++ programm. 

//		#include <iostream>
//		int main(){
//		std::cout<<"hello world.";         //dieses programm bring GARNICHTS.
//		return 0;	
//		}
//


//teSt1``!$(&tEst2_:;)&$gAsdHdgapVkiGddmFaktdhrefJzarftxtdzrrdLEL

//COPYRIGHT von diesem quelltext geh�rt DAVID MATHEJA.         MADE IN GERMANY
//Dieser Code wurde geschrieben und compilliert mit Microsoft Visual Studio (Copyright Microsoft denk ich mal...)

//behaupte lieber nicht du h�ttest das hier programmiert, ohne �berhaupt zu wissen wie einfach es doch ist.

//jetzt mal ernst. dieses Programm beinhaltet weder Viren noch kann es etwas mit deiner Kreditkartennummer anfangen (falls du an der stelle wo das alter abgefragt wurde diese eingegeben hast).
//ich mache Keine Viren, da sie keinen nutzen haben. wenn doch ruf mich an, Ich mach�s.
//wenn du keine ahnung bei C++ hast, und dir es auch keinen spa� macht, du aber gerne mit scratch2 programmierst, denke nicht du bist nicht intelligent genug f�r C++. Jeder muss mal klein anfangen.
//ich empfehle es so wie ich zu machen: scratch2 (erst auf deutsch dann englisch)so lange programmieren bis du wei�t, was jeder einzelne befehl macht, und du schon gro�e rpgs und strategiespiele 
//programmieren kannst. 
//wenn dir ein computer zu teuer ist, hol dir einen Raspberrypi 3.(20-50�) zum programmieren ist des vollkommen inordnung und man kann mit dem ding So ziemlich alles machen was man halt machen kann.

//mit anderen programmiersprachen ist es deutlich schwieriger, zum beispiel gibt es bei manchen keine fehler anzeige oder du musst bei zeile 100 anfangen, weil du das programm nicht verschieben kannst!.
//manche gehen noch so weit hust java hust und machen befehle mit teilweise Gro�buchstaben, was dass lernen erschwert.

//ich verbrachte etwa gleichviel zeit mit kommentare schreiben und mit code schreiben.







void men�programm() {             //erstmal ignorieren wenn du ein anf�nger bist!
												//hier ist ein programmblock. immer wenn "men�programm" aufgerufen wird passiert das. ist ne platzsparsache f�r h�ufig verwendeten code und ist sehr praktisch f�r grosse programme.

	{
	m:;
		system("cls");			//tu das {bla bla}

		std::cout << "copyright von DAVID MATHEJA. \n ich weiss zwar net genau was ein copyright ist, \nich weiss aber das das mein Programm ist was du da benutzt. (;\n\n1: Pi berechner \n3:Taschenrechner\n";
		//Anf�nger, weiter runter
		std::cin >> a;

		if (a == 1) {      //du kannst auch mehrere if ineinander machen, falls mehreres zutrffen muss um an ein bestimmtes ziel zu kommen

			goto b;
		}
		//dieser block ist vielleicht noch unten im programm drin. ich h�tte ihn auch gleich da lassen k�nnen, brauchte aber ein beispiel f�r unterprogramme.
		else if (a == 3) {

		t:;
			system("cls");

			std::cout << "COPYRIGHT@DAVIDMATHEJA 17.02.2018\n mathejadavid@gmail.com\n willkommen beim \t-`,Taschenrechner�,- \n (ein altes programm von mir, nicht zu viel erwarten)\n\n";
			std::cout << "\n1. ZAHL EINGEBEN \n";

			std::cin >> zahl1;						//eingabeaufforderung. die variable merkt sich die zahl und wartet. (variablen warten nicht, sie sind privatversichert)  nur ein scherz.

			std::cout << "\n ZAHL 2 EINGEBEN\n";

			std::cin >> zahl2;      //das gleiche wie oben... (ich rechne damit dass du genug humor hast um sowas zu verstehen, und am ende nicht irgendein dreck von dir gibst.)

			std::cout << "\n" << zahl1 << "+" << zahl2 << "=" << zahl1 + zahl2;	//Variablen geben ihren wert aus wenn sie ohne "geschrieben" werden	//hier werden die zwei zuvor eingegebenen Zahlen mit  (+,-,*,/) kombiniert. zahl1 ist immer am anfang!!!!
			std::cout << zahl1 << "-" << zahl2 << "=" << zahl1 - zahl2;			//in C++ hat jeder anfang auch ein Ende zb: {Formel } , (bedingung) ,oder auch std::cout<< der output ;		Das ;semikolon muss nach jedem zeilenende mit befehlen kommen!										
			std::cout << zahl1 << "*" << zahl2 << "=" << zahl1 * zahl2;
			std::cout 		/*gv�ujhvjhbvdgAsvqImDvfjhvmtahTkhjEhjGahkjjacgh*/ << zahl1 << "/" << zahl2 << "=" << zahl1 / zahl2;
			std::cout << "\n\n keine haftung bei Virus \n 1:Wiederholen \n 2:Pi berechnung\n3: HAUPTMEN�\n";

			std::cin >> a;

			if (a == 1) {
				system("cls");  //r�umt auf (l�scht die konsole) variablen bleiben nat�rlich erhalten!
				goto t;         //quasi ein portal zu t:;


			}
			else if (a == 2) { //wichtig "=" ist eine zuweisung. zb.(a w�re dann 2(a=2))(!!!in dem fall erzeugt es aber einen error!!!). "==" ist eine logische br�cke (ist a gleich 2?)
				system("cls");														//ich benutze a als variable f�r men�verzeichnisse, und alle anderen buchstaben f�r den goto befehl.
				goto b;																//du kannst auch w�rter nehmen. Erinnere dich, keine zahlen am anfang
			}
			else if (a == 3) {
				system("cls");
				goto m;

			}



		}
	}
	else
	return 0;

}
