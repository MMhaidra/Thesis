{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Feb  2 12:05:30 2013) by ROOT version5.26/00c
   TCanvas *c1 = new TCanvas("c1", "c1",368,134,700,500);
   gStyle->SetOptFit(1);
   c1->Range(-0.4125,-6.69375,3.7125,60.24375);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *htemp__1 = new TH1F("htemp__1","qsq",100,0,3.3);
   htemp__1->SetBinContent(2,2);
   htemp__1->SetBinContent(3,2);
   htemp__1->SetBinContent(4,2);
   htemp__1->SetBinContent(5,3);
   htemp__1->SetBinContent(6,3);
   htemp__1->SetBinContent(7,9);
   htemp__1->SetBinContent(8,7);
   htemp__1->SetBinContent(9,5);
   htemp__1->SetBinContent(10,12);
   htemp__1->SetBinContent(11,16);
   htemp__1->SetBinContent(12,10);
   htemp__1->SetBinContent(13,16);
   htemp__1->SetBinContent(14,22);
   htemp__1->SetBinContent(15,13);
   htemp__1->SetBinContent(16,14);
   htemp__1->SetBinContent(17,16);
   htemp__1->SetBinContent(18,25);
   htemp__1->SetBinContent(19,22);
   htemp__1->SetBinContent(20,23);
   htemp__1->SetBinContent(21,32);
   htemp__1->SetBinContent(22,40);
   htemp__1->SetBinContent(23,46);
   htemp__1->SetBinContent(24,42);
   htemp__1->SetBinContent(25,6);
   htemp__1->SetBinContent(72,51);
   htemp__1->SetBinContent(73,42);
   htemp__1->SetBinContent(74,37);
   htemp__1->SetBinContent(75,39);
   htemp__1->SetBinContent(76,21);
   htemp__1->SetBinContent(77,28);
   htemp__1->SetBinContent(78,30);
   htemp__1->SetBinContent(79,14);
   htemp__1->SetBinContent(80,22);
   htemp__1->SetBinContent(81,24);
   htemp__1->SetBinContent(82,19);
   htemp__1->SetBinContent(83,7);
   htemp__1->SetBinContent(84,23);
   htemp__1->SetBinContent(85,12);
   htemp__1->SetBinContent(86,10);
   htemp__1->SetBinContent(87,10);
   htemp__1->SetBinContent(88,9);
   htemp__1->SetBinContent(89,3);
   htemp__1->SetBinContent(90,3);
   htemp__1->SetBinContent(91,4);
   htemp__1->SetBinContent(92,3);
   htemp__1->SetBinContent(93,1);
   htemp__1->SetEntries(800);
   htemp__1->SetDirectory(0);
   
   

    gROOT->ProcessLine(".L lhcbStyle.C");
    lhcbStyle();
   htemp__1->GetYaxis()->SetTitle("evts");
   htemp__1->GetXaxis()->SetTitle("cos(#theta_{l})");
   htemp__1->Draw("e"); 
   
   
   c1->Modified();
   c1->SaveAs("costhetal.pdf");
   c1->cd();
   c1->SetSelected(c1);
}
