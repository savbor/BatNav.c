void clearCls(void){	
	//system("clear"); // Funzione che pulisce la console
        #ifdef _WIN32
            system("cls");
        #else
            // Assume POSIX
            system ("clear");
#endif
}