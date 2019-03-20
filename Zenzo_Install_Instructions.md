# ZENZO Masternode Instructions
Shell script to install a [ZENZO Masternode](https://zenzo.io/) on a Linux server running Ubuntu 16.04. Use it on your own risk.
***

## Installation
```
wget -q https://raw.githubusercontent.com/Zenzo-Ecosystem/ZENZO-Core/master/zenzo_install.sh

bash znz_install.sh
```
***

## Desktop Wallet Setup

After the MN is up and running, you need to configure the desktop wallet accordingly. Here are the steps:  
1. Open the ZENZO(ZNZ) Desktop Wallet.  
2. Go to RECEIVE and create a New Address: **MN1**  
3. Send **15000** ZNZ to **MN1**. You need to send all 15000 coins in one single transaction.
4. Wait for 15 confirmations.  
5. Go to **Help -> "Debug Window - Console"**  
6. Type the following command: **masternode outputs**  
7. Go to  **Tools -> "Open Masternode Configuration File"**
8. Add the following entry:
```
Alias Address Privkey TxHash TxIndex
```
* Alias: **MN1**
* Address: **VPS_IP:PORT**
* Privkey: **Masternode Private Key**
* TxHash: **First value from Step 6**
* TxIndex:  **Second value from Step 6**
9. Save and close the file.
10. Go to **Masternode Tab**. If you tab is not shown, please enable it from: **Settings - Options - Wallet - Show Masternodes Tab**
11. Click **Update status** to see your node. If it is not shown, close the wallet and start it again. Make sure the wallet is un
12. Select your MN and click **Start Alias** to start it.
13. Alternatively, open **Debug Console** and type:
```
startmasternode "alias" "0" "my_mn"
```
14. Login to your VPS and check your masternode status by running the following command:
```
zenzo-cli masternode status
```
***

## Usage:
```
zenzo-cli masternode status  
zenzo-cli getinfo
```
Also, if you want to check/start/stop **ZENZO**, run one of the following commands as **root**:
```
systemctl status Zenzo #To check if Zenzo service is running  
systemctl start Zenzo #To start Zenzo service  
systemctl stop Zenzo #To stop Zenzo service  
systemctl is-enabled Zenzo #To check if Zenzo service is enabled on boot  
```  
***
Credit to @Zoldur for writing the original install script.

https://github.com/zoldur
