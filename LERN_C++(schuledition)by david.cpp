// das ist ein kommentar. WILLKOMMEN IN DER STARK GEK�RZTEN FASSUNG MEINES PROGRAMMS(ja, es gibt noch ein deutlich l�ngeres). hier ist alles m�gliche drin was man halt mit zahlen machen kann.
#include <iostream>	// wichtiges ressourcenpack, enth�lt alles was man am anfang braucht
#include <climits> // ist nur interresant f�r die Variablen tabelle
int main()			// viele c++ anf�nger fragen sich wahrscheinlich wo der using namespace std ist. tja pech gehabt. hier wird programmieren gelernt, und zwar richtig. 
                    //youtuber machen grunds�tzlich alles falsch wenn es ums programmieren geht.		
{		

	double flache;	// hier wird eine variable erstellt. wenn du nicht weist was eine variable ist solltest du es lieber nochmal mit scratch probieren.  
	double umfang;	//diese variablen sind wichtig f�r das PI programm
	double radius;
	double zahl1;
	double zahl2;
	double durchmesser;
	const double pi = 3.14;		//+const macht aus der variable eine Konstante. (eine FESTE ZAHL)
	
	int a = 12; //a wird erstellt und gleich auf 12 gesetzt. INT variablen k�nnen nur ganze zahlen benutzen
	a += 3; //a wird 3 gr�sser (hier ist das = wichtig) das = hat die macht variablen zu �ndern. es geht nur mit = !!!

	std::cout << "TEST "<< a << std::endl ;  // Textausgabe. << std::endl ; macht ist ein zeilenumbruch (neue zeile)
												//std:: ruft die bibliothek auf. wenn du eigene befehle schreibst musst du es nicht schreiben.
	std::cout << "\n\tPROGRAMM ERFOLGREICH GELADEN! ENTER f�r n�chste BEFEHLE"; // \n macht eine neue zeile \t ist ein tab. MERKEN!
	
	std::cin.get();// wartet auf ENTER. 
				   

	std::cout << "\n\ngeben sie eine beliebige ZAHL ein um das Programm zu starten, und etwas anderes um es zu beenden";

	std::cin >> a; //die eingegebene zahl setzt a auf die eingegebene zahl

	std::cout << "\nProgramm startet... FERTIG";

tabelle:; // tabelle ist ein ort. er ist hier. wird goto tabelle aufgerufen landet der compiler hier, und macht weiter.

									//!!!!!folgende (bis 55 )zeilen k�nnen ignoriert werden!!!!!!!!!!!!!!!!!!!!!!!!!!!!!********************************************************************
			//diese tabelle ist praktisch um zu testen op dieser compiler mit dem  programm klarkommt. jeder hat sein eigenes c++ gemacht (MICROSOFT, ETC...)

	std::cout << "\tTEST 084\n\n\tWillkommen zu david`s variablen-byte und Zahlen Tabelle. \n\twenn jemand ein besserer name einf�llt hier: mathejadavid@gmail.com"; //nur TEXTAUSGABE \t ist tab
	std::cout << std::endl << "\n NAME DER VARIABLE	| BYTE  | MAX ZAHLENWERT	| NORMALWERT	|KOMMENTAR";		//du kannst das hier ignorieren wenn du willst
	std::cout << std::endl << " int			|" << sizeof(int) << "\t|" << INT_MAX;
	std::cout << std::endl << " float			|" << sizeof(float) <<			"\t| ???			|";				//es war ein bisschen schwer alles so hinzu bekommen das es passt
	std::cout << std::endl << " double			|" << sizeof(double) <<			"\t|"	<<	DBL_MAX	;
	std::cout << std::endl << " long double		|" << sizeof(long double) <<	"\t|"<< LDBL_MAX;         // dieses programm ist eigentlich sehr einfach
	std::cout << std::endl << " short			|" << sizeof(short) <<			"\t|" <<SHRT_MAX		;
	std::cout << std::endl << " char			|" << sizeof(char) <<			"\t|"<< SCHAR_MAX;
	std::cout << std::endl << " bool			|" << sizeof(bool) <<			"\t|	nur f�r int	|" << std::endl;

	std::cout << "\n\n programm neustarten mit 1, \nHauptmen� mit 2";
		std::cin >> a;
	if (a = 1)
	{
		system("cls"); // l�scht konsole. praktisch bei gr�sseren programmen.

		goto tabelle; // der compiler geht zum punkt "tabelle"
		}
	else 

		system("cls");


	MAX


b:;


	std::cout << "\n\nWILLKOMMEN BEIM PI RECHNER 21.04.2019\ngebe den durchmesser deines KREISES ein. \n ich weiss der alte titel hat mir auch viel besser gefallen...\n DURCHMESSER EINGEBEN:   "; // ach ja, die guten alten zeiten... (insider, kennt man aber)
	std::cin >> durchmesser;// EINGABE
	
	radius = durchmesser / 2;			//BERECHNUNGEN
	umfang = pi * durchmesser;			//und FORMELN wie diese
	flache = pi * (radius*radius);		//werden NICHT AUF DEM BILDSCHIRM GEZEIGT

	std::cout << "UMFANG  " << umfang;	// textausgabe mit anschliesender Variablen auslesung.

	std::cout << "\n FL�CHENINHALT  " << flache;	// sollte leicht zu verstehen sein, genau wie 1 weiter oben

	std::cout << "\n RADIUS ist" << radius;			//+das gleiche wie oben...

	std::cout << "\n 1: Nochmal\n 2:Men�/Copyright\negal: programm beendet sich\n";

		std::cin >> a; // hier wird der benutzer mal wieder aufgefordert eine variable einzugeben. (buchstaben k�nnen das programm im moment noch zum crashen bringen, wird bald behoben (;  )
	if (a == 1)					// falls (a ist 1)                      an dieser stelle solltest du wissen das es �bersprungen wird wenn es nicht zutrifft, also zb. wenn a den wert 5 besitzt. 
	{
		system("cls");			//tu das {bla bla}
		goto b;
	}
	else if (a == 2)				//sonst falls (a ist 2)
	{
	m:;
		system("cls");			//tu das {berechne bla bla}
		
		std::cout << "copyright von DAVID MATHEJA. \n ich weiss zwar net genau was ein copyright ist, \nich weiss aber das das mein Programm ist was du da benutzt. (;\n\n1: Pi berechner \n3:Taschenrechner\n\n buchstaben wie o:/�,a:/�,u:/�,ss/�, werden bei intel CPUs nicht erkannt und als komische zeichen dargestellt.\n ";
		
		std::cin >> a;
		
		if (a == 1) {      //du kannst auch mehrere if ineinander machen, falls mehreres zutrffen muss um an ein bestimmtes ziel zu kommen

			goto b;
		}
		
		else if (a == 3) {
		
		t:;
			system("cls");
			
			std::cout << "COPYRIGHT@DAVIDMATHEJA 17.02.2017\n mathejadavid@gmail.com\n willkommen beim \t-`,Taschenrechner�,- \n (ein altes programm von mir, nicht zu viel erwarten)\n\n";
		    std::cout << "\n1. ZAHL EINGEBEN \n";
			
			std::cin >> zahl1;						//eingabeaufforderung. die variable merkt sich die zahl und wartet. (variablen warten nicht, sie sind privatversichert)
			
			std::cout << "\n ZAHL 2 EINGEBEN\n";
			
			std::cin >> zahl2;      //das gleiche wie oben... (ich rechne damit dass du genug humor hast um sowas zu verstehen, und am ende nicht irgendein dreck von dir gibst.)
			
			std::cout	<< "\n"		<< zahl1 << "+" << zahl2 << "=" << zahl1+zahl2<< std::endl;	//Variablen geben ihren wert aus wenn sie ohne "geschrieben" werden	//hier werden die zwei zuvor eingegebenen Zahlen mit  (+,-,*,/) kombiniert. zahl1 ist immer am anfang!!!!
			std::cout				<< zahl1 << "-" << zahl2 << "=" << zahl1-zahl2<< std::endl;			//in C++ hat jeder anfang auch ein Ende zb: {Formel } , (bedingung) ,oder auch std::cout<< der output ;		Das ;semikolon muss nach jedem zeilenende mit befehlen kommen!										
			std::cout				<< zahl1 << "*" << zahl2 << "=" << zahl1*zahl2<< std::endl;
			std::cout 				<< zahl1 << "/" << zahl2 << "=" << zahl1/zahl2<< std::endl; 
			std::cout << "\n\n keine haftung bei Virusssen (rechtschreibung ist was f�r... nicht mich...) \n 1:Wiederholen \n 2:Pi berechnung\n3: HAUPTMEN�\n";
			/*gv�ujhvjhbvdgAsvqImDvfjhvmtahTkhjEhjGahkjjacgh*/
			std::cin >> a;
			
			if (a == 1) {
				system("cls");  //r�umt auf (l�scht die konsole) variablen bleiben nat�rlich erhalten!
				goto t;         //quasi ein portal zu t:;


			}
			else if (a == 2) { //wichtig = ist eine zuweisung(a w�re jetzt 2)(!!!in dem fall erzeugt es aber einen error!!!). == ist eine logische br�cke (ist a gleich 2?)
				system("cls");														//ich benutze a als variable f�r men�verzeichnisse, und alle anderen buchstaben f�r den goto befehl.
				goto b;																//du kannst auch w�rter nehmen. Erinnere dich, keine zahlen am anfang
			}
			else if (a == 3) {
				system("cls");
				goto m;

			}



		}
	}
	else  //sonst (also wenn nichts der vorherigen zutrifft) mach das programm weiter.


		std::cin.get();// das ist unn�tig. einmal auf enter, immer auf enter. MERKEN!
	std::cout << "uhafhfdQhasfYoashBfoidshnconaYsnxnkjalnxjnxjlnjnadoajvoidiqomiawtuheeojiaqwuerioewuriojhfdskjcnsikykamdmsaondjosnfnajBsRdfndjnfjUdncjasmndksalkdslkdk";//der User sieht des eh net
	return 0;// endlich bin ich hier angekommen. Hier wird dem compiler gesagt: hat funktioniert, programm jetzt schliesen.

} // das ENDE. nach der klammer kommt NICHTS. (als anf�nger) man kann noch weitere programme anh�ngen oder so. ich bin auch erst ein anf�nger.




//hello world.

//teSt1``!$(&tEst2_:;)&$gAsdHdgapVkiGddmFaktdhrefJzarftxtdzrrdLOL

//COPYRIGHT von diesem quelltext geh�rt DAVID MATHEJA.         MADE IN GERMANY
//Bearbeitet mit Microsoft Visual Studio (Copyright Microsoft denk ich mal...)

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

//es kann sein das einiges an text(kommentare, kein code)(welcher in der originalversion da ist) in dieser version fehlen k�nnte, da diese kommentare f�r manche nutzer unangemessen sein k�nnte.





















































