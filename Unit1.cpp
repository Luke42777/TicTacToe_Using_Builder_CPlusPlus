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
void __fastcall TForm1::Field1Click(TObject *Sender)
{
        if(p1 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field1->Picture->LoadFromFile("img/o.bmp");
                  p1 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field1->Cursor  = crArrow;

                }
                else
                {

                 Field1->Picture->LoadFromFile("img/x.bmp");
                 p1 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field1->Cursor  = crArrow;

                }
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Field2Click(TObject *Sender)
{
    if(p2 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field2->Picture->LoadFromFile("img/o.bmp");
                  p2 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field2->Cursor  = crArrow;

                }
                else
                {

                 Field2->Picture->LoadFromFile("img/x.bmp");
                 p2 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field2->Cursor  = crArrow;

                }
        }      
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Field3Click(TObject *Sender)
{
     if(p3 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field3->Picture->LoadFromFile("img/o.bmp");
                  p3 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field3->Cursor  = crArrow;

                }
                else
                {

                 Field3->Picture->LoadFromFile("img/x.bmp");
                 p3 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field3->Cursor  = crArrow;

                }
        }     
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Field4Click(TObject *Sender)
{
       if(p4 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field4->Picture->LoadFromFile("img/o.bmp");
                  p4 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field4->Cursor  = crArrow;

                }
                else
                {

                 Field4->Picture->LoadFromFile("img/x.bmp");
                 p4 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field4->Cursor  = crArrow;

                }
        }   
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Field5Click(TObject *Sender)
{
   if(p5 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field5->Picture->LoadFromFile("img/o.bmp");
                  p5 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field5->Cursor  = crArrow;

                }
                else
                {

                 Field5->Picture->LoadFromFile("img/x.bmp");
                 p5 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field5->Cursor  = crArrow;

                }
        }       
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Field6Click(TObject *Sender)
{
   if(p6 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field6->Picture->LoadFromFile("img/o.bmp");
                  p6 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field6->Cursor  = crArrow;

                }
                else
                {

                 Field6->Picture->LoadFromFile("img/x.bmp");
                 p6 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field6->Cursor  = crArrow;

                }
        }       
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Field7Click(TObject *Sender)
{
      if(p7 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field7->Picture->LoadFromFile("img/o.bmp");
                  p7 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field7->Cursor  = crArrow;

                }
                else
                {

                 Field7->Picture->LoadFromFile("img/x.bmp");
                 p7 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field7->Cursor  = crArrow;

                }
        }    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Field8Click(TObject *Sender)
{
      if(p8 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field8->Picture->LoadFromFile("img/o.bmp");
                  p8 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field8->Cursor  = crArrow;

                }
                else
                {

                 Field8->Picture->LoadFromFile("img/x.bmp");
                 p8 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field8->Cursor = crArrow;

                }
        }    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Field9Click(TObject *Sender)
{
      if(p9 == 'n')    //checking if field is empty
        {
                if(who == 'o')
                {
                  Field9->Picture->LoadFromFile("img/o.bmp");
                  p9 = 'o';

                  who = 'x';  //turn is changing
                  Player_turn->Picture->LoadFromFile("img/xsmall.bmp");
                  Field9->Cursor  = crArrow;

                }
                else
                {

                 Field9->Picture->LoadFromFile("img/x.bmp");
                 p9 = 'x';

                 who = 'o';
                 Player_turn->Picture->LoadFromFile("img/osmall.bmp");
                 Field9->Cursor  = crArrow;

                }
        }
}
//---------------------------------------------------------------------------

