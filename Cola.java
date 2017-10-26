
package exam;

import java.util.Scanner;


public class Cola {
   
    static int cola[]= new int[5];
    static int tope=0;
    static int inicio=tope-1;
    Scanner sc =  new Scanner(System.in);
    boolean estado=true;
    public void mostrar(){
        if(cola[0]==0){
          System.out.println(" \t-->cola vacia");   
        }
        for(int i=0;i<tope;i++){
              System.out.println("valor posicion "+i+" - "+cola[i]); 
           
           
        }
    }
    public int insertar(){
        int v;
        int x=0;
        int d=0;
         
        while(inicio<5 && estado==true){
        System.out.println("Presiona cualquier numero para continuar\n");   
               d=sc.nextInt();
               
            if(d!=0){
               
        System.out.println("ingresa valor: "+tope);
        v=sc.nextInt();
        cola[tope]=v;
       tope++;
        System.out.println("\t0-SALIR");
        if(tope>4){
             System.out.println("\t cola llena");
              estado=false;
        }
        
            
            }else{
                estado=false;
            }
        
        }
        
        
        return tope;
    }
    
    public void eliminar(){
	
        if(tope<0){
           System.out.println(" cola vacia");   
        }
        System.out.println(" valor tope "+tope);
          
        if(tope>0){
        tope--;  
        cola[0]=0;
       
        int cont=0;
        estado=true;
           for(int x=1;x<5;x++) {
               
            cola[cont]=cola[x];
            cont++;
          
            if(cont==4){
                
               x=5;
            }
          
        }
        cola[4]=0;
         System.out.println("\n\t--->Eliminado...\n");
        
        }
      
    }
     
}
