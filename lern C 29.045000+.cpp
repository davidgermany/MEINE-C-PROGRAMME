// das ist ein kommentar. WILLKOMMEN IN DER STARK GEKÜRZTEN FASSUNG MEINES PROGRAMMS (92% kommentar-TEXT wurde ausgelöscht.) es ist aber noch 100% des codes da, und ja, es gibt noch ein deutlich längeres. hier ist alles mögliche drin was man halt mit zahlen machen kann.-David Matheja. 
//	Dieses Programm kann:
//		-Byte pro variable anzeigen.
//		-viele rechenfunktionen sind hier dabei. ( normales +-*/ ; wurzeln ; Pythagoras formeln ; Sin Cos Tan Formeln (9) ;   mehr sind bald verfügbar (;  )
//		-ein paar extra funktionen wie das hilfe programm ( noch in der Testphase )
//		-Spiele ( jetzt noch net, aber bald... vielleicht )
//		-ein "ordentliches" Menü.
//		-und nicht vergessen: copyright david matheja @2019. ich kann es einfach nicht oft genug schreiben.

#include <iostream>	// wichtiges ressourcenpack, enthält alles was man am anfang braucht, und brauchen wird (verschiedene variablen, grundlegende Befehle, etc...)
#include <climits> // ist nur interresant für die Variablen tabelle
#include <iomanip> // das ist eine kleine hilfe um nachkommastellen korrekt anzeigen zu lassen
#include <string> // eine "variable" die text speichern kann. (sie muss speziel includiert werden)
#include <fcntl.h>
#include <io.h>
#include <stdio.h>
// wenn du des verstehst... naja ist besser als nix.

double PRÄSENTATIONMATHE();
double sincostan();			// prototyp!!!!!!!!!
void swap(double wert1, double wert2, double wert3);		// prototyp. wichtig für das letzte?... programm glaube ich. (vielleicht auch nicht mehr)
 double primzahlrechner( ); // prototyp

int main(void)// viele c++ anfänger fragen sich wahrscheinlich wo der using namespace std ist. tja pech gehabt. hier wird programmieren gelernt, und zwar richtig. 

{
	//   _setmode(_fileno(stdout), _O_U16TEXT);   //experimentell!!!! lässt zeichen ausgeben
	setlocale(LC_ALL, "German"); // effizienter liferant für ÄÖÜ und äöü`s, sowie ²³ß und co.
	int primzahl = 0, prime = 0, B=0;
	   // Primzahlvariablen0
	double wert1 =1, wert2=18, wert3=0; //du kannst mehrere variablen gleichzeitig erstellen. ich hätte schon früher damit anfangen sollen.
	double G = 0;
	double A = 0;
	double H = 0;
	double W = 0;
	double bp = 10; // bp= benutzer präzision
	double flache;	// hier wird eine variable erstellt. wenn du nicht weist was eine variable ist solltest du es lieber nochmal mit scratch probieren.  
	double umfang;	//diese variablen sind wichtig für das PI programm
	long double radius;
	long double zahl1;
	long double zahl2; // long double und double sind bei visual studio genau gleich. es existieren IDEs die bei long double 16 Byte freigeben. WICHTIG: verwechsle niemals bits (b) mit Bytes (B) 8 bits =(effektiv) 1 Byte
	long double durchmesser;
	long double a1 = 0; //variablen für den gleichungsrechner
	long double bb = 0;
	double a = 0;
	long double zahl = 0;// viele variablen werden häufig genutzt. ich hätte auch doppelt soviele gebrauchen können, im programm werden also manche variablen doppelt genutzt, benutzung 2 verschiedener programme kann dazu führen das komische zahlen rauskommen, ich habe aber dafür gesorgt das sie nicht kolidieren.      (;
	long double hilfe = 0;
	long double zah = 0; //												 copyright david matheja ^_^
	long double pa = 0;											//	(°v°) in cooparation with niemand LOL
	long double pb = 0;
	long double genauigkeit = 0;
	std::string benutzer = "was dein name?";   // string variablen sind halt was besonderes
	std::string virus = "bruder muss los";
	
	const long double pi = 3.14159265359;		//+const macht aus der variable eine Konstante. (eine FESTE ZAHL)

	 a = 2045; //a wird erstellt und gleich auf 12 gesetzt. INT variablen können nur ganze zahlen benutzen
	a += 3; //a wird 3 grösser (hier ist das = wichtig) das = hat die macht variablen zu ändern. es geht nur mit = !!!

	std::cout << "TEST V.1." << a << std::endl;  // Textausgabe. << std::endl ; macht ist ein zeilenumbruch (neue zeile)
												//std:: ruft die bibliothek auf. wenn du eigene befehle schreibst musst du es nicht schreiben.
	std::cout << "\n\tPROGRAMM ERFOLGREICH GELADEN! ENTER für nächste BEFEHLE\n *optional NAME:"; // \n macht eine neue zeile \t ist ein tab. MERKEN!
	std::cin >> benutzer;
	std::cin.get();// wartet auf ENTER. 

												//																				>_<
	std::cout << std::endl <<std::endl <<benutzer <<" gib 2 ein um gleich zum hauptmenü zu kommen \gebe die präzisionsstärke ein (höher mehr präzision, kleiner schnellere berechnungen)  um das Programm zu starten, und etwas anderes um es zu beenden\n PS:normal sollte es 100 sein: ";
	std::cin >> bp;  //die eingegebene zahl setzt bp (wird später benötigt!!!!) auf die eingegebene zahl. löschen dieses befehls,... lass es lieber...
	

	std::cout << "\nProgramm startet... FERTIG";

tb:; // tb ist ein ort. er ist hier. wird goto tabelle aufgerufen landet der compiler hier, und macht weiter.

									//!!!!!folgende (bis 55 )zeilen können ignoriert werden!!!!!!!!!!!!!!!!!!!!!!!!!!!!!************************
			//diese tabelle ist praktisch um zu testen op dieser compiler mit dem  programm klarkommt. jeder hat sein eigenes c++ gemacht (MICROSOFT, CXXDROID , ETC...)

	std::cout << "\tTEST 084\n\n\tWillkommen zu david`s variablen-byte und Zahlen Tabelle. \n\twenn jemand ein besserer name einfällt hier: mathejadavid@gmail.com"; //nur TEXTAUSGABE \t ist tab
	std::cout << std::endl << "\n NAME DER VARIABLE	| BYTE  | MAX ZAHLENWERT	| NORMAL	|KOMMENTAR";		//du kannst das hier ignorieren wenn du willst
	std::cout << std::endl << " int (natürliche zahlen)|" << sizeof(int) << "\t|" << INT_MAX << "		|4		|NORMAL ist empfohlen";
	std::cout << std::endl << " float			|" << sizeof(float) << "\t|" << FLT_MAX << "		|4		|BYTE sind deine menge an bytes für	";				//es war ein bisschen schwer alles so hinzu bekommen das es passt
	std::cout << std::endl << " double			|" << sizeof(double) << "\t|" << DBL_MAX << "		|8		|die variablen";
	std::cout << std::endl << " long double		|" << sizeof(long double) << "\t|" << LDBL_MAX << "		|8 ";         // dieses programm ist eigentlich sehr einfach
	std::cout << std::endl << " short			|" << sizeof(short) << "\t|" << SHRT_MAX << "			|2 ";
	std::cout << std::endl << " char			|" << sizeof(char) << "\t|" << SCHAR_MAX << "			|1 ";			// dieses programm ist eigentlich nur hier drin weil ich lust hatte es zu machen, gebracht hat es mir trotzdem was. ( auf dem handy hat long double 16 Bytes ( bei cxxdroid), bei visual studio hat die längste variable 8 Byte) 
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

		system("cls"); //   ^_^ reinigt die konsole... 

		goto tb;
	}

	else if (a == 0) { goto tb; } // man kann es schreiben wie man will. es ist auch möglich alles in eine zeile zu schreiben, dann brauch man aber ein wiiiiiiidddeeee screen.sowas wie 96:1  >_< ok?

b:;

	system("cls");  // leert die console (wird häufig verwendet bei langen text programmen)
	std::cout << "\n\nWILLKOMMEN BEIM PI RECHNER 21.04.2019\ngebe den durchmesser deines KREISES ein. \n ich weiss der alte titel hat mir auch viel besser gefallen...-david m.\n DURCHMESSER EINGEBEN:   "; // ach ja, die guten alten zeiten... (insider, kennt man aber)
	std::cin >> durchmesser;// EINGABE

	radius = durchmesser / 2;			//BERECHNUNGEN
	umfang = pi * durchmesser;			//und FORMELN wie diese
	flache = pi * (radius*radius);		//werden NICHT AUF DEM BILDSCHIRM GEZEIGT

	std::cout << "UMFANG  " << umfang;	// textausgabe mit anschliesender Variablen auslesung.

	std::cout << "\n FLÄCHENINHALT  " << flache;	// sollte leicht zu verstehen sein, genau wie 1 weiter oben

	std::cout << "\n RADIUS ist" << radius;			//+das gleiche wie oben...

	std::cout << "\n 1: Nochmal\n 2:Menü/Copyright\negal: programm beendet sich\n";

	std::cin >> a; // hier wird der benutzer mal wieder aufgefordert eine variable einzugeben. (buchstaben können das programm im moment noch zum crashen bringen, wird bald behoben (;  )
	
	if (a == 'egal') {
		std::cout << "du nimmst es aber auch wörtlich alter...\n programm beendet sich nicht.\nFEHLER 304\firewall beschädigt\neustart erforderlich";
		std::cin >> a;
	}
	
	else if (a == 1)					// falls (a ist 1)                      an dieser stelle solltest du wissen das es übersprungen wird wenn es nicht zutrifft, also zb. wenn a den wert 5 besitzt. 
	{
		system("cls");			//tu das {bla bla}
		goto b;
	}
	else if (a == 2)				//sonst falls (a ist 2)
	{
m:; // wichtig! hier ist das menü!
		system("cls");			//tu das {berechne bla bla}

		std::cout << "copyright von DAVID MATHEJA. \n ich weiss zwar net genau was ein copyright ist, \nich weiss aber das das mein Programm ist was du da benutzt. (;\n0: Prüftabelle für bytes\n1: Pi berechner \n3:Taschenrechner\n4: Gleichungslöser \n 5: sonstiges (wurzeln, pytagoras sin cos, bla bla)\n\n buchstaben wie o:/ö , a:/ä , u:/ü , ss/ß ,  werden bei intel CPUs nicht erkannt und als komische zeichen dargestellt.\n\nWERBUNG: neu! primzahlrechner! 6 eingeben! 6! \n PRÄSENTATION_MATHE (ZYLINDER RECHNER) == 7\tWAHL: ";

		std::cin >> a;

		if (a == 1) {      //du kannst auch mehrere if ineinander machen, falls mehreres zutrffen muss um an ein bestimmtes ziel zu kommen

			goto b;
		}
		else if (a == 7) {  PRÄSENTATIONMATHE(); std::cin >> a; goto m; }
		else if (a == 6) {  primzahlrechner(  );  std::cout << " es hat länger gedauert des zum laufen zu bringen als gedacht. aber egal. gib irgendeine zahl ein. "; std::cin >> a;  goto m; }  //es ist eigentlich egal wie du des ordnest. Ich kann im chaos Arbeiten, und du?
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
	std::cout << "pytagaras rechner von david m. welche aufgabenart soll gelöst werden?\n\n√(a^2+b^2) = c	1\n\n Wurzel berechnen 9=(3)(81) = gib 2 ein jannik! hier!\n\n höhensatz berechnen mit 3\n4=sin cos oder tan formeln (9 formeln)\n";
	std::cin >> a;
	
	if (a == 4)
	{ // erster versuch eines prototypen

		sincostan();
		goto m;

	}
	else if (a == 1)
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

		while (1==1)
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











		// ich lasse mancmal viel platz, dieses programm ist eigentlich nur eine zeile lang. (kleiner scherz. es ist zwar möglich alles in einer zeile zu schreiben aber...mach es nicht ok? ausser du hast so einen 4K (1024:1) monitor)











if (pa > 10000000000000000000 * 10000000000000000000 * 10000000000000000000*10) {
			genauigkeit = 10000000000000000000 * 1000000000000000000*1000000000000000;

			std::cout << "sehr hohe zahl übrigens (; , es wird gerechnet mit: " << std::setprecision(40) << pa;
			while (1 == 1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
			{


				pb += genauigkeit;

				if (pb*pb > pa)
				{

					bb += 1;
					pb -= genauigkeit;
					genauigkeit /= 10;
					if (genauigkeit < 10000000000000000000*10000000000000000000*1000000 / bp) { goto wurzf; }
				}
			}
		} // //1fertig 18


		



		if (pa > 10000000000000000000 * 10000000000000000000 * 100) {
			genauigkeit = 10000000000000000000*100000000000000000;

			std::cout << "14es wird gerechnet mit: " << std::setprecision(20) << pa;
			while (1 == 1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
			{


				pb += genauigkeit;

				if (pb*pb > pa)
				{

					bb += 1;
					pb -= genauigkeit;
					genauigkeit /= 10;
					if (genauigkeit < 10000000000000000*1000000000 / bp) { goto wurzf; }
				}
			}
		} // //1fertig 18




	 else if (pa > 1000000000000000000 * 10000000000) {
		genauigkeit = 100000000000000;

		std::cout << "13es wird gerechnet mit: " << std::setprecision(15) << pa;
		while (1 == 1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{

				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (genauigkeit < 100000000000000 / bp) { goto wurzf; }
			}
		}
	} // //1fertig 18








	


	else if (pa > 1000000000000000000 * 1000000) {
	genauigkeit = 1000000000000;

	std::cout << "11es wird gerechnet mit: " << std::setprecision(10) << pa;
	while (1 == 1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
	{


		pb += genauigkeit;

		if (pb*pb > pa)
		{

			bb += 1;
			pb -= genauigkeit;
			genauigkeit /= 10;
			if (genauigkeit < 100000000 / bp) { goto wurzf; }
		}
	}
		} // //1fertig 18



		else if (pa > 1000000000000000000 * 10000) {
			genauigkeit = 100000000000;

			std::cout << "10es wird gerechnet mit: " << std::setprecision(5) << pa;
			while (1 == 1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
			{


				pb += genauigkeit;

				if (pb*pb > pa)
				{

					bb += 1;
					pb -= genauigkeit;
					genauigkeit /= 10;
					if (genauigkeit < 1000000000 / bp) { goto wurzf; }
				}
			}
		} // //1fertig 18


		else if (pa >  1000000000000000000*100) {
			genauigkeit = 10000000000;

			std::cout << "9es wird gerechnet mit: " << std::setprecision(5) << pa;
			while (1 == 1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
			{


				pb += genauigkeit;

				if (pb*pb > pa)
				{

					bb += 1;
					pb -= genauigkeit;
					genauigkeit /= 10;
					if (genauigkeit < 1000000000 / bp) { goto wurzf; }
				}
			}
		} // //1fertig 18

// HIER WIRD ES WEIRD+++++++++++++++++++++++++++++++++++++++++++++

			else if  (pa> 10000000000000000000) {
				genauigkeit = 1000000000;

				std::cout << "8es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (genauigkeit < 1000000000 / bp) { goto wurzf; }
					}
				}
			} // //1fertig 18
		else if (pa> 10000000000000000)	{
				genauigkeit = 100000000;

				std::cout << "7es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (genauigkeit < 100000000 / bp) { goto wurzf; }
					}
				}
			}//2fertig (16x0)
		else if (pa> 100000000000000){
				genauigkeit = 10000000;

				std::cout << "6es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (genauigkeit < 10000000 / bp) { goto wurzf; }
					}
				}
			}//3f 14
		else if (pa> 1000000000000){
				genauigkeit = 1000000;

				std::cout << "5es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (genauigkeit < 1000000 / bp) { goto wurzf; }
					}
				}
			}//4f 12
		else if (pa> 10000000000){
				genauigkeit = 100000;

				std::cout << "4es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (genauigkeit < 100000 / bp) { goto wurzf; }
					}
				}
			}//5f10
		else if (pa> 100000000){
				genauigkeit = 10000;

				std::cout << "3es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{


					pb += genauigkeit;

					if (pb*pb > pa)
					{

						bb += 1;
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (genauigkeit < 10000 / bp) { goto wurzf; }
					}
				}
			}//6f8
		else if (pa> 1000000){
		genauigkeit = 1000;

		std::cout << "2es wird gerechnet mit: " << std::setprecision(5) << pa;
		while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{

				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (genauigkeit < 1000 / bp) { goto wurzf; }
			}
		}
 }//7fertig 6
		else if (pa> 10000){
		genauigkeit = 100;

		std::cout << "1es wird gerechnet mit: " << std::setprecision(5) << pa;
		while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{

				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (genauigkeit < 100 / bp) { goto wurzf; }
			}
		}
 }//8 4
		else if (pa> 100){
		genauigkeit = 10;

		std::cout << "'00x es wird gerechnet mit: " << std::setprecision(5) << pa;
		while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit;

			if (pb*pb > pa)
			{

				
				pb -= genauigkeit;
				genauigkeit /= 10;
				if (genauigkeit < 10 / bp) { goto wurzf; }
			}
		}
 }//9 2													(°v°), bissl chaos hier, ich komm aber damit klar.
		else if (pa > 1) {
				genauigkeit = 1;

				std::cout << "es wird gerechnet mit: " << std::setprecision(5) << pa;
				while (1 == 1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
				{

					std::cout << genauigkeit;
					pb += genauigkeit;

					if (pb*pb > pa)
					{

						
						pb -= genauigkeit;
						genauigkeit /= 10;
						if (genauigkeit < 1/ bp) { goto wurzf; } //funktionierender effizienter prototyp. vorher war :   if (bb==3) {goto wurzf;}  // verursachte manchmal einen schweren bug der das programm kaputt machte.
					}
				}
			}
		else if (pa < 2) {
			genauigkeit = 1;
			std::cout << benutzer <<" warum so ne kleine zahl?\nes wird gerechnet mit: " << std::setprecision(5) << pa;
			while (1==1)// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


		pb += genauigkeit;

		 if (pb*pb > pa)
		{

			
			pb -= genauigkeit;
			genauigkeit /= 10;
			if (genauigkeit < 0.1 / bp) { goto wurzf; }
		}
		}// keine ahnung für was die dinger sind, so funktioniert es aber. mach sie weg und du hast n haufen fehler. bis ich des gefunden hatte...
		}
		}//10 -0x0   so bezeichnungen sind wichtig. des sieht aus als ob es nur ein roboter verstehen könnte, sorry. ^^'
	

	wurzf:;
		
		std::cout << " \n\nberechnung erfolgreich.\n wurzel ist : " << pb << " oder die potenz^2 ist: " << pa * pa << " \n\n der text bescgreibt die benötigte recgenleistung.\nmehr text , mehr leistung.\n\n1: neustart \n\n2: hauptmenü\n\t";
		std::cout << benutzer <<" vielleicht ist diese zahl besser : "<<std::setprecision(35) << pb<< std::endl ; // (35 ist die präzision. also wie viele nachkommaastellen die zahl ausgeben soll.
		
		std::cout << "\n\n3: präzision einstellen.";
		
		std::cin >> a;

		if (a == 1) { goto wurzel; }
		else if (a == 2) { goto m; }
		else if (a == 3) { std::cout << "eingabe präzision(höher = mehr ZEIT) nur zahlen von 100 wie 1000 oder 10000 oder 100000!!! sowas wie 5 ach du scheisse...^_^";
		std::cin >> bp;
		goto wurzel;
		}
	//beendet 2 glaube ich...
	



	
	std::cin.get();// das ist unnötig. einmal auf enter, immer auf enter. MERKEN! //KEIN CODE NACH DIESER ANWEISUNG!!!!!!!!!!!! einfach so...+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	std::cout << "uhafhfdQhasfYoashBfoidshnconaYsnxnkjalnxjnxjlnjnadoajvoidiqomiawtuheeojiaqwuerioewuriojhfdskjcnsikykamdmsaondjosnfnajBsRdfndjnfjUdncjasmndksalkdslkdk";//der User sieht des eh net , da das programm sich sofort nach ausgabe beendet
	return 0;// endlich bin ich hier angekommen. Hier wird dem compiler gesagt: hat funktioniert, programm jetzt schliesen.


} //beendet main () {..............................

// HERZLICH WILLKOMMEN AUF DER TEXT MÜLLHALTE! (den name dafür hast DU dir ausgedacht) verwirrend oder ? des programm ist voll mit lustigen fehlern. (ne)
/* Wurzel formel++++ LÖSCHEN! vergess ich eh... ^_^* 

		genauigkeit = 1 sollte stimmen    ; 

		std::cout << "es wird gerechnet mit: " << std::setprecision(pfünf) << pa;
		while (pa != (pb*pb))// hier kann die genauigkeit angepasst werden. nur nuller bearbeiten, und die 1 ist wichtig. (1 funktioniert auch, (10 vlt auch ist aber dumm))
		{


			pb += genauigkeit.;

			if (pb*pb > pa)
			{
				
				bb += 1;
				pb -= genauigkeit;
				genauigkeit /= 10
				if (bb == 3) { goto wurzf; }
			}
		}
		
		
		
*/																									//copyright 13.05.19 2019 david, david matheja 

	double sincostan()
	{
		int main();
		system("cls");
		
		double a = 0;
		double G = 0;
		double A = 0;
		double H = 0;
		double W = 0;
	sct:;
		std::cout << "SIN COS TAN programm\n was willst du berechnen?\n \n 1/sin für SIN (sinuswert von winkel = Gegenkathete/Hypotenuse \n 2/cos für COS (cosinuswert von winkel = Ankathete/Hypotenuse \n 3/tan für TAN (tanoswert von winkel = Gegenkathete/Ankathete\n\n5 für hilfe\n\t";
		std::cin >> a;

		if (a == 1 || a == 11)
		{    //start von if 1
			system("cls");
			std::cout << " gib ein was du weisst. (gegenkathete, hypotenuse oder sinus eines winkels) \nes werden genau 2 werte benötigt! \n gib 0 ein wenn du dieses wissen willst\n\n GEGENKATHETE des Winkels\tG\n\t ";

			std::cin >> G;
			std::cout << "\nok, jetzt hypothenuse\t H\n\t";
			std::cin >> H;
			std::cout << "k, jetz den winkel sinus\tW\n\t";
			std::cin >> W;

			if (G == 0) {//start von sin
				G = W * H;
				std::cout << "\nG = W*H =" << G;
			}

			else if (H == 0)
			{
				H = G / W;
				std::cout << "H= G/W = " << H;
			}

			else if (W == 0)
			{
				W = G / H;
				std::cout << "W= G/H = " << W;
			}
		} //ende sin



		else if (a == 2) { //start
			system("cls");
			std::cout << " gib ein was du weisst. (Ankathete, hypotenuse oder cosinus eines winkels) \nes werden genau 2 werte benötigt! \n gib 0 ein wenn du dieses wissen willst\n\n ANKATHETE des winkels\tG\n\t ";

			std::cin >> A;
			std::cout << "\nok, jetzt hypothenuse\t H\n\t";
			std::cin >> H;
			std::cout << "k, jetz den cosinus vom winkel \tW\n\t";
			std::cin >> W;

			if (A == 0) {//start von cos
				A = W * H;
				std::cout << "\nA = W*H =" << G;
			}

			else if (H == 0)
			{
				H = A / W;
				std::cout << "H= A/W = " << H;
			}

			else if (W == 0)
			{
				W = A / H;
				std::cout << "cosinuswert vom W= A/H = " << W;
			}
		} //ende cos

		else if (a == 3) {
			system("cls");
			std::cout << " gib ein was du weisst. (Ankathete, Gegenkathete oder tan des winkels) \nes werden genau 2 werte benötigt! \n gib 0 ein wenn du diesen wert benötigst \n\n ANKATHETE des winkels\tG\n\t ";

			std::cin >> A;
			std::cout << "\nok, \t H\n\t";
			std::cin >> H;
			std::cout << "k, jetz den cosinus vom winkel \tW\n\t";
			std::cin >> W;

			if (A == 0) {//start von cos
				A = G / W;
				std::cout << "\nA = W*H =" << G;
			}

			else if (H == 0)
			{
				G = A * W;
				std::cout << "H= A/W = " << H;
			}

			else if (W == 0)
			{
				W = G / A;
				std::cout << "cosinuswert vom W= A/H = " << W;
			}
		} //ende tan

		else if (a == 5) {
		hilfesctd:;
			system("cls");
			std::cout<<"\tHILFE PROGRAMM\n\n du bist wahrscheinlich hier weil du entweder nix kappierst, oder weil du nix zu tun hast\n\ndas programm benötigt (genau!) 2 werte, und eine 0. die null ist die zahl die für dich ausgerechnet wird.\nnoch einfacher kann ich es echt nicht machen. OK?\n\n Ausserdem, solltest du wissen das du die zwei werte auch haben musst, und wissen musst wo die sind.\n wenn du net weisst wie die scheiss* heisst oder du gegenkathete mit ankathete verwechselst\n oder den falschen winkel benutzt, dann möge dir gott in der Mathearbeit beistehen.\n\n fertig? mit 1 kannst du dir es nochmal durchlesen XD und mit\n 2 kommst du ins HAUPTMENÜ";
			std::cin >> a;
			if (a == 1) { goto hilfesctd; }
			if (a == 2) { return 0.0; } // mit return 0.0 kommt man zurück an den punkt in dem man in der vorherigen (dimension) Funktion war. goto m; würde nicht gehen, da es nicht in DIESER funktion vorkommt. wenn du zurück gehst in der Main, gibt es  den befehl:  double sincostan ();  dann landet man ganz oben in dieser funktion. es ist kompliziert, aber man lernt es.
		}




		// sinus cosinus und tangens rechner. copyright david matheja.

		

		std::cin >> a;
		return 0.0;
	}

	
	


	//funktion, die zwei werte vertauscht. ABER: sie werden tatsächlich global (also ändern den wert der variable in der main() ) geändert, und nicht wie in der vorherigen funktion, da dort nur der WERT einer KOPIE der VARIABLE geändert wurde. //+++disclaimer: die vorherige funktion hat sich geändert! Des wird gleich kompliziert, Konzentration ist jetzt gefragt.
	//wenn du des net kappierst lass es dir bitte erklären.

	double swap(double &wert1, double &wert2, double &wert3) // die & zeichen sind gleich wichtig. sie sorgen dafür das die variablen global geändert werden, und nicht nur ihr wert ausgelesen wird.
	{

		//wert3= HILFE
		//wert1= erster wert
		//wert2= zweiter wert

		//AUFGABE: Wert 1 mit Wert 2 wechseln.

		//Ergebnis:

		wert3 = wert1;	//wert3 dient als zwischenspeicher, so konnte ich die werte einfach wechseln.
		wert1 = wert2;	//wert1 wird nun wert2, 
		wert2 = wert3;	//wert2 wird jetzt praktisch wert1, das wert1 vorher unter wert3 gespeichert wurde

		//Programm erfolgreich.

	}

	



	

	double primzahlrechner()
	{
		system("cls");
		int primzahl = 1;
		int prime = 1;
		int B = 1;
	prim2:;
		B = 0;
		std::cout << "zum starten 1 eingeben (start des primzahlrechners / primzahlen bis 10000 werden dann berechnet) dauert ca. 5 sek.\nTIPP: klicke mit der maus während vorgang 3 um zu pausieren, falls du eine bestimmte primzahl suchst. \n\n2 um ins Hauptmenü zu kommen\n \n3 ist wie 1, nur das es länger dauert XD\n\n4 um eine bestimmte primzahl zu präfen, ob sie eine primzahl ist (du gibst zahl, computer sagt nein. oder keine ahnung vlt.)";
		std::cin >> B;
		system("cls");
		if (B == 1) {
			primzahl = 1;
			while (primzahl < 10000)
			{
			prim1:;

				if (prime == primzahl) {
					std::cout << "\nprimzahl ist = " << primzahl;
					primzahl++;
					prime = 1;
				}

				else if (primzahl % prime == 0)
				{
					primzahl++;
					prime = 2;
					goto prim1;
				}
				else if (primzahl % prime != 0) { prime++; }




			}
		}
		if (B == 2) { return 0; } // der compiler geht genau an die stelle an der steht   double primzahlrechner ();  also genau nach dem " ; ". der nächste befehl wird dann ausgeführt, in dem fall    goto m;   und man landet im Hauptmenü.


		else if (B == 3) {

			while (primzahl < 1000000000)
			{


				if (prime == primzahl) {
					std::cout << "\nprimzahl ischt = " << primzahl;
					primzahl++;
					prime = 1;
				}

				else if (primzahl % prime == 0)
				{
					primzahl++;
					prime = 2;
					goto prim1;
				}
				else if (primzahl % prime != 0) { prime++; }



			}

		}
		else if (B == 4) {
		primB4:;
			std::cout << "gib deine angebliche primzahl ein, ich teste ob sie eine ist. ^-^ \nPS: KEINE KOMMAZAHL/DEZIMALZAHL. NUR POSITIVE INTEGER / NATÜRRLICHE ZAHLEN\n\n";
			std::cin >> primzahl;
			prime = 2;
			while (primzahl == primzahl) {

				if (prime == primzahl) {
					std::cout << "\ndas ist ne primzahl: " << primzahl;
					primzahl++;
					prime = 1;
					goto primende;
				}

				else if (primzahl % prime == 0)
				{
					primzahl++;
					prime = 2;
					std::cout << " NEIN. der computer XD sagt keine primzahl. ";
					goto primende;
				}
				else if (primzahl % prime != 0) { prime++; }


			}
		primende:;
			std::cout << "\n\n1 um neuzustarten, 2 für hauptmenü\n\t";
			std::cin >> B;
			if (B == 1) { goto primB4; }
			else return 0;
		}

		return 0;

	}
		
		
		
		
		 double PRÄSENTATIONMATHE(void) //hab ich mal zu ner präsentation in mathe gemacht, war schon auf ner 1, präsentation war ne       .++++++++++++++++aktualisieren
		{ 
			 setlocale(LC_ALL, "German");

			 double lol;
	PM:;
			std::system("cls");
			std::cin >> lol;
			double V =  0;
			double O = 0;
			double M = 0;
			double U=0;
			double R=0;
			double H=0;
			double D=0;
			double G=0;
			const double PI = 3.14159265359; //sollte ausreichen...
			std::cout << "\n\tPräsentation Mathe.\n\tZylinder.\n\ncopyright David Matheja.  \n\n\tZylinderberechnung:   die höhe wird auf jeden fall benötigt!\n durchmesser ODER radius wird benötigt\n 0 eingeben wenn unbekannt!   \n\n RADIUS : ";
			std::cin >> R;
			std::cout << "\n\nDurchmesser : ";
			std::cin >> D;
			if (R == 0) { R = D/2; }
			std::cout << "\n\nHöhe : ";
			std::cin >> H;
			std::cout << "\n\nPI : 3.14159 (im programm ist es doppelt so genau.)\n";


			if (U == 0) {
		std::cout << "Berechne...\nUmfang...\nden rest(G,M,O,V.)...\n ";
				U=2 * PI * R;
				G = PI * R * R;
				M = U * H;
				O = 2 * G + M;
				V = G * H;  //die sachen nicht vertauschen, sie sind untereinander abhängig von einander.
				std::cout << "FERTIG (^-^)\n ";

				std::cout<<"\n\nUmfang       = 2*Pi(" << PI << ") *	r(" << R << ")   == " << U <<" <<< Umfang ###";
				std::cout<<"\n\nGrundfläche  = Pi ("<< PI<<") *r²("<< R*R << ") == " << G << " <<< Grundfläche ###  ";
				std::cout<<"\n\nMantelfläche = u ("<< U<<")   *	h("<< H<< ") == " << M << " <<< Mantelfläche ### ";
				std::cout<<"\n\nOberfläche   = 2*G("<<G <<")  +	M("<< M << ") == " << O << " <<< Oberfläche ### ";
				std::cout<<"\n\nVolumen      = G("<<G <<")   *	h("<<H << ") == " << V << " <<< Volumen ### ";
				std::cout << "\n\nBerechnungen abgeschlossen. Keine Fehler. wie immer.";
				std::cin >> lol;
				if (lol == 1) { goto PM; }
				else if (lol == 2) {  std::cout << "lol";std::cin >> lol; return 0.0; }
			}

	return 0.0;

		}







	// die Tausend gecknackt alter ne easy (^-^) . und manche sachen hätte ich auch doppelt so gross machen können. (wurzelprogramm könnte noch ein paar "module" vertragen).
