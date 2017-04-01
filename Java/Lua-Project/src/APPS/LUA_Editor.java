package APPS;

import java.util.Timer;
import java.awt.Color;
import java.awt.*;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseWheelEvent;
import java.awt.event.MouseWheelListener;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Formatter;
import java.util.Scanner;
import java.util.TimerTask;
import javax.swing.ImageIcon;
import javax.swing.JFileChooser;
import java.awt.Font;
import java.awt.GraphicsEnvironment;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.filechooser.FileFilter;
import javax.swing.filechooser.FileNameExtensionFilter;

/**
 * @author Rexter
 */
public final class LUA_Editor extends javax.swing.JFrame {

    /**
     * Creates new form LUA
     */ String Letra="Amble";
	Font Negrita, Cursiva;
        GraphicsEnvironment e = GraphicsEnvironment.getLocalGraphicsEnvironment();
        Font[] fonts = e.getAllFonts();
        int Tamanio, Fnt=2,FntMax=fonts.length,FntMin=1, NumFile=1; //FntMax y Min definen cuantas fuentes tiene el programa
	boolean fBold=false, fKurs=false, LIGHT=false, Col=false, delete=false;
        boolean Pink=false,Purple=false,Blue=false,Yellow=false,Green=false;
        Timer elitim = new Timer();
        private File f; 
        
        
    public LUA_Editor() {
        initComponents();
        /*Toolkit tk= getToolkit();
        Cursor Uv = tk.createCustomCursor(tk.getImage(getClass().getResource("/Img/ViCur.png")), new Point(0, 0), "blank cursor");
        this.setCursor(Uv);*/
        
        
        
        getContentPane().setBackground(new Color(51, 51, 51));
        enableDeleteTimer();
        setIconImage(Toolkit.getDefaultToolkit().getImage(getClass().getResource("/Img/Dark.png")));
        Tamanio = Integer.parseInt(LTamTex.getText());
        //this.setExtendedState(JFrame.MAXIMIZED_BOTH);
        LTamTex.setHorizontalAlignment(JTextField.CENTER);
        LNotif.setHorizontalAlignment(JTextField.CENTER);
        
//tEditor.setComponentOrientation(ComponentOrientation.RIGHT_TO_LEFT);
      
// Mouse enter - leave - press - release Listeners
        bNuevo1.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                    LNotif.setText("New file");
            }
            @Override            public void mouseExited(MouseEvent e) {
                               
                                    notifSet();
                                    
            }
        });
        
        bGuardar.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                    LNotif.setText("Save");
            }
            @Override            public void mouseExited(MouseEvent e) {
                                    notifSet();
            }
        });
        
        bGuardarComo.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                    LNotif.setText("Save as...");
            }
            @Override            public void mouseExited(MouseEvent e) {
                                    notifSet();
            }
        });
            
        bBuscar.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                    LNotif.setText("Search file");
            }
            @Override            public void mouseExited(MouseEvent e) {
                                    notifSet();
            }
        });
      
        bAyuda.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                    LNotif.setText("Help");
            }
            @Override            public void mouseExited(MouseEvent e) {
                                    notifSet();
            }
        });
        
        bEliminar.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                    bEliminar.setIcon(new ImageIcon(getClass().getResource("/Img/delete1.png")));
                                    LNotif.setText("¿Erase?");
            }
            @Override            public void mouseExited(MouseEvent e) {
                                    bEliminar.setIcon(new ImageIcon(getClass().getResource("/Img/delete0.png")));
                                    notifSet();
            }
        });
        

        
        fPink.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                
                {setPink();}
                LNotif.setText(" Text color : Pink");
            }
            @Override            public void mouseExited(MouseEvent e) {
                reloadTextColor();
                
            }
        });
        
        fBlue.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                
                {setBlue();}
                
                LNotif.setText(" Text color : Blue");
            }
            @Override            public void mouseExited(MouseEvent e) {
                reloadTextColor();
            }
        });
        
        fPurple.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                  
                {setPurple();}
                                    LNotif.setText(" Text color : Purple");
            }
            @Override            public void mouseExited(MouseEvent e) {
                reloadTextColor();
            }
        });
        
        fYellow.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                  
                {setYellow();}
                                    LNotif.setText(" Text color : Yellow");
            }
            @Override            public void mouseExited(MouseEvent e) {
                 reloadTextColor();
            }
        });
        
        
        fGreen.addMouseListener(new MouseListener(){
            @Override            public void mouseClicked(MouseEvent e) {}
            @Override            public void mousePressed(MouseEvent e) {}
            @Override            public void mouseReleased(MouseEvent e) {}
            @Override            public void mouseEntered(MouseEvent e) {
                                  
                {setGreen();}
                                    LNotif.setText(" Text color : Green");
            }
            @Override            public void mouseExited(MouseEvent e) {
                reloadTextColor();
            }
        });
        
//Key and Mouse Wheel Listeners       
        LTamTex.addKeyListener(new KeyAdapter() {
            @Override
            public void keyTyped(KeyEvent evnt) {
                char c = evnt.getKeyChar();
                
                if (!((c >= '0') && (c <= '9'))) {
                getToolkit().beep(); evnt.consume();
                }
                else{                                      
                        if((LTamTex.getText().length()>=3)){
                        LTamTex.setText(LTamTex.getText().substring(0, 2));
                    }
                }
            }
        }); 
        
        LTamTex.addMouseWheelListener(new MouseWheelListener() {
            @Override
            public void mouseWheelMoved(MouseWheelEvent e) {
                int nodos = e.getWheelRotation();
                if (nodos < 0)
                {cambioTamano(0);} 
                else {cambioTamano(1);} //To change body of generated methods, choose Tools | Templates.
            }
        });
        
        bFontCombo.addMouseWheelListener(new MouseWheelListener() {
            @Override
            public void mouseWheelMoved(MouseWheelEvent e) {
                int nodos = e.getWheelRotation();
                if (nodos > 0) {
                    if (Fnt==FntMax){Fnt=FntMin;}
                    else {Fnt++;}
                } 
                else {
                    if (Fnt==FntMin){Fnt=FntMax;}
                    else {Fnt--;}
                } 
            fuenteTipo();//To change body of generated methods, choose Tools | Templates.
            }
        });
        
        
        tEditor.addKeyListener(new KeyAdapter() {
            public void keyTyped2(KeyEvent e) {
                char c = e.getKeyChar();
                if (c == KeyEvent.VK_A)   {cambioTamano(0);}
                if (c == KeyEvent.VK_S)   {cambioTamano(1);}
            }
        }); 
        
        enfoque();
        fuenteTam();
        //tEditor.setBackground(new Color(51,51,51));
        
    } //End Public LUA

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
  // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
  private void initComponents() {

    pFuente = new javax.swing.JPanel();
    fBlue = new javax.swing.JButton();
    fYellow = new javax.swing.JButton();
    fPink = new javax.swing.JButton();
    fGreen = new javax.swing.JButton();
    fPurple = new javax.swing.JButton();
    bTMas = new javax.swing.JButton();
    bTMen1 = new javax.swing.JButton();
    LTamTex = new javax.swing.JTextField();
    bFontCombo = new javax.swing.JButton();
    checkNeg = new javax.swing.JButton();
    checkCur = new javax.swing.JButton();
    bEliminar = new javax.swing.JButton();
    bRestore = new javax.swing.JButton();
    LNotif = new javax.swing.JLabel();
    pTitulo = new javax.swing.JPanel();
    bDarkUI = new javax.swing.JButton();
    vTitulo2 = new javax.swing.JLabel();
    bBuscar = new javax.swing.JButton();
    bGuardar = new javax.swing.JButton();
    bAyuda = new javax.swing.JButton();
    bNuevo1 = new javax.swing.JButton();
    bGuardarComo = new javax.swing.JButton();
    txtName = new javax.swing.JLabel();
    jScrollPane1 = new javax.swing.JScrollPane();
    tEditor = new javax.swing.JEditorPane();

    setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
    setTitle("L U A   -   Editor");
    setBackground(new java.awt.Color(51, 51, 51));
    setMinimumSize(new java.awt.Dimension(785, 442));

    pFuente.setBackground(new java.awt.Color(51, 51, 51));

    fBlue.setBackground(new java.awt.Color(0, 204, 255));
    fBlue.setForeground(new java.awt.Color(0, 204, 255));
    fBlue.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    fBlue.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        fBlueActionPerformed(evt);
      }
    });

    fYellow.setBackground(new java.awt.Color(255, 102, 0));
    fYellow.setForeground(new java.awt.Color(0, 255, 255));
    fYellow.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    fYellow.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        fYellowActionPerformed(evt);
      }
    });

    fPink.setBackground(new java.awt.Color(255, 0, 153));
    fPink.setForeground(new java.awt.Color(0, 255, 255));
    fPink.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    fPink.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        fPinkActionPerformed(evt);
      }
    });

    fGreen.setBackground(new java.awt.Color(153, 255, 0));
    fGreen.setForeground(new java.awt.Color(0, 255, 255));
    fGreen.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    fGreen.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        fGreenActionPerformed(evt);
      }
    });

    fPurple.setBackground(new java.awt.Color(153, 102, 255));
    fPurple.setForeground(new java.awt.Color(0, 255, 255));
    fPurple.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    fPurple.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        fPurpleActionPerformed(evt);
      }
    });

    bTMas.setBackground(new java.awt.Color(51, 51, 51));
    bTMas.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bTMas.setForeground(new java.awt.Color(0, 255, 255));
    bTMas.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/Nuevo.png"))); // NOI18N
    bTMas.setBorderPainted(false);
    bTMas.setContentAreaFilled(false);
    bTMas.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bTMas.setFocusPainted(false);
    bTMas.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bTMasActionPerformed(evt);
      }
    });

    bTMen1.setBackground(new java.awt.Color(51, 51, 51));
    bTMen1.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bTMen1.setForeground(new java.awt.Color(0, 255, 255));
    bTMen1.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/Menos.png"))); // NOI18N
    bTMen1.setBorderPainted(false);
    bTMen1.setContentAreaFilled(false);
    bTMen1.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bTMen1.setFocusPainted(false);
    bTMen1.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bTMen1ActionPerformed(evt);
      }
    });

    LTamTex.setEditable(false);
    LTamTex.setBackground(new java.awt.Color(51, 51, 51));
    LTamTex.setColumns(3);
    LTamTex.setFont(new java.awt.Font("Amble", 0, 14)); // NOI18N
    LTamTex.setForeground(new java.awt.Color(193, 193, 193));
    LTamTex.setHorizontalAlignment(javax.swing.JTextField.CENTER);
    LTamTex.setText("18");
    fuente();
    LTamTex.setBorder(null);
    LTamTex.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    LTamTex.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        LTamTexActionPerformed(evt);
      }
    });

    bFontCombo.setBackground(new java.awt.Color(51, 51, 51));
    bFontCombo.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bFontCombo.setForeground(new java.awt.Color(193, 193, 193));
    bFontCombo.setText("Amble");
    bFontCombo.setBorderPainted(false);
    bFontCombo.setContentAreaFilled(false);
    bFontCombo.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bFontCombo.setFocusPainted(false);
    bFontCombo.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bFontComboActionPerformed(evt);
      }
    });

    checkNeg.setBackground(new java.awt.Color(51, 51, 51));
    checkNeg.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    checkNeg.setForeground(new java.awt.Color(0, 255, 255));
    checkNeg.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/BlackDisabled.png"))); // NOI18N
    checkNeg.setBorderPainted(false);
    checkNeg.setContentAreaFilled(false);
    checkNeg.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    checkNeg.setFocusPainted(false);
    checkNeg.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        checkNegActionPerformed(evt);
      }
    });

    checkCur.setBackground(new java.awt.Color(51, 51, 51));
    checkCur.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    checkCur.setForeground(new java.awt.Color(0, 255, 255));
    checkCur.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/CursiveDisabled.png"))); // NOI18N
    checkCur.setBorderPainted(false);
    checkCur.setContentAreaFilled(false);
    checkCur.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    checkCur.setFocusPainted(false);
    checkCur.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        checkCurActionPerformed(evt);
      }
    });

    bEliminar.setBackground(new java.awt.Color(51, 51, 51));
    bEliminar.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bEliminar.setForeground(new java.awt.Color(0, 255, 255));
    bEliminar.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/delete0.png"))); // NOI18N
    bEliminar.setBorderPainted(false);
    bEliminar.setContentAreaFilled(false);
    bEliminar.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bEliminar.setFocusPainted(false);
    bEliminar.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bEliminarActionPerformed(evt);
      }
    });

    bRestore.setBackground(new java.awt.Color(51, 51, 51));
    bRestore.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bRestore.setForeground(new java.awt.Color(0, 255, 255));
    bRestore.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/refresh2.png"))); // NOI18N
    bRestore.setBorderPainted(false);
    bRestore.setContentAreaFilled(false);
    bRestore.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bRestore.setFocusPainted(false);
    bRestore.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bRestoreActionPerformed(evt);
      }
    });

    LNotif.setFont(new java.awt.Font("Amble", 3, 10)); // NOI18N
    LNotif.setForeground(new java.awt.Color(204, 204, 204));
    LNotif.setText("Notifications");

    javax.swing.GroupLayout pFuenteLayout = new javax.swing.GroupLayout(pFuente);
    pFuente.setLayout(pFuenteLayout);
    pFuenteLayout.setHorizontalGroup(
      pFuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
      .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, pFuenteLayout.createSequentialGroup()
        .addComponent(bFontCombo, javax.swing.GroupLayout.DEFAULT_SIZE, 144, Short.MAX_VALUE)
        .addGap(22, 22, 22)
        .addComponent(bTMen1, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(LTamTex, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(bTMas, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addGap(18, 18, 18)
        .addComponent(fPink, javax.swing.GroupLayout.PREFERRED_SIZE, 20, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(fPurple, javax.swing.GroupLayout.PREFERRED_SIZE, 20, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(fBlue, javax.swing.GroupLayout.PREFERRED_SIZE, 20, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(fYellow, javax.swing.GroupLayout.PREFERRED_SIZE, 20, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(fGreen, javax.swing.GroupLayout.PREFERRED_SIZE, 20, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addGap(16, 16, 16)
        .addComponent(checkNeg, javax.swing.GroupLayout.PREFERRED_SIZE, 35, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
        .addComponent(checkCur, javax.swing.GroupLayout.PREFERRED_SIZE, 35, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
        .addComponent(LNotif, javax.swing.GroupLayout.PREFERRED_SIZE, 158, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        .addComponent(bEliminar, javax.swing.GroupLayout.PREFERRED_SIZE, 35, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(bRestore, javax.swing.GroupLayout.PREFERRED_SIZE, 36, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addContainerGap())
    );

    pFuenteLayout.linkSize(javax.swing.SwingConstants.HORIZONTAL, new java.awt.Component[] {bEliminar, bRestore});

    pFuenteLayout.linkSize(javax.swing.SwingConstants.HORIZONTAL, new java.awt.Component[] {fBlue, fGreen, fPink, fPurple, fYellow});

    pFuenteLayout.setVerticalGroup(
      pFuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
      .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, pFuenteLayout.createSequentialGroup()
        .addGroup(pFuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
          .addComponent(bTMas, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(bTMen1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(LNotif, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(checkNeg, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(checkCur, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(bRestore, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(bEliminar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(bFontCombo, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(LTamTex))
        .addContainerGap())
      .addGroup(pFuenteLayout.createSequentialGroup()
        .addContainerGap()
        .addGroup(pFuenteLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
          .addComponent(fPink, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(fPurple, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(fBlue, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(fYellow, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
          .addComponent(fGreen, javax.swing.GroupLayout.DEFAULT_SIZE, 20, Short.MAX_VALUE))
        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
    );

    pFuenteLayout.linkSize(javax.swing.SwingConstants.VERTICAL, new java.awt.Component[] {fBlue, fGreen, fPink, fPurple, fYellow});

    pTitulo.setBackground(new java.awt.Color(255, 102, 0));

    bDarkUI.setBackground(new java.awt.Color(51, 51, 51));
    bDarkUI.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bDarkUI.setForeground(new java.awt.Color(0, 255, 255));
    bDarkUI.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/Light.png"))); // NOI18N
    bDarkUI.setBorderPainted(false);
    bDarkUI.setContentAreaFilled(false);
    bDarkUI.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bDarkUI.setFocusPainted(false);
    bDarkUI.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bDarkUIActionPerformed(evt);
      }
    });

    vTitulo2.setFont(new java.awt.Font("Amble", 0, 14)); // NOI18N
    vTitulo2.setForeground(new java.awt.Color(255, 255, 255));
    vTitulo2.setText("    L U A");

    bBuscar.setBackground(new java.awt.Color(51, 51, 51));
    bBuscar.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bBuscar.setForeground(new java.awt.Color(0, 255, 255));
    bBuscar.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/searchWhite.png"))); // NOI18N
    bBuscar.setToolTipText("Abrir");
    bBuscar.setBorderPainted(false);
    bBuscar.setContentAreaFilled(false);
    bBuscar.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bBuscar.setFocusPainted(false);
    bBuscar.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bBuscarActionPerformed(evt);
      }
    });

    bGuardar.setBackground(new java.awt.Color(51, 51, 51));
    bGuardar.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bGuardar.setForeground(new java.awt.Color(0, 255, 255));
    bGuardar.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/CheckWhite.png"))); // NOI18N
    bGuardar.setToolTipText("Guardar");
    bGuardar.setBorderPainted(false);
    bGuardar.setContentAreaFilled(false);
    bGuardar.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bGuardar.setFocusPainted(false);
    bGuardar.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bGuardarActionPerformed(evt);
      }
    });

    bAyuda.setBackground(new java.awt.Color(51, 51, 51));
    bAyuda.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bAyuda.setForeground(new java.awt.Color(0, 255, 255));
    bAyuda.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/helpWhite.png"))); // NOI18N
    bAyuda.setToolTipText("Ayuda");
    bAyuda.setBorderPainted(false);
    bAyuda.setContentAreaFilled(false);
    bAyuda.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bAyuda.setFocusPainted(false);
    bAyuda.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bAyudaActionPerformed(evt);
      }
    });

    bNuevo1.setBackground(new java.awt.Color(51, 51, 51));
    bNuevo1.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bNuevo1.setForeground(new java.awt.Color(0, 255, 255));
    bNuevo1.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/favoriteWhite.png"))); // NOI18N
    bNuevo1.setToolTipText("Nuevo");
    bNuevo1.setBorderPainted(false);
    bNuevo1.setContentAreaFilled(false);
    bNuevo1.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bNuevo1.setFocusPainted(false);
    bNuevo1.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bNuevo1ActionPerformed(evt);
      }
    });

    bGuardarComo.setBackground(new java.awt.Color(51, 51, 51));
    bGuardarComo.setFont(new java.awt.Font("Amble", 0, 11)); // NOI18N
    bGuardarComo.setForeground(new java.awt.Color(0, 255, 255));
    bGuardarComo.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/SaveWhite.png"))); // NOI18N
    bGuardarComo.setToolTipText("Guardar como...");
    bGuardarComo.setBorderPainted(false);
    bGuardarComo.setContentAreaFilled(false);
    bGuardarComo.setCursor(new java.awt.Cursor(java.awt.Cursor.DEFAULT_CURSOR));
    bGuardarComo.setFocusPainted(false);
    bGuardarComo.addMouseListener(new java.awt.event.MouseAdapter() {
      public void mouseEntered(java.awt.event.MouseEvent evt) {
        bGuardarComoMouseEntered(evt);
      }
    });
    bGuardarComo.addActionListener(new java.awt.event.ActionListener() {
      public void actionPerformed(java.awt.event.ActionEvent evt) {
        bGuardarComoActionPerformed(evt);
      }
    });

    txtName.setBackground(new java.awt.Color(255, 255, 255));
    txtName.setFont(new java.awt.Font("Amble", 0, 10)); // NOI18N
    txtName.setForeground(new java.awt.Color(255, 255, 255));
    txtName.setText("New Text 1.lua");

    javax.swing.GroupLayout pTituloLayout = new javax.swing.GroupLayout(pTitulo);
    pTitulo.setLayout(pTituloLayout);
    pTituloLayout.setHorizontalGroup(
      pTituloLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
      .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, pTituloLayout.createSequentialGroup()
        .addContainerGap()
        .addComponent(bDarkUI, javax.swing.GroupLayout.PREFERRED_SIZE, 44, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addGap(10, 10, 10)
        .addComponent(vTitulo2)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        .addComponent(bNuevo1)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(bGuardar)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(bGuardarComo)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        .addComponent(bBuscar)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(txtName, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(bAyuda, javax.swing.GroupLayout.PREFERRED_SIZE, 42, javax.swing.GroupLayout.PREFERRED_SIZE))
    );
    pTituloLayout.setVerticalGroup(
      pTituloLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
      .addGroup(pTituloLayout.createSequentialGroup()
        .addContainerGap()
        .addGroup(pTituloLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
          .addComponent(bDarkUI, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
          .addComponent(vTitulo2, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)
          .addComponent(bBuscar, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)
          .addComponent(bGuardar, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)
          .addComponent(bNuevo1, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)
          .addComponent(bGuardarComo, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)
          .addComponent(txtName, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE))
        .addGap(0, 13, Short.MAX_VALUE))
      .addComponent(bAyuda, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
    );

    tEditor.setBackground(new java.awt.Color(51, 51, 51));
    tEditor.setForeground(new java.awt.Color(153, 153, 153));
    jScrollPane1.setViewportView(tEditor);

    javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
    getContentPane().setLayout(layout);
    layout.setHorizontalGroup(
      layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
      .addComponent(pTitulo, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
      .addComponent(pFuente, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
      .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)
    );
    layout.setVerticalGroup(
      layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
      .addGroup(layout.createSequentialGroup()
        .addComponent(pTitulo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 339, Short.MAX_VALUE)
        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
        .addComponent(pFuente, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
    );

    pack();
    setLocationRelativeTo(null);
  }// </editor-fold>//GEN-END:initComponents

    
    
    public void getFonts()
    {
      GraphicsEnvironment m;
      m = GraphicsEnvironment.getLocalGraphicsEnvironment();
      Font[] fnts = m.getAllFonts(); // Get the fonts
      
      for (Font d : fnts) {
        System.out.println(d.getFontName());
      }
    }
    
    public void notifSet()   {LNotif.setText("Notifications");}
    
    
        TimerTask timerTask = new TimerTask() 
     { 
         @Override
         public void run()  
         { 
            if (delete==true){
            delete=false;
            bEliminar.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Img/delete0.png")));
            LNotif.setText("Notifications");
            }
         } 
     }; 
        public void reloadTextColor()
        {
            if (Pink==false&&Blue==false&&Yellow==false&&Green==false&&Purple==false)
            {
                if (LIGHT==false)
                {
                
                  tEditor.setForeground(new Color(193,193,193));
                }
                else
                {
                    tEditor.setForeground(new Color(51,51,51));
                }
            }
            else
            {
                
            
                if (Pink==true) {setPink();}
                if (Blue==true) {setBlue();}
                if (Yellow==true) {setYellow();}
                if (Green==true) {setGreen();}
                if (Purple==true) {setPurple();}
            }   
            
        }
        public void setPink()
        {
                        
                if (LIGHT==false)   {tEditor.setForeground(Color.MAGENTA);}
                else            {tEditor.setForeground(new Color(153,000,102));}
            
            
            
        }
        public void setBlue()
        {
            
            if (LIGHT==false)   {tEditor.setForeground(new Color(000,204,255));}
            else            {tEditor.setForeground(new Color(000,102,153));}
           
        }
        
        public void setYellow()
        {
            
            if (LIGHT==false)   {tEditor.setForeground(new Color (255,102,000));}
            else            {tEditor.setForeground(new Color(255,102,000));}
            
        }
        
        public void setGreen()
        {
            
            if (LIGHT==false)   {tEditor.setForeground(new Color(153,255,000));}
            else            {tEditor.setForeground(new Color(51,153,000));}
            
        }
        public void setPurple()
        {
            
            if (LIGHT==false)   {tEditor.setForeground(new Color(153,102,255));}
            else            {tEditor.setForeground(new Color(102,000,153));}
            
        }
        public void disableAllColors()
        {
            Pink=false;Blue=false;
            Yellow=false;Green=false;
            Purple=false;
            enfoque();
        }

        public void abrir () {
            JFileChooser browse;
            browse = new JFileChooser();
            FileFilter txtFilter = new FileNameExtensionFilter("Documento de Texto","txt");
            FileFilter javFilter = new FileNameExtensionFilter("Proyecto Java","java");
            FileFilter luaFilter = new FileNameExtensionFilter("LUA Text File","lua");
            
            browse.addChoosableFileFilter(javFilter);
            browse.addChoosableFileFilter(txtFilter);
            browse.addChoosableFileFilter(luaFilter);
            
            browse.setFileFilter(luaFilter);
            browse.showOpenDialog(this);
            f = browse.getSelectedFile();
            txtName.setText(f.getAbsolutePath());
            String filename = txtName.getText().trim();    
            
            Scanner input;
            tEditor.setText(""); 
                try{
                    input = new Scanner(new File(filename));
                    while(input.hasNext()){
                        //tEditor.append(input.nextLine()); 
                    }
                    input.close();
                    LNotif.setText("Cargado");
                    
                }
                catch(Exception ex){LNotif.setText("Error en archivo");} 
        }


        public void Guardar(){
            String filename=txtName.getText().trim();  
                Formatter output;  
                 try{
                  output=new Formatter(filename);    
                  output.format(tEditor.getText());
                  output.close();
                  LNotif.setText("Actualizado");
                 }
                 catch(Exception ex2){
                     LNotif.setText("Error, abra un documento");
                 }
            
        }


        public void GuardarComo () {
            
            JFileChooser Selector = new JFileChooser();
            //Selector.setFileSelectionMode(JFileChooser.FILES_ONLY);
            FileFilter txtFilter = new FileNameExtensionFilter("Documento de Texto","txt");
            FileFilter javFilter = new FileNameExtensionFilter("Proyecto Java","java");
            FileFilter luaFilter = new FileNameExtensionFilter("LUA Text File","lua");
                                
            Selector.addChoosableFileFilter(javFilter);
            Selector.addChoosableFileFilter(txtFilter);
            Selector.addChoosableFileFilter(luaFilter);
                               
            Selector.setFileFilter(luaFilter);
            
            int result= Selector.showSaveDialog(this);
            if (result== JFileChooser.CANCEL_OPTION) return;
            File name = Selector.getSelectedFile();
            try {
              try (PrintWriter output = new PrintWriter(new FileWriter(txtName.getText().trim()))) {
                output.write(tEditor.getText());
              }
                LNotif.setText("Guardado");
            }
            catch (IOException ioException) {
                JOptionPane.showMessageDialog(null,"Error en el archivo","Error",JOptionPane.ERROR_MESSAGE);
            }
        } 
        
       
      
    public void enableDeleteTimer()
    {
        elitim.schedule(timerTask, 0, 3000);
    }

    public void enfoque()
    {
          tEditor.requestFocus();
    }
    public void fuente()
        {
          try{
            Font FUENTE = new Font(Letra, (fKurs==true ? Font.ITALIC:0) + (fBold==true ? Font.BOLD:0),Tamanio);
            tEditor.setFont(FUENTE); enfoque();
          } catch(Exception e){} 
          
        }
    public void fuenteTam()
        {
            Font FUENTE = new Font(Letra, (fKurs==true ? Font.ITALIC:0) + (fBold==true ? Font.BOLD:0),Tamanio);
            tEditor.setFont(FUENTE); 
        }
    public void fuenteTipo()
    {
        try{
          
          Letra=fonts[Fnt].getFontName();
          bFontCombo.setText(fonts[Fnt].getFontName());
          fuente();
        }
        catch (Exception ex){}
        
        /*
        if (Fnt==0) {bFontCombo.setText("Amble");Letra=bFontCombo.getText();}
        if (Fnt==1) {bFontCombo.setText("Calibri");Letra=bFontCombo.getText();}
        if (Fnt==2) {bFontCombo.setText("Arial");Letra=bFontCombo.getText();}
        if (Fnt==3) {bFontCombo.setText("Courier New");Letra=bFontCombo.getText();}
        
        
        tEditor.setText(Integer.toHexString(Fnt)); 
                Codigo auxiliar para visualizar el indice de fuente seleccionada*/
        
    }
    
    public void restaurarClick(){
    if (LIGHT==false)
        {
            //tEditor.setBackground(new java.awt.Color(51,51,51));
            tEditor.setForeground(new java.awt.Color(193,193,193));
            
        }
        else
        {
            //tEditor.setBackground(new java.awt.Color(193, 193, 193));
            tEditor.setForeground(new java.awt.Color(51,51,51));
        }
    
            Col=false;
            checkNeg.setSelected(false);
            checkCur.setSelected(false);
            fBold=false;
            fKurs=false;
            Letra="Amble";
            
            Pink=false;
            Purple=false;
            Blue=false;
            Green=false;
            Yellow=false;
        
        fuente();
    }
    

    
    public void cambioTamano(int u)
    {
              
        int s = Integer.parseInt(LTamTex.getText());
        int i=0;
            if ((s>=0)&&(s<5))     {i=1;}
            if ((s>=5)&&(s<30))     {i=3;}
            if ((s>=30)&&(s<300))   {i=10;}
            if ((s>=300)&&(s<500))  {i=30;}
            
        if ((s>=1)&&(s<=470)&&(u==0)){
            if (0==u)   {s+=i; Tamanio=s;}}
        
        if ((s<=500)&&(s>1)&&(u==1)){
            if (1==u)   {s-=i; Tamanio=s;}}
        
        String tmn = Integer.toString(Tamanio);
        LTamTex.setText(tmn);
        fuente();
    }
    
    private void fBlueActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fBlueActionPerformed
       //000,204,255
        setBlue(); 
        Pink=false;Blue=true;
            Yellow=false;Green=false;
            Purple=false;
            Col=true;
            reloadTextColor();
    }//GEN-LAST:event_fBlueActionPerformed

    private void fYellowActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fYellowActionPerformed
        setYellow();
        Pink=false;Blue=false;
            Yellow=true;Green=false;
            Purple=false;
            Col=true;
            reloadTextColor();
    }//GEN-LAST:event_fYellowActionPerformed

    private void fPinkActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fPinkActionPerformed
        setPink();
        Pink=true;Blue=false;
            Yellow=false;Green=false;
            Purple=false;
            Col=true;
            reloadTextColor();
    }//GEN-LAST:event_fPinkActionPerformed

    private void fGreenActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fGreenActionPerformed
        setGreen(); 
        Pink=false;Blue=false;
            Yellow=false;Green=true;
            Purple=false;
            Col=true;
            reloadTextColor();
    }//GEN-LAST:event_fGreenActionPerformed

    private void fPurpleActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_fPurpleActionPerformed
        setPurple();
        Pink=false;Blue=false;
            Yellow=false;Green=false;
            Purple=true;
            Col=true;
        reloadTextColor();
    }//GEN-LAST:event_fPurpleActionPerformed

    private void bDarkUIActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bDarkUIActionPerformed
        
        if(LIGHT==false){
            // Interfaz Luna Llena
            this.getContentPane().setBackground(new Color(193, 193, 193));
            this.getContentPane().setForeground(new Color(51, 51, 51));
            pFuente.setBackground(new Color(193, 193, 193));
            pFuente.setForeground(new Color(51, 51, 51));
            //pTitulo.setBackground(new Color(193, 193, 193));
            //pTitulo.setForeground(new Color(51, 51, 51));
            tEditor.setBackground(new Color(193, 193, 193));
            if (Col==false)       {tEditor.setForeground(new Color(51, 51, 51));}
            LTamTex.setForeground(new Color(51,51,51));
            checkNeg.setForeground(new Color(51,51,51));
            checkCur.setForeground(new Color(51,51,51));
            bFontCombo.setForeground(new Color(51,51,51));
            LTamTex.setForeground(new Color(51,51,51));
            LTamTex.setBackground(new Color(193, 193, 193));
            //vTitulo2.setForeground(new Color(51,51,51));
            LNotif.setForeground(new Color(51,51,51));
            //txtName.setForeground(new Color(51,51,51));
            
            LIGHT=true;
            
            
            bDarkUI.setIcon(new ImageIcon(getClass().getResource("/Img/Dark.png")));
            LNotif.setText("Tema: Moonlight");
        }
        else
        {
            //Interfaz eclipse lunar
            this.getContentPane().setBackground(new Color(51, 51, 51));
            this.getContentPane().setForeground(new Color(193, 193, 193));
            pFuente.setBackground(new Color(51, 51, 51));
            pFuente.setForeground(new Color(193, 193, 193));
            //pTitulo.setBackground(new Color(51, 51, 51));
            //pTitulo.setForeground(new Color(193, 193, 193));
            tEditor.setBackground(new Color(51, 51, 51));
            if (Col==false)       {tEditor.setForeground(new Color(193, 193, 193));}
            LTamTex.setForeground(new Color(193, 193, 193));
            checkNeg.setForeground(new Color(193, 193, 193));
            checkCur.setForeground(new Color(193, 193, 193));
            bFontCombo.setForeground(new Color(193,193,193));
            LTamTex.setForeground(new Color(193, 193, 193));
            LTamTex.setBackground(new Color(51,51,51));
            //vTitulo2.setForeground(new Color(193,193,193));
            LNotif.setForeground(new Color(193,193,193));
            //txtName.setForeground(new Color(193,193,193));
            
            LIGHT=false;
            
            
            bDarkUI.setIcon(new ImageIcon(getClass().getResource("/Img/Light.png")));
            LNotif.setText("Tema: Eclipse");
        }
        reloadTextColor();
        enfoque();
    }//GEN-LAST:event_bDarkUIActionPerformed

 
    private void bRestoreActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bRestoreActionPerformed
            restaurarClick();
            LNotif.setText("Formato restaurado");
    }//GEN-LAST:event_bRestoreActionPerformed

    private void bGuardarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bGuardarActionPerformed
        Guardar();
    }//GEN-LAST:event_bGuardarActionPerformed

    private void bBuscarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bBuscarActionPerformed
            abrir();
    }//GEN-LAST:event_bBuscarActionPerformed
/**/
    private void bEliminarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bEliminarActionPerformed
        if (delete==false)
        {
            bEliminar.setIcon(new ImageIcon(getClass().getResource("/Img/delete1.png")));
            delete=true;
            LNotif.setText("Click again to clean");
        }
        else
        {
            tEditor.setText("");
            delete=false;
            bEliminar.setIcon(new ImageIcon(getClass().getResource("/Img/delete0.png")));
            LNotif.setText("Cleaned");
        }
        enfoque();
    }//GEN-LAST:event_bEliminarActionPerformed

    private void bAyudaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bAyudaActionPerformed
        LUA_HELP open = new LUA_HELP();
        open.setVisible(true);
    }//GEN-LAST:event_bAyudaActionPerformed

    private void checkCurActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_checkCurActionPerformed
        if (fKurs==true){
            fKurs=false;
            checkCur.setIcon(new ImageIcon(getClass().getResource("/Img/CursiveDisabled.png")));
            LNotif.setText("Italic disabled");
        }
        else {
            fKurs=true;
            checkCur.setIcon(new ImageIcon(getClass().getResource("/Img/CursiveEnabled.png")));
            LNotif.setText("Italic enabled");
        }
           fuente();
    }//GEN-LAST:event_checkCurActionPerformed

    private void checkNegActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_checkNegActionPerformed
          if (fBold==true){
            fBold=false;
            checkNeg.setIcon(new ImageIcon(getClass().getResource("/Img/BlackDisabled.png")));
            LNotif.setText("Bold disabled");
        }
        else {
            fBold=true;
            checkNeg.setIcon(new ImageIcon(getClass().getResource("/Img/BlackEnabled.png")));
            LNotif.setText("Bold enabled");
        }
           fuente();

    }//GEN-LAST:event_checkNegActionPerformed

    private void bTMasActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bTMasActionPerformed
        cambioTamano(0);
    }//GEN-LAST:event_bTMasActionPerformed

    private void bTMen1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bTMen1ActionPerformed
        cambioTamano(1);
    }//GEN-LAST:event_bTMen1ActionPerformed

    private void LTamTexActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_LTamTexActionPerformed
       
    }//GEN-LAST:event_LTamTexActionPerformed

    private void bFontComboActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bFontComboActionPerformed
        fuenteTipo();
    }//GEN-LAST:event_bFontComboActionPerformed

    private void bNuevo1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bNuevo1ActionPerformed
            restaurarClick();
            tEditor.setText("");
            txtName.setText("New Text "+NumFile+".lua");
            NumFile++;
    }//GEN-LAST:event_bNuevo1ActionPerformed

    private void bGuardarComoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bGuardarComoActionPerformed
        GuardarComo();
    }//GEN-LAST:event_bGuardarComoActionPerformed

    private void bGuardarComoMouseEntered(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_bGuardarComoMouseEntered
        // TODO add your handling code here:
    }//GEN-LAST:event_bGuardarComoMouseEntered

    /**
   * @param args     */

    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException | InstantiationException | IllegalAccessException | javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(LUA_Editor.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
         //</editor-fold>
         //</editor-fold>
         //</editor-fold>
         //</editor-fold>
         
        //</editor-fold>
        //</editor-fold>
       
        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            @Override
            public void run() {
                new LUA_Editor().setVisible(true);
            }
        });
    }

  // Variables declaration - do not modify//GEN-BEGIN:variables
  private javax.swing.JLabel LNotif;
  private javax.swing.JTextField LTamTex;
  private javax.swing.JButton bAyuda;
  private javax.swing.JButton bBuscar;
  private javax.swing.JButton bDarkUI;
  private javax.swing.JButton bEliminar;
  private javax.swing.JButton bFontCombo;
  private javax.swing.JButton bGuardar;
  private javax.swing.JButton bGuardarComo;
  private javax.swing.JButton bNuevo1;
  private javax.swing.JButton bRestore;
  private javax.swing.JButton bTMas;
  private javax.swing.JButton bTMen1;
  private javax.swing.JButton checkCur;
  private javax.swing.JButton checkNeg;
  private javax.swing.JButton fBlue;
  private javax.swing.JButton fGreen;
  private javax.swing.JButton fPink;
  private javax.swing.JButton fPurple;
  private javax.swing.JButton fYellow;
  private javax.swing.JScrollPane jScrollPane1;
  private javax.swing.JPanel pFuente;
  private javax.swing.JPanel pTitulo;
  private javax.swing.JEditorPane tEditor;
  private javax.swing.JLabel txtName;
  private javax.swing.JLabel vTitulo2;
  // End of variables declaration//GEN-END:variables
}