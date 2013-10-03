{
//=========Macro generated from canvas: c/
//=========  (Fri Nov 30 17:12:29 2012) by ROOT version5.34/00
   TCanvas *c = new TCanvas("c", "",0,0,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-0.01766667,-18.74333,0.1156667,85.38627);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.14);
   c->SetRightMargin(0.05);
   c->SetBottomMargin(0.18);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   c->SetFrameLineWidth(3);
   c->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(10);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,0.01,67.35456791);
   graph->SetPoint(1,0.02,18.45519263);
   graph->SetPoint(2,0.03,9.857158163);
   graph->SetPoint(3,0.04,6.336418989);
   graph->SetPoint(4,0.05,4.540820592);
   graph->SetPoint(5,0.06,3.431377394);
   graph->SetPoint(6,0.07,2.688181313);
   graph->SetPoint(7,0.08,2.201426678);
   graph->SetPoint(8,0.09,1.839779769);
   graph->SetPoint(9,0.1,1.580127975);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.001,0.109);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(73.93201);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineWidth(3);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetTitle("R");
   Graph_Graph1->GetXaxis()->SetNdivisions(505);
   Graph_Graph1->GetXaxis()->SetLabelFont(132);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.096);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph1->GetXaxis()->SetTitleFont(132);
   Graph_Graph1->GetYaxis()->SetTitle("<#sigma_{#omega}>");
   Graph_Graph1->GetYaxis()->SetNdivisions(505);
   Graph_Graph1->GetYaxis()->SetLabelFont(132);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.096);
   Graph_Graph1->GetYaxis()->SetTitleOffset(0.75);
   Graph_Graph1->GetYaxis()->SetTitleFont(132);
   Graph_Graph1->GetZaxis()->SetLabelFont(132);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.096);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
