# ZENZO Core v1.1.1

## Summary
This brings multiple new features, upgrades, fixes and changes to the monetary partition of the ZENZO ecosystem.
Allowing for smoother growth of connectivity and security within the network. An easier, simpler and more efficient 
wallet interface. Zerocoin Removal from default UI. Polished branding and many, many more improvements alongside.

## How to Upgrade
_ZENZO Core v1.1.1 is a **non-consensus-breaking** update, meaning: You are not required to upgrade, but we would
highly recommend you do, for the large benefits of the latest application and it's improvements._

Steps to Upgrade:
1. Backup your wallet *(ZENZO Core -> File -> Backup Wallet...)*
2. Close ZENZO Core *(ZENZO Core -> File -> Exit)* or *(Shortcut: Ctrl + Q)*
3. You may optionally delete "zenzo-qt" from your device
4. [Download ZENZO Core v1.1.1](https://github.com/Zenzo-Ecosystem/ZENZO-Core/releases)
5. Open "zenzo-qt"
6. **Upgrade Complete!**


---
# Changelog
- [UI] Improved branding consistency (Zenzo -> ZENZO)
- [UI] Improved first-run setup screen, added ZENZO Chan as a guide
- [UI] Removed all Zerocoin UI by default
- [UI] Added an option to disable Orphan Stake displays
- [UI] Added a new Splashscreen, adjusted Copyright and Title positioning
- [UI] Added anti-scam warning in the Debug Console
---
- [Wallet] Fixed Segmentation Fault on "-disablewallet" command
- [Wallet] Added "-zerocoin" command for enabling Zerocoin GUI
---
- [Consensus] Upgraded OpenSSL from 1.0.1 to 1.0.2
- [Consensus] Upgraded network subver, protocol remains the same
---
- [Minting] Permanently disabled Autominting
- [Minting] Permanently entered Zerocoin Maintenance Mode, zZNZ **CAN** still be spent
---
- [RPC] Fixed invalid response to "settxfee 0"
- [RPC] Added secret command 🐈
---
- [Net] Hardcoded over 20 trusted nodes into the peerslist for instant connections
---
- [Trivial] Removed Phore and Phr from translation files
- [Trivial] Updated copyright in a multitude of file headers

---
# Credits
(Project Maintenance & Developer) **JSKitty**

(Upstream Patches) **PIVX Developer Team**
