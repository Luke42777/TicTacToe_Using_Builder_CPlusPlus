//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char p1,p2,p3,p4,p5,p6,p7,p8,p9; // this var stroes info about fields 'n' '' 'o'
char who; // to store which player's turn
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        Field1->Picture->LoadFromFile("img/nic.bmp");
        Field2->Picture->LoadFromFile("img/nic.bmp");
        Field3->Picture->LoadFromFile("img/nic.bmp");
        Field4->Picture->LoadFromFile("img/nic.bmp");
        Field5->Picture->LoadFromFile("img/nic.bmp");
        Field6->Picture->LoadFromFile("img/nic.bmp");
        Field7->Picture->LoadFromFile("img/nic.bmp");
        Field8->Picture->LoadFromFile("img/nic.bmp");
        Field9->Picture->LoadFromFile("img/nic.bmp");
        Player_turn->Picture->LoadFromFile("img/osmall.bmp");

        p1 = 'n';  // these are initial settings
        p2 = 'n';
        p3 = 'n';
        p4 = 'n';
        p5 = 'n';
        p6 = 'n';
        p7 = 'n';
        p8 = 'n';
        p9 = 'n';

        who = 'o';


}
//---------------------------------------------------------------------------
