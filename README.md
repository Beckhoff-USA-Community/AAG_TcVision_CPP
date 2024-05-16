# About This Repository

This repository contains TwinCAT Vision samples written in C++. With TwinCAT Vision version 4.0.3.11 or higher, users can now develop C++ based Vision modules. For the PLC samples, please see the official Beckhoff GitHub repo for [TF7xxx_Samples](https://github.com/Beckhoff/TF7xxx_Samples).

This sample is created by [Beckhoff Automation LLC.](https://www.beckhoff.com/en-us/), and is provided as-is under the Zero-Clause BSD license.

# Required Development Steps

When developing new Tc Vision projects with TwinCAT C++, we need to do a few extra steps to configure the project. 

1. Add new C++ Project **TwinCAT Versioned C++ Project**
2. Select the **TwinCAT Module Class with Vision** as the project's module template
3. If you don’t need all Vision functions in this project, you can delete the License Defines that are not needed in the property sheet. The *.props file with the user specified module name is located in the C++ project folder. A license must be added manually for all existing defines. 
   1. TF7200: LIC_TC3_Vision_Matching
   2. TF7250: LIC_TC3_Vision_Code_Reading 
   3. TF7300: LIC_TC3_Vision_Metrology_2D
4. Add the Property Sheet to project: View-> Other Windows -> Property Manager -> Right-Click on Project Root- > Add Existing Property Sheet -> **ModuleName**.props (check that the sheet is added to all x64 Platforms)
5. Activate Real-Time -> C++ Debugger if needed
6. Check the module instance on the "Context" Tab for the ADS symbol port to view the images in the ADS Image Watch. Enter the port number with right click in the target port pulldown, with the tabulator key you can also get into the field to enter the value.



# How to get support

Should you have any questions regarding the provided sample code, please contact your local Beckhoff support team. Contact information can be found on the official Beckhoff website at https://www.beckhoff.com/en-us/support/.

# Further Information

Further Information on TwinCAT Vision can be found at the [Beckhoff Infosys](https://infosys.beckhof.com) under the [TwinCAT 3 Vision](https://infosys.beckhoff.com/content/1033/tf7xxx_tc3_vision/14666928651.html?id=3940584913971873443) section.



## Requirements

The following components must be installed to run sample code:

- [TE1000 TwinCAT 3 Engineering](https://www.beckhoff.com/en-en/products/automation/twincat/te1xxx-twincat-3-engineering/te1000.html) version 3.1.4026.0 or higher
- [TF7xxx](https://www.beckhoff.com/en-us/products/automation/twincat/tfxxxx-twincat-3-functions/tf7xxx-vision/) version 4.0.3.11 or higher
- Microsoft Visual Studio Pro with C++ Compilers Installed



## Disclaimer

All sample code provided by Beckhoff Automation LLC are for illustrative purposes only and are provided “as is” and without any warranties, express or implied. Actual implementations in applications will vary significantly. Beckhoff Automation LLC shall have no liability for, and does not waive any rights in relation to, any code samples that it provides or the use of such code samples for any purpose.
