namespace CuentaBancaria;

public class CuentaBancaria
{
    public string NumeroCuenta {get; private set;}
    public decimal Saldo {get; private set;}
    public string CedulaPersona {get; private set;}
    public CredencialCuenta Credencial {get; private set;}

    public CuentaBancaria (string numeroCuenta, string cedula, CredencialCuenta credencial)
{
    NumeroCuenta = numeroCuenta;
    Saldo = 0;
    CedulaPersona = cedula;
    Credencial = credencial;
}

public decimal ConsultarSaldo(){
    return Saldo;
}

public void Consignar(decimal dineroAIngresar){
    Saldo += dineroAIngresar;
    Console.WriteLine($"Tu nuevo saldo es {ConsultarSaldo()}");
}

public void Retirar(decimal dineroARetirar){
    
    if(SaldoEsValido(dineroARetirar)){
    Saldo -= dineroARetirar;
    Console.WriteLine($"Tu nuevo saldo es {ConsultarSaldo()}");
    } else Console.WriteLine($"Saldo Insuficiente.");

}

bool SaldoEsValido(decimal dineroARetirar){
    bool EsValido;
    if (Saldo - dineroARetirar < 0 ){
        EsValido = true;
    } else EsValido = false;

    return EsValido;
}


}
