__int64 __fastcall sub_3BA6F0(__int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm0
  __m128i v3; // xmm5
  __m128i v4; // xmm2
  __m128i v5; // xmm5
  __m128i v6; // xmm5
  __m128i v7; // xmm5
  __m128i v8; // xmm5
  __m128i v9; // xmm4
  __m128i v10; // xmm4
  __m128i v11; // xmm3
  __m128i v12; // xmm3
  __m128i v13; // xmm3
  __m128i v14; // xmm3
  __m128i v15; // xmm3
  __m128i v16; // xmm3
  __m128i v17; // xmm3
  __m128i v18; // xmm3
  __m128i v19; // xmm3
  __m128i v20; // xmm3
  __m128i v21; // xmm3
  __m128i v22; // xmm3
  __m128i v23; // xmm3
  __m128i v24; // xmm3
  __m128i v25; // xmm3
  __m128i v26; // xmm9
  __m128i v27; // xmm3
  __m128i v28; // xmm2
  __m128i v29; // xmm2
  __m128i v30; // xmm2
  __m128i v31; // xmm2
  __m128i v32; // xmm2
  __m128i v33; // xmm2
  __m128i v34; // xmm2
  __m128i v35; // xmm2
  __m128i v36; // xmm2
  __m128i v37; // xmm2
  __m128i v38; // xmm2
  __m128i v39; // xmm2
  __m128i v40; // xmm2
  __m128i v41; // xmm2
  __m128i v42; // xmm2
  __m128i v43; // xmm2
  __m128i v44; // xmm2
  __m128i v45; // xmm2
  __m128i v46; // xmm2
  __m128i v47; // xmm2
  __m128i v48; // xmm2
  __m128i v49; // xmm2
  __m128i v50; // xmm2
  __m128i v51; // xmm2
  __m128i v52; // xmm2
  __m128i v53; // xmm2
  __m128i v54; // xmm2
  __m128i v55; // xmm2
  __m128i v56; // xmm2
  __m128i v57; // xmm2
  __m128i v58; // xmm2
  __m128i v59; // xmm2
  __m128i v60; // xmm8
  __m128i v61; // xmm7
  __m128i v62; // xmm2
  __m128i v63; // xmm2
  __m128i v64; // xmm2
  __m128i v65; // xmm2
  __m128i v66; // xmm2
  __m128i v67; // xmm2
  __m128i v68; // xmm1
  __m128i v69; // xmm6
  __m128i v70; // xmm1
  __m128i v71; // xmm2
  __m128i v72; // xmm2
  __m128i v73; // xmm2
  __m128i v74; // xmm2
  __m128i v75; // xmm2
  __m128i v76; // xmm2
  __m128i v77; // xmm2
  __m128i v78; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v79; // [rsp+10h] [rbp-98h] BYREF
  __m128i v80; // [rsp+20h] [rbp-88h] BYREF
  __m128i v81; // [rsp+30h] [rbp-78h] BYREF
  __m128i v82; // [rsp+40h] [rbp-68h] BYREF
  __m128i v83; // [rsp+50h] [rbp-58h] BYREF
  __m128i v84; // [rsp+60h] [rbp-48h] BYREF
  __m128i v85; // [rsp+70h] [rbp-38h] BYREF
  __m128i v86; // [rsp+80h] [rbp-28h] BYREF
  __m128i v87; // [rsp+98h] [rbp-10h] BYREF

  v87.m128i_i64[0] = a1;
  v86 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)off_4D5960),
          (__m128i)(unsigned __int64)"Produce ~C~ file...");
  v85 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)off_4D5960),
          (__m128i)(unsigned __int64)"Create ~C~ file...");
  v84 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)off_4D5968),
          (__m128i)(unsigned __int64)"Toggle SSE intrinsics");
  v83 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)off_4D5970),
          (__m128i)(unsigned __int64)"Toggle display casts");
  v82 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4D5978), (__m128i)(unsigned __int64)"Set t~y~pe...");
  v81 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4D5980), (__m128i)(unsigned __int64)"Rename...");
  v80 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)off_4D5968),
          (__m128i)(unsigned __int64)"Disable SSE intrinsics");
  v79 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4D5970), (__m128i)(unsigned __int64)"Hide casts");
  v78 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4D5978), (__m128i)(unsigned __int64)"Set type...");
  result = operator new(0x19E0u);
  v2 = _mm_loadl_epi64(&v87);
  *(_QWORD *)(result + 48) = off_4D4B20;
  *(_QWORD *)(result + 80) = off_4D4AE0;
  *(_QWORD *)(result + 112) = off_4D4B60;
  *(_QWORD *)(result + 144) = off_4D4BA0;
  *(_QWORD *)(result + 176) = off_4D4AA0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 56) = 1;
  *(_DWORD *)(result + 72) = 1;
  *(_BYTE *)(result + 76) = 1;
  *(_DWORD *)(result + 88) = 1;
  *(_DWORD *)(result + 104) = 1;
  *(_BYTE *)(result + 108) = 1;
  *(_DWORD *)(result + 120) = 1;
  *(_DWORD *)(result + 136) = 1;
  *(_BYTE *)(result + 140) = 1;
  *(_DWORD *)(result + 152) = 1;
  *(_DWORD *)(result + 168) = 1;
  *(_BYTE *)(result + 172) = 1;
  *(_DWORD *)(result + 184) = 1;
  *(_DWORD *)(result + 200) = 1;
  *(_BYTE *)(result + 204) = 1;
  *(_QWORD *)result = v2.m128i_i64[0];
  *(_QWORD *)(result + 64) = v2.m128i_i64[0];
  *(_QWORD *)(result + 96) = v2.m128i_i64[0];
  *(_QWORD *)(result + 128) = v2.m128i_i64[0];
  *(_QWORD *)(result + 160) = v2.m128i_i64[0];
  *(_QWORD *)(result + 192) = v2.m128i_i64[0];
  *(_DWORD *)(result + 216) = 1;
  *(_QWORD *)(result + 208) = off_4D4BE0;
  *(_QWORD *)(result + 240) = off_4D4C20;
  *(_QWORD *)(result + 272) = off_4D4C60;
  *(_QWORD *)(result + 304) = off_4D4CA0;
  *(_QWORD *)(result + 336) = off_4D4CE0;
  *(_QWORD *)(result + 376) = off_4D4A20;
  *(_DWORD *)(result + 232) = 1;
  *(_BYTE *)(result + 236) = 1;
  *(_DWORD *)(result + 248) = 1;
  *(_DWORD *)(result + 264) = 1;
  *(_BYTE *)(result + 268) = 1;
  *(_DWORD *)(result + 280) = 1;
  *(_DWORD *)(result + 296) = 1;
  *(_BYTE *)(result + 300) = 1;
  *(_DWORD *)(result + 312) = 1;
  *(_DWORD *)(result + 328) = 1;
  *(_BYTE *)(result + 332) = 1;
  *(_DWORD *)(result + 344) = 1;
  *(_DWORD *)(result + 360) = 1;
  *(_BYTE *)(result + 364) = 1;
  *(_DWORD *)(result + 368) = 7;
  *(_DWORD *)(result + 384) = 1;
  *(_DWORD *)(result + 400) = 1;
  *(_BYTE *)(result + 404) = 1;
  *(_DWORD *)(result + 416) = 1;
  *(_QWORD *)(result + 224) = v2.m128i_i64[0];
  *(_QWORD *)(result + 256) = v2.m128i_i64[0];
  *(_QWORD *)(result + 288) = v2.m128i_i64[0];
  *(_QWORD *)(result + 320) = v2.m128i_i64[0];
  *(_QWORD *)(result + 352) = v2.m128i_i64[0];
  *(_QWORD *)(result + 392) = v2.m128i_i64[0];
  *(_QWORD *)(result + 424) = v2.m128i_i64[0];
  *(_DWORD *)(result + 432) = 1;
  v3 = _mm_load_si128(&v78);
  v4 = _mm_load_si128(&v81);
  *(_QWORD *)(result + 408) = off_4D4A60;
  *(__m128i *)(result + 624) = v3;
  v5 = _mm_loadl_epi64((const __m128i *)off_4D5988);
  *(_QWORD *)(result + 440) = off_4D4990;
  *(_QWORD *)(result + 472) = off_4D49D8;
  *(__m128i *)(result + 640) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)"Set field t~y~pe...");
  v6 = _mm_loadl_epi64((const __m128i *)off_4D5990);
  *(_QWORD *)(result + 504) = off_4D5850;
  *(_QWORD *)(result + 656) = "Set item t~y~pe...";
  *(_QWORD *)(result + 672) = "Edit function t~y~pe...";
  *(__m128i *)(result + 536) = v4;
  *(_BYTE *)(result + 436) = 1;
  *(_DWORD *)(result + 448) = 1;
  *(_DWORD *)(result + 464) = 1;
  *(_BYTE *)(result + 468) = 1;
  *(_DWORD *)(result + 480) = 1;
  *(_DWORD *)(result + 496) = 1;
  *(_BYTE *)(result + 500) = 1;
  *(_DWORD *)(result + 512) = 1;
  *(_DWORD *)(result + 528) = 1;
  *(_BYTE *)(result + 532) = 1;
  *(_DWORD *)(result + 600) = 1;
  *(_DWORD *)(result + 616) = 1;
  *(_BYTE *)(result + 620) = 1;
  *(_QWORD *)(result + 664) = 0;
  *(_QWORD *)(result + 456) = v2.m128i_i64[0];
  *(_QWORD *)(result + 488) = v2.m128i_i64[0];
  *(_QWORD *)(result + 520) = v2.m128i_i64[0];
  *(_QWORD *)(result + 608) = v2.m128i_i64[0];
  *(__m128i *)(result + 552) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)"Re~n~ame field...");
  v7 = _mm_loadl_epi64((const __m128i *)off_4D5998);
  *(_QWORD *)(result + 680) = off_4D4F20;
  *(_QWORD *)(result + 712) = off_4D4EA0;
  *(__m128i *)(result + 568) = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)"Re~n~ame label...");
  v8 = _mm_loadl_epi64((const __m128i *)off_4D59A0);
  *(_QWORD *)(result + 744) = off_4D4F60;
  *(_QWORD *)(result + 776) = off_4D4FA0;
  *(_QWORD *)(result + 808) = off_4D4FE0;
  *(__m128i *)(result + 584) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)off_4D5890);
  *(_DWORD *)(result + 688) = 1;
  *(_DWORD *)(result + 704) = 1;
  *(_BYTE *)(result + 708) = 1;
  *(_DWORD *)(result + 720) = 1;
  *(_DWORD *)(result + 736) = 1;
  *(_BYTE *)(result + 740) = 1;
  *(_DWORD *)(result + 752) = 1;
  *(_DWORD *)(result + 768) = 1;
  *(_BYTE *)(result + 772) = 1;
  *(_DWORD *)(result + 784) = 1;
  *(_DWORD *)(result + 800) = 1;
  *(_BYTE *)(result + 804) = 1;
  *(_DWORD *)(result + 816) = 1;
  *(_DWORD *)(result + 832) = 1;
  *(_BYTE *)(result + 836) = 1;
  *(_DWORD *)(result + 848) = 1;
  *(_DWORD *)(result + 864) = 1;
  *(_QWORD *)(result + 696) = v2.m128i_i64[0];
  *(_QWORD *)(result + 728) = v2.m128i_i64[0];
  *(_QWORD *)(result + 760) = v2.m128i_i64[0];
  *(_QWORD *)(result + 792) = v2.m128i_i64[0];
  *(_QWORD *)(result + 824) = v2.m128i_i64[0];
  *(_QWORD *)(result + 856) = v2.m128i_i64[0];
  *(_BYTE *)(result + 868) = 1;
  *(_QWORD *)(result + 840) = off_4D5020;
  *(_QWORD *)(result + 872) = off_4D5060;
  *(_QWORD *)(result + 904) = off_4D50A0;
  *(_QWORD *)(result + 936) = off_4D50E0;
  *(_QWORD *)(result + 968) = off_4D48E8;
  *(_QWORD *)(result + 1000) = off_4D5400;
  *(_QWORD *)(result + 1032) = off_4D5440;
  *(_DWORD *)(result + 880) = 1;
  *(_DWORD *)(result + 896) = 1;
  *(_BYTE *)(result + 900) = 1;
  *(_DWORD *)(result + 912) = 1;
  *(_DWORD *)(result + 928) = 1;
  *(_BYTE *)(result + 932) = 1;
  *(_DWORD *)(result + 944) = 1;
  *(_DWORD *)(result + 960) = 1;
  *(_BYTE *)(result + 964) = 1;
  *(_DWORD *)(result + 976) = 1;
  *(_DWORD *)(result + 992) = 1;
  *(_BYTE *)(result + 996) = 1;
  *(_DWORD *)(result + 1008) = 1;
  *(_DWORD *)(result + 1024) = 1;
  *(_BYTE *)(result + 1028) = 1;
  *(_DWORD *)(result + 1040) = 1;
  *(_DWORD *)(result + 1056) = 1;
  *(_BYTE *)(result + 1060) = 1;
  *(_DWORD *)(result + 1072) = 1;
  *(_QWORD *)(result + 888) = v2.m128i_i64[0];
  *(_QWORD *)(result + 920) = v2.m128i_i64[0];
  *(_QWORD *)(result + 952) = v2.m128i_i64[0];
  *(_QWORD *)(result + 984) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1016) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1048) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1080) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1064) = off_4D4E60;
  *(_QWORD *)(result + 1096) = off_4D4DE0;
  *(_QWORD *)(result + 1128) = off_4D4EE0;
  *(_QWORD *)(result + 1160) = off_4D4928;
  *(_QWORD *)(result + 1192) = off_4D4D60;
  *(_QWORD *)(result + 1224) = off_4D4DA0;
  *(_DWORD *)(result + 1088) = 1;
  *(_BYTE *)(result + 1092) = 1;
  *(_DWORD *)(result + 1104) = 1;
  *(_DWORD *)(result + 1120) = 1;
  *(_BYTE *)(result + 1124) = 1;
  *(_DWORD *)(result + 1136) = 1;
  *(_DWORD *)(result + 1152) = 1;
  *(_BYTE *)(result + 1156) = 1;
  *(_DWORD *)(result + 1168) = 1;
  *(_DWORD *)(result + 1184) = 1;
  *(_BYTE *)(result + 1188) = 1;
  *(_DWORD *)(result + 1200) = 1;
  *(_DWORD *)(result + 1216) = 1;
  *(_BYTE *)(result + 1220) = 1;
  *(_DWORD *)(result + 1232) = 1;
  *(_DWORD *)(result + 1248) = 1;
  *(_BYTE *)(result + 1252) = 0;
  *(_DWORD *)(result + 1264) = 1;
  *(_DWORD *)(result + 1280) = 1;
  *(_BYTE *)(result + 1284) = 0;
  *(_QWORD *)(result + 1112) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1144) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1176) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1208) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1240) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1272) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1256) = off_4D5120;
  *(_QWORD *)(result + 1296) = off_4D5160;
  *(_QWORD *)(result + 1328) = off_4D52A0;
  *(_QWORD *)(result + 1360) = off_4D4D20;
  *(_QWORD *)(result + 1392) = off_4D52E0;
  *(_QWORD *)(result + 1424) = off_4D5328;
  *(_QWORD *)(result + 1456) = off_4D5370;
  *(_DWORD *)(result + 1288) = 0;
  *(_DWORD *)(result + 1304) = 1;
  *(_DWORD *)(result + 1320) = 1;
  *(_BYTE *)(result + 1324) = 1;
  *(_DWORD *)(result + 1336) = 1;
  *(_DWORD *)(result + 1352) = 1;
  *(_BYTE *)(result + 1356) = 1;
  *(_DWORD *)(result + 1368) = 1;
  *(_DWORD *)(result + 1384) = 1;
  *(_BYTE *)(result + 1388) = 1;
  *(_DWORD *)(result + 1400) = 1;
  *(_DWORD *)(result + 1416) = 1;
  *(_BYTE *)(result + 1420) = 1;
  *(_DWORD *)(result + 1432) = 1;
  *(_DWORD *)(result + 1448) = 1;
  *(_BYTE *)(result + 1452) = 1;
  *(_DWORD *)(result + 1464) = 1;
  *(_DWORD *)(result + 1480) = 1;
  *(_BYTE *)(result + 1484) = 1;
  *(_DWORD *)(result + 1496) = 1;
  *(_QWORD *)(result + 1312) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1344) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1376) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1408) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1440) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1472) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1504) = v2.m128i_i64[0];
  v9 = _mm_load_si128(&v79);
  *(_QWORD *)(result + 1520) = off_4D4E20;
  *(_QWORD *)(result + 1552) = off_4D4E20;
  *(_QWORD *)(result + 1584) = off_4D5480;
  *(__m128i *)(result + 1648) = v9;
  v10 = _mm_loadl_epi64((const __m128i *)off_4D59A8);
  *(_QWORD *)(result + 1488) = off_4D53B8;
  *(_WORD *)(result + 1548) = 257;
  *(_WORD *)(result + 1580) = 1;
  *(_QWORD *)(result + 1616) = off_4D54C0;
  *(__m128i *)(result + 1664) = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)off_4D5508);
  *(_DWORD *)(result + 1512) = 1;
  *(_BYTE *)(result + 1516) = 1;
  *(_DWORD *)(result + 1528) = 1;
  *(_DWORD *)(result + 1544) = 1;
  *(_DWORD *)(result + 1560) = 1;
  *(_DWORD *)(result + 1576) = 1;
  *(_DWORD *)(result + 1592) = 1;
  *(_DWORD *)(result + 1608) = 1;
  *(_BYTE *)(result + 1612) = 1;
  *(_DWORD *)(result + 1624) = 1;
  *(_DWORD *)(result + 1640) = 1;
  *(_BYTE *)(result + 1644) = 1;
  *(_DWORD *)(result + 1680) = 1;
  *(_DWORD *)(result + 1696) = 1;
  *(_BYTE *)(result + 1700) = 1;
  *(_DWORD *)(result + 1736) = 1;
  *(_QWORD *)(result + 1536) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1568) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1600) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1632) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1688) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1744) = v2.m128i_i64[0];
  v11 = _mm_load_si128(&v80);
  *(_QWORD *)(result + 1760) = off_4D51A0;
  *(__m128i *)(result + 1704) = v11;
  v12 = _mm_loadl_epi64((const __m128i *)off_4D59B0);
  *(_QWORD *)(result + 1792) = off_4D51E0;
  *(_QWORD *)(result + 1824) = off_4D5220;
  *(_QWORD *)(result + 1856) = off_4D5550;
  *(_QWORD *)(result + 1888) = off_4D5590;
  *(__m128i *)(result + 1720) = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)off_4D5610);
  *(_DWORD *)(result + 1752) = 0;
  *(_BYTE *)(result + 1756) = 0;
  *(_DWORD *)(result + 1768) = 1;
  *(_DWORD *)(result + 1784) = 1;
  *(_BYTE *)(result + 1788) = 1;
  *(_DWORD *)(result + 1800) = 1;
  *(_DWORD *)(result + 1816) = 1;
  *(_BYTE *)(result + 1820) = 1;
  *(_DWORD *)(result + 1832) = 1;
  *(_DWORD *)(result + 1848) = 1;
  *(_BYTE *)(result + 1852) = 1;
  *(_DWORD *)(result + 1864) = 1;
  *(_DWORD *)(result + 1880) = 1;
  *(_BYTE *)(result + 1884) = 1;
  *(_DWORD *)(result + 1896) = 1;
  *(_DWORD *)(result + 1912) = 1;
  *(_BYTE *)(result + 1916) = 1;
  *(_DWORD *)(result + 1928) = 1;
  *(_QWORD *)(result + 1776) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1808) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1840) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1872) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1904) = v2.m128i_i64[0];
  *(_QWORD *)(result + 1936) = v2.m128i_i64[0];
  v13 = _mm_loadl_epi64((const __m128i *)off_4D59B8);
  *(_QWORD *)(result + 1992) = "H";
  *(_QWORD *)(result + 2104) = result + 112;
  *(__m128i *)(result + 1960) = _mm_unpacklo_epi64(v13, (__m128i)(unsigned __int64)"Toggle hex/dec");
  v14 = _mm_loadl_epi64((const __m128i *)off_4D59C0);
  *(_QWORD *)(result + 1976) = result + 48;
  *(_QWORD *)(result + 2040) = result + 80;
  *(__m128i *)(result + 2024) = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)"~H~exadecimal");
  v15 = _mm_loadl_epi64((const __m128i *)off_4D59C8);
  *(_QWORD *)(result + 1920) = off_4D55D0;
  *(_QWORD *)(result + 2056) = &unk_405793;
  *(__m128i *)(result + 2088) = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)"~D~ecimal");
  v16 = _mm_loadl_epi64((const __m128i *)off_4D59D0);
  *(_QWORD *)(result + 2120) = &unk_405793;
  *(_QWORD *)(result + 2168) = result + 144;
  *(__m128i *)(result + 2152) = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)"Octa~l~");
  *(_DWORD *)(result + 1944) = 1;
  *(_BYTE *)(result + 1948) = 1;
  *(_DWORD *)(result + 1952) = 64;
  *(_QWORD *)(result + 2000) = 0;
  *(_QWORD *)(result + 2008) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2016) = 64;
  *(_QWORD *)(result + 2064) = 0;
  *(_QWORD *)(result + 2072) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2080) = 64;
  *(_QWORD *)(result + 2128) = 0;
  *(_QWORD *)(result + 2136) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2144) = 64;
  *(_QWORD *)(result + 1984) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2048) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2112) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2176) = v2.m128i_i64[0];
  v17 = _mm_loadl_epi64((const __m128i *)off_4D59D8);
  *(_QWORD *)(result + 2232) = result + 176;
  *(_QWORD *)(result + 2248) = "R";
  *(__m128i *)(result + 2216) = _mm_unpacklo_epi64(v17, (__m128i)(unsigned __int64)"Cha~r~");
  v18 = _mm_loadl_epi64((const __m128i *)off_4D59E0);
  *(_QWORD *)(result + 2296) = result + 208;
  *(_QWORD *)(result + 2312) = "M";
  *(__m128i *)(result + 2280) = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)"Enu~m~");
  v19 = _mm_loadl_epi64((const __m128i *)off_4D59E8);
  *(_QWORD *)(result + 2360) = result + 240;
  *(_QWORD *)(result + 2376) = "_";
  *(__m128i *)(result + 2344) = _mm_unpacklo_epi64(v19, (__m128i)(unsigned __int64)"Invert ~s~ign");
  v20 = _mm_loadl_epi64((const __m128i *)off_4D59F0);
  *(_QWORD *)(result + 2184) = &unk_405793;
  *(_QWORD *)(result + 2424) = result + 272;
  *(__m128i *)(result + 2408) = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)"~B~itwise negate");
  *(_QWORD *)(result + 2192) = 0;
  *(_QWORD *)(result + 2200) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2208) = 64;
  *(_QWORD *)(result + 2256) = 0;
  *(_QWORD *)(result + 2264) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2272) = 64;
  *(_QWORD *)(result + 2320) = 0;
  *(_QWORD *)(result + 2328) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2336) = 64;
  *(_QWORD *)(result + 2384) = 0;
  *(_QWORD *)(result + 2392) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2400) = 64;
  *(_QWORD *)(result + 2240) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2304) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2368) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2432) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2440) = "~";
  v21 = _mm_loadl_epi64((const __m128i *)off_4D59F8);
  *(_QWORD *)(result + 2488) = result + 304;
  *(_QWORD *)(result + 2504) = "T";
  *(__m128i *)(result + 2472) = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)"Structure offse~t~");
  v22 = _mm_loadl_epi64((const __m128i *)off_4D5A00);
  *(_QWORD *)(result + 2568) = "T";
  *(_QWORD *)(result + 2552) = result + 336;
  *(__m128i *)(result + 2536) = _mm_unpacklo_epi64(v22, (__m128i)(unsigned __int64)"Rever~t~ CONTAINING_RECORD");
  v23 = _mm_loadl_epi64((const __m128i *)off_4D5A08);
  *(_QWORD *)(result + 2616) = result + 376;
  *(_QWORD *)(result + 2632) = &unk_405793;
  *(__m128i *)(result + 2600) = _mm_unpacklo_epi64(v23, (__m128i)(unsigned __int64)"~F~orce call type");
  v24 = _mm_loadl_epi64((const __m128i *)off_4D5A10);
  *(_QWORD *)(result + 2680) = result + 408;
  *(_QWORD *)(result + 2696) = &unk_405793;
  *(__m128i *)(result + 2664) = _mm_unpacklo_epi64(v24, (__m128i)(unsigned __int64)"Set ~c~all type...");
  *(_QWORD *)(result + 2448) = 0;
  *(_QWORD *)(result + 2456) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2464) = 64;
  *(_QWORD *)(result + 2512) = 0;
  *(_QWORD *)(result + 2520) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2528) = 64;
  *(_QWORD *)(result + 2576) = 0;
  *(_QWORD *)(result + 2584) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2592) = 64;
  *(_QWORD *)(result + 2640) = 0;
  *(_QWORD *)(result + 2648) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2656) = 64;
  *(_QWORD *)(result + 2496) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2560) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2624) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2688) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2704) = 0;
  v25 = _mm_loadl_epi64((const __m128i *)off_4D5A18);
  *(_QWORD *)(result + 2744) = result + 440;
  v26 = _mm_load_si128(&v82);
  *(_QWORD *)(result + 2760) = "Numpad+";
  *(_QWORD *)(result + 2808) = result + 472;
  *(_QWORD *)(result + 2872) = result + 504;
  *(__m128i *)(result + 2728) = _mm_unpacklo_epi64(v25, (__m128i)(unsigned __int64)"Add ~v~ariadic argument");
  v27 = _mm_loadl_epi64((const __m128i *)off_4D5A20);
  *(_QWORD *)(result + 2888) = "N";
  *(_QWORD *)(result + 2936) = result + 592;
  *(_QWORD *)(result + 2824) = "Numpad-";
  *(_QWORD *)(result + 2952) = "Y";
  *(__m128i *)(result + 2856) = v4;
  *(_QWORD *)(result + 2712) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2720) = 64;
  *(_QWORD *)(result + 2768) = 0;
  *(_QWORD *)(result + 2776) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2784) = 64;
  *(_QWORD *)(result + 2832) = 0;
  *(_QWORD *)(result + 2840) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2848) = 64;
  *(_QWORD *)(result + 2896) = 0;
  *(_QWORD *)(result + 2904) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 2912) = 64;
  *(_QWORD *)(result + 2960) = 0;
  *(_QWORD *)(result + 2968) = 0x4FFFFFFFFLL;
  *(_QWORD *)(result + 2752) = v2.m128i_i64[0];
  *(__m128i *)(result + 2792) = _mm_unpacklo_epi64(v27, (__m128i)(unsigned __int64)"Delete variadic argument");
  *(_QWORD *)(result + 2816) = v2.m128i_i64[0];
  *(_QWORD *)(result + 2880) = v2.m128i_i64[0];
  *(__m128i *)(result + 2920) = v26;
  *(_QWORD *)(result + 2944) = v2.m128i_i64[0];
  *(_DWORD *)(result + 2976) = 64;
  v28 = _mm_loadl_epi64((const __m128i *)off_4D5A28);
  *(_QWORD *)(result + 3000) = result + 680;
  *(_QWORD *)(result + 3016) = &unk_405793;
  *(__m128i *)(result + 2984) = _mm_unpacklo_epi64(v28, (__m128i)(unsigned __int64)"Reset pointer type");
  v29 = _mm_loadl_epi64((const __m128i *)off_4D5A30);
  *(_QWORD *)(result + 3064) = result + 712;
  *(_QWORD *)(result + 3080) = &unk_405793;
  *(__m128i *)(result + 3048) = _mm_unpacklo_epi64(v29, (__m128i)(unsigned __int64)"Convert to struct *...");
  v30 = _mm_loadl_epi64((const __m128i *)off_4D5A38);
  *(_QWORD *)(result + 3128) = result + 744;
  *(_QWORD *)(result + 3144) = "=";
  *(__m128i *)(result + 3112) = _mm_unpacklo_epi64(v30, (__m128i)(unsigned __int64)"Map to another variable...");
  v31 = _mm_loadl_epi64((const __m128i *)off_4D5A40);
  *(_QWORD *)(result + 3192) = result + 776;
  *(_QWORD *)(result + 3208) = &unk_405793;
  *(_QWORD *)(result + 3024) = 0;
  *(_QWORD *)(result + 3032) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3040) = 64;
  *(_QWORD *)(result + 3088) = 0;
  *(_QWORD *)(result + 3096) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3104) = 64;
  *(_QWORD *)(result + 3152) = 0;
  *(_QWORD *)(result + 3160) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3168) = 64;
  *(_QWORD *)(result + 3216) = 0;
  *(_QWORD *)(result + 3224) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3232) = 64;
  *(_QWORD *)(result + 3008) = v2.m128i_i64[0];
  *(_QWORD *)(result + 3072) = v2.m128i_i64[0];
  *(_QWORD *)(result + 3136) = v2.m128i_i64[0];
  *(__m128i *)(result + 3176) = _mm_unpacklo_epi64(v31, (__m128i)(unsigned __int64)"Unmap variable(s)...");
  *(_QWORD *)(result + 3200) = v2.m128i_i64[0];
  v32 = _mm_loadl_epi64((const __m128i *)off_4D5A48);
  *(_QWORD *)(result + 3256) = result + 808;
  *(_QWORD *)(result + 3272) = &unk_405793;
  *(__m128i *)(result + 3240) = _mm_unpacklo_epi64(v32, (__m128i)(unsigned __int64)"Forbid assignment propagation");
  v33 = _mm_loadl_epi64((const __m128i *)off_4D5A50);
  *(_QWORD *)(result + 3320) = result + 840;
  *(_QWORD *)(result + 3336) = "Shift-S";
  *(__m128i *)(result + 3304) = _mm_unpacklo_epi64(v33, (__m128i)(unsigned __int64)"Split variable");
  v34 = _mm_loadl_epi64((const __m128i *)off_4D5A58);
  *(_QWORD *)(result + 3384) = result + 872;
  *(_QWORD *)(result + 3400) = &unk_405793;
  *(__m128i *)(result + 3368) = _mm_unpacklo_epi64(v34, (__m128i)(unsigned __int64)"Unsplit variable");
  v35 = _mm_loadl_epi64((const __m128i *)off_4D5A60);
  *(_QWORD *)(result + 3448) = result + 904;
  *(_QWORD *)(result + 3464) = "Shift-Del";
  *(_QWORD *)(result + 3280) = 0;
  *(_QWORD *)(result + 3288) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3296) = 64;
  *(_QWORD *)(result + 3344) = 0;
  *(_QWORD *)(result + 3352) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3360) = 64;
  *(_QWORD *)(result + 3408) = 0;
  *(_QWORD *)(result + 3416) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3424) = 64;
  *(_QWORD *)(result + 3472) = 0;
  *(_QWORD *)(result + 3480) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3488) = 64;
  *(_QWORD *)(result + 3264) = v2.m128i_i64[0];
  *(_QWORD *)(result + 3328) = v2.m128i_i64[0];
  *(_QWORD *)(result + 3392) = v2.m128i_i64[0];
  *(__m128i *)(result + 3432) = _mm_unpacklo_epi64(v35, (__m128i)(unsigned __int64)"Remove function argument/retval");
  *(_QWORD *)(result + 3456) = v2.m128i_i64[0];
  v36 = _mm_loadl_epi64((const __m128i *)off_4D5A68);
  *(_QWORD *)(result + 3512) = result + 936;
  *(_QWORD *)(result + 3528) = "Ctrl-Shift-R";
  *(__m128i *)(result + 3496) = _mm_unpacklo_epi64(v36, (__m128i)(unsigned __int64)"Remove/Add function retval");
  v37 = _mm_loadl_epi64((const __m128i *)off_4D5A70);
  *(_QWORD *)(result + 3576) = result + 968;
  *(_QWORD *)(result + 3592) = "Shift-N";
  *(__m128i *)(result + 3560) = _mm_unpacklo_epi64(v37, (__m128i)(unsigned __int64)"Quick rename...");
  v38 = _mm_loadl_epi64((const __m128i *)off_4D5A78);
  *(_QWORD *)(result + 3640) = result + 1000;
  *(_QWORD *)(result + 3656) = &unk_405793;
  *(__m128i *)(result + 3624) = _mm_unpacklo_epi64(v38, (__m128i)(unsigned __int64)"Split expression");
  v39 = _mm_loadl_epi64((const __m128i *)off_4D5A80);
  *(_QWORD *)(result + 3704) = result + 1032;
  *(_QWORD *)(result + 3720) = &unk_405793;
  *(_QWORD *)(result + 3536) = 0;
  *(_QWORD *)(result + 3544) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3552) = 64;
  *(_QWORD *)(result + 3600) = 0;
  *(_QWORD *)(result + 3608) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3616) = 64;
  *(_QWORD *)(result + 3664) = 0;
  *(_QWORD *)(result + 3672) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3680) = 64;
  *(_QWORD *)(result + 3728) = 0;
  *(_QWORD *)(result + 3736) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3744) = 64;
  *(_QWORD *)(result + 3520) = v2.m128i_i64[0];
  *(_QWORD *)(result + 3584) = v2.m128i_i64[0];
  *(_QWORD *)(result + 3648) = v2.m128i_i64[0];
  *(__m128i *)(result + 3688) = _mm_unpacklo_epi64(v39, (__m128i)(unsigned __int64)"Unsplit expression");
  *(_QWORD *)(result + 3712) = v2.m128i_i64[0];
  v40 = _mm_loadl_epi64((const __m128i *)off_4D5A88);
  *(_QWORD *)(result + 3768) = result + 1000;
  *(_QWORD *)(result + 3832) = result + 1032;
  *(__m128i *)(result + 3752) = _mm_unpacklo_epi64(v40, (__m128i)(unsigned __int64)"Split memory access");
  v41 = _mm_loadl_epi64((const __m128i *)off_4D5A90);
  *(_QWORD *)(result + 3896) = result + 1064;
  *(_QWORD *)(result + 3784) = &unk_405793;
  *(__m128i *)(result + 3816) = _mm_unpacklo_epi64(v41, (__m128i)(unsigned __int64)"Unsplit memory access");
  v42 = _mm_loadl_epi64((const __m128i *)off_4D5A98);
  *(_QWORD *)(result + 3960) = result + 1096;
  *(_QWORD *)(result + 3848) = &unk_405793;
  *(__m128i *)(result + 3880) = _mm_unpacklo_epi64(v42, (__m128i)(unsigned __int64)"Create new struct type...");
  v43 = _mm_loadl_epi64((const __m128i *)off_4D5AA0);
  *(_QWORD *)(result + 3912) = &unk_405793;
  *(_QWORD *)(result + 3976) = "Alt-Y";
  *(_QWORD *)(result + 3792) = 0;
  *(_QWORD *)(result + 3800) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3808) = 64;
  *(_QWORD *)(result + 3856) = 0;
  *(_QWORD *)(result + 3864) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3872) = 64;
  *(_QWORD *)(result + 3920) = 0;
  *(_QWORD *)(result + 3928) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 3936) = 64;
  *(_QWORD *)(result + 3984) = 0;
  *(_QWORD *)(result + 3992) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4000) = 64;
  *(_QWORD *)(result + 3776) = v2.m128i_i64[0];
  *(_QWORD *)(result + 3840) = v2.m128i_i64[0];
  *(_QWORD *)(result + 3904) = v2.m128i_i64[0];
  *(__m128i *)(result + 3944) = _mm_unpacklo_epi64(v43, (__m128i)(unsigned __int64)"Select union field...");
  *(_QWORD *)(result + 3968) = v2.m128i_i64[0];
  v44 = _mm_loadl_epi64((const __m128i *)off_4D5AA8);
  *(_QWORD *)(result + 4088) = result + 1160;
  *(_QWORD *)(result + 4024) = result + 1128;
  *(__m128i *)(result + 4008) = _mm_unpacklo_epi64(v44, (__m128i)(unsigned __int64)"Jump to structure definition...");
  v45 = _mm_loadl_epi64((const __m128i *)off_4D5AB0);
  *(_QWORD *)(result + 4152) = result + 1192;
  *(_QWORD *)(result + 4040) = "Z";
  *(__m128i *)(result + 4072) = _mm_unpacklo_epi64(v45, (__m128i)(unsigned __int64)"~J~ump to local type...");
  *(_OWORD *)(result + 4104) = 0;
  v46 = _mm_loadl_epi64((const __m128i *)off_4D5AB8);
  *(_QWORD *)(result + 4056) = 0x6FFFFFFFFLL;
  *(_QWORD *)(result + 4120) = 0x6FFFFFFFFLL;
  *(__m128i *)(result + 4136) = _mm_unpacklo_epi64(v46, (__m128i)(unsigned __int64)"Jump to ~x~ref...");
  v47 = _mm_loadl_epi64((const __m128i *)off_4D5AC0);
  *(_QWORD *)(result + 4168) = "X";
  *(_QWORD *)(result + 4184) = 0x6FFFFFFFFLL;
  *(_QWORD *)(result + 4216) = result + 1224;
  *(_QWORD *)(result + 4232) = "Ctrl-Alt-X";
  *(_QWORD *)(result + 4248) = 0x6FFFFFFFFLL;
  *(_QWORD *)(result + 4048) = 0;
  *(_DWORD *)(result + 4064) = 64;
  *(_DWORD *)(result + 4128) = 64;
  *(_QWORD *)(result + 4176) = 0;
  *(_DWORD *)(result + 4192) = 64;
  *(_QWORD *)(result + 4240) = 0;
  *(_DWORD *)(result + 4256) = 64;
  *(_QWORD *)(result + 4032) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4096) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4160) = v2.m128i_i64[0];
  *(__m128i *)(result + 4200) = _mm_unpacklo_epi64(v47, (__m128i)(unsigned __int64)"Jump to xref globally...");
  *(_QWORD *)(result + 4224) = v2.m128i_i64[0];
  v48 = _mm_loadl_epi64((const __m128i *)off_4D5AC8);
  *(_QWORD *)(result + 4280) = result + 1824;
  *(_QWORD *)(result + 4296) = "Alt-Enter";
  *(__m128i *)(result + 4264) = _mm_unpacklo_epi64(v48, (__m128i)(unsigned __int64)"Jump to pseudocode in a new view");
  v49 = _mm_loadl_epi64((const __m128i *)off_4D5AD0);
  *(_QWORD *)(result + 4344) = result + 1256;
  *(_QWORD *)(result + 4312) = 0x6FFFFFFFFLL;
  *(__m128i *)(result + 4328) = _mm_unpacklo_epi64(v49, (__m128i)(unsigned __int64)"Edit comment...");
  v50 = _mm_loadl_epi64((const __m128i *)off_4D5AD8);
  *(_QWORD *)(result + 4408) = result + 1296;
  *(_QWORD *)(result + 4360) = "/,Numpad/";
  *(__m128i *)(result + 4392) = _mm_unpacklo_epi64(v50, (__m128i)(unsigned __int64)"Edit block comment...");
  v51 = _mm_loadl_epi64((const __m128i *)off_4D5AE0);
  *(_QWORD *)(result + 4424) = "Ins";
  *(_QWORD *)(result + 4472) = result + 1328;
  *(_QWORD *)(result + 4488) = &unk_405793;
  *(_QWORD *)(result + 4304) = 0;
  *(_DWORD *)(result + 4320) = 64;
  *(_QWORD *)(result + 4368) = 0;
  *(_QWORD *)(result + 4376) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4384) = 64;
  *(_QWORD *)(result + 4432) = 0;
  *(_QWORD *)(result + 4440) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4448) = 64;
  *(_QWORD *)(result + 4496) = 0;
  *(_QWORD *)(result + 4504) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4512) = 64;
  *(_QWORD *)(result + 4288) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4352) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4416) = v2.m128i_i64[0];
  *(__m128i *)(result + 4456) = _mm_unpacklo_epi64(v51, (__m128i)(unsigned __int64)"Delete orphan comments");
  *(_QWORD *)(result + 4480) = v2.m128i_i64[0];
  v52 = _mm_loadl_epi64((const __m128i *)off_4D5AE8);
  *(_QWORD *)(result + 4536) = result + 1360;
  *(_QWORD *)(result + 4552) = &unk_405793;
  *(__m128i *)(result + 4520) = _mm_unpacklo_epi64(v52, (__m128i)(unsigned __int64)"Generate HTML...");
  v53 = _mm_loadl_epi64((const __m128i *)off_4D5AF0);
  *(_QWORD *)(result + 4600) = result + 1392;
  *(_QWORD *)(result + 4568) = 0x6FFFFFFFFLL;
  *(__m128i *)(result + 4584) = _mm_unpacklo_epi64(v53, (__m128i)(unsigned __int64)"Collapse item");
  v54 = _mm_loadl_epi64((const __m128i *)off_4D5AF8);
  *(_QWORD *)(result + 4664) = result + 1424;
  *(_QWORD *)(result + 4616) = "Numpad-";
  *(__m128i *)(result + 4648) = _mm_unpacklo_epi64(v54, (__m128i)(unsigned __int64)"Uncollapse item");
  v55 = _mm_loadl_epi64((const __m128i *)off_4D5B00);
  *(_QWORD *)(result + 4680) = "Numpad+";
  *(_QWORD *)(result + 4744) = "Numpad-";
  *(_QWORD *)(result + 4560) = 0;
  *(_DWORD *)(result + 4576) = 64;
  *(_QWORD *)(result + 4624) = 0;
  *(_QWORD *)(result + 4632) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4640) = 64;
  *(_QWORD *)(result + 4688) = 0;
  *(_QWORD *)(result + 4696) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4704) = 64;
  *(_QWORD *)(result + 4728) = result + 1456;
  *(_QWORD *)(result + 4752) = 0;
  *(_QWORD *)(result + 4760) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4768) = 64;
  *(_QWORD *)(result + 4544) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4608) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4672) = v2.m128i_i64[0];
  *(__m128i *)(result + 4712) = _mm_unpacklo_epi64(v55, (__m128i)(unsigned __int64)"Collapse declarations");
  *(_QWORD *)(result + 4736) = v2.m128i_i64[0];
  v56 = _mm_loadl_epi64((const __m128i *)off_4D5B08);
  *(_QWORD *)(result + 4808) = "Numpad+";
  *(_QWORD *)(result + 4792) = result + 1488;
  *(__m128i *)(result + 4776) = _mm_unpacklo_epi64(v56, (__m128i)(unsigned __int64)"Uncollapse declarations");
  v57 = _mm_loadl_epi64((const __m128i *)off_4D5B10);
  *(_QWORD *)(result + 4856) = result + 1520;
  *(_QWORD *)(result + 4872) = &unk_405793;
  *(__m128i *)(result + 4840) = _mm_unpacklo_epi64(v57, (__m128i)(unsigned __int64)"Mark as decompiled");
  v58 = _mm_loadl_epi64((const __m128i *)off_4D5B18);
  *(_QWORD *)(result + 4920) = result + 1552;
  *(_QWORD *)(result + 4936) = &unk_405793;
  *(__m128i *)(result + 4904) = _mm_unpacklo_epi64(v58, (__m128i)(unsigned __int64)"Unmark as decompiled");
  v59 = _mm_loadl_epi64((const __m128i *)off_4D5B20);
  *(_QWORD *)(result + 4984) = result + 1584;
  *(_QWORD *)(result + 5000) = &unk_405793;
  *(__m128i *)(result + 4968) = _mm_unpacklo_epi64(v59, (__m128i)(unsigned __int64)"Copy to assembly");
  *(_QWORD *)(result + 4816) = 0;
  *(_QWORD *)(result + 4824) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4832) = 64;
  *(_QWORD *)(result + 4880) = 0;
  *(_QWORD *)(result + 4888) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4896) = 64;
  *(_QWORD *)(result + 4944) = 0;
  *(_QWORD *)(result + 4952) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 4960) = 64;
  *(_QWORD *)(result + 5008) = 0;
  *(_QWORD *)(result + 5016) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 5024) = 64;
  *(_QWORD *)(result + 4800) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4864) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4928) = v2.m128i_i64[0];
  *(_QWORD *)(result + 4992) = v2.m128i_i64[0];
  v60 = _mm_load_si128(&v83);
  v61 = _mm_load_si128(&v84);
  v62 = _mm_loadl_epi64((const __m128i *)off_4D5B28);
  *(_QWORD *)(result + 5048) = result + 1616;
  *(_QWORD *)(result + 5064) = "\\";
  *(_QWORD *)(result + 5112) = result + 1672;
  *(__m128i *)(result + 5096) = v61;
  *(_QWORD *)(result + 5176) = result + 1728;
  *(__m128i *)(result + 5160) = _mm_unpacklo_epi64(v62, (__m128i)(unsigned __int64)"Generate pseudocode");
  v63 = _mm_loadl_epi64((const __m128i *)off_4D5B30);
  *(_QWORD *)(result + 5192) = "F5";
  *(_QWORD *)(result + 5128) = &unk_405793;
  *(_QWORD *)(result + 5208) = 0x106FFFFFFFFLL;
  *(_QWORD *)(result + 5240) = result + 1760;
  *(_QWORD *)(result + 5256) = &unk_405793;
  *(__m128i *)(result + 5224) = _mm_unpacklo_epi64(v63, (__m128i)(unsigned __int64)"Add empty line");
  *(_QWORD *)(result + 5072) = 0;
  *(_QWORD *)(result + 5080) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 5088) = 64;
  *(_QWORD *)(result + 5136) = 0;
  *(_QWORD *)(result + 5144) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 5152) = 64;
  *(_QWORD *)(result + 5200) = 0;
  *(_DWORD *)(result + 5216) = 64;
  *(_QWORD *)(result + 5264) = 0;
  *(_QWORD *)(result + 5272) = 0x4FFFFFFFFLL;
  *(__m128i *)(result + 5032) = v60;
  *(_QWORD *)(result + 5056) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5120) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5184) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5248) = v2.m128i_i64[0];
  *(_DWORD *)(result + 5280) = 64;
  v64 = _mm_loadl_epi64((const __m128i *)off_4D5B38);
  *(_QWORD *)(result + 5304) = result + 1792;
  *(_QWORD *)(result + 5384) = &unk_405793;
  *(__m128i *)(result + 5288) = _mm_unpacklo_epi64(v64, (__m128i)(unsigned __int64)"Jump to matching brace");
  v65 = _mm_loadl_epi64((const __m128i *)off_4D5B40);
  *(_QWORD *)(result + 5368) = result + 1856;
  *(_QWORD *)(result + 5448) = &unk_405793;
  *(__m128i *)(result + 5352) = _mm_unpacklo_epi64(v65, (__m128i)(unsigned __int64)"Show all call decompilations...");
  v66 = _mm_loadl_epi64((const __m128i *)off_4D5B48);
  *(_QWORD *)(result + 5496) = result + 1920;
  *(_QWORD *)(result + 5512) = "A";
  *(__m128i *)(result + 5416) = _mm_unpacklo_epi64(v66, (__m128i)(unsigned __int64)"Show all xref decompilations...");
  v67 = _mm_loadl_epi64((const __m128i *)off_4D5B50);
  *(_QWORD *)(result + 5320) = "%";
  *(_QWORD *)(result + 5400) = 0x106FFFFFFFFLL;
  *(_QWORD *)(result + 5464) = 0x106FFFFFFFFLL;
  *(__m128i *)(result + 5480) = _mm_unpacklo_epi64(v67, (__m128i)(unsigned __int64)"Stock comments");
  *(_QWORD *)(result + 5328) = 0;
  *(_QWORD *)(result + 5336) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 5344) = 64;
  *(_QWORD *)(result + 5392) = 0;
  *(_DWORD *)(result + 5408) = 64;
  *(_QWORD *)(result + 5432) = result + 1888;
  *(_QWORD *)(result + 5456) = 0;
  *(_DWORD *)(result + 5472) = 64;
  *(_QWORD *)(result + 5520) = 0;
  *(_QWORD *)(result + 5528) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 5544) = 1;
  *(_QWORD *)(result + 5312) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5376) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5440) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5504) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5552) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5536) = off_4D5650;
  *(_QWORD *)(result + 5568) = off_4D5690;
  *(_QWORD *)(result + 5600) = off_4D56D0;
  *(_QWORD *)(result + 5632) = off_4D5810;
  *(_QWORD *)(result + 5664) = off_4D5710;
  *(_QWORD *)(result + 5696) = off_4D5750;
  *(_DWORD *)(result + 5560) = 1;
  *(_BYTE *)(result + 5564) = 0;
  *(_DWORD *)(result + 5576) = 1;
  *(_DWORD *)(result + 5592) = 1;
  *(_BYTE *)(result + 5596) = 0;
  *(_DWORD *)(result + 5608) = 1;
  *(_DWORD *)(result + 5624) = 1;
  *(_BYTE *)(result + 5628) = 0;
  *(_DWORD *)(result + 5640) = 1;
  *(_DWORD *)(result + 5656) = 1;
  *(_BYTE *)(result + 5660) = 0;
  *(_DWORD *)(result + 5672) = 1;
  *(_DWORD *)(result + 5688) = 1;
  *(_BYTE *)(result + 5692) = 0;
  *(_DWORD *)(result + 5704) = 1;
  *(_DWORD *)(result + 5720) = 1;
  *(_BYTE *)(result + 5724) = 0;
  *(_DWORD *)(result + 5736) = 1;
  *(_DWORD *)(result + 5752) = 1;
  *(_BYTE *)(result + 5756) = 0;
  *(_QWORD *)(result + 5584) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5616) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5648) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5680) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5712) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5744) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5728) = off_4D5260;
  v68 = _mm_load_si128(&v85);
  v69 = _mm_load_si128(&v86);
  *(_QWORD *)(result + 5760) = off_4D5790;
  *(_QWORD *)(result + 5792) = off_4D57D0;
  *(_QWORD *)(result + 5848) = result + 5536;
  *(_QWORD *)(result + 5928) = result + 5536;
  *(_QWORD *)(result + 5944) = "Ctrl-~";
  *(_QWORD *)(result + 5968) = "File/Produce/Produce DIF";
  *(__m128i *)(result + 5832) = v68;
  v70 = _mm_loadl_epi64((const __m128i *)off_4D5B58);
  *(_QWORD *)(result + 5880) = 0x6FFFFFFFFLL;
  *(_QWORD *)(result + 5960) = 0x6FFFFFFFFLL;
  *(__m128i *)(result + 5912) = v69;
  *(_DWORD *)(result + 5768) = 1;
  *(_DWORD *)(result + 5784) = 1;
  *(_BYTE *)(result + 5788) = 0;
  *(_DWORD *)(result + 5800) = 1;
  *(_DWORD *)(result + 5816) = 1;
  *(_BYTE *)(result + 5820) = 0;
  *(_DWORD *)(result + 5824) = 64;
  *(_QWORD *)(result + 5864) = "Ctrl-F5";
  *(_QWORD *)(result + 5872) = 0;
  *(_QWORD *)(result + 5888) = "File/Produce/Create HTML";
  *(_DWORD *)(result + 5896) = 0;
  *(_DWORD *)(result + 5904) = 64;
  *(_QWORD *)(result + 5952) = 0;
  *(_DWORD *)(result + 5976) = 0;
  *(_DWORD *)(result + 5984) = 64;
  *(_QWORD *)(result + 5776) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5808) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5856) = v2.m128i_i64[0];
  *(_QWORD *)(result + 5936) = v2.m128i_i64[0];
  *(__m128i *)(result + 5992) = _mm_unpacklo_epi64(v70, (__m128i)(unsigned __int64)"Send ~d~atabase...");
  v71 = _mm_loadl_epi64((const __m128i *)off_4D5B60);
  *(_QWORD *)(result + 6040) = 0x6FFFFFFFFLL;
  *(_QWORD *)(result + 6048) = "Help/Check";
  *(_QWORD *)(result + 6128) = "Help/Check";
  *(__m128i *)(result + 6072) = _mm_unpacklo_epi64(v71, (__m128i)(unsigned __int64)"E~x~tract function...");
  *(_QWORD *)(result + 6200) = 0x106FFFFFFFFLL;
  *(__m128i *)(result + 6088) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(result + 5600), v2);
  v72 = _mm_loadl_epi64((const __m128i *)off_4D5B68);
  *(_QWORD *)(result + 6208) = "Jump/Jump to address";
  *(__m128i *)(result + 6008) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(result + 5568), v2);
  *(__m128i *)(result + 6152) = _mm_unpacklo_epi64(v72, (__m128i)(unsigned __int64)"Jump to pseudocode");
  *(_QWORD *)(result + 6184) = "Tab";
  *(__m128i *)(result + 6168) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(result + 5632), v2);
  v73 = _mm_loadl_epi64((const __m128i *)off_4D5B70);
  *(_QWORD *)(result + 6288) = "Edit/Comments/Enter";
  *(_QWORD *)(result + 6120) = 0x4FFFFFFFFLL;
  *(__m128i *)(result + 6232) = _mm_unpacklo_epi64(v73, (__m128i)(unsigned __int64)"Add pseudocode comments...");
  *(_DWORD *)(result + 6056) = 0;
  *(__m128i *)(result + 6248) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(result + 5664), v2);
  v74 = _mm_loadl_epi64((const __m128i *)off_4D5B78);
  *(_DWORD *)(result + 6064) = 64;
  *(_DWORD *)(result + 6136) = 0;
  *(_DWORD *)(result + 6144) = 64;
  *(_QWORD *)(result + 6192) = 0;
  *(_DWORD *)(result + 6216) = 0;
  *(_DWORD *)(result + 6224) = 64;
  *(_QWORD *)(result + 6280) = 0x4FFFFFFFFLL;
  *(_DWORD *)(result + 6296) = 0;
  *(_DWORD *)(result + 6304) = 64;
  *(_OWORD *)(result + 6024) = 0;
  *(_OWORD *)(result + 6104) = 0;
  *(_OWORD *)(result + 6264) = 0;
  *(__m128i *)(result + 6312) = _mm_unpacklo_epi64(v74, (__m128i)(unsigned __int64)"Delete pseudocode comments...");
  *(_QWORD *)(result + 6368) = "Edit/Comments/Enter";
  *(__m128i *)(result + 6328) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(result + 5696), v2);
  v75 = _mm_loadl_epi64((const __m128i *)off_4D5B80);
  *(_QWORD *)(result + 6360) = 0x4FFFFFFFFLL;
  *(_QWORD *)(result + 6440) = 0x4FFFFFFFFLL;
  *(__m128i *)(result + 6392) = _mm_unpacklo_epi64(v75, (__m128i)(unsigned __int64)"~R~eset decompiler information...");
  *(_QWORD *)(result + 6448) = "Edit/Other/Toggle border";
  *(__m128i *)(result + 6408) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(result + 5728), v2);
  v76 = _mm_loadl_epi64((const __m128i *)off_4D5B88);
  *(_DWORD *)(result + 6376) = 0;
  *(_DWORD *)(result + 6384) = 64;
  *(__m128i *)(result + 6472) = _mm_unpacklo_epi64(v76, (__m128i)(unsigned __int64)"~T~oggle skippable instructions...");
  *(_QWORD *)(result + 6520) = 0x4FFFFFFFFLL;
  *(__m128i *)(result + 6488) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(result + 5760), v2);
  v77 = _mm_loadl_epi64((const __m128i *)&off_4D5B90);
  *(_DWORD *)(result + 6456) = 0;
  *(_DWORD *)(result + 6464) = 64;
  *(__m128i *)(result + 6552) = _mm_unpacklo_epi64(v77, (__m128i)(unsigned __int64)"Decompile as cal~l~...");
  *(_QWORD *)(result + 6528) = "Edit/Other/Toggle border";
  *(_DWORD *)(result + 6536) = 0;
  *(_DWORD *)(result + 6544) = 64;
  *(_QWORD *)(result + 6600) = 0x4FFFFFFFFLL;
  *(_QWORD *)(result + 6608) = "Edit/Other/Toggle border";
  *(_DWORD *)(result + 6616) = 0;
  *(_OWORD *)(result + 6344) = 0;
  *(_OWORD *)(result + 6424) = 0;
  *(_OWORD *)(result + 6504) = 0;
  *(__m128i *)(result + 6568) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(result + 5792), v2);
  *(_OWORD *)(result + 6584) = 0;
  return result;
}

