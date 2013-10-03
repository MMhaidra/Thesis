{
//=========Macro generated from canvas: c/
//=========  (Fri Nov 30 17:12:29 2012) by ROOT version5.34/00
   TCanvas *c = new TCanvas("c", "",0,0,700,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-0.01766667,-0.1141234,0.1156667,0.5198954);
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
   graph->SetPoint(0,0.01,0.4103638197);
   graph->SetPoint(1,0.02,0.1386326074);
   graph->SetPoint(2,0.03,0.07536059846);
   graph->SetPoint(3,0.04,0.04887480957);
   graph->SetPoint(4,0.05,0.03508117332);
   graph->SetPoint(5,0.06,0.02669668513);
   graph->SetPoint(6,0.07,0.02118959221);
   graph->SetPoint(7,0.08,0.01738405979);
   graph->SetPoint(8,0.09,0.01454638397);
   graph->SetPoint(9,0.1,0.01246848679);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.001,0.109);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(0.4501534);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineWidth(3);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetTitle("R");
   Graph_Graph2->GetXaxis()->SetNdivisions(505);
   Graph_Graph2->GetXaxis()->SetLabelFont(132);
   Graph_Graph2->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.096);
   Graph_Graph2->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph2->GetXaxis()->SetTitleFont(132);
   Graph_Graph2->GetYaxis()->SetTitle("<#sigma_{#omega}/#omega>");
   Graph_Graph2->GetYaxis()->SetNdivisions(505);
   Graph_Graph2->GetYaxis()->SetLabelFont(132);
   Graph_Graph2->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.096);
   Graph_Graph2->GetYaxis()->SetTitleOffset(0.75);
   Graph_Graph2->GetYaxis()->SetTitleFont(132);
   Graph_Graph2->GetZaxis()->SetLabelFont(132);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.096);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetZaxis()->SetTitleFont(132);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
