// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/camille/ubuntu/CIES/Atelier_projet/projet_climat_new/climat.glade
// for gtk 2.10.6 and gtkmm 2.10.2
//
// Please modify the corresponding derived classes in ./src/enregister_etat_final_dialog.hh and./src/enregister_etat_final_dialog.cc

#ifndef _ENREGISTER_ETAT_FINAL_DIALOG_GLADE_HH
#  define _ENREGISTER_ETAT_FINAL_DIALOG_GLADE_HH


#if !defined(GLADEMM_DATA)
#define GLADEMM_DATA 
#include <gtkmm/accelgroup.h>

class GlademmData
{  
        
        Glib::RefPtr<Gtk::AccelGroup> accgrp;
public:
        
        GlademmData(Glib::RefPtr<Gtk::AccelGroup> ag) : accgrp(ag)
        {  
        }
        
        Glib::RefPtr<Gtk::AccelGroup>  getAccelGroup()
        {  return accgrp;
        }
};
#endif //GLADEMM_DATA

#include <gtkmm/dialog.h>
#include <gtkmm/comboboxtext.h>
#include <gtkmm/label.h>
#include <gtkmm/filechooserwidget.h>

class enregister_etat_final_dialog_glade : public Gtk::Dialog
{  
        
        GlademmData *gmm_data;
public:
        class Gtk::ComboBoxText * enregistrer_choix_simulation_combobox;
        class Gtk::FileChooserWidget * enregistrer_etat_final_filechooserwidget;
protected:
        
        enregister_etat_final_dialog_glade();
        
        ~enregister_etat_final_dialog_glade();
private:
        virtual void on_cancelbutton8_clicked() = 0;
        virtual void on_okbutton8_clicked() = 0;
        virtual void on_enregistrer_choix_simulation_combobox_changed() = 0;
};
#endif
