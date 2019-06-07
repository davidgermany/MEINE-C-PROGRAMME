// das ist ein kommentar. WILLKOMMEN IN DER STARK GEKÜRZTEN FASSUNG MEINES PROGRAMMS(ja, es gibt noch ein deutlich längeres). hier ist alles mögliche drin was man halt mit zahlen machen kann.-David Matheja.
#include <iostream>	// wichtiges ressourcenpack, enthält alles was man am anfang braucht
#include <climits> // ist nur interresant für die Variablen tabelle
#include <iomanip> // das ist eine kleine hilfe um nachkommastellen korrekt anzeigen zu lassen
#include <string>





int main()			// viele c++ anfänger fragen sich wahrscheinlich wo der using namespace std ist. tja pech gehabt. hier wird programmieren gelernt, und zwar richtig. 

{

	double flache;	// hier wird eine variable erstellt. wenn du nicht weist was eine variable ist solltest du es lieber nochmal mit scratch probieren.  
	double umfang;	//diese variablen sind wichtig für das PI programm
	double radius;
	long double zahl1;
	long double zahl2;
	long double durchmesser;
	long double a1 = 0; //variablen für den gleichungsrechner
	long double bb = 0;
	long double zahl = 0;
	 double hilfe = 0;
	long double zah = 
	long double pa = 0					
	long double pb = 0;						
	int genauigkeit = 0; // hier hätte es auch ein short getan.
	
	std::string benutzer  = "was dein name?" ;   // string variablen sind halt was besonderes
	std::string virus = "bruder muss los";
	const long double pi = 3.14159265359;		//+const macht aus der variable eine Konstante. (eine FESTE ZAHL)

	short a = 12; //a wird erstellt und gleich auf 12 gesetzt. INT variablen können nur ganze zahlen benutzen
	a += 3; //a wird 3 grösser (hier ist das = wichtig) das = hat die macht variablen zu ändern. es geht nur mit = !!!

	std::cout << "TEST " << a << std::endl;  // Textausgabe. << std::endl ; macht ist ein zeilenumbruch (neue zeile)
												//std:: ruft die bibliothek auf. wenn du eigene befehle schreibst musst du es nicht schreiben.
	std::cout << "\n\tPROGRAMM ERFOLGREICH GELADEN!\n bitte Name eingeben und ENTER für nächste BEFEHLE\n NAME:"; // \n macht eine neue zeile \t ist ein tab. MERKEN!
	std::cin >> benutzer; 
	std::cin.get();// wartet auf ENTER. (bringt aber nix, weil: im vorherigen befehl wird schon enter gedrückt, das programm geht also direkt weiter.


	std::cout << "\n\ngeben sie eine beliebige ZAHL ein um das Programm zu starten, und etwas anderes um es zu beenden\ndein Name ist: "<< benutzer<< "\n\n gib eine ZAHL ein";

	std::cin >> a; //die eingegebene zahl setzt a auf die eingegebene zahl

	std::cout << "\nProgramm startet... FERTIG";

tb:; // tb ist ein ort. er ist hier. wird goto tabelle aufgerufen landet der compiler hier, und macht weiter.

									//!!!!!folgende (bis 55 )zeilen können ignoriert werden!!!!!!!!!!!!!!!!!!!!!!!!!!!!!************************
			//diese tabelle ist praktisch um zu testen op dieser compiler mit dem  programm klarkommt. jeder hat sein eigenes c++ gemacht (MICROSOFT, ETC...)

	std::cout << "\tTEST 084\n\n\tWillkommen zu david`s variablen-byte und Zahlen Tabelle. \n\twenn jemand ein besserer name einfällt hier: mathejadavid@gmail.com"; //nur TEXTAUSGABE \t ist tab
	std::cout << std::endl << "\n NAME DER VARIABLE	| BYTE  | MAX ZAHLENWERT	| NORMAL	|KOMMENTAR";		//du kannst das hier ignorieren wenn du willst
	std::cout << std::endl << " int (natürliche zahlen)|" << sizeof(int) << "\t|" << INT_MAX << "		|4		|NORMAL ist empfohlen";
	std::cout << std::endl << " float			|" << sizeof(float) << "\t|" << FLT_MAX << "		|4		|BYTE sind deine menge an bytes für	";				//es war ein bisschen schwer alles so hinzu bekommen das es passt
	std::cout << std::endl << " double			|" << sizeof(double) << "\t|" << DBL_MAX << "		|8		|die variablen";
	std::cout << std::endl << " long double		|" << sizeof(long double) << "\t|" << LDBL_MAX << "		|8 ";         // dieses programm ist eigentlich sehr einfach
	std::cout << std::endl << " short			|" << sizeof(short) << "\t|" << SHRT_MAX << "			|2 ";
	std::cout << std::endl << " char			|" << sizeof(char) << "\t|" << SCHAR_MAX << "			|1 ";
	std::cout << std::endl << " bool			|" << sizeof(bool) << "\t|0 oder 1		|" << "1" << std::endl;
	std::cout << std::endl << " long long		|" << sizeof(long long) << " max:"<<LONG_MAX ;
	std::cout << "\n\n programm neustarten mit 0 oder 2, \nHauptmenü mit 1";
	std::cin >> a;
	if (a == 1)
	{
		system("cls"); // löscht konsole. praktisch bei grösseren programmen.

		goto m; // der compiler geht zum punkt "tabelle"
	}
	else if (a == 2) {

		system("cls");

		goto tb;
	}

	else if (a == 0) { goto tb; } // man kann es schreiben wie man will. es ist auch möglich alles in eine zeile zu schreiben, dann brauch man aber ein wiiiiiiidddeeee screen.sowas wie 96:1

b:;

	system("cls");  // leert die console (wird häufig verwendet bei langen text programmen)
	std::cout << "\n\nWILLKOMMEN BEIM PI RECHNER 21.04.2019\ngebe den durchmesser deines KREISES ein. \n ich weiss der alte titel hat mir auch viel besser gefallen...\n DURCHMESSER EINGEBEN:   "; // ach ja, die guten alten zeiten... (insider, kennt man aber)
	std::cin >> durchmesser;// EINGABE

	radius = durchmesser / 2;			//BERECHNUNGEN
	umfang = pi * durchmesser;			//und FORMELN wie diese
	flache = pi * (radius*radius);		//werden NICHT AUF DEM BILDSCHIRM GEZEIGT

	std::cout << "UMFANG  " << umfang;	// textausgabe mit anschliesender Variablen auslesung.

	std::cout << "\n FLÄCHENINHALT  " << flache;	// sollte leicht zu verstehen sein, genau wie 1 weiter oben

	std::cout << "\n RADIUS ist" << radius;			//+das gleiche wie oben...

	std::cout << "\n 1: Nochmal\n 2:Menü/Copyright\negal: programm beendet sich\n";

	std::cin >> a; // hier wird der benutzer mal wieder aufgefordert eine variable einzugeben. (buchstaben können das programm im moment noch zum crashen bringen, wird bald behoben (;  )
	if (a == 1)					// falls (a ist 1)                      an dieser stelle solltest du wissen das es übersprungen wird wenn es nicht zutrifft, also zb. wenn a den wert 5 besitzt. 
	{
		system("cls");			//tu das {bla bla}
		goto b;
	}
	else if (a == 2)				//sonst falls (a ist 2)
	{
	m:;
		system("cls");			//tu das {berechne bla bla}

		std::cout << "copyright von DAVID MATHEJA. \n ich weiss zwar net genau was ein copyright ist, \nich weiss aber das das mein Programm ist was du da benutzt. (;\n0: Prüftabelle für bytes\n1: Pi berechner \n3:Taschenrechner\n4: Gleichungslöser \n 5: sonstiges (wurzeln, pytagoras sin cos, bla bla)\n\n buchstaben wie o:/ö , a:/ä , u:/ü , ss/ß ,  werden bei intel CPUs nicht erkannt und als komische zeichen dargestellt.\n ";

		std::cin >> a;

		if (a == 1) {      //du kannst auch mehrere if ineinander machen, falls mehreres zutrffen muss um an ein bestimmtes ziel zu kommen

			goto b;
		}
		else if (a == 0) { goto tb; }
		else if (a == 5) { goto wurzelp; }
		else if (a == 3) {
			goto t;

		}
		else  //sonst (also wenn nichts der vorherigen zutrifft) mach das programm weiter.
			gl:;
		system("cls");
		std::cout << "\nwillkommen beim GLEICHUNGSLÖSER!\nwelche art von gleichung muss gelöst werden? \n(es wird nach a gelöst)\n\n1:Lineare gleichung\n( ?X + ? = ?X + ?) \n\n\n2:automatische erkennung\n***coming soon\n ";

		std::cin >> a;
		if (a == 1) {																	//+++++++++++++++++++

			system("cls"); // leert die console
			std::cout << "deine rechnung sollte am ende so (4a + 4 = 3a + 3) aussehen\ndu gibst nur ZAHLEN! ein!. VERSTANDEN?!\nOkay, dann gib mal ein wie viele a es links gibt. \n GEBE DAS ? EIN ( >?<a + _ = _a + _ ) \t";
			std::cin >> a1;
			std::cout << "\nund wie gross ist die zahl die nach dem ersten + kommt? (" << a1 << "a + >?< =...\t";
			std::cin >> zahl;
			std::cout << "\nOk jetzt die nach dem = (" << a1 << "a + " << zahl << " = >?<a + _ )";       // war aufwendig ist aber praktisch für den user. ausser er ist blind, dann bringt des nix.
			std::cin >> bb;
			std::cout << "\njetzt die letzte zahl (" << a1 << "a + " << zahl << " = " << bb << "a + >?< )";
			std::cin >> zah;
			std::cout << "\nes wird berechnet: ###  " << a1 << "a + " << zahl << "  =  " << bb << "a + " << zah << "  ###";



			hilfe = zahl;
			zah = zah - hilfe;
			zahl = zahl - hilfe;
			hilfe = bb;
			bb = bb - hilfe;			//hier ist die programmierte formel von gleichungen. 
			a1 = a1 - hilfe;			//es macht nur den letzten schritt, aufgaben wie 4a + 1a + 3 = 3a + 2 sollten vorher zu 5a + 3 = 3a + 2 gerechnet werden. 
			hilfe = a1;				// im nächsten update mach ich das besser. Versprochen
			a1 = a1 / hilfe;
			zah = zah / hilfe;
			std::cout << " \nFERTIG.\n\n ###   a = " << zah << "   ###\n\n 1 um neu zu starten\n HAUPTMENÜ = 2";
			std::cin >> a;

			if (a == 1) {
				system("cls");
				goto gl;
			}
			else if (a == 2) {
				system("cls");
				goto m;
			}
		}

	t:;
		system("cls");

		std::cout << "COPYRIGHT@DAVIDMATHEJA 17.02.2017\n mathejadavid@gmail.com\n willkommen beim \t-`,Taschenrechner´,- \n (ein altes programm von mir, nicht zu viel erwarten)\n\n";
		std::cout << "\n1. ZAHL EINGEBEN \n";

		std::cin >> zahl1;						//eingabeaufforderung. die variable merkt sich die zahl und wartet. (variablen warten nicht, sie sind privatversichert)

		std::cout << "\n ZAHL 2 EINGEBEN\n";

		std::cin >> zahl2;      //das gleiche wie oben... (ich rechne damit dass du genug humor hast um sowas zu verstehen, und am ende nicht irgendein dreck von dir gibst.)

		std::cout << "\n" << zahl1 << "+" << zahl2 << "=" << zahl1 + zahl2 << std::endl;	//Variablen geben ihren wert aus wenn sie ohne "geschrieben" werden	//hier werden die zwei zuvor eingegebenen Zahlen mit  (+,-,*,/) kombiniert. zahl1 ist immer am anfang!!!!
		std::cout << zahl1 << "-" << zahl2 << "=" << zahl1 - zahl2 << std::endl;			//in C++ hat jeder anfang auch ein Ende zb: {Formel } , (bedingung) ,oder auch std::cout<< der output ;		Das ;semikolon muss nach jedem zeilenende mit befehlen kommen!										
		std::cout << zahl1 << "*" << zahl2 << "=" << zahl1 * zahl2 << std::endl;
		std::cout << zahl1 << "/" << zahl2 << "=" << zahl1 / zahl2 << std::endl;
		std::cout << "\n\n keine haftung bei Virusssen (rechtschreibung ist was für... nicht mich...) \n 1:Wiederholen \n 2:Pi berechnung\n3: HAUPTMENÜ\n";
		// gvÖujhvjhbvdgAsvqImDvfjhvmtahTkhjEhjGahkjjacgh /
		std::cin >> a;

		if (a == 1) {
			system("cls");  //räumt auf (löscht die konsole) variablen bleiben natürlich erhalten!
			goto t;         //quasi ein portal zu t:;


		}
		else if (a == 2) { //wichtig = ist eine zuweisung(a wäre jetzt 2)(!!!in dem fall erzeugt es aber einen error!!!). == ist eine logische brücke (ist a gleich 2?)
			system("cls");														//ich benutze a als variable für menüverzeichnisse, und alle anderen buchstaben für den goto befehl.
			goto b;																//du kannst auch wörter nehmen. Erinnere dich, keine zahlen am anfang
		}
		else if (a == 3) {
			system("cls");
			goto m;

		}
		else if (a == 4) // wenn nicht a==3 >> ist a == 4? wenn nicht a==4 >> programm macht einfach weiter
			goto gl;

	}


wurzelp:;             //dass wurzel/ pytagoras sin tan dingsdabums
	bb = 0;
	system("cls;");
	std::cout << "pytagaras rechner von david m. welche aufgabenart soll gelöst werden?\n\n√(a^2+b^2) = c	1\n\n Wurzel berechnen 9=(3)(81) = gib 2 ein jannik! hier!\n\n höhensatz berechnen mit 3(nichts für janniks)\n\n";
	std::cin >> a;
	if (a == 1)
	{
		system("cls");
	abc:;
		std::cout << "\ngeb a ein\n";
		std::cin >> pa;
		std::cout << "\ngeb b ein\n";
		std::cin >> pb;

		pa = pa * pa;
		pb = pb * pb; // wie du aus mathe kennen solltest (pb²= pb*pb)
		pa = pa + pb; // wie beim pytagoras ding

		pb = 0; // die wird auf 0 gesetzt da sie jetzt als hilfsvariable dabei ist. ( wirst du nicht in mathe brauchen)
		
		genauigkeit = 10;

		while (pa != (pb*pb))
		{

			std::cout << "©DavidMatheja";
			pb += genauigkeit;

			if (pb*pb > pa)
			{
				pb -= genauigkeit;
				genauigkeit /= 10;
				
			}
		}

		if (genauigkeit < 0.000001) { goto wurzp; }


	wurzp:;
		std::cout << "c ist : " << pb << "\n1 um programm neu zu starten\n2 fürs hauptmenü\n";
		std::cin >> a;
		if (a == 1) { goto abc; }
		else if (a == 2) { goto m; }

	}



	else if (a == 2)

	{

	wurzel:;
		system("cls");
		std::cout << "\n wurzel eingeben \n";
		std::cin >> pa;
		pb = 0;
			if  (pa> 10000000000000000000) {
				genauigkeit = 1000000000;

				std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (bb == 3) { goto wurzf; }
					}
				}
			} // //1fertig 18
		else if (pa> 10000000000000000)	{
				genauigkeit = 100000000;

				std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (bb == 3) { goto wurzf; }
					}
				}
			}//2fertig (16x0)
		else if (pa> 100000000000000){
				genauigkeit = 1;

				std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (bb == 3) { goto wurzf; }
					}
				}
			}//3f 14
		else if (pa> 1000000000000){
				genauigkeit = 1;

				std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (bb == 3) { goto wurzf; }
					}
				}
			}//4f 12
		else if (pa> 10000000000){
				genauigkeit = 1;

				std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (bb == 3) { goto wurzf; }
					}
				}
			}//5f10
		else if (pa> 100000000){
				genauigkeit = 1;

				std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (bb == 3) { goto wurzf; }
					}
				}
			}//6f8
		else if (pa> 1000000){
		genauigkeit = 1;

		std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
		while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{

				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (bb == 3) { goto wurzf; }
			}
		}
 }//7fertig 6
		else if (pa> 10000){
		genauigkeit = 1;

		std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
		while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{

				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (bb == 3) { goto wurzf; }
			}
		}
 }//8 4
		else if (pa> 100){
		genauigkeit = 1;

		std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
		while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{

				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (bb == 3) { goto wurzf; }
			}
		}
 }//9 2
		else if (pa< 101){
		genauigkeit = 1;

		std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
		while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{

				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (bb == 3) { goto wurzf; }
			}
		}
 }//10 -0x0
	

	wurzf:;
		
		std::cout << " \n\nberechnung erfolgreich.\n wurzel ist : " << pb << " oder die potenz^2 ist: " << pa * pa << " \n\n der text bescgreibt die benötigte recgenleistung.\nmehr text , mehr leistung.\n\n1: neustart \n\n2: hauptmenü\n\t";
		std::cout << "vielleicht ist diese zahl besser : "<<std::setprecision(35) << pb<< std::endl ;
		std::cin >> a;

		if (a == 1) { goto wurzel; }
		else if (a == 2) { goto m; }
	}//beendet 2 glaube ich...
	




	std::cin.get();// das ist unnötig. einmal auf enter, immer auf enter. MERKEN! //KEIN CODE NACH DIESER ANWEISUNG!!!!!!!!!!!! einfach so...+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	std::cout << "uhafhfdQhasfYoashBfoidshnconaYsnxnkjalnxjnxjlnjnadoajvoidiqomiawtuheeojiaqwuerioewuriojhfdskjcnsikykamdmsaondjosnfnajBsRdfndjnfjUdncjasmndksalkdslkdk";//der User sieht des eh net , da das programm sich sofort nach ausgabe beendet
	return 0;// endlich bin ich hier angekommen. Hier wird dem compiler gesagt: hat funktioniert, programm jetzt schliesen.


} //beendet main () {..............................


/* Wurzel formel++++

		genauigkeit = 1     ;

		std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
		while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{
				
				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (bb == 3) { goto wurzf; }
			}
		}
		
		
		
*/