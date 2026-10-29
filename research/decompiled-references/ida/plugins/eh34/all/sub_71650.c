unsigned __int64 __fastcall sub_71650(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __m128 v7; // xmm0
  __int128 *v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r15
  __m128i si128; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i *v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i *v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm0
  __m128i *v30; // rdi
  bool v31; // zf
  __int64 v33; // [rsp+8h] [rbp-F0h]
  __m128i *v34; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+48h] [rbp-B0h]
  _BYTE *v36; // [rsp+60h] [rbp-98h] BYREF
  __int128 v37; // [rsp+68h] [rbp-90h]
  char *v38; // [rsp+80h] [rbp-78h] BYREF
  __int128 v39; // [rsp+88h] [rbp-70h] BYREF
  __int128 *v40; // [rsp+98h] [rbp-60h] BYREF
  __int128 *v41; // [rsp+A0h] [rbp-58h]
  __int64 v42; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+B8h] [rbp-40h]

  v2 = a1 + 88;
  v43 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 80) = a2;
  *(_QWORD *)a1 = &off_8BB28;
  *(_QWORD *)(a1 + 72) = &off_8BCF8;
  *(_QWORD *)(a1 + 88) = off_8C508;
  *(_QWORD *)(a1 + 96) = &off_8C5A8;
  *(_QWORD *)(a1 + 104) = off_8C5C0;
  *(_QWORD *)(a1 + 112) = &off_8C5E0;
  *(_QWORD *)(a1 + 120) = &off_8C5F8;
  *(_QWORD *)(a1 + 128) = off_8C610;
  *(_DWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 64) = 0;
  *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_8BCA0, (__m128i)(unsigned __int64)off_8BCD0);
  *(_QWORD *)(a1 + 136) = off_8C638;
  *(_QWORD *)(a1 + 144) = &off_8C658;
  *(_QWORD *)(a1 + 152) = &off_8C670;
  *(_QWORD *)(a1 + 168) = a1 + 88;
  v33 = a1 + 168;
  v4 = sub_6D300(a1 + 128);
  *(_QWORD *)(a1 + 176) = v4;
  v5 = v4;
  sub_6DA70((__int64)&v38);
  *(_QWORD *)(a1 + 192) = a1 + 88;
  *(_QWORD *)(a1 + 184) = off_8BAC8;
  v6 = *((_QWORD *)&v39 + 1);
  if ( *((_QWORD *)&v39 + 1) )
  {
    v7 = _mm_loadh_ps((const double *)&v40);
    *(_DWORD *)(a1 + 208) = v39;
    v8 = v41;
    *(__m128 *)(a1 + 216) = v7;
    *(_QWORD *)(a1 + 232) = v8;
    *(_QWORD *)(v6 + 8) = a1 + 208;
    *((_QWORD *)&v39 + 1) = 0;
    *(_QWORD *)(a1 + 240) = v42;
    v40 = &v39;
    v41 = &v39;
    v42 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 208) = 0;
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 224) = a1 + 208;
    *(_QWORD *)(a1 + 232) = a1 + 208;
    *(_QWORD *)(a1 + 240) = 0;
  }
  *(_QWORD *)(a1 + 248) = v5;
  v9 = a1 + 696;
  *(_QWORD *)(a1 + 184) = off_8BF38;
  sub_70550(nullptr);
  *(_BYTE *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 256) = a1 + 184;
  *(_QWORD *)(a1 + 312) = a1 + 296;
  *(_QWORD *)(a1 + 320) = a1 + 296;
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 344;
  *(_QWORD *)(a1 + 408) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 392;
  *(_QWORD *)(a1 + 456) = a1 + 440;
  *(_QWORD *)(a1 + 464) = a1 + 440;
  *(_QWORD *)(a1 + 504) = a1 + 488;
  *(_QWORD *)(a1 + 512) = a1 + 488;
  *(_QWORD *)(a1 + 528) = a1 + 576;
  *(_DWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 536) = 1;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_OWORD *)(a1 + 264) = -1;
  *(_DWORD *)(a1 + 560) = 1065353216;
  *(_QWORD *)(a1 + 584) = a1 + 632;
  *(_QWORD *)(a1 + 640) = a1 + 688;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 592) = 1;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  *(_DWORD *)(a1 + 616) = 1065353216;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 648) = 1;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_DWORD *)(a1 + 672) = 1065353216;
  *(_QWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = &off_8C828;
  *(_BYTE *)(a1 + 704) = 1;
  sub_319A0(a1 + 705);
  *(_BYTE *)(a1 + 712) = -1;
  *(_QWORD *)(a1 + 696) = off_8BFF8;
  *(_QWORD *)(a1 + 720) = -1;
  *(_QWORD *)(a1 + 728) = a1 + 136;
  *(_BYTE *)(a1 + 736) = auto_is_ok(a1 + 705, a1 + 128);
  *(_QWORD *)(a1 + 792) = v2;
  *(_QWORD *)(a1 + 744) = -1;
  *(_QWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 800) = a1 + 712;
  *(_QWORD *)(a1 + 808) = v33;
  *(_QWORD *)(a1 + 816) = a1 + 696;
  *(_QWORD *)(a1 + 824) = a1 + 752;
  *(_OWORD *)(a1 + 752) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  *(_BYTE *)(a1 + 832) = (unsigned __int16)getinf(88) <= 0x383u;
  *(_QWORD *)(a1 + 968) = a1 + 752;
  *(_WORD *)(a1 + 977) = 17990;
  *(_WORD *)(a1 + 1028) = 0;
  *(_QWORD *)(a1 + 1088) = a1 + 1072;
  *(_QWORD *)(a1 + 1096) = a1 + 1072;
  *(_OWORD *)(a1 + 1040) = 0;
  *(_BYTE *)(a1 + 848) = 3;
  *(_QWORD *)(a1 + 856) = v2;
  *(_QWORD *)(a1 + 864) = a1 + 696;
  *(_QWORD *)(a1 + 872) = a1 + 712;
  *(_DWORD *)(a1 + 896) = -1;
  *(_QWORD *)(a1 + 904) = v2;
  *(_QWORD *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 920) = 0;
  *(_QWORD *)(a1 + 928) = v2;
  *(_QWORD *)(a1 + 936) = a1 + 712;
  *(_QWORD *)(a1 + 944) = 0;
  *(_QWORD *)(a1 + 952) = 0;
  *(_QWORD *)(a1 + 960) = 0;
  *(_BYTE *)(a1 + 976) = 0;
  *(_BYTE *)(a1 + 1008) = 0;
  *(_QWORD *)(a1 + 1016) = -1;
  *(_DWORD *)(a1 + 1024) = 0;
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_DWORD *)(a1 + 1072) = 0;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_QWORD *)(a1 + 1104) = 0;
  *(_BYTE *)(a1 + 1112) = 1;
  *(_OWORD *)(a1 + 880) = -1;
  *(_QWORD *)(a1 + 1120) = -1;
  *(_WORD *)(a1 + 1140) = 0;
  *(_OWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 840) = &off_8B918;
  *(_DWORD *)(a1 + 1176) = -1;
  *(_WORD *)(a1 + 1180) = -1;
  *(_OWORD *)(a1 + 1304) = 0;
  *(_OWORD *)(a1 + 1328) = 0;
  *(_OWORD *)(a1 + 1352) = 0;
  *(_QWORD *)(a1 + 1128) = 0;
  *(_DWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_BYTE *)(a1 + 1232) = 0;
  *(_BYTE *)(a1 + 1248) = 0;
  *(_BYTE *)(a1 + 1264) = 0;
  *(_QWORD *)(a1 + 1272) = 0;
  *(_BYTE *)(a1 + 1280) = -1;
  *(_QWORD *)(a1 + 1288) = -1;
  *(_QWORD *)(a1 + 1296) = 0;
  *(_QWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1344) = 0;
  *(_BYTE *)(a1 + 1368) = 0;
  *(_DWORD *)(a1 + 1376) = 0;
  *(_BYTE *)(a1 + 1392) = 0;
  *(_DWORD *)(a1 + 1400) = 0;
  *(_BYTE *)(a1 + 1408) = 0;
  *(_QWORD *)(a1 + 1412) = 0;
  *(_BYTE *)(a1 + 1424) = -1;
  *(_OWORD *)(a1 + 1144) = -1;
  *(_OWORD *)(a1 + 1160) = -1;
  *(_QWORD *)(a1 + 1432) = a1 + 712;
  *(_QWORD *)(a1 + 1520) = a1 + 1504;
  *(_QWORD *)(a1 + 1528) = a1 + 1504;
  *(_QWORD *)(a1 + 1736) = a1 + 1720;
  *(_QWORD *)(a1 + 1744) = a1 + 1720;
  *(_QWORD *)(a1 + 1760) = a1 + 1808;
  *(_OWORD *)(a1 + 1464) = 0;
  *(_OWORD *)(a1 + 1568) = 0;
  *(_OWORD *)(a1 + 1592) = 0;
  *(_OWORD *)(a1 + 1616) = 0;
  *(_OWORD *)(a1 + 1640) = 0;
  *(_OWORD *)(a1 + 1656) = 0;
  *(_OWORD *)(a1 + 1680) = 0;
  *(_QWORD *)(a1 + 1440) = 0;
  *(_QWORD *)(a1 + 1448) = -1;
  *(_QWORD *)(a1 + 1456) = 0;
  *(_QWORD *)(a1 + 1480) = 0;
  *(_DWORD *)(a1 + 1488) = -1;
  *(_DWORD *)(a1 + 1504) = 0;
  *(_QWORD *)(a1 + 1512) = 0;
  *(_QWORD *)(a1 + 1536) = 0;
  *(_QWORD *)(a1 + 1544) = -2;
  *(_QWORD *)(a1 + 1552) = 0;
  *(_QWORD *)(a1 + 1560) = 0;
  *(_QWORD *)(a1 + 1584) = 0;
  *(_QWORD *)(a1 + 1608) = 0;
  *(_QWORD *)(a1 + 1632) = 0;
  *(_QWORD *)(a1 + 1672) = 0;
  *(_QWORD *)(a1 + 1696) = 0;
  *(_DWORD *)(a1 + 1704) = -1;
  *(_DWORD *)(a1 + 1720) = 0;
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1768) = 1;
  *(_QWORD *)(a1 + 1840) = a1 + 1824;
  *(_QWORD *)(a1 + 1848) = a1 + 1824;
  *(_QWORD *)(a1 + 1896) = a1 + 1880;
  *(_QWORD *)(a1 + 1904) = a1 + 1880;
  *(_QWORD *)(a1 + 1968) = a1 + 1952;
  *(_QWORD *)(a1 + 1976) = a1 + 1952;
  *(_QWORD *)(a1 + 1992) = a1 + 2040;
  *(_DWORD *)(a1 + 2048) = -1;
  *(_WORD *)(a1 + 2052) = -1;
  *(_OWORD *)(a1 + 1928) = 0;
  *(_QWORD *)(a1 + 1776) = 0;
  *(_QWORD *)(a1 + 1784) = 0;
  *(_DWORD *)(a1 + 1792) = 1065353216;
  *(_QWORD *)(a1 + 1800) = 0;
  *(_QWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1824) = 0;
  *(_QWORD *)(a1 + 1832) = 0;
  *(_QWORD *)(a1 + 1856) = 0;
  *(_WORD *)(a1 + 1864) = 0;
  *(_DWORD *)(a1 + 1880) = 0;
  *(_QWORD *)(a1 + 1888) = 0;
  *(_QWORD *)(a1 + 1912) = 0;
  *(_QWORD *)(a1 + 1920) = 0;
  *(_DWORD *)(a1 + 1952) = 0;
  *(_QWORD *)(a1 + 1960) = 0;
  *(_QWORD *)(a1 + 1984) = 0;
  *(_QWORD *)(a1 + 2000) = 1;
  *(_QWORD *)(a1 + 2008) = 0;
  *(_QWORD *)(a1 + 2016) = 0;
  *(_DWORD *)(a1 + 2024) = 1065353216;
  *(_QWORD *)(a1 + 2032) = 0;
  *(_QWORD *)(a1 + 2040) = 0;
  *(_QWORD *)(a1 + 2056) = 0;
  *(_WORD *)(a1 + 2289) = 17990;
  *(_QWORD *)(a1 + 2280) = a1 + 752;
  v10 = a1 + 72;
  *(_QWORD *)(a1 + 2400) = a1 + 2384;
  *(_OWORD *)(a1 + 2064) = 0;
  *(_OWORD *)(a1 + 2352) = 0;
  *(_BYTE *)(a1 + 2104) = 0;
  *(_BYTE *)(a1 + 2120) = 0;
  *(_BYTE *)(a1 + 2136) = 0;
  *(_QWORD *)(a1 + 2144) = 0;
  *(_BYTE *)(a1 + 2160) = 4;
  *(_QWORD *)(a1 + 2168) = v2;
  *(_QWORD *)(a1 + 2176) = a1 + 696;
  *(_QWORD *)(a1 + 2184) = a1 + 712;
  *(_DWORD *)(a1 + 2208) = -1;
  *(_QWORD *)(a1 + 2216) = v2;
  *(_QWORD *)(a1 + 2224) = 0;
  *(_QWORD *)(a1 + 2232) = 0;
  *(_QWORD *)(a1 + 2240) = v2;
  *(_QWORD *)(a1 + 2248) = a1 + 712;
  *(_QWORD *)(a1 + 2256) = 0;
  *(_QWORD *)(a1 + 2264) = 0;
  *(_QWORD *)(a1 + 2272) = 0;
  *(_BYTE *)(a1 + 2288) = 0;
  *(_BYTE *)(a1 + 2320) = 0;
  *(_QWORD *)(a1 + 2328) = -1;
  *(_DWORD *)(a1 + 2336) = 0;
  *(_WORD *)(a1 + 2340) = 0;
  *(_QWORD *)(a1 + 2344) = 0;
  *(_QWORD *)(a1 + 2368) = 0;
  *(_DWORD *)(a1 + 2384) = 0;
  *(_QWORD *)(a1 + 2392) = 0;
  *(_OWORD *)(a1 + 2192) = -1;
  *(_QWORD *)(a1 + 2408) = a1 + 2384;
  *(_OWORD *)(a1 + 2608) = 0;
  *(_OWORD *)(a1 + 2624) = 0;
  *(_QWORD *)(a1 + 2152) = &off_8C4B0;
  *(_QWORD *)(a1 + 2480) = a1 + 2464;
  *(_QWORD *)(a1 + 2488) = a1 + 2464;
  *(_QWORD *)(a1 + 2528) = a1 + 2512;
  *(_QWORD *)(a1 + 2536) = a1 + 2512;
  *(_QWORD *)(a1 + 2576) = a1 + 2560;
  *(_QWORD *)(a1 + 2584) = a1 + 2560;
  *(_OWORD *)(a1 + 2640) = 0;
  *(_QWORD *)(a1 + 2656) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 2416) = 0;
  *(_BYTE *)(a1 + 2424) = 1;
  *(_QWORD *)(a1 + 2432) = -1;
  *(_QWORD *)(a1 + 2440) = 0;
  *(_DWORD *)(a1 + 2448) = 0;
  *(_WORD *)(a1 + 2452) = 0;
  *(_DWORD *)(a1 + 2464) = 0;
  *(_QWORD *)(a1 + 2472) = 0;
  *(_QWORD *)(a1 + 2496) = 0;
  *(_DWORD *)(a1 + 2512) = 0;
  *(_QWORD *)(a1 + 2520) = 0;
  *(_QWORD *)(a1 + 2544) = 0;
  *(_DWORD *)(a1 + 2560) = 0;
  *(_QWORD *)(a1 + 2568) = 0;
  *(_QWORD *)(a1 + 2592) = 0;
  *(_QWORD *)(a1 + 2600) = 0;
  *(_DWORD *)(a1 + 2664) = -1;
  *(_DWORD *)(a1 + 2680) = 0;
  *(_QWORD *)(a1 + 2688) = 0;
  *(_QWORD *)(a1 + 2696) = a1 + 2680;
  si128 = _mm_load_si128((const __m128i *)&unk_78790);
  *(_QWORD *)(a1 + 2704) = a1 + 2680;
  *(_QWORD *)(a1 + 2744) = a1 + 2728;
  *(_QWORD *)(a1 + 2752) = a1 + 2728;
  *(_QWORD *)(a1 + 2712) = 0;
  *(_WORD *)(a1 + 2776) = -256;
  *(_QWORD *)(a1 + 2792) = off_8BD10;
  *(_DWORD *)(a1 + 2728) = 0;
  *(_QWORD *)(a1 + 2736) = 0;
  *(_QWORD *)(a1 + 2816) = off_8BD38;
  *(_QWORD *)(a1 + 2872) = a1 + 2856;
  *(_QWORD *)(a1 + 2880) = a1 + 2856;
  *(_QWORD *)(a1 + 2780) = 0;
  *(_QWORD *)(a1 + 2800) = 0;
  *(_QWORD *)(a1 + 2808) = a1;
  *(_QWORD *)(a1 + 2824) = 0;
  *(_QWORD *)(a1 + 2832) = a1;
  *(_BYTE *)(a1 + 2840) = 0;
  *(_DWORD *)(a1 + 2856) = 0;
  *(_QWORD *)(a1 + 2864) = 0;
  *(_QWORD *)(a1 + 2888) = 0;
  *(__m128i *)(a1 + 2760) = si128;
  sub_711F0(a1 + 2896, a2, a1 + 696, a1 + 72);
  v39 = 0;
  v38 = nullptr;
  v38 = (char *)qvector_reserve(&v38, 0, 13, 1);
  *(_QWORD *)&v39 = 13;
  strcpy(v38, "CTRL-SHIFT-E");
  v36 = nullptr;
  v37 = 0;
  v12 = qvector_reserve(&v36, 0, 27, 1);
  v36 = (_BYTE *)v12;
  *(_QWORD *)&v37 = 27;
  *(__m128i *)v12 = _mm_load_si128((const __m128i *)&xmmword_787A0);
  *(__m128i *)(v12 + 10) = _mm_load_si128((const __m128i *)&xmmword_787B0);
  v36[26] = 0;
  v34 = nullptr;
  v35 = 0;
  v13 = qvector_reserve(&v34, 0, 19, 1);
  v34 = (__m128i *)v13;
  v14 = _mm_load_si128((const __m128i *)&xmmword_787C0);
  *(_QWORD *)&v35 = 19;
  *(_WORD *)(v13 + 16) = 29543;
  *(__m128i *)v13 = v14;
  v34[1].m128i_i8[2] = 0;
  sub_70890(a1 + 3120, a2, (__int64)&v34, (__int64)&v36, (__int64)&v38);
  v15 = v34;
  *(_QWORD *)(a1 + 3120) = off_8CA30;
  if ( v15 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v15);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  *(_QWORD *)(a1 + 3280) = v9;
  *(_QWORD *)(a1 + 3288) = v10;
  *(_QWORD *)(a1 + 3120) = off_8C8E8;
  v38 = nullptr;
  v39 = 0;
  v38 = (char *)qvector_reserve(&v38, 0, 1, 1);
  *(_QWORD *)&v39 = 1;
  *v38 = 0;
  v36 = nullptr;
  v37 = 0;
  v16 = qvector_reserve(&v36, 0, 21, 1);
  v36 = (_BYTE *)v16;
  v17 = _mm_load_si128((const __m128i *)&xmmword_787D0);
  *(_QWORD *)&v37 = 21;
  *(_DWORD *)(v16 + 16) = 1936028769;
  *(__m128i *)v16 = v17;
  v36[20] = 0;
  v34 = nullptr;
  v35 = 0;
  v18 = qvector_reserve(&v34, 0, 18, 1);
  v34 = (__m128i *)v18;
  v19 = _mm_load_si128((const __m128i *)&xmmword_787E0);
  *(_QWORD *)&v35 = 18;
  *(_BYTE *)(v18 + 16) = 100;
  *(__m128i *)v18 = v19;
  v34[1].m128i_i8[1] = 0;
  sub_70890(a1 + 3296, a2, (__int64)&v34, (__int64)&v36, (__int64)&v38);
  v20 = v34;
  *(_QWORD *)(a1 + 3456) = v9;
  *(_QWORD *)(a1 + 3296) = off_8C948;
  if ( v20 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v20);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  *(_QWORD *)(a1 + 3296) = off_8CBA0;
  v38 = nullptr;
  v39 = 0;
  v38 = (char *)qvector_reserve(&v38, 0, 1, 1);
  *(_QWORD *)&v39 = 1;
  *v38 = 0;
  v36 = nullptr;
  v37 = 0;
  v21 = qvector_reserve(&v36, 0, 21, 1);
  v36 = (_BYTE *)v21;
  v22 = _mm_load_si128((const __m128i *)&xmmword_787F0);
  *(_QWORD *)&v37 = 21;
  *(_DWORD *)(v21 + 16) = 1936028769;
  *(__m128i *)v21 = v22;
  v36[20] = 0;
  v34 = nullptr;
  v35 = 0;
  v34 = (__m128i *)qvector_reserve(&v34, 0, 17, 1);
  *(_QWORD *)&v35 = 17;
  *v34 = _mm_load_si128((const __m128i *)&xmmword_78800);
  v34[1].m128i_i8[0] = 0;
  sub_70890(a1 + 3464, a2, (__int64)&v34, (__int64)&v36, (__int64)&v38);
  v23 = v34;
  *(_QWORD *)(a1 + 3624) = v9;
  *(_QWORD *)(a1 + 3464) = off_8C948;
  if ( v23 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v23);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  *(_QWORD *)(a1 + 3464) = off_8CC08;
  v38 = nullptr;
  v39 = 0;
  v38 = (char *)qvector_reserve(&v38, 0, 1, 1);
  *(_QWORD *)&v39 = 1;
  *v38 = 0;
  v36 = nullptr;
  v37 = 0;
  v24 = qvector_reserve(&v36, 0, 29, 1);
  v36 = (_BYTE *)v24;
  *(_QWORD *)&v37 = 29;
  *(__m128i *)v24 = _mm_load_si128((const __m128i *)&xmmword_78810);
  *(__m128i *)(v24 + 12) = _mm_load_si128((const __m128i *)&xmmword_78820);
  v36[28] = 0;
  v34 = nullptr;
  v35 = 0;
  v25 = qvector_reserve(&v34, 0, 26, 1);
  v34 = (__m128i *)v25;
  *(_QWORD *)&v35 = 26;
  *(__m128i *)v25 = _mm_load_si128((const __m128i *)&xmmword_78830);
  *(__m128i *)(v25 + 9) = _mm_load_si128((const __m128i *)&xmmword_78840);
  v34[1].m128i_i8[9] = 0;
  sub_70890(a1 + 3632, a2, (__int64)&v34, (__int64)&v36, (__int64)&v38);
  v26 = v34;
  *(_QWORD *)(a1 + 3792) = v9;
  *(_QWORD *)(a1 + 3632) = off_8C948;
  if ( v26 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v26);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  *(_QWORD *)(a1 + 3632) = off_8CC70;
  v38 = nullptr;
  v39 = 0;
  v38 = (char *)qvector_reserve(&v38, 0, 1, 1);
  *(_QWORD *)&v39 = 1;
  *v38 = 0;
  v36 = nullptr;
  v37 = 0;
  v27 = qvector_reserve(&v36, 0, 29, 1);
  v36 = (_BYTE *)v27;
  *(_QWORD *)&v37 = 29;
  *(__m128i *)v27 = _mm_load_si128((const __m128i *)&xmmword_78850);
  *(__m128i *)(v27 + 12) = _mm_load_si128((const __m128i *)&xmmword_78820);
  v36[28] = 0;
  v34 = nullptr;
  v35 = 0;
  v28 = qvector_reserve(&v34, 0, 25, 1);
  v34 = (__m128i *)v28;
  v29 = _mm_load_si128((const __m128i *)&xmmword_78860);
  *(_QWORD *)&v35 = 25;
  *(_QWORD *)(v28 + 16) = 0x6465727574637572LL;
  *(__m128i *)v28 = v29;
  v34[1].m128i_i8[8] = 0;
  sub_70890(a1 + 3800, a2, (__int64)&v34, (__int64)&v36, (__int64)&v38);
  v30 = v34;
  *(_QWORD *)(a1 + 3960) = v9;
  *(_QWORD *)(a1 + 3800) = off_8C948;
  if ( v30 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v30);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  v31 = *(_BYTE *)(a1 + 736) == 0;
  *(_QWORD *)(a1 + 3800) = off_8CCD8;
  if ( v31 )
  {
    if ( (unsigned __int8)sub_51BD0(v33) )
    {
      *(_BYTE *)(a1 + 736) = 1;
    }
    else if ( !*(_BYTE *)(a1 + 736) )
    {
      return v43 - __readfsqword(0x28u);
    }
  }
  sub_18480(a1);
  return v43 - __readfsqword(0x28u);
}

