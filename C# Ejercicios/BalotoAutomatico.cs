Random jugarBaloto = new Random();
int[] balotas = new int[5];
bool op = false;
int superBalota = jugarBaloto.Next(1,17);

do
{
    for (int i = 0; i < 5; i++)
    {
        balotas[i] = jugarBaloto.Next(1,44);        
    }
    for (int i = 0; i < 4; i++)
    {    
        for (int x = i+1; x < 4; x++)
        {
            if((balotas[i]== balotas[x]))
        {
            op = true;            
        }

        }
                
    }
} while(op == true);

Array.Sort(balotas);
    
Console.Write("JUEGE SU BALOTO ASI PARA VER SI GANA ALGO Y ME CUENTA: \n\n");
Console.WriteLine("B A L O T A S\t\t\t\t\tSUPER BALOTA");

for (int i = 0; i < 5; i++)
{
    Console.Write($"{balotas[i]}\t");

}

Console.WriteLine($"\t\t{superBalota}\n");
Console.Write("Si te lo ganas pasa la Liga!");
Console.Read();