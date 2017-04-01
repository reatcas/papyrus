/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package LOG;

import java.io.UnsupportedEncodingException;
import java.net.URLDecoder;
import javax.swing.JOptionPane;

/**
 *
 * @author renec
 */
public class ProjLocation {
  public String Dir() throws UnsupportedEncodingException
  {
    String path = ProjLocation.class.getProtectionDomain().getCodeSource().getLocation().getPath();
    path = URLDecoder.decode(path, "UTF-8");
    String cutJar = path.replace("Diverse.jar", "");
    String cutBar = cutJar.substring(1);
    return cutBar;
  }
  
  
  
  
}
