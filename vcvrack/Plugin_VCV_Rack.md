## Procedure to Create and Compile a Generic Stereo Plugin

#### Warning: Do not include spaces in the path containing Rack-SDK!!

- We will partially follow the tutorial: https://vcvrack.com/manual/PluginDevelopmentTutorial

- Download the SDK: https://vcvrack.com/downloads/.  
    - If you still have the Intel version of VCV Rack (emulated with Rosetta), download: https://vcvrack.com/downloads/Rack-SDK-2.6.6-mac-x64.zip  
    - If you have the ARM version of VCV Rack, download: https://vcvrack.com/downloads/Rack-SDK-2.6.6-mac-arm64.zip  

- Open a terminal and navigate to the SDK folder (Rack-SDK) with `cd /path/to/SDK`.  
  **WARNING: the path must not contain any spaces!** (move the folder if necessary).  
  Adjust the path according to where the SDK is actually copied.  

- In the terminal, type:  
  **export RACK_DIR="/path/to/SDK"**

- In the terminal, type:  
  **export PATH="/opt/homebrew/bin:$PATH"**

- In the terminal, type to create the plugin:  
  **./helper.py createplugin MyPlugin**

- A new folder `MyPlugin` is created; move into it with `cd MyPlugin`

- Download the file `MyModule.svg` from this URL:  
  https://github.com/sletz/master-2025/tree/master/vcvrack  
  and place it in the folder `MyPlugin/res`

- Create the C++ file from this SVG interface by typing in the terminal:  

  **../helper.py createmodule MyModule res/MyModule.svg src/MyModule.cpp**

- Open the files `plugin.hpp` and `plugin.cpp` and uncomment the two necessary lines. To enable the module:

  - uncomment `extern Model *modelMyModule;` in `plugin.hpp`
  - uncomment `p->addModel(modelMyModule);` in the `init()` function in `plugin.cpp`.

- In the terminal, type: **make**

- Make sure the RACK application has been launched at least once

- In the terminal, type: **make install**  
  The plugin is copied to `/Users/xxxx/Library/Application Support/Rack2/plugins-mac-arm64`

- Open the VCV Rack application, press the "Return" key to display the list of plugins,  
  and verify that the new plugin appears (it has 4 control inputs, 2 audio inputs, 2 audio outputs)
