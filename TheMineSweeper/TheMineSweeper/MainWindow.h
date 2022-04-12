#pragma once
#include "wx/wx.h"


class MainWindow : public wxFrame
{

private:
	/*wxButton* btnPress = nullptr;
	wxButton* btnMe = nullptr;
	wxTextCtrl* text = nullptr;*/
public:
	MainWindow();
	~MainWindow();
	
	int nFieldWidth = 10;
	int nFieldHeight = 10;
	wxButton **btn;
	int *nField = nullptr;
	bool bFirstClick = true;


	void OnButtonClick(wxCommandEvent &evt);

	wxDECLARE_EVENT_TABLE();
};

