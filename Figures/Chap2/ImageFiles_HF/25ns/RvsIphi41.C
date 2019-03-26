void RvsIphi41()
{
//=========Macro generated from canvas: ieta41_E1E2Cut2Ietaiphi/E1E2Cut2Ietaiphi for |ieta| 41
//=========  (Wed Mar 23 12:50:52 2016) by ROOT version6.04/02
   TCanvas *ieta41_E1E2Cut2Ietaiphi = new TCanvas("ieta41_E1E2Cut2Ietaiphi", "E1E2Cut2Ietaiphi for |ieta| 41",65,24,1535,876);
   gStyle->SetOptStat(0);
   ieta41_E1E2Cut2Ietaiphi->Range(0,0,1,1);
   ieta41_E1E2Cut2Ietaiphi->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi->SetGridx();
   ieta41_E1E2Cut2Ietaiphi->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: ieta41_E1E2Cut2Ietaiphi_1
   TPad *ieta41_E1E2Cut2Ietaiphi_1 = new TPad("ieta41_E1E2Cut2Ietaiphi_1", "ieta41_E1E2Cut2Ietaiphi_1",0.01,0.51,0.24,0.99);
   ieta41_E1E2Cut2Ietaiphi_1->Draw();
   ieta41_E1E2Cut2Ietaiphi_1->cd();
   ieta41_E1E2Cut2Ietaiphi_1->Range(-9.125001,0.125,82.125,0.875);
   ieta41_E1E2Cut2Ietaiphi_1->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi_1->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_1->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi_1->SetFrameBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_1->SetFrameBorderMode(0);
   
   TH1D *MeanRatiovsIphi_ietaP41__73 = new TH1D("MeanRatiovsIphi_ietaP41__73","Mean Ratio vs Iphi for ieta 41 ECut2",73,0,73);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(4,0.2909245);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(8,0.465013);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(12,0.4068384);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(16,0.4299287);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(20,0.4312335);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(24,0.466546);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(28,0.4184238);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(32,0.4931468);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(36,0.3820936);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(40,0.4559045);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(44,0.4407318);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(48,0.4046723);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(52,0.4533476);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(56,0.4851624);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(60,0.4933466);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(64,0.4848064);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(68,0.3834717);
   MeanRatiovsIphi_ietaP41__73->SetBinContent(72,0.5002454);
   MeanRatiovsIphi_ietaP41__73->SetBinError(4,0.0003352944);
   MeanRatiovsIphi_ietaP41__73->SetBinError(8,0.0005055329);
   MeanRatiovsIphi_ietaP41__73->SetBinError(12,0.0004215783);
   MeanRatiovsIphi_ietaP41__73->SetBinError(16,0.0005643846);
   MeanRatiovsIphi_ietaP41__73->SetBinError(20,0.0005872628);
   MeanRatiovsIphi_ietaP41__73->SetBinError(24,0.0006842746);
   MeanRatiovsIphi_ietaP41__73->SetBinError(28,0.000552894);
   MeanRatiovsIphi_ietaP41__73->SetBinError(32,0.0007463059);
   MeanRatiovsIphi_ietaP41__73->SetBinError(36,0.0005665375);
   MeanRatiovsIphi_ietaP41__73->SetBinError(40,0.0006222925);
   MeanRatiovsIphi_ietaP41__73->SetBinError(44,0.0006025264);
   MeanRatiovsIphi_ietaP41__73->SetBinError(48,0.0004037196);
   MeanRatiovsIphi_ietaP41__73->SetBinError(52,0.0004704881);
   MeanRatiovsIphi_ietaP41__73->SetBinError(56,0.0005964906);
   MeanRatiovsIphi_ietaP41__73->SetBinError(60,0.0006267289);
   MeanRatiovsIphi_ietaP41__73->SetBinError(64,0.0005488199);
   MeanRatiovsIphi_ietaP41__73->SetBinError(68,0.0003948586);
   MeanRatiovsIphi_ietaP41__73->SetBinError(72,0.0005738521);
   MeanRatiovsIphi_ietaP41__73->SetMinimum(0.2);
   MeanRatiovsIphi_ietaP41__73->SetMaximum(0.8);
   MeanRatiovsIphi_ietaP41__73->SetEntries(36);
   MeanRatiovsIphi_ietaP41__73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   MeanRatiovsIphi_ietaP41__73->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   MeanRatiovsIphi_ietaP41__73->SetLineColor(ci);
   MeanRatiovsIphi_ietaP41__73->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   MeanRatiovsIphi_ietaP41__73->SetMarkerColor(ci);
   MeanRatiovsIphi_ietaP41__73->SetMarkerStyle(24);
   MeanRatiovsIphi_ietaP41__73->GetXaxis()->SetTitle("i\\phi");
   MeanRatiovsIphi_ietaP41__73->GetXaxis()->SetLabelFont(42);
   MeanRatiovsIphi_ietaP41__73->GetXaxis()->SetLabelSize(0.035);
   MeanRatiovsIphi_ietaP41__73->GetXaxis()->SetTitleSize(0.05);
   MeanRatiovsIphi_ietaP41__73->GetXaxis()->SetTitleOffset(0.94);
   MeanRatiovsIphi_ietaP41__73->GetXaxis()->SetTitleFont(42);
   MeanRatiovsIphi_ietaP41__73->GetYaxis()->SetTitle("R_{S/L}");
   MeanRatiovsIphi_ietaP41__73->GetYaxis()->SetLabelFont(42);
   MeanRatiovsIphi_ietaP41__73->GetYaxis()->SetLabelSize(0.035);
   MeanRatiovsIphi_ietaP41__73->GetYaxis()->SetTitleOffset(1.16);
   MeanRatiovsIphi_ietaP41__73->GetYaxis()->SetTitleFont(42);
   MeanRatiovsIphi_ietaP41__73->GetZaxis()->SetLabelFont(42);
   MeanRatiovsIphi_ietaP41__73->GetZaxis()->SetLabelSize(0.035);
   MeanRatiovsIphi_ietaP41__73->GetZaxis()->SetTitleSize(0.035);
   MeanRatiovsIphi_ietaP41__73->GetZaxis()->SetTitleFont(42);
   MeanRatiovsIphi_ietaP41__73->Draw("");
   
   TLegend *leg = new TLegend(0.75,0.8,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);

   ci = TColor::GetColor("#0000ff");
   leg->SetTextColor(ci);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("MeanRatiovsIphi_ietaP41","2015D_","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TH1D *fnum1_ietaP41__74 = new TH1D("fnum1_ietaP41__74","Mean Ratio vs Iphi for ieta 41 ECut2",73,0,73);
   fnum1_ietaP41__74->SetBinContent(4,0.4162237);
   fnum1_ietaP41__74->SetBinContent(8,0.4150508);
   fnum1_ietaP41__74->SetBinContent(12,0.4064791);
   fnum1_ietaP41__74->SetBinContent(16,0.4098226);
   fnum1_ietaP41__74->SetBinContent(20,0.407751);
   fnum1_ietaP41__74->SetBinContent(24,0.4080855);
   fnum1_ietaP41__74->SetBinContent(28,0.4122005);
   fnum1_ietaP41__74->SetBinContent(32,0.4145805);
   fnum1_ietaP41__74->SetBinContent(36,0.4078624);
   fnum1_ietaP41__74->SetBinContent(40,0.4136592);
   fnum1_ietaP41__74->SetBinContent(44,0.4114853);
   fnum1_ietaP41__74->SetBinContent(48,0.4090224);
   fnum1_ietaP41__74->SetBinContent(52,0.4072875);
   fnum1_ietaP41__74->SetBinContent(56,0.4110552);
   fnum1_ietaP41__74->SetBinContent(60,0.4074039);
   fnum1_ietaP41__74->SetBinContent(64,0.4143781);
   fnum1_ietaP41__74->SetBinContent(68,0.4110109);
   fnum1_ietaP41__74->SetBinContent(72,0.4124085);
   fnum1_ietaP41__74->SetBinError(4,0.0005261777);
   fnum1_ietaP41__74->SetBinError(8,0.000533195);
   fnum1_ietaP41__74->SetBinError(12,0.0005300142);
   fnum1_ietaP41__74->SetBinError(16,0.0005304437);
   fnum1_ietaP41__74->SetBinError(20,0.000526694);
   fnum1_ietaP41__74->SetBinError(24,0.0005325138);
   fnum1_ietaP41__74->SetBinError(28,0.0005305258);
   fnum1_ietaP41__74->SetBinError(32,0.0005249163);
   fnum1_ietaP41__74->SetBinError(36,0.000539293);
   fnum1_ietaP41__74->SetBinError(40,0.0005269793);
   fnum1_ietaP41__74->SetBinError(44,0.000528016);
   fnum1_ietaP41__74->SetBinError(48,0.0005234998);
   fnum1_ietaP41__74->SetBinError(52,0.0005242911);
   fnum1_ietaP41__74->SetBinError(56,0.0005269277);
   fnum1_ietaP41__74->SetBinError(60,0.0005280907);
   fnum1_ietaP41__74->SetBinError(64,0.0005296727);
   fnum1_ietaP41__74->SetBinError(68,0.0005311955);
   fnum1_ietaP41__74->SetBinError(72,0.0005229982);
   fnum1_ietaP41__74->SetEntries(36);
   fnum1_ietaP41__74->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   fnum1_ietaP41__74->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   fnum1_ietaP41__74->SetLineColor(ci);
   fnum1_ietaP41__74->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   fnum1_ietaP41__74->SetMarkerColor(ci);
   fnum1_ietaP41__74->SetMarkerStyle(25);
   fnum1_ietaP41__74->GetXaxis()->SetLabelFont(42);
   fnum1_ietaP41__74->GetXaxis()->SetLabelSize(0.035);
   fnum1_ietaP41__74->GetXaxis()->SetTitleSize(0.035);
   fnum1_ietaP41__74->GetXaxis()->SetTitleFont(42);
   fnum1_ietaP41__74->GetYaxis()->SetLabelFont(42);
   fnum1_ietaP41__74->GetYaxis()->SetLabelSize(0.035);
   fnum1_ietaP41__74->GetYaxis()->SetTitleSize(0.035);
   fnum1_ietaP41__74->GetYaxis()->SetTitleFont(42);
   fnum1_ietaP41__74->GetZaxis()->SetLabelFont(42);
   fnum1_ietaP41__74->GetZaxis()->SetLabelSize(0.035);
   fnum1_ietaP41__74->GetZaxis()->SetTitleSize(0.035);
   fnum1_ietaP41__74->GetZaxis()->SetTitleFont(42);
   fnum1_ietaP41__74->Draw("same");
   
   leg = new TLegend(0.75,0.7,0.98,0.8,NULL,"brNDC");
   leg->SetBorderSize(1);

   ci = TColor::GetColor("#ff0000");
   leg->SetTextColor(ci);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("fnum1_ietaP41","MC25ns","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.94,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Mean Ratio vs Iphi for ieta 41 ECut2");
   pt->Draw();
   ieta41_E1E2Cut2Ietaiphi_1->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
  
// ------------>Primitives in pad: ieta41_E1E2Cut2Ietaiphi_2
   TPad *ieta41_E1E2Cut2Ietaiphi_2 = new TPad("ieta41_E1E2Cut2Ietaiphi_2", "ieta41_E1E2Cut2Ietaiphi_2",0.26,0.51,0.49,0.99);
   ieta41_E1E2Cut2Ietaiphi_2->Draw();
   ieta41_E1E2Cut2Ietaiphi_2->cd();
   ieta41_E1E2Cut2Ietaiphi_2->Range(-9.125001,0.125,82.125,0.875);
   ieta41_E1E2Cut2Ietaiphi_2->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi_2->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_2->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi_2->SetFrameBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_2->SetFrameBorderMode(0);
   
   TH1D *MeanRatiovsIphi_ietaN41__75 = new TH1D("MeanRatiovsIphi_ietaN41__75","Mean Ratio vs Iphi for ieta -41 ECut2",73,0,73);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(4,0.3313752);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(8,0.3921922);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(12,0.448683);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(16,0.4511804);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(20,0.4467804);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(24,0.4111924);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(28,0.4608177);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(32,0.4555522);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(36,0.4276664);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(40,0.3811373);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(44,0.4518182);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(48,0.4136198);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(52,0.5152505);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(56,0.4368015);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(60,0.4877534);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(64,0.5061847);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(68,0.4427993);
   MeanRatiovsIphi_ietaN41__75->SetBinContent(72,0.4978567);
   MeanRatiovsIphi_ietaN41__75->SetBinError(4,0.0003571761);
   MeanRatiovsIphi_ietaN41__75->SetBinError(8,0.0004392257);
   MeanRatiovsIphi_ietaN41__75->SetBinError(12,0.0004883647);
   MeanRatiovsIphi_ietaN41__75->SetBinError(16,0.0005557025);
   MeanRatiovsIphi_ietaN41__75->SetBinError(20,0.0005192011);
   MeanRatiovsIphi_ietaN41__75->SetBinError(24,0.0004741827);
   MeanRatiovsIphi_ietaN41__75->SetBinError(28,0.0005748258);
   MeanRatiovsIphi_ietaN41__75->SetBinError(32,0.000523905);
   MeanRatiovsIphi_ietaN41__75->SetBinError(36,0.0004479551);
   MeanRatiovsIphi_ietaN41__75->SetBinError(40,0.0003936833);
   MeanRatiovsIphi_ietaN41__75->SetBinError(44,0.0005204837);
   MeanRatiovsIphi_ietaN41__75->SetBinError(48,0.0004493251);
   MeanRatiovsIphi_ietaN41__75->SetBinError(52,0.000694707);
   MeanRatiovsIphi_ietaN41__75->SetBinError(56,0.0005399647);
   MeanRatiovsIphi_ietaN41__75->SetBinError(60,0.0006921903);
   MeanRatiovsIphi_ietaN41__75->SetBinError(64,0.0008450465);
   MeanRatiovsIphi_ietaN41__75->SetBinError(68,0.0005481149);
   MeanRatiovsIphi_ietaN41__75->SetBinError(72,0.0006466813);
   MeanRatiovsIphi_ietaN41__75->SetMinimum(0.2);
   MeanRatiovsIphi_ietaN41__75->SetMaximum(0.8);
   MeanRatiovsIphi_ietaN41__75->SetEntries(36);
   MeanRatiovsIphi_ietaN41__75->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   MeanRatiovsIphi_ietaN41__75->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   MeanRatiovsIphi_ietaN41__75->SetLineColor(ci);
   MeanRatiovsIphi_ietaN41__75->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   MeanRatiovsIphi_ietaN41__75->SetMarkerColor(ci);
   MeanRatiovsIphi_ietaN41__75->SetMarkerStyle(24);
   MeanRatiovsIphi_ietaN41__75->GetXaxis()->SetTitle("i\\phi");
   MeanRatiovsIphi_ietaN41__75->GetXaxis()->SetLabelFont(42);
   MeanRatiovsIphi_ietaN41__75->GetXaxis()->SetLabelSize(0.035);
   MeanRatiovsIphi_ietaN41__75->GetXaxis()->SetTitleSize(0.05);
   MeanRatiovsIphi_ietaN41__75->GetXaxis()->SetTitleOffset(0.94);
   MeanRatiovsIphi_ietaN41__75->GetXaxis()->SetTitleFont(42);
   MeanRatiovsIphi_ietaN41__75->GetYaxis()->SetTitle("R_{S/L}");
   MeanRatiovsIphi_ietaN41__75->GetYaxis()->SetLabelFont(42);
   MeanRatiovsIphi_ietaN41__75->GetYaxis()->SetLabelSize(0.035);
   MeanRatiovsIphi_ietaN41__75->GetYaxis()->SetTitleOffset(1.16);
   MeanRatiovsIphi_ietaN41__75->GetYaxis()->SetTitleFont(42);
   MeanRatiovsIphi_ietaN41__75->GetZaxis()->SetLabelFont(42);
   MeanRatiovsIphi_ietaN41__75->GetZaxis()->SetLabelSize(0.035);
   MeanRatiovsIphi_ietaN41__75->GetZaxis()->SetTitleSize(0.035);
   MeanRatiovsIphi_ietaN41__75->GetZaxis()->SetTitleFont(42);
   MeanRatiovsIphi_ietaN41__75->Draw("");
   
   leg = new TLegend(0.75,0.8,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);

   ci = TColor::GetColor("#0000ff");
   leg->SetTextColor(ci);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("MeanRatiovsIphi_ietaN41","2015D_","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TH1D *fnum1_ietaN41__76 = new TH1D("fnum1_ietaN41__76","Mean Ratio vs Iphi for ieta -41 ECut2",73,0,73);
   fnum1_ietaN41__76->SetBinContent(4,0.4084816);
   fnum1_ietaN41__76->SetBinContent(8,0.4112889);
   fnum1_ietaN41__76->SetBinContent(12,0.4083774);
   fnum1_ietaN41__76->SetBinContent(16,0.4125515);
   fnum1_ietaN41__76->SetBinContent(20,0.4135217);
   fnum1_ietaN41__76->SetBinContent(24,0.4115353);
   fnum1_ietaN41__76->SetBinContent(28,0.411685);
   fnum1_ietaN41__76->SetBinContent(32,0.4045045);
   fnum1_ietaN41__76->SetBinContent(36,0.4101445);
   fnum1_ietaN41__76->SetBinContent(40,0.4113116);
   fnum1_ietaN41__76->SetBinContent(44,0.4089641);
   fnum1_ietaN41__76->SetBinContent(48,0.4105967);
   fnum1_ietaN41__76->SetBinContent(52,0.41359);
   fnum1_ietaN41__76->SetBinContent(56,0.411259);
   fnum1_ietaN41__76->SetBinContent(60,0.4142277);
   fnum1_ietaN41__76->SetBinContent(64,0.4124833);
   fnum1_ietaN41__76->SetBinContent(68,0.4098908);
   fnum1_ietaN41__76->SetBinContent(72,0.4104174);
   fnum1_ietaN41__76->SetBinError(4,0.0005281984);
   fnum1_ietaN41__76->SetBinError(8,0.0005306152);
   fnum1_ietaN41__76->SetBinError(12,0.0005306655);
   fnum1_ietaN41__76->SetBinError(16,0.0005278361);
   fnum1_ietaN41__76->SetBinError(20,0.0005317112);
   fnum1_ietaN41__76->SetBinError(24,0.0005317614);
   fnum1_ietaN41__76->SetBinError(28,0.0005298891);
   fnum1_ietaN41__76->SetBinError(32,0.0005291117);
   fnum1_ietaN41__76->SetBinError(36,0.000539169);
   fnum1_ietaN41__76->SetBinError(40,0.0005328249);
   fnum1_ietaN41__76->SetBinError(44,0.0005297473);
   fnum1_ietaN41__76->SetBinError(48,0.0005287341);
   fnum1_ietaN41__76->SetBinError(52,0.0005316737);
   fnum1_ietaN41__76->SetBinError(56,0.000528695);
   fnum1_ietaN41__76->SetBinError(60,0.0005255375);
   fnum1_ietaN41__76->SetBinError(64,0.0005229968);
   fnum1_ietaN41__76->SetBinError(68,0.0005271196);
   fnum1_ietaN41__76->SetBinError(72,0.0005265392);
   fnum1_ietaN41__76->SetEntries(36);
   fnum1_ietaN41__76->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   fnum1_ietaN41__76->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   fnum1_ietaN41__76->SetLineColor(ci);
   fnum1_ietaN41__76->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   fnum1_ietaN41__76->SetMarkerColor(ci);
   fnum1_ietaN41__76->SetMarkerStyle(25);
   fnum1_ietaN41__76->GetXaxis()->SetLabelFont(42);
   fnum1_ietaN41__76->GetXaxis()->SetLabelSize(0.035);
   fnum1_ietaN41__76->GetXaxis()->SetTitleSize(0.035);
   fnum1_ietaN41__76->GetXaxis()->SetTitleFont(42);
   fnum1_ietaN41__76->GetYaxis()->SetLabelFont(42);
   fnum1_ietaN41__76->GetYaxis()->SetLabelSize(0.035);
   fnum1_ietaN41__76->GetYaxis()->SetTitleSize(0.035);
   fnum1_ietaN41__76->GetYaxis()->SetTitleFont(42);
   fnum1_ietaN41__76->GetZaxis()->SetLabelFont(42);
   fnum1_ietaN41__76->GetZaxis()->SetLabelSize(0.035);
   fnum1_ietaN41__76->GetZaxis()->SetTitleSize(0.035);
   fnum1_ietaN41__76->GetZaxis()->SetTitleFont(42);
   fnum1_ietaN41__76->Draw("same");
   
   leg = new TLegend(0.75,0.7,0.98,0.8,NULL,"brNDC");
   leg->SetBorderSize(1);

   ci = TColor::GetColor("#ff0000");
   leg->SetTextColor(ci);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("fnum1_ietaN41","MC25ns","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   pt = new TPaveText(0.15,0.94,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Mean Ratio vs Iphi for ieta -41 ECut2");
   pt->Draw();
   ieta41_E1E2Cut2Ietaiphi_2->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
  
// ------------>Primitives in pad: ieta41_E1E2Cut2Ietaiphi_3
   TPad *ieta41_E1E2Cut2Ietaiphi_3 = new TPad("ieta41_E1E2Cut2Ietaiphi_3", "ieta41_E1E2Cut2Ietaiphi_3",0.51,0.51,0.74,0.99);
   ieta41_E1E2Cut2Ietaiphi_3->Draw();
   ieta41_E1E2Cut2Ietaiphi_3->cd();
   ieta41_E1E2Cut2Ietaiphi_3->Range(0,0,1,1);
   ieta41_E1E2Cut2Ietaiphi_3->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi_3->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_3->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi_3->SetFrameBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_3->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
  
// ------------>Primitives in pad: ieta41_E1E2Cut2Ietaiphi_4
   TPad *ieta41_E1E2Cut2Ietaiphi_4 = new TPad("ieta41_E1E2Cut2Ietaiphi_4", "ieta41_E1E2Cut2Ietaiphi_4",0.76,0.51,0.99,0.99);
   ieta41_E1E2Cut2Ietaiphi_4->Draw();
   ieta41_E1E2Cut2Ietaiphi_4->cd();
   ieta41_E1E2Cut2Ietaiphi_4->Range(0,0,1,1);
   ieta41_E1E2Cut2Ietaiphi_4->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi_4->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_4->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi_4->SetFrameBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_4->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
  
// ------------>Primitives in pad: ieta41_E1E2Cut2Ietaiphi_6
   TPad *ieta41_E1E2Cut2Ietaiphi_6 = new TPad("ieta41_E1E2Cut2Ietaiphi_6", "ieta41_E1E2Cut2Ietaiphi_6",0.26,0.01,0.49,0.49);
   ieta41_E1E2Cut2Ietaiphi_6->Draw();
   ieta41_E1E2Cut2Ietaiphi_6->cd();
   ieta41_E1E2Cut2Ietaiphi_6->Range(0,0,1,1);
   ieta41_E1E2Cut2Ietaiphi_6->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi_6->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_6->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi_6->SetFrameBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_6->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
  
// ------------>Primitives in pad: ieta41_E1E2Cut2Ietaiphi_7
   TPad *ieta41_E1E2Cut2Ietaiphi_7 = new TPad("ieta41_E1E2Cut2Ietaiphi_7", "ieta41_E1E2Cut2Ietaiphi_7",0.51,0.01,0.74,0.49);
   ieta41_E1E2Cut2Ietaiphi_7->Draw();
   ieta41_E1E2Cut2Ietaiphi_7->cd();
   ieta41_E1E2Cut2Ietaiphi_7->Range(0,0,1,1);
   ieta41_E1E2Cut2Ietaiphi_7->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi_7->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_7->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi_7->SetFrameBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_7->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
  
// ------------>Primitives in pad: ieta41_E1E2Cut2Ietaiphi_8
   TPad *ieta41_E1E2Cut2Ietaiphi_8 = new TPad("ieta41_E1E2Cut2Ietaiphi_8", "ieta41_E1E2Cut2Ietaiphi_8",0.76,0.01,0.99,0.49);
   ieta41_E1E2Cut2Ietaiphi_8->Draw();
   ieta41_E1E2Cut2Ietaiphi_8->cd();
   ieta41_E1E2Cut2Ietaiphi_8->Range(0,0,1,1);
   ieta41_E1E2Cut2Ietaiphi_8->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi_8->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_8->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi_8->SetFrameBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_8->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
  
// ------------>Primitives in pad: ieta41_E1E2Cut2Ietaiphi_5
   TPad *ieta41_E1E2Cut2Ietaiphi_5 = new TPad("ieta41_E1E2Cut2Ietaiphi_5", "ieta41_E1E2Cut2Ietaiphi_5",0.01,0.01,0.24,0.49);
   ieta41_E1E2Cut2Ietaiphi_5->Draw();
   ieta41_E1E2Cut2Ietaiphi_5->cd();
   ieta41_E1E2Cut2Ietaiphi_5->Range(0,0,1,1);
   ieta41_E1E2Cut2Ietaiphi_5->SetFillColor(0);
   ieta41_E1E2Cut2Ietaiphi_5->SetBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_5->SetBorderSize(2);
   ieta41_E1E2Cut2Ietaiphi_5->SetFrameBorderMode(0);
   ieta41_E1E2Cut2Ietaiphi_5->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
   ieta41_E1E2Cut2Ietaiphi->Modified();
   ieta41_E1E2Cut2Ietaiphi->cd();
   ieta41_E1E2Cut2Ietaiphi->SetSelected(ieta41_E1E2Cut2Ietaiphi);
}
