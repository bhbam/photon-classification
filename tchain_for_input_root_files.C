// {  // Every thing in same directory
//   gROOT->Reset();
//
//   TChain *ch1 = new TChain("diphoton/fTreeFake");
//   ch1 -> Add("out_*.root");
//   // ch -> Merge("combined_rootfile_from_tchain.root"); //no sub directroy str needed
//   TFile* file1 = TFile::Open("combined_rootfile_from_tchain.root","RECREATE");
//   file1 -> mkdir("diphoton")->cd();
//   ch1 -> Merge(file1,'fast');
// }


{   // from different directory
  gROOT->Reset();

  TChain *ch1 = new TChain("exoeff/fTree");
  ch1 -> Add("/Users/bhimbam/Documents/root_exercise/ADDGravToGG_NegInt-0_LambdaT-10000_M-500To1000_TuneCP2_13TeV-pythia8_Signal_2018.root");
  ch1 -> Add("/Users/bhimbam/Documents/root_exercise/ZToEE_NNPDF30_13TeV-powheg_M_400_800__RunIIAutumn18MiniAOD-NZSPU0to70_102X_upgrade2018_background_2018.root");
  // ch -> Merge("combined_rootfile_from_tchain.root"); //no sub directroy str needed
  TFile* file1 = TFile::Open("/Users/bhimbam/Documents/root_exercise/combined_rootfile_from_tchain.root","RECREATE");
  file1 -> mkdir("exoeff")->cd();
  ch1 -> Merge(file1,'fast');
}
