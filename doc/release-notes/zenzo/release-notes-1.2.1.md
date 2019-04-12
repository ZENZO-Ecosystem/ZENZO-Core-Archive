# ZENZO Core v1.2.1

## Summary
This brings multiple new features, upgrades, fixes and changes to the monetary partition of the ZENZO ecosystem.
Allowing for smoother growth of connectivity and security within the network. An easier, simpler and more efficient 
wallet interface. Full Zerocoin Removal. Polished branding and many, many more improvements alongside.

### The largest change


- ___DVM - Decentralized Version Manager___

During the 10+ years of Cryptocurrency wallet innovations, there has always been one floating problem with wallets:

Users must keep an active eye on social media, news outlets, github and websites. Incase an update releases for a wallet. This can be a frustrating process, especially for new users in the cryptosphere.
When it comes to notifications, messages, ect. Within wallets, the equation of Security always came in mind, hence, Bitcoin eventually depreciated it's global message / notification system due to worries of creating a central point of failure within that very feature. Allowing one single user to control a specific part of the network, however large that may be.

One way of solving this issue, is to think in a truely decentralized fashion, meet the ZENZO DVM.

The DVM is a peer-to-peer version manager and update tracker, custom-built for ZENZO-Core. This is a hardcoded network algorithm that tracks all connected peers of a node, collects their client versions and measures the percentage of nodes that are higher than, matching, or lower than the node's own version.

This system can notify the user of a new update release via the QT GUI, with minimal risk of the update notification being hijacked or manipulated by an outside attacker or middleman.

The ZENZO DVM will start operating at a 25% consensus requirement. This means atleast 25% of connected peers must be a higher version than your node to trigger the update process.

Updates are completely optional, and can be ignored at will of the user. However, we will always recommend to update whenever available due to the improvements and additions new releases have to offer.

Upgrades and Updates beyond v1.2.0 are guarenteed to be much, much easier than any other QT-based cryptocurrency currently.

## How to Upgrade
_ZENZO Core v1.2.1 is a **non-consensus-breaking** update, meaning: You are not required to upgrade, but we would
highly recommend you do, for the large benefits of the latest application and it's improvements._

Steps to Upgrade:
1. Backup your wallet *(ZENZO Core -> File -> Backup Wallet...)*
2. Close ZENZO Core *(ZENZO Core -> File -> Exit)* or *(Shortcut: Ctrl + Q)*
3. You may optionally delete "zenzo-qt" or "zenzod / zenzo-cli" from your device
4. [Download ZENZO Core v1.2.1](https://github.com/Zenzo-Ecosystem/ZENZO-Core/releases)
5. Open "zenzo-qt" or "zenzod / zenzo-cli"
6. **Upgrade Complete!**


---
# Changelog
- [UI] *(JSKitty)* - Improved branding consistency (Zenzo -> ZENZO)
- [UI] *(JSKitty)* - Improved first-run setup screen, added ZENZO Chan as a guide
- [UI] *(JSKitty)* - Removed all Zerocoin UI by default
- [UI] *(JSKitty)* - Added an option to disable Orphan Stake displays
- [UI] *(YuurinBee)* - Added a new Splashscreen, adjusted Copyright and Title positioning
- [UI] *(JSKitty)* - Added anti-scam warning in the Debug Console
- [UI] *(JSKitty)* - Correct copyright for ZENZO-Core and PIVX-Core developers
- [UI] *(YuurinBee)* - Created new icons for the GUI Widgets
- [UI] *(YuurinBee)* - Created new gradient for the widget menu
- [UI] *(JSKitty)* - Added the 'cursor hover' effect for most QT buttons
- [UI] *(JSKitty)* - Nudge header logo to the right of the wallet header
- [UI] *(JSKitty)* - Fixed double-display on locked coins for local MNs
- [UI] *(JSKitty)* - Changed "Minted" to "Stake Reward" to simplify PoS
- [UI] *(JSKitty)* - Increased Overview Page TX'es from 5 to 9 max transactions
- [UI] *(JSKitty)* - Force Lightmode for MacOS
---
- [Wallet] *(JSKitty)* - Fixed Segmentation Fault on "-disablewallet" command
- [Wallet] *(JSKitty)* - Added "-zerocoin" command for enabling Zerocoin GUI *(Not Recommended!)*
---
- [Consensus] *(JSKitty)* - Created and implemented the **DVM - Decentralized Version Manager**
- [Consensus] *(Akshaynexus)* - Fake Stake patch
---
- [Minting] *(JSKitty)* - Permanently disabled Autominting
- [Minting] *(JSKitty)* - Permanently entered Zerocoin Maintenance Mode, both hardcoded and via spork
---
- [RPC] *(JSKitty)* - Fixed invalid response to "settxfee 0"
- [RPC] *(JSKitty)* - Added secret command 🐈
---
- [Net] *(JSKitty)* - Hardcoded 5 Official Seednodes for near-instant connections on new nodes
- [Net] *(JSKitty)* - Fixed IP reachability issues
---
- [Tests] *(Akshaynexus)* - Added Travis CI config code
---
- [Trivial] *(JSKitty)* - Removed Phore and Phr from translation files
- [Trivial] *(JSKitty)* - Updated copyright in multiple file headers
- [Trivial] *(Akshaynexus)* - Added .gitignore file

---
# Credits
(Project Maintainer & Core Developer) **JSKitty**

(Developer) **Akshaynexus**

(Graphics & UI Designer) **YuurinBee**

(Upstream Patches) **PIVX Core Team**
