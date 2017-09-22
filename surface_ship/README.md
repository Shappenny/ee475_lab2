# Surface Ship (SPI Slave)

The surface ship is a PIC that communicates with the rover (PIC) via SPI and land station (PC) via RS-232. The surface ship relays messages from the land station to the rover, interprets commands from the land station, collects data from the rover (storing data into separate SRAM modules) and sends data to the land station.


```user.c``` contains logic to read from UART and SPI, as well as store income data ininto the SRAM. Some sections of the code containg logic for handle the UART are not original, and sources are given in the comments. The logic to read/write the SRAM, manage shift registers and read from SPI is original.

```main.c``` contains top level logic of surface ship.
