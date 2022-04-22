class CCuenta 
{
    private : string nombre ;
    private : string cuenta ;
    private : double saldo  ;
    private : double tipoDeInteres ;
// ...
public : void asignarNombre(string nom)
{
    if (nom.length()==0)
    {
        cout << "Error: cadena vacia\n";
        return;
    }
    nombre =nom;
}
};
int main (){
    //crear un objeto de la clase CCuenta
CCuenta cuenta01 ;
//asignar a su atributo saldo el valor 1200
cuenta01.saldo = 1200; // error : saldo es private
//asignar a su atributo nombre el valor "daniel"
cuenta01.asignarNombre("Daniel");//correcto : asignarNombre
}
