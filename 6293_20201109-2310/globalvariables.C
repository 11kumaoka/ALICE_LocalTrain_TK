{
// The following shared common variables are automatically set below and available for your use:
// kPeriod -- e.g. "lhc15o"
// kColType -- "pp", "pPb", or "PbPb"
// kMC -- kTRUE if MC
// kIsRun2 -- kTRUE if Run2
// kTrackPtCut -- 0.15
// kClusPtCut -- 0.3
// kGhostArea -- 0.005
// kComPhysSel -- AliVEvent::kAny


/*************************************/

// Automatically set shared common variables.
std::vector<std::string> tempVariables = AliPWGJETrainHelpers::ExtractAliEnProductionValuesForLEGOTrain();
// Assign them to their final global variables.
const char* kPeriod = tempVariables.at(0).c_str();
const char* kColType = tempVariables.at(1).c_str();
const bool kMC = (tempVariables.at(2) == "true" ? true : false);
const bool kIsRun2 = (tempVariables.at(3) == "true" ? true : false);

// Common settings 
const Double_t kClusPtCut = 0.30;
const Double_t kTrackPtCut = 0.15;
const Double_t kGhostArea = 0.005;
const UInt_t kComPhysSel = AliVEvent::kAny;

// For use only in old embedding framework to set pT hard bin
Int_t kPtHardBin = 10;
Double_t kPtHardBinsScaling[11] = {0, 0, 3.27317e-05, 2.57606e-06, 2.5248e-07, 2.92483e-08, 4.15631e-09, 6.6079e-10, 1.49042e-10, 3.5571e-11, 1.29474e-11};

for(Int_t i =1; i<11; i++) kPtHardBinsScaling[i] = 0;
kPtHardBinsScaling[kPtHardBin] = 1;










































/*************************************/
// Some definitions for Ruediger (TEMPORARY EXCEPTION -- DON'T DEFINE PERSONAL GLOBAL VARIABLES)

// ### Settings
Double_t kRHTrackPtCut =0.15;
Double_t kRHMinLeadingHadronPt = 0.15; // leading track bias
Double_t kRHTrackEfficiency = 1.0;//1.0;
Double_t kRHTrackEfficiencyPY = 1.0;
Double_t kRHTriggerTrackMinPt = 8;
Double_t kRHTriggerTrackMaxPt = 12;

Bool_t kRHExportEventPool = kFALSE;
Bool_t kRHUseEfficiencyMaps = kTRUE;

Double_t kRHJetRadius = 0.4;
Double_t kRHMaxLeadingHadronPt = 100.;
UInt_t      kPhysSelRH = AliVEvent::kMB + AliVEvent::kSemiCentral + AliVEvent::kCentral;
kPhysSelRH = AliVEvent::kINT7;
/*************************************/
AliTrackContainer::SetDefTrackCutsPeriod(kPeriod);
}
