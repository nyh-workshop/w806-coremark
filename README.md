# w806-coremark
[Coremark](https://github.com/eembc/coremark) for WM806 microcontroller.

This Coremark is based on two ports:
- https://github.com/netlhx/coremark_stm32_hal
- Paul Stoffregen's Coremark app: https://github.com/PaulStoffregen/CoreMark

Currently using **Stack** for this test.

Compiler flags: 
```GCC 6.3.0 (csky-elfabiv2-tools-mingw-minilibc-20210423) -O3 -DPERFORMANCE_RUN=1```

Output for 160MHz, 12000 iterations:
```
2K performance run parameters for coremark.                                    
CoreMark Size    : 666
Total ticks      : 29719
Total time (secs): 29.719000
Iterations/Sec   : 403.782092                                                  
Iterations       : 12000                                                       
Compiler version : GCC6.3.0                                                    
Compiler flags   : Not defined.                                                
Memory location  : STACK                                                       
seedcrc          : 0xe9f5
[0]crclist       : 0xe714                                                      
[0]crcmatrix     : 0x1fd7                                                      
[0]crcstate      : 0x8e3a                                                      
[0]crcfinal      : 0xd340                                                      
Correct operation validated. See README.md for run and reporting rules.        
CoreMark 1.0 : 403.782092 / GCC6.3.0 Not defined. / STACK
```

## Coremark results:
| WM806 Freq  | CoreMark result (STACK) |
| ----------- | ----------- |
| 160MHz | 403.782092       |
| 240MHz | 605.815832       |

## Comparisons with older 32-bit x86 platforms (ascending order):
| Processor | CoreMark result (STACK) |
| ----------- | ----------- |
| AMD Am486DX4-100 | 136.363481 |
| Intel Pentium P166MMX (SL2HU) | 374.999063 |
| WinnerMicro W806 160MHz | 403.782092 |
| Intel Pentium P200MMX (SL23W) | 461.537929 |
| Cyrix M2-300GP | 545.468926 |
| WinnerMicro W806 240MHz | 605.815832 |

<sub>486 system specs: S486 motherboard (512K cache), S3 VirgeDX, 32MB EDO RAM, IDE->CF (Sandisk 512MB)</sub>

<sub>Pentium system Specs: Asus VX-97, ATI Rage 8MB, 32MB EDO RAM, IDE->CF (Sandisk 2.0GB)</sub>

<sub>Both of the older x86 platforms using GCC 10.3.0 (DJGPP) -O3 -DPERFORMANCE_RUN=1, FreeDOS 7.10</sub>
