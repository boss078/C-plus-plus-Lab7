//---------------------------------------------------------------------------

#ifndef MainSceneH
#define MainSceneH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TListBox *InfoView;
	TGroupBox *InformationGroup;
	TGroupBox *Control;
	TGroupBox *AddGroup;
	TLabeledEdit *KeyEdit;
	TButton *Find;
	TButton *Delete;
	TEdit *KeyHash;
	TButton *TestHash;
	TButton *SolveMyTask;
	TLabeledEdit *KeyAdd;
	TLabeledEdit *InfoAdd;
	TButton *Add;
	TGroupBox *KeysGroup;
	TListBox *Keys;
	void __fastcall AddClick(TObject *Sender);
	void __fastcall FindClick(TObject *Sender);
	void __fastcall DeleteClick(TObject *Sender);
	void __fastcall TestHashClick(TObject *Sender);
	void __fastcall SolveMyTaskClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
