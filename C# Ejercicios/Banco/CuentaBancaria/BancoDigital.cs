namespace CuentaBancaria;


public class BancoDigital
{

    List<Persona> ListaPersonas = new List<Persona>();

    public void CrearCuenta(Persona persona){
        
        ListaPersonas.Add(persona);
        Console.WriteLine("Cuenta Creada.");
    }

    public bool Ingresar(CredencialCuenta credencialIngreso){
        bool PuedeIngresar = true;
        foreach (var item in ListaPersonas)
        {
            if (item.CuentaBancaria.Credencial.Usuario == credencialIngreso.Usuario  
            && item.CuentaBancaria.Credencial.Contrasenia == credencialIngreso.Contrasenia)
            {
                PuedeIngresar = true;
                Console.WriteLine("Ingreso Exitoso!");           
            } else {
                PuedeIngresar = false;
                Console.WriteLine("Tienes un error en el usuario o contrasenia.");
            }
            return PuedeIngresar;
            
        }


    }




}
