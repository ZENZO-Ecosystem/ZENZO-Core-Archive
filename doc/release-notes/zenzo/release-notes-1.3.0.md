# ZENZO Core v1.3.0

## Summary
This major update brings massive cumulative additions and improvements to ZENZO Core, such as: Bitcoin Core, PIVX Core and Dash Core upstream backports. A massive GUI and user-experience overhaul, network efficiency improvements, block database durability and atomicity improvements, node corruption & damage auto-troubleshooting w/ self-repairing, default HD Wallets.

Generally, the list of improvements is too long to summarize accurately. So you'll just have to bear with me.

## How to Upgrade
_ZENZO Core v1.3.0 is a **non-consensus-breaking** update, meaning: You are not required to upgrade, but we would
highly recommend you do, for the large benefits of the latest application and it's improvements._

Steps to Upgrade:
1. (Optional) Backup your wallet *(ZENZO Core -> File -> Backup Wallet...)*
2. Close ZENZO Core *(ZENZO Core -> File -> Exit)* or *(Shortcut: Ctrl + Q)*
3. (Optional) Delete "zenzo-qt" from your device
4. [Download ZENZO Core v1.3.0](https://github.com/ZENZO-Ecosystem/ZENZO-Core/releases)
5. Open "zenzo-qt"
6. **Upgrade Complete!**


---
Starting with the latest changes, ending with the oldest changes. Each commit having it's own category.
# Changelog
- [UI] *(JSKitty)* - Add HD mnemonic backup 
- [UI] *(JSKitty)* - Add GUI-based debug log viewer 
- [UI] *(JSKitty)* - Add GUI Masternode Management Page
- [UI] *(JSKitty)* - Add a recovery via GUI for corrupt block databases
- [UI] *(JSKitty)* - Rename Masternode Pubkey to Payee Address
- [UI] *(JSKitty)* - Nudge Intro text to suit Windows OS
- [UI] *(JSKitty)* - Fix a handful of Traffic Graph bugs
- [UI] *(JSKitty)* - Revamp Debug Console
- [UI] *(JSKitty)* - Rename "block chain" to "blockchain"
- [UI] *(JSKitty)* - Add Send available balance button
- [UI] *(JSKitty)* - Update DVM Github releases URL
- [UI] *(JSKitty)* - Add Official URLs to the About screen
- [UI] *(JSKitty)* - Make TX Detail modal independent
- [UI] *(JSKitty)* - Show init msg while activating best chain
- [UI] *(JSKitty)* - Add (un)ban ability via peers GUI
- [UI] *(JSKitty)* - Simplify wallet display and functionality
- [UI] *(JSKitty)* - Add a forced 3-sec send confirmation
- [UI] *(JSKitty)* - Remove trading dialog files
- [UI] *(JSKitty)* - Remove obfuscation .ui files and further core code
- [UI] *(JSKitty)* - Turn Debug Console into a QWidget
- [UI] *(JSKitty)* - Added Updates settings tab
- [UI] *(technikpto)* - Add all masternodes tab
---
- [Core] *(JSKitty)* - Catch subver parsing exceptions in DVM
- [Core] *(JSKitty)* - Add Hierarchical Deterministic (HD) Wallets 
- [Core] *(JSKitty)* - Remove Gitan-OSX warning for High Sierra builds
---
- [Wallet] *(JSKitty)* - Don't create new keys when generating PoS blocks
- [Wallet] *(JSKitty)* - Refactor StakeThread & improve staking efficiency
- [Wallet] *(JSKitty)* - Don't assert if we were beaten to the block
- [Wallet] *(JSKitty)* - Do all block index writes in a batch
- [Wallet] *(JSKitty)* - Fix wallet flushing on client-related TXs
- [Wallet] *(JSKitty)* - Catch errors on PID file deletion
- [Wallet] *(JSKitty)* - Remove unused obfuscation code
- [Wallet] *(JSKitty)* - Optimize shutdown detection
- [Wallet] *(JSKitty)* - Lightweight task scheduler
---
- [Consensus] *(JSKitty)* - Create new block checkpoint & stats
---
- [RPC] *(JSKitty)* - Fix AmtFromVal max invalid amount parsing
- [RPC] *(JSKitty)* - Add transaction size to JSON output
- [RPC] *(JSKitty)* - Fix null id in RPC response during startup
- [RPC] *(JSKitty)* - Add signmessagewithprivkey
- [RPC] *(JSKitty)* - Add uptime command
- [RPC] *(JSKitty)* - Remove all Zerocoin and Obfuscation commands
- [RPC] *(JSKitty)* - Add mediantime to getblockchaininfo
- [RPC] *(JSKitty)* - Add Random-cookie RPC authentication
- [RPC] *(JSKitty)* - Add banning & disconnect abilities to RPC
- [RPC] *(JSKitty)* - Added unconf/immature to getwalletinfo
- [RPC] *(JSKitty)* - Standardize DVM RPCs
---
- [Net] *(JSKitty)* - Don't connect to Mainnet seeds in Testnet
- [Net] *(JSKitty)* - Encapsulation preresquisites
- [Net] *(JSKitty)* - Remove Bitcoin's P2P alert system
- [Net] *(JSKitty)* - Read/Write banlist to disk in datadir (banlist.dat)
- [Net] *(JSKitty)* - Optimize and tweak DVM Core
---
- [Build] *(mrmetech)* - Fix depends for multiple platforms
- [Build] *(DCx7C5)* - Updated Makefile for Linux Qt Builds
- [Build] *(JSKitty)* - Remove stale m4 file
- [Build] *(JSKitty)* - Fix macOS dmg issue (10.12+)
- [Build] *(JSKitty)* - Compile winshutdownmonitor.cpp for Windows only
- [Build] *(JSKitty)* - Fixed Windows NSIS installer RegKeys
- [Build] *(JSKitty)* - Remove unused files from Qt Makefile
- [Build] *(JSKitty)* - Fixed config file executable perms
---
- [Docs] *(JSKitty)* - Remove unnecessary MN guides 
- [Docs] *(JSKitty)* - Add libevent-dev dependency to build docs
- [Docs] *(JSKitty)* - Update contributing guidelines
- [Docs] *(JSKitty)* - Tweak BDB compilation
---
- [Refactor] *(JSKitty)* - Move rpc files into dedicated rpc directory
---
- [Misc] *(JSKitty)* - Fix incorrect genesis block refs
- [Misc] *(JSKitty)* - Remove unused Bitcoin Core 0.8 block hardlinking
- [Misc] *(JSKitty)* - Fully purge Zerocoin
- [Misc] *(JSKitty)* - Add extra filedump logging & initial dat files
- [Misc] *(JSKitty)* - Fix tiny timedata memory leak
---
- [Trivial] *(JSKitty)* - Update some PIVX & Dash branding leftovers
- [Trivial] *(JSKitty)* - Rename anon unlock funcs for staking
- [Trivial] *(JSKitty)* - Budget RPC Typo fixes
- [Trivial] *(JSKitty)* - Remove unused GUI files
- [Trivial] *(JSKitty)* - Remove unused icon files
- [Trivial] *(JSKitty)* - Fix minor method typos

---
# Credits
(Project Maintainer & Core Developer) **JSKitty**

(Bounty Developers) **technikpto**, **mrmetech**


(Ally Developer) **DCx7C5** - [CoinMiningPool](https://coinminingpool.org/) & [OASIS](http://exploreoasis.com/)

(Upstream Patches) **PIVX Core Team**, **Dash Core Team** and **Bitcoin Core Team**

(Outsourced Patches & Features) **Akshaynexus**, **Curium** and **Phore**
