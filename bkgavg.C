
TFile *MyFile = new TFile("dataSQcut.root","READ");
std::vector<TH1F*> hists; //Declare the vector of histograms
for (Int_t evntNum=1; evntNum<=305; evntNum++){
      MyFile->GetObject(TString::Format("InvMetappi0vcosthetakR",evntNum), hindiv);
      hists.push_back(hindiv); //Push a new histogram into the vector
}

TH2F *hAvg = Avergage(hists); 