/************************************************************************************
      
 *                 Copyright (C) 2021 - 2023, Barca, Inc. 
 
 *    Email: <opensource@barca.com>  GitHub: @BarcaWebCloud. 
 *    Project: BSCAN to scanner MotherBoards. CPU, Memory Ram, SO and more
 
 * This software is licensed as described in the file COPYING, which                    
 * you should have received as part of this distribution. The terms                     
 * are also available at https://project-barca.github.io/docs/copyright.html.           
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell             
 * copies of the Software, and permit persons to whom the Software is                   
 * furnished to do so, under the terms of the COPYING file.                             
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY            
 * KIND, either express or implied.                                                      
 *
 **************************************************************************************/
#include "swares/scan_browser.h"
#include <string>

namespace bscan {

  Browser::Browser(){};
  
  // TO GOOGLE CHROME
  std::string Browser::chromehistory() {
    if (_chromehistory.empty()) {
      _chromehistory = getChromeHistory();
    }
    return _chromehistory;
  }

  std::string Browser::chromemedia() {
    if (_chromemedia.empty()) {
      _chromemedia = getChromeMedia();
    }
    return _chromemedia;
  }

  std::string Browser::chromelogin() {
    if (_chromelogin.empty()) {
      _chromelogin = getChromeLogin();
    }
    return _chromemedia;
  }

  std::string Browser::chromeshortcuts() {
    if (_chromeshortcuts.empty()) {
      _chromeshortcuts = getChromeShortcuts();
    }
    return _chromeshortcuts;
  }

  std::string Browser::chromememberof() {
    if (_chromememberof.empty()) {
      _chromememberof = getChromeMemberOf();
    }
    return _chromememberof;
  }

  std::string Browser::chromeautofillemails() {
    if (_chromeautofillemails.empty()) {
      _chromeautofillemails = getChromeAutoFillEmails();
    }
    return _chromeautofillemails;
  }
  
  std::string Browser::chromeautofilladdresses() {
    if (_chromeautofilladdresses.empty()) {
      _chromeautofilladdresses = getChromeAutoFillAddresses();
    }
    return _chromeautofilladdresses;
  }

  std::string Browser::chromeautofillphones() {
    if (_chromeautofillphones.empty()) {
      _chromeautofillphones = getChromeAutoFillPhones();
    }
    return _chromeautofillphones;
  }

  std::string Browser::chromeautofillnames() {
    if (_chromeautofillnames.empty()) {
      _chromeautofillnames = getChromeAutoFillNames();
    }
    return _chromeautofillnames;
  }

  std::string Browser::chromeautofillprofiles() {
    if (_chromeautofillprofiles.empty()) {
      _chromeautofillprofiles = getChromeAutoFillProfiles();
    }
    return _chromeautofillprofiles;
  }

  // TO MICROSOFT EDGE
  std::string Browser::edgehistory() {
    if (_edgehistory.empty()) {
      _edgehistory = getEdgeHistory();
    }
    return _edgehistory;
  }

  std::string Browser::edgemedia() {
    if (_edgemedia.empty()) {
      _edgemedia = getEdgeMedia();
    }
    return _edgemedia;
  }

  std::string Browser::edgelogin() {
    if (_edgelogin.empty()) {
      _edgelogin = getEdgeLogin();
    }
    return _edgemedia;
  }

  std::string Browser::edgeshortcuts() {
    if (_edgeshortcuts.empty()) {
      _edgeshortcuts = getEdgeShortcuts();
    }
    return _edgeshortcuts;
  }

  std::string Browser::edgeautofillemails() {
    if (_edgeautofillemails.empty()) {
      _edgeautofillemails = getEdgeAutoFillEmails();
    }
    return _edgeautofillemails;
  }
  
  std::string Browser::edgeautofilladdresses() {
    if (_edgeautofilladdresses.empty()) {
      _edgeautofilladdresses = getEdgeAutoFillAddresses();
    }
    return _edgeautofilladdresses;
  }

  std::string Browser::edgeautofillphones() {
    if (_edgeautofillphones.empty()) {
      _edgeautofillphones = getEdgeAutoFillPhones();
    }
    return _edgeautofillphones;
  }

  std::string Browser::edgeautofillnames() {
    if (_edgeautofillnames.empty()) {
      _edgeautofillnames = getEdgeAutoFillNames();
    }
    return _edgeautofillnames;
  }

  std::string Browser::edgeautofillprofiles() {
    if (_edgeautofillprofiles.empty()) {
      _edgeautofillprofiles = getEdgeAutoFillProfiles();
    }
    return _edgeautofillprofiles;
  }
 // TO OPERA GX STABLE
  std::string Browser::operagxhistory() {
    if (_operagxhistory.empty()) {
      _operagxhistory = getOperaGXHistory();
    }
    return _operagxhistory;
  }

  std::string Browser::operagxlogin() {
    if (_operagxlogin.empty()) {
      _operagxlogin = getOperaGXLogin();
    }
    return _operagxmedia;
  }

  std::string Browser::operagxshortcuts() {
    if (_operagxshortcuts.empty()) {
      _operagxshortcuts = getOperaGXShortcuts();
    }
    return _operagxshortcuts;
  }

  std::string Browser::operagxmemberof() {
    if (_operagxmemberof.empty()) {
      _operagxmemberof = getOperaGXMemberOf();
    }
    return _operagxmemberof;
  }

  std::string Browser::operagxautofillemails() {
    if (_operagxautofillemails.empty()) {
      _operagxautofillemails = getOperaGXAutoFillEmails();
    }
    return _operagxautofillemails;
  }
  
  std::string Browser::operagxautofilladdresses() {
    if (_operagxautofilladdresses.empty()) {
      _operagxautofilladdresses = getOperaGXAutoFillAddresses();
    }
    return _operagxautofilladdresses;
  }

  std::string Browser::operagxautofillphones() {
    if (_operagxautofillphones.empty()) {
      _operagxautofillphones = getOperaGXAutoFillPhones();
    }
    return _operagxautofillphones;
  }

  std::string Browser::operagxautofillnames() {
    if (_operagxautofillnames.empty()) {
      _operagxautofillnames = getOperaGXAutoFillNames();
    }
    return _operagxautofillnames;
  }

  std::string Browser::operagxautofillprofiles() {
    if (_operagxautofillprofiles.empty()) {
      _operagxautofillprofiles = getOperaGXAutoFillProfiles();
    }
    return _operagxautofillprofiles;
  }
  // TO OPERA STABLE
  std::string Browser::operahistory() {
    if (_operahistory.empty()) {
      _operahistory = getOperaHistory();
    }
    return _operahistory;
  }

  std::string Browser::operalogin() {
    if (_operalogin.empty()) {
      _operalogin = getOperaLogin();
    }
    return _operamedia;
  }

  std::string Browser::operashortcuts() {
    if (_operashortcuts.empty()) {
      _operashortcuts = getOperaShortcuts();
    }
    return _operashortcuts;
  }

  std::string Browser::operamemberof() {
    if (_operamemberof.empty()) {
      _operamemberof = getOperaMemberOf();
    }
    return _operamemberof;
  }

  std::string Browser::operaautofillemails() {
    if (_operaautofillemails.empty()) {
      _operaautofillemails = getOperaAutoFillEmails();
    }
    return _operaautofillemails;
  }
  
  std::string Browser::operaautofilladdresses() {
    if (_operaautofilladdresses.empty()) {
      _operaautofilladdresses = getOperaAutoFillAddresses();
    }
    return _operaautofilladdresses;
  }

  std::string Browser::operaautofillphones() {
    if (_operaautofillphones.empty()) {
      _operaautofillphones = getOperaAutoFillPhones();
    }
    return _operaautofillphones;
  }

  std::string Browser::operaautofillnames() {
    if (_operaautofillnames.empty()) {
      _operaautofillnames = getOperaAutoFillNames();
    }
    return _operaautofillnames;
  }

  std::string Browser::operaautofillprofiles() {
    if (_operaautofillprofiles.empty()) {
      _operaautofillprofiles = getOperaAutoFillProfiles();
    }
    return _operaautofillprofiles;
  }
  // TO BRAVE
  std::string Browser::bravehistory() {
    if (_bravehistory.empty()) {
      _bravehistory = getBraveHistory();
    }
    return _bravehistory;
  }

  std::string Browser::bravelogin() {
    if (_bravelogin.empty()) {
      _bravelogin = getBraveLogin();
    }
    return _bravemedia;
  }

  std::string Browser::braveshortcuts() {
    if (_braveshortcuts.empty()) {
      _braveshortcuts = getBraveShortcuts();
    }
    return _braveshortcuts;
  }

  std::string Browser::bravememberof() {
    if (_bravememberof.empty()) {
      _bravememberof = getBraveMemberOf();
    }
    return _bravememberof;
  }

  std::string Browser::braveautofillemails() {
    if (_braveautofillemails.empty()) {
      _braveautofillemails = getBraveAutoFillEmails();
    }
    return _braveautofillemails;
  }
  
  std::string Browser::braveautofilladdresses() {
    if (_braveautofilladdresses.empty()) {
      _braveautofilladdresses = getBraveAutoFillAddresses();
    }
    return _braveautofilladdresses;
  }

  std::string Browser::braveautofillphones() {
    if (_braveautofillphones.empty()) {
      _braveautofillphones = getBraveAutoFillPhones();
    }
    return _braveautofillphones;
  }

  std::string Browser::braveautofillnames() {
    if (_braveautofillnames.empty()) {
      _braveautofillnames = getBraveAutoFillNames();
    }
    return _braveautofillnames;
  }

  std::string Browser::braveautofillprofiles() {
    if (_braveautofillprofiles.empty()) {
      _braveautofillprofiles = getBraveAutoFillProfiles();
    }
    return _braveautofillprofiles;
  }
  // TO VIVALDI
  std::string Browser::vivaldihistory() {
    if (_vivaldihistory.empty()) {
      _vivaldihistory = getVivaldiHistory();
    }
    return _vivaldihistory;
  }

  std::string Browser::vivaldilogin() {
    if (_vivaldilogin.empty()) {
      _vivaldilogin = getVivaldiLogin();
    }
    return _vivaldimedia;
  }

  std::string Browser::vivaldishortcuts() {
    if (_vivaldishortcuts.empty()) {
      _vivaldishortcuts = getvivaldiShortcuts();
    }
    return _vivaldishortcuts;
  }

  std::string Browser::vivaldimemberof() {
    if (_vivaldimemberof.empty()) {
      _vivaldimemberof = getVivaldiMemberOf();
    }
    return _vivaldimemberof;
  }

  std::string Browser::vivaldiautofillemails() {
    if (_vivaldiautofillemails.empty()) {
      _vivaldiautofillemails = getVivaldiAutoFillEmails();
    }
    return _vivaldiautofillemails;
  }
  
  std::string Browser::vivaldiautofilladdresses() {
    if (_vivaldiautofilladdresses.empty()) {
      _vivaldiautofilladdresses = getVivaldiAutoFillAddresses();
    }
    return _vivaldiautofilladdresses;
  }

  std::string Browser::vivaldiautofillphones() {
    if (_vivaldiautofillphones.empty()) {
      _vivaldiautofillphones = getVivaldiAutoFillPhones();
    }
    return _vivaldiautofillphones;
  }

  std::string Browser::vivaldiautofillnames() {
    if (_vivaldiautofillnames.empty()) {
      _vivaldiautofillnames = getVivaldiAutoFillNames();
    }
    return _vivaldiautofillnames;
  }

  std::string Browser::vivaldiautofillprofiles() {
    if (_vivaldiautofillprofiles.empty()) {
      _vivaldiautofillprofiles = getVivaldiAutoFillProfiles();
    }
    return _vivaldiautofillprofiles;
  }

  // TO ORBITUM
  std::string Browser::orbitumhistory() {
    if (_orbitumhistory.empty()) {
      _orbitumhistory = getOrbitumHistory();
    }
    return _orbitumhistory;
  }

  std::string Browser::orbitumlogin() {
    if (_orbitumlogin.empty()) {
      _orbitumlogin = getOrbitumLogin();
    }
    return _orbitummedia;
  }

  std::string Browser::orbitumshortcuts() {
    if (_orbitumshortcuts.empty()) {
      _orbitumshortcuts = getOrbitumShortcuts();
    }
    return _orbitumshortcuts;
  }

  std::string Browser::orbitummemberof() {
    if (_orbitummemberof.empty()) {
      _orbitummemberof = getOrbitumMemberOf();
    }
    return _orbitummemberof;
  }

  std::string Browser::orbitumautofillemails() {
    if (_orbitumautofillemails.empty()) {
      _orbitumautofillemails = getOrbitumAutoFillEmails();
    }
    return _orbitumautofillemails;
  }
  
  std::string Browser::orbitumautofilladdresses() {
    if (_orbitumautofilladdresses.empty()) {
      _orbitumautofilladdresses = getOrbitumAutoFillAddresses();
    }
    return _orbitumautofilladdresses;
  }

  std::string Browser::orbitumautofillphones() {
    if (_orbitumautofillphones.empty()) {
      _orbitumautofillphones = getOrbitumAutoFillPhones();
    }
    return _orbitumautofillphones;
  }

  std::string Browser::orbitumautofillnames() {
    if (_orbitumautofillnames.empty()) {
      _orbitumautofillnames = getOrbitumAutoFillNames();
    }
    return _orbitumautofillnames;
  }

  std::string Browser::orbitumautofillprofiles() {
    if (_orbitumautofillprofiles.empty()) {
      _orbitumautofillprofiles = getOrbitumAutoFillProfiles();
    }
    return _orbitumautofillprofiles;
  }
  // TO PALE MOON
  std::string Browser::palemoonhistory() {
    if (_palemoonhistory.empty()) {
      _palemoonhistory = getPaleMoonHistory();
    }
    return _palemoonhistory;
  }

  std::string Browser::palemoonlogin() {
    if (_palemoonlogin.empty()) {
      _palemoonlogin = getPaleMoonLogin();
    }
    return _palemoonmedia;
  }

  std::string Browser::palemoonshortcuts() {
    if (_palemoonshortcuts.empty()) {
      _palemoonshortcuts = getPaleMoonShortcuts();
    }
    return _palemoonshortcuts;
  }

  std::string Browser::palemoonmemberof() {
    if (_palemoonmemberof.empty()) {
      _palemoonmemberof = getPaleMoonMemberOf();
    }
    return _palemoonmemberof;
  }

  std::string Browser::palemoonautofillemails() {
    if (_palemoonautofillemails.empty()) {
      _palemoonautofillemails = getPaleMoonAutoFillEmails();
    }
    return _palemoonautofillemails;
  }
  
  std::string Browser::palemoonautofilladdresses() {
    if (_palemoonautofilladdresses.empty()) {
      _palemoonautofilladdresses = getPaleMoonAutoFillAddresses();
    }
    return _palemoonautofilladdresses;
  }

  std::string Browser::palemoonautofillphones() {
    if (_palemoonautofillphones.empty()) {
      _palemoonautofillphones = getPaleMoonAutoFillPhones();
    }
    return _palemoonautofillphones;
  }

  std::string Browser::palemoonautofillnames() {
    if (_palemoonautofillnames.empty()) {
      _palemoonautofillnames = getPaleMoonAutoFillNames();
    }
    return _palemoonautofillnames;
  }

  std::string Browser::palemoonautofillprofiles() {
    if (_palemoonautofillprofiles.empty()) {
      _palemoonautofillprofiles = getPaleMoonAutoFillProfiles();
    }
    return _palemoonautofillprofiles;
  }
  // TO MAXTHON
  std::string Browser::maxthonhistory() {
    if (_maxthonhistory.empty()) {
      _maxthonhistory = getMaxthonHistory();
    }
    return _maxthonhistory;
  }

  std::string Browser::maxthonlogin() {
    if (_maxthonlogin.empty()) {
      _maxthonlogin = getMaxthonLogin();
    }
    return _maxthonmedia;
  }

  std::string Browser::maxthonshortcuts() {
    if (_maxthonshortcuts.empty()) {
      _maxthonshortcuts = getMaxthonShortcuts();
    }
    return _maxthonshortcuts;
  }

  std::string Browser::maxthonmemberof() {
    if (_maxthonmemberof.empty()) {
      _maxthonmemberof = getMaxthonMemberOf();
    }
    return _maxthonmemberof;
  }

  std::string Browser::maxthonautofillemails() {
    if (_maxthonautofillemails.empty()) {
      _maxthonautofillemails = getMaxthonAutoFillEmails();
    }
    return _maxthonautofillemails;
  }
  
  std::string Browser::maxthonautofilladdresses() {
    if (_maxthonautofilladdresses.empty()) {
      _maxthonautofilladdresses = getMaxthonAutoFillAddresses();
    }
    return _maxthonautofilladdresses;
  }

  std::string Browser::maxthonautofillphones() {
    if (_maxthonautofillphones.empty()) {
      _maxthonautofillphones = getMaxthonAutoFillPhones();
    }
    return _maxthonautofillphones;
  }

  std::string Browser::maxthonautofillnames() {
    if (_maxthonautofillnames.empty()) {
      _maxthonautofillnames = getMaxthonAutoFillNames();
    }
    return _maxthonautofillnames;
  }

  std::string Browser::maxthonautofillprofiles() {
    if (_maxthonautofillprofiles.empty()) {
      _maxthonautofillprofiles = getMaxthonAutoFillProfiles();
    }
    return _maxthonautofillprofiles;
  }
  // TO SEAMONKEY
  std::string Browser::seamonkeyhistory() {
    if (_seamonkeyhistory.empty()) {
      _seamonkeyhistory = getSeaMonkeyHistory();
    }
    return _seamonkeyhistory;
  }

  std::string Browser::seamonkeylogin() {
    if (_seamonkeylogin.empty()) {
      _seamonkeylogin = getSeaMonkeyLogin();
    }
    return _seamonkeymedia;
  }

  std::string Browser::seamonkeyshortcuts() {
    if (_seamonkeyshortcuts.empty()) {
      _seamonkeyshortcuts = getSeaMonkeyShortcuts();
    }
    return _seamonkeyshortcuts;
  }

  std::string Browser::seamonkeymemberof() {
    if (_seamonkeymemberof.empty()) {
      _seamonkeymemberof = getSeaMonkeyMemberOf();
    }
    return _seamonkeymemberof;
  }

  std::string Browser::seamonkeyautofillemails() {
    if (_seamonkeyautofillemails.empty()) {
      _seamonkeyautofillemails = getSeaMonkeyAutoFillEmails();
    }
    return _seamonkeyautofillemails;
  }
  
  std::string Browser::seamonkeyautofilladdresses() {
    if (_seamonkeyautofilladdresses.empty()) {
      _seamonkeyautofilladdresses = getSeaMonkeyAutoFillAddresses();
    }
    return _seamonkeyautofilladdresses;
  }

  std::string Browser::seamonkeyautofillphones() {
    if (_seamonkeyautofillphones.empty()) {
      _seamonkeyautofillphones = getSeaMonkeyAutoFillPhones();
    }
    return _seamonkeyautofillphones;
  }

  std::string Browser::seamonkeyautofillnames() {
    if (_seamonkeyautofillnames.empty()) {
      _seamonkeyautofillnames = getSeaMonkeyAutoFillNames();
    }
    return _seamonkeyautofillnames;
  }

  std::string Browser::seamonkeyautofillprofiles() {
    if (_seamonkeyautofillprofiles.empty()) {
      _seamonkeyautofillprofiles = getSeaMonkeyAutoFillProfiles();
    }
    return _seamonkeyautofillprofiles;
  }
  // TO COMODO DRAGON
  std::string Browser::comododragonhistory() {
    if (_comododragonhistory.empty()) {
      _comododragonhistory = getComodoDragonHistory();
    }
    return _comododragonhistory;
  }

  std::string Browser::comododragonlogin() {
    if (_comododragonlogin.empty()) {
      _comododragonlogin = getComodoDragonLogin();
    }
    return _comododragonmedia;
  }

  std::string Browser::comododragonshortcuts() {
    if (_comododragonshortcuts.empty()) {
      _comododragonshortcuts = getComodoDragonShortcuts();
    }
    return _comododragonshortcuts;
  }

  std::string Browser::comododragonmemberof() {
    if (_comododragonmemberof.empty()) {
      _comododragonmemberof = getComodoDragonMemberOf();
    }
    return _comododragonmemberof;
  }

  std::string Browser::comododragonautofillemails() {
    if (_comododragonautofillemails.empty()) {
      _comododragonautofillemails = getComodoDragonAutoFillEmails();
    }
    return _comododragonautofillemails;
  }
  
  std::string Browser::comododragonautofilladdresses() {
    if (_comododragonautofilladdresses.empty()) {
      _comododragonautofilladdresses = getComodoDragonAutoFillAddresses();
    }
    return _comododragonautofilladdresses;
  }

  std::string Browser::comododragonautofillphones() {
    if (_comododragonautofillphones.empty()) {
      _comododragonautofillphones = getComodoDragonAutoFillPhones();
    }
    return _comododragonautofillphones;
  }

  std::string Browser::comododragonautofillnames() {
    if (_comododragonautofillnames.empty()) {
      _comododragonautofillnames = getComodoDragonAutoFillNames();
    }
    return _comododragonautofillnames;
  }

  std::string Browser::comododragonautofillprofiles() {
    if (_comododragonautofillprofiles.empty()) {
      _comododragonautofillprofiles = getComodoDragonAutoFillProfiles();
    }
    return _comododragonautofillprofiles;
  }
  // TO COMODO ICE DRAGON
  std::string Browser::comodoicedragonhistory() {
    if (_comodoicedragonhistory.empty()) {
      _comodoicedragonhistory = getComodoIceDragonHistory();
    }
    return _comodoicedragonhistory;
  }

  std::string Browser::comodoicedragonlogin() {
    if (_comodoicedragonlogin.empty()) {
      _comodoicedragonlogin = getComodoIceDragonLogin();
    }
    return _comodoicedragonmedia;
  }

  std::string Browser::comodoicedragonshortcuts() {
    if (_comodoicedragonshortcuts.empty()) {
      _comodoicedragonshortcuts = getComodoIceDragonShortcuts();
    }
    return _comodoicedragonshortcuts;
  }

  std::string Browser::comodoicedragonmemberof() {
    if (_comodoicedragonmemberof.empty()) {
      _comodoicedragonmemberof = getComodoIceDragonMemberOf();
    }
    return _comodoicedragonmemberof;
  }

  std::string Browser::comodoicedragonautofillemails() {
    if (_comodoicedragonautofillemails.empty()) {
      _comodoicedragonautofillemails = getComodoIceDragonAutoFillEmails();
    }
    return _comodoicedragonautofillemails;
  }
  
  std::string Browser::comodoicedragonautofilladdresses() {
    if (_comodoicedragonautofilladdresses.empty()) {
      _comodoicedragonautofilladdresses = getComodoIceDragonAutoFillAddresses();
    }
    return _comodoicedragonautofilladdresses;
  }

  std::string Browser::comodoicedragonautofillphones() {
    if (_comodoicedragonautofillphones.empty()) {
      _comodoicedragonautofillphones = getComodoIceDragonAutoFillPhones();
    }
    return _comodoicedragonautofillphones;
  }

  std::string Browser::comodoicedragonautofillnames() {
    if (_comodoicedragonautofillnames.empty()) {
      _comodoicedragonautofillnames = getComodoIceDragonAutoFillNames();
    }
    return _comodoicedragonautofillnames;
  }

  std::string Browser::comodoicedragonautofillprofiles() {
    if (_comodoicedragonautofillprofiles.empty()) {
      _comodoicedragonautofillprofiles = getComodoIceDragonAutoFillProfiles();
    }
    return _comodoicedragonautofillprofiles;
  }
  // TO 360 CHROME X
  std::string Browser::chromexhistory() {
    if (_chromexhistory.empty()) {
      _chromexhistory = get360ChromeXHistory();
    }
    return _chromexhistory;
  }

  std::string Browser::chromexlogin() {
    if (_chromexlogin.empty()) {
      _chromexlogin = get360ChromeXLogin();
    }
    return _chromexmedia;
  }

  std::string Browser::chromexshortcuts() {
    if (_chromexshortcuts.empty()) {
      _chromexshortcuts = get360ChromeXShortcuts();
    }
    return _chromexshortcuts;
  }

  std::string Browser::chromexmemberof() {
    if (_chromexmemberof.empty()) {
      _chromexmemberof = get360ChromeXMemberOf();
    }
    return _chromexmemberof;
  }

  std::string Browser::chromexautofillemails() {
    if (_chromexautofillemails.empty()) {
      _chromexautofillemails = get360ChromeXAutoFillEmails();
    }
    return _chromexautofillemails;
  }
  
  std::string Browser::chromexautofilladdresses() {
    if (_chromexautofilladdresses.empty()) {
      _chromexautofilladdresses = get360ChromeXAutoFillAddresses();
    }
    return _chromexautofilladdresses;
  }

  std::string Browser::chromexautofillphones() {
    if (_chromexautofillphones.empty()) {
      _chromexautofillphones = get360ChromeXAutoFillPhones();
    }
    return _chromexautofillphones;
  }

  std::string Browser::chromexautofillnames() {
    if (_chromexautofillnames.empty()) {
      _chromexautofillnames = get360ChromeXAutoFillNames();
    }
    return _chromexautofillnames;
  }

  std::string Browser::chromexautofillprofiles() {
    if (_chromexautofillprofiles.empty()) {
      _chromexautofillprofiles = get360ChromeXAutoFillProfiles();
    }
    return _chromexautofillprofiles;
  }
};