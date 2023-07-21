# qemu_mouse_input

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
