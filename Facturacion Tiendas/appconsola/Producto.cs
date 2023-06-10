namespace appConsola;

public class Producto
{
    public int IdProducto { get; set; }
    public string Nombre { get; set; }
    public decimal Precio { get; set; }
    public int Stock { get; set; }

    public Producto(int idProducto, string nombre)
    {
        IdProducto = idProducto;
        Nombre = nombre;
    }

    public void  SetId()
    {
        IdProducto += 1;
    }
    public int GetId()
    {
        return IdProducto;
    }

    public void CambiarNombre(string nombre)
    {
        Nombre = nombre;
    }
}
    

