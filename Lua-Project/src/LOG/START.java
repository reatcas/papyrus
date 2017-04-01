/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package LOG;

import java.io.File;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.net.URISyntaxException;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;
/**
 *
 * @author Rene Casaña
 */
public class START {
    
    
    public static void main(String args[]) throws IOException, URISyntaxException
    {
        
        java.awt.EventQueue.invokeLater(new Runnable() {
            @Override
        public void run() { 
          try
          {
            ProjLocation JarFileDir = new ProjLocation();
            File inUS = new File( JarFileDir.Dir() + "UsrData/UserNameData.txt");
            File inCN = new File( JarFileDir.Dir() + "UsrData/PasswordData.txt");
            try
            {
              
              Scanner ScanUS,ScanCN; String us="",cn="";
              ScanUS = new Scanner(inUS);
              ScanCN = new Scanner(inCN);
              
              while(ScanUS.hasNext())
              {us+=ScanUS.nextLine();} ScanUS.close();
              while(ScanCN.hasNext())
              {cn+=ScanCN.nextLine();} ScanCN.close();
              LOGIN open = new LOGIN(us,cn); open.setVisible(true);
              
            }
            catch(Exception e)
            {
              Logger.getLogger(START.class.getName()).log(Level.SEVERE, null, e);
            }
            
          }
          catch(UnsupportedEncodingException ex)
          {
                Logger.getLogger(START.class.getName()).log(Level.SEVERE, null, ex);
          }
                
            }
        });
    }
    
}
