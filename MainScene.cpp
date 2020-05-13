//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainScene.h"
#include "HashTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
HashTable* hashTable = new HashTable();
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AddClick(TObject *Sender)
{
  int hash = hashTable->Add(StrToInt(KeyAdd->Text), InfoAdd->Text);
  Keys->Items->Add(KeyAdd->Text);
  InfoView->Clear();
  InfoView->Items->Add("Hashed as " + IntToStr(hash));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FindClick(TObject *Sender)
{
  Node* found = hashTable->Find(StrToInt(KeyEdit->Text));
  if (found == NULL) {
    InfoView->Clear();
    InfoView->Items->Add("No item found");
  }
  else {
    InfoView->Clear();
    InfoView->Items->Add("Key: " + IntToStr(found->key));
    InfoView->Items->Add("Info: " + found->info);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteClick(TObject *Sender)
{
	bool result = hashTable->Delete(StrToInt(KeyEdit->Text));
  if (result == false) {
    InfoView->Clear();
    InfoView->Items->Add("No item found");
  }
  else {
    InfoView->Clear();
    InfoView->Items->Add("Item deleted");
    for (int i = 0; i < Keys->Items->Count; i++) {
			if (Keys->Items->Strings[i] == KeyEdit->Text) {
        Keys->Items->Delete(i);
        break;
      }
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TestHashClick(TObject *Sender)
{
  int hash = hashTable->Hash(StrToInt(KeyHash->Text));
  KeyHash->Text = IntToStr(hash);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SolveMyTaskClick(TObject *Sender)
{
  InfoView->Clear();
  InfoView->Items->Add("Answer: " + IntToStr(hashTable->SolveTask()));
}
//---------------------------------------------------------------------------

