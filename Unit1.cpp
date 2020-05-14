//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
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

}
//---------------------------------------------------------------------------
