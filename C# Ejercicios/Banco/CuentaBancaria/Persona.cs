namespace CuentaBancaria;

public class Persona
{
    public string Nombre {get; private set;}
    public string Cedula {get; private set;}
    public CuentaBancaria CuentaBancaria {get; private set;}
    
    public Persona(string nombre, string cedula,CuentaBancaria cuentasBancaria ){
        Nombre = nombre;
        cedula = cedula;
      CuentaBancaria = cuentasBancaria;
    }

}
