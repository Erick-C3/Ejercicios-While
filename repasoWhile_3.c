/*
	Simulador para tomar mate 

	Desarrollar una aplicacion que permita simular la accion de tomar un mate

	Aspectos a tener en cuenta:
		• Puede estar muy caliente o tibio
			- si esta caliente consume un 10% del liquido
			- si esta tibio consume un 27% del liquido
		• Disponemos de agua tibia y caliente

	Requisitos
		• Desplegar un menu que permita simular el consumo:
			- Tomar mate
				- preguntar si esta caliente o tibio y proceder
			- Aumentar liquido al recipiente: aumenta en un 50%
			- Si la cantidad de liquido es menor al necesario para tomar con agua tibia debe informar 
				la necesidad de una recarga
			- Cuando se toma un total de 7 veces no debe permitir
			 aumentar más liquido y termina cuando el porcentaje es menor al requerido para tomar con agua tibia

	EXTRA 1: Inicialmente el agua esta caliente, luego de un uso se vuelve tibia y con cada aumento de liquido
		   reinicia el estado del agua a caliente por lo tanto se descarta la accion de preguntar la temperatura del agua

	EXTRA 2: Mostrar la cantidad de liquido disponible en el menu 

	EXTRA 3: Opcion para salir
*/