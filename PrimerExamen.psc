Proceso PrimerExamen
	Definir valoracion, salario como real;
	escribir "Digite valoraciòn: ";
	
	
	leer valoracion;
	
	Si valoracion = 0.0 Entonces
		salario <- valoracion * 2400;
		Escribir "Valoracion inaceptable no tienes derecho a ningun pago.";
	SiNo
		Si valoracion = 0.4 Entonces
			salario <- valoracion * 2400;
			Escribir "Valoracion Aceptable, tienes derecho a un pago de: ", salario;
		SiNo
			Si valoracion = 0.6 Entonces
				salario <- valoracion * 2400;
				Escribir "Valoracion Meritoria, tienes derecho a un pago de: ", salario;
				
			SiNo
				Escribir "Valor incorrecto, intentalo de nuevo.";
			FinSi
		FinSi
	FinSi
	
FinProceso
