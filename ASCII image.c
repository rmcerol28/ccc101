#include <stdio.h>

int main(void) {

    const char *art[] = {
        "",
        "                                             ,:,,.",
        "                                           i5#G5Ai",
        "                                    ;rX;rh#&@@&B9HA;::",
        "                                 .;3B@@&@@@@@&@@@&9#9#Mh3AXXr,",
        "                              .:5#&@@@@@@@@@@@@@@@@@@@@@@&BB#MX,",
        "                          :AhG#B@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&9h,",
        "                         X#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@BA",
        "                       ,h&@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&S:",
        "                      :S@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&G.",
        "                      M@@@@@@@@@@@@@@@@&&&B9#GGHGHHS#9B&&&@@@@@@@&&2",
        "                     ,9@@@@@@&B99##SGHMhh32XsiiiiiiirssX25hH#&@@@&@H",
        "                     ;&@@@@@BGMh355AXssrrii;:,.,,,::::::;iirX3B@@@@M",
        "                     s&@@@@#M35222AAXXssrii;:,,,,,,:::;;iirrrs3B@@@G",
        "                     A@@@@BH3335222AAAXXsri;:,,:::::;;iirrrsssXH&@@S",
        "                     5@@@@9Hh33355222AAAXsri;::;;;iiirrrrsssXsX39&&G",
        "                     3@@@&#HMh3335522AAXXXsri;iiirrrrrrrsssXXXX2G9&H",
        "                     h@@@BGMhhh335522AXXsrrrrrrriii;;iirsXXXXXsX3#Bh",
        "                     2@@&Shhh3355552AAXsriiirrrri;;;;;irrsssssssXH&5",
        "                    .iB@9h333355522AAAXssrrrrrrrrrriirrrrssXXsssr3Bs",
        "                  :M33#&M533hHHHHHHHHHMh3352222222553hMMMhh352XsrASr,.",
        "                  rGMhSS553hMHGSSSSS#99###GHhhhhMGSSS#SM333335AsrrhX32",
        "                  :hMGGh255hMGS9#S&&BGG#GGGhXiiXhHHGSGB&BHHGH5Asrr5A2s",
        "                   2MHH5252253MHMMMMhhhh3552i.,isX2hh3hM3252AXsrriA3s.",
        "                   ;hMh52522AXXA25555522222A;.:iiirsA3h335Asiiirrrsr:",
        "                    iMh52552AXsr;;;;irsA22AX;.,;irrri;iii;;;iirrrrs;",
        "                    .5h555552AXrriiiirX2AXXsi,:;;irsri;::;;irrssrr;",
        "                     ,s25533552AAXXXXXX53hh52AA25Xsrrrrrrrrrsssssr,",
        "                       :253333h333352AX3MHHHHHMMM5s;;rsXAAAAAXXsi:",
        "                        r553333hhhHGH35333h352AXsrrrrXA22522AAXi",
        "                         s53333h33hMHSSGHHHHHMhhMMMMMHh35222AAr",
        "                          r53hhhh35223MHMh522553hMMh33355552Ai",
        "                           sMhhhh3355253MHGGHHHM352222553552A.",
        "                          ;#SMMMhh35522222222AAXXXXXAA253335M2",
        "                        .ihBBGGGGHM35552222222AAAAAA253MMMh395:,",
        "                    .,;rA2M#B9GSSSSSGHHHHHGGGGHHHMHHGGSGMh3MGs;:..",
        "                .;sXXA22225hHB#GSSS###9999999999999#SHMh35hhXi:......",
        "            .,:;iX22222222555h99SSGGGSS###999####SGHhh355hhsr;,...........",
        "       .,:;i;;iiiisA2222225555hBB#SSGGGGGGGSSGGHHMhh3355MHXi;,,,,,,...,,,,,,.",
        "    .:;;;;;;;;iii;iXA2222222555hBBSGGGGGGHHHHHMMhh35553MSA;,,,,,,,,,,...,,::,,.,.",
        ".,;:;;;i;;;;;iiiiiirXAA22AAA22225#BSGHHMMhhhhh3335553hHS2:,,,,,,,,,,,,,,:,:::,.......",
        ";;;;;;;;ii;;;iiiiiirsXAAAAAAAA2A2G#GMhh3333555555533MGA;:,...,,,,,,,,,,,::::,,,,,,,..,..",
        ";;i;;;;;;ii;iiiiiiiiiirrrrs2AsA22223HHh35222222A222233s:i,.rA:..,,,,....,:::,,:::,,,,,..,.",
        ";ii;;;;;;ii;;iiiiiii;;;r2H9&9AisA22225352AAAAAXXXXXAX;,,,,X9@9hi...,,.,.,::,,,,,,::,,,:,,,",
        "ii;;;;;;iii;;i;;;;;rX3G###SHS#hAsrssssrX2AAXXXXXXAXrrisX5H#HGSBBHs,..,,.,::,,:,,,:::,,:;,.",
        "ii;;;;;;iii;;irX5hGSSGM355533MGSS#H5srrrsXXXXXXXAXir5#9GGH52553H#BS5i...,::,,,,,,,:::,:;;,",
        ";;;i;;;iiiis2hMGGMh52AAXsrrX5533hHSB9MArrrsXXXXAs;AGGh5222XrrsA223H##Mr,.,,,,,,,,,,:,,:;i;"
    };

    int rows = sizeof(art) / sizeof(art[0]);

    for (int i = 0; i < rows; i++) {
        puts(art[i]);
    }

    return 0;
}