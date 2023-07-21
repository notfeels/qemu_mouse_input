# qemu_mouse_input

using qemu to send mouse input to guest

## how to use
1. create a spice server in vm
2. add to configuration file
```
<domain>
  ...
  <qemu:commandline>
    <qemu:arg value="-qmp"/>
    <qemu:arg value="tcp:127.0.0.1:6448,server,nowait"/>
  </qemu:commandline>
</domain>
```
3. compile and run from host
