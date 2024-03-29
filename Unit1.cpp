//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include<mmsystem.h>
#include<fstream.h>
#include <time.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
string klawisz;
clock_t start,stop;//do liczenia odst�p�w
//fstream plik; <-nie bedzie dzialac
bool czy_nagrywam;
int pauza=0;//odst�p
int kursor;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)  //konstruktor
        : TForm(Owner)
{
        fstream plik;
        plik.open("zapis.txt",ios::in);
        if(plik.good()==true)
        {
                plik.seekg(0,ios::end); //sprawdza czy plik jest pusty
                kursor = plik.tellg();
                if(kursor == 0) Czas->Caption="Nagraj utw�r!";  //jesli plik pusty
                else Czas->Caption="Nagraj kolejny utw�r";            //jesli plik niepusty
        }
        if(plik.good()==false) //jesli plik nie istnieje
        {
                Czas->Caption="Nagraj utw�r!";
        }
        plik.clear();
        plik.close();
}

//---------------------------------------------------------------------------

void nagrywaj(string klawisz)
{
        fstream plik;
        plik.open("zapis.txt",ios::out | ios::app);
        stop=clock();
        plik<<stop-start<<endl;
        plik<<klawisz<<endl;
        start=clock();
        plik.clear();
        plik.close();
}

void __fastcall TForm1::c1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        c1a->Visible=true;
        sndPlaySound("snd/c1.wav",SND_ASYNC);
        klawisz='c';
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::c1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        c1a->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::cis1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        cis1a->Visible=true;
        sndPlaySound("snd/cis1.wav",SND_ASYNC);
        klawisz="cis";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cis1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        cis1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::d1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        d1a->Visible=true;
        sndPlaySound("snd/d1.wav",SND_ASYNC);
        klawisz='d';
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::d1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        d1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dis1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        dis1a->Visible=true;
        sndPlaySound("snd/dis1.wav",SND_ASYNC);
        klawisz="dis";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dis1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        dis1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::e1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        e1a->Visible=true;
        sndPlaySound("snd/e1.wav",SND_ASYNC);
        klawisz='e';
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::e1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        e1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::f1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        f1a->Visible=true;
        sndPlaySound("snd/f1.wav",SND_ASYNC);
        klawisz='f';
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::f1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        f1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::fis1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        fis1a->Visible=true;
        sndPlaySound("snd/fis1.wav",SND_ASYNC);
        klawisz="fis";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::fis1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        fis1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::g1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        g1a->Visible=true;
        sndPlaySound("snd/g1.wav",SND_ASYNC);
        klawisz='g';
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::g1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        g1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::gis1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        gis1a->Visible=true;
        sndPlaySound("snd/gis1.wav",SND_ASYNC);
        klawisz="gis";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::gis1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        gis1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::a1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        a1a->Visible=true;
        sndPlaySound("snd/a1.wav",SND_ASYNC);
        klawisz='a';
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::a1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        a1a->Visible=false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ais1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        ais1a->Visible=true;
        sndPlaySound("snd/ais1.wav",SND_ASYNC);
        klawisz='b';
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ais1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        ais1a->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::h1MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        h1a->Visible=true;
        sndPlaySound("snd/h1.wav",SND_ASYNC);
        klawisz='h';
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::h1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        h1a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::c2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        c2a->Visible=true;
        sndPlaySound("snd/c2.wav",SND_ASYNC);
        klawisz="c2";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::c2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        c2a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cis2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        cis2a->Visible=true;
        sndPlaySound("snd/cis2.wav",SND_ASYNC);
        klawisz="cis2";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::cis2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        cis2a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::d2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        d2a->Visible=true;
        sndPlaySound("snd/d2.wav",SND_ASYNC);
        klawisz="d2";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::d2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        d2a->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::dis2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        dis2a->Visible=true;
        sndPlaySound("snd/dis2.wav",SND_ASYNC);
        klawisz="dis2";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::dis2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        dis2a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::e2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        e2a->Visible=true;
        sndPlaySound("snd/e2.wav",SND_ASYNC);
        klawisz="e2";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::e2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        e2a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::f2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        f2a->Visible=true;
        sndPlaySound("snd/f2.wav",SND_ASYNC);
        klawisz="f2";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::f2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        f2a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::fis2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        fis2a->Visible=true;
        sndPlaySound("snd/fis2.wav",SND_ASYNC);
        klawisz="fis2";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::fis2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        fis2a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::g2MouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        g2a->Visible=true;
        sndPlaySound("snd/g2.wav",SND_ASYNC);
        klawisz="g2";
        if(czy_nagrywam==true) nagrywaj(klawisz);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::g2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        g2a->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key==0x41)
        {
                        c1a->Visible=true;
                        sndPlaySound("snd/c1.wav",SND_ASYNC);
                        klawisz='c';
                        if(czy_nagrywam==true) nagrywaj(klawisz);

        }
        if(Key==0x57)
        {
                        cis1a->Visible=true;
                        sndPlaySound("snd/cis1.wav",SND_ASYNC);
                        klawisz="cis";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x53)
        {
                        d1a->Visible=true;
                        sndPlaySound("snd/d1.wav",SND_ASYNC);
                        klawisz='d';
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x45)
        {
                        dis1a->Visible=true;
                        sndPlaySound("snd/dis1.wav",SND_ASYNC);
                        klawisz="dis";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x44)
        {
                        e1a->Visible=true;
                        sndPlaySound("snd/e1.wav",SND_ASYNC);
                        klawisz='e';
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x46)
        {
                        f1a->Visible=true;
                        sndPlaySound("snd/f1.wav",SND_ASYNC);
                        klawisz='f';
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x54)
        {
                        fis1a->Visible=true;
                        sndPlaySound("snd/fis1.wav",SND_ASYNC);
                        klawisz="fis";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x47)
        {
                        g1a->Visible=true;
                        sndPlaySound("snd/g1.wav",SND_ASYNC);
                        klawisz='g';
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x59)
        {
                        gis1a->Visible=true;
                        sndPlaySound("snd/gis1.wav",SND_ASYNC);
                        klawisz="gis";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x48)
        {
                        a1a->Visible=true;
                        sndPlaySound("snd/a1.wav",SND_ASYNC);
                        klawisz='a';
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x55)
        {
                        ais1a->Visible=true;
                        sndPlaySound("snd/ais1.wav",SND_ASYNC);
                        klawisz='b';
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x4A)
        {
                        h1a->Visible=true;
                        sndPlaySound("snd/h1.wav",SND_ASYNC);
                        klawisz='h';
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x4B)
        {
                        c2a->Visible=true;
                        sndPlaySound("snd/c2.wav",SND_ASYNC);
                        klawisz="c2";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x4F)
        {
                        cis2a->Visible=true;
                        sndPlaySound("snd/cis2.wav",SND_ASYNC);
                        klawisz="cis2";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x4C)
        {
                        d2a->Visible=true;
                        sndPlaySound("snd/d2.wav",SND_ASYNC);
                        klawisz="d2";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==0x50)
        {
                        dis2a->Visible=true;
                        sndPlaySound("snd/dis2.wav",SND_ASYNC);
                        klawisz="dis2";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==VK_OEM_1) //;
        {
                        e2a->Visible=true;
                        sndPlaySound("snd/e2.wav",SND_ASYNC);
                        klawisz="e2";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==VK_OEM_7)//'
        {
                        f2a->Visible=true;
                        sndPlaySound("snd/f2.wav",SND_ASYNC);
                        klawisz="f2";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==VK_OEM_6)//]
        {
                        fis2a->Visible=true;
                        sndPlaySound("snd/fis2.wav",SND_ASYNC);
                        klawisz="fis2";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }
        if(Key==VK_OEM_5)
        {
                        g2a->Visible=true;
                        sndPlaySound("snd/g2.wav",SND_ASYNC);
                        klawisz="g2";
                        if(czy_nagrywam==true) nagrywaj(klawisz);
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key==0x41)
        {
                        c1a->Visible=false;
        }
        if(Key==0x57)
        {
                        cis1a->Visible=false;
        }
        if(Key==0x53)
        {
                        d1a->Visible=false;
        }
        if(Key==0x45)
        {
                        dis1a->Visible=false;
        }
        if(Key==0x44)
        {
                        e1a->Visible=false;
        }
        if(Key==0x46)
        {
                        f1a->Visible=false;
        }
        if(Key==0x54)
        {
                        fis1a->Visible=false;
        }
        if(Key==0x47)
        {
                        g1a->Visible=false;
        }
        if(Key==0x59)
        {
                        gis1a->Visible=false;
        }
        if(Key==0x48)
        {
                        a1a->Visible=false;
        }
        if(Key==0x55)
        {
                        ais1a->Visible=false;
        }
        if(Key==0x4A)
        {
                        h1a->Visible=false;
        }
        if(Key==0x4B)
        {
                        c2a->Visible=false;
        }
        if(Key==0x4F)
        {
                        cis2a->Visible=false;
        }
        if(Key==0x4C)
        {
                        d2a->Visible=false;
        }
        if(Key==0x50)
        {
                        dis2a->Visible=false;
        }
        if(Key==VK_OEM_1) //;
        {
                        e2a->Visible=false;
        }
        if(Key==VK_OEM_7)//'
        {
                        f2a->Visible=false;
        }
        if(Key==VK_OEM_6)//]
        {
                        fis2a->Visible=false;
        }
        if(Key==VK_OEM_5)
        {
                        g2a->Visible=false;
        }
}
//---------------------------------------------------------------------------




void __fastcall TForm1::nagrajClick(TObject *Sender)
{
        start=clock();
        odtworz->Visible=false;
        stop->Visible=true;
        czy_nagrywam=true;
        Czas->Caption="Nagrywam";
        fstream plik;
        plik.open("zapis.txt",ios::out | ios::trunc); //kasowanie danych w pliku
        plik.clear();
        plik.close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::stopClick(TObject *Sender)
{
        odtworz->Visible=true;;
        stop->Visible=false;
        czy_nagrywam=false;
        fstream plik;
        plik.open("zapis.txt",ios::in);
        plik.seekg(0,ios::end); //sprawdza czy plik jest pusty
        kursor = plik.tellg();
        if(kursor == 0) Czas->Caption="Nie nagrano";
        else Czas->Caption="Nagrano utw�r";
        plik.clear();
        plik.close();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::odtworzClick(TObject *Sender)
{
        klawisz='0';
        pauza=0;//domyslne wartosci, aby program nie odtworzyl dzwieku, gdy plik pusty
        fstream plik;
        plik.open("zapis.txt",ios::in);
        if(plik.good()==false) //jesli plik nie istnieje
        {

               Czas->Caption ="Nic nie nagrales";

        }
        else  //jesli plik istnieje
        {
            plik.seekg(0,ios::end); //sprawdza czy plik jest pusty
            kursor = plik.tellg();
            if(kursor == 0) Czas->Caption="Brak nagrania";
            else //jesli plik nie jest pusty
            {
                odtwarzanie->Visible=true;
                Czas->Caption="Odtwarzam";
                plik.seekg(0,ios::beg);
                plik>>pauza;
                Application->ProcessMessages(); Sleep(pauza);
                while(!plik.eof())
                {
                        plik>>klawisz;
                        plik>>pauza;
                        if(plik.eof()) pauza=500;//jesli napotkasz koniec
                        if(klawisz=="c")
                        {
                         sndPlaySound("snd/c1.wav",SND_ASYNC);
                         c1a->Visible=true;
                         Application->ProcessMessages(); Sleep(pauza);
                         c1a->Visible=false;
                        }
                        if(klawisz=="cis")
                         {
                                sndPlaySound("snd/cis1.wav",SND_ASYNC);
                                cis1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                cis1a->Visible=false;
                        }
                        if(klawisz=="d")
                        {
                                 sndPlaySound("snd/d1.wav",SND_ASYNC);
                                 d1a->Visible=true;
                                 Application->ProcessMessages(); Sleep(pauza);
                                 d1a->Visible=false;
                         }
                        if(klawisz=="dis")
                        {
                                sndPlaySound("snd/dis1.wav",SND_ASYNC);
                                dis1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                dis1a->Visible=false;
                        }
                        if(klawisz=="e")
                        {
                                sndPlaySound("snd/e1.wav",SND_ASYNC);
                                e1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                e1a->Visible=false;
                        }
                        if(klawisz=="f")
                        {
                                sndPlaySound("snd/f1.wav",SND_ASYNC);
                                f1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                f1a->Visible=false;
                        }
                        if(klawisz=="fis")
                        {
                                sndPlaySound("snd/fis1.wav",SND_ASYNC);
                                fis1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                fis1a->Visible=false;
                        }
                        if(klawisz=="g")
                        {
                                sndPlaySound("snd/g1.wav",SND_ASYNC);
                                g1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                g1a->Visible=false;
                        }
                        if(klawisz=="gis")
                        {
                                sndPlaySound("snd/gis1.wav",SND_ASYNC);
                                gis1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                gis1a->Visible=false;
                        }
                        if(klawisz=="a")
                        {
                                sndPlaySound("snd/a1.wav",SND_ASYNC);
                                a1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                a1a->Visible=false;
                        }
                        if(klawisz=="b")
                        {
                                sndPlaySound("snd/ais1.wav",SND_ASYNC);
                                ais1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                ais1a->Visible=false;
                        }
                        if(klawisz=="h")
                        {
                                sndPlaySound("snd/h1.wav",SND_ASYNC);
                                h1a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                h1a->Visible=false;
                        }
                        if(klawisz=="c2")
                        {
                                sndPlaySound("snd/c2.wav",SND_ASYNC);
                                c2a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                c2a->Visible=false;
                        }
                        if(klawisz=="cis2")
                        {
                                sndPlaySound("snd/cis2.wav",SND_ASYNC);
                                cis2a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                cis2a->Visible=false;
                        }
                        if(klawisz=="d2")
                        {
                                sndPlaySound("snd/d2.wav",SND_ASYNC);
                                d2a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                d2a->Visible=false;
                        }
                        if(klawisz=="dis2")
                        {
                                sndPlaySound("snd/dis2.wav",SND_ASYNC);
                                dis2a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                dis2a->Visible=false;
                        }
                        if(klawisz=="e2")
                        {
                                sndPlaySound("snd/e2.wav",SND_ASYNC);
                                e2a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                e2a->Visible=false;
                        }
                        if(klawisz=="f2")
                        {
                                sndPlaySound("snd/f2.wav",SND_ASYNC);
                                f2a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                f2a->Visible=false;
                        }
                        if(klawisz=="fis2")
                        {
                                sndPlaySound("snd/fis2.wav",SND_ASYNC);
                                fis2a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                fis2a->Visible=false;
                        }
                        if(klawisz=="g2")
                        {
                                sndPlaySound("snd/g2.wav",SND_ASYNC);
                                g2a->Visible=true;
                                Application->ProcessMessages(); Sleep(pauza);
                                g2a->Visible=false;
                        }

                }
                odtwarzanie->Visible=false;
                Czas->Caption="Nagraj kolejny utw�r!";
            }
        }
        plik.clear();
        plik.close();
}
//---------------------------------------------------------------------------

