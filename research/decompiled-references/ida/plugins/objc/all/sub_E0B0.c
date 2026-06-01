__int64 sub_E0B0()
{
  const char *v0; // rbx
  __int64 v1; // rbx
  __m128i si128; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // r14

  v0 = "+-[]():$ ";
  if ( (unsigned int)getinf() == 25 )
  {
    do
    {
      ++v0;
      set_cp_validity();
    }
    while ( *v0 );
    v1 = qalloc_or_throw();
    *(_QWORD *)(v1 + 8) = get_ph();
    *(_QWORD *)(v1 + 16) = get_ash();
    *(_QWORD *)(v1 + 24) = get_eah();
    *(_OWORD *)(v1 + 32) = 0;
    *(_OWORD *)(v1 + 48) = 0;
    *(_OWORD *)(v1 + 64) = 0;
    *(_OWORD *)(v1 + 80) = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_31B80);
    *(_QWORD *)v1 = &off_3BF88;
    *(__m128i *)(v1 + 96) = si128;
    sub_129C0(v1 + 112, v1);
    sub_25160(v1 + 872, v1);
    *(_QWORD *)(v1 + 1808) = 0;
    *(_OWORD *)(v1 + 1848) = -1;
    *(_QWORD *)(v1 + 1824) = 0x271000000000LL;
    *(_QWORD *)(v1 + 1840) = "NSConcreteGlobalBlock";
    *(_QWORD *)(v1 + 1960) = "NSConcreteStackBlock";
    *(_OWORD *)(v1 + 1864) = -1;
    *(_OWORD *)(v1 + 1880) = -1;
    *(_OWORD *)(v1 + 1896) = -1;
    *(_OWORD *)(v1 + 1912) = -1;
    *(_OWORD *)(v1 + 1928) = -1;
    *(_OWORD *)(v1 + 1968) = -1;
    *(_OWORD *)(v1 + 1984) = -1;
    *(_OWORD *)(v1 + 2000) = -1;
    *(_OWORD *)(v1 + 2016) = -1;
    *(_OWORD *)(v1 + 2032) = -1;
    *(_OWORD *)(v1 + 2048) = -1;
    *(_QWORD *)(v1 + 2072) = off_3BE48;
    *(_QWORD *)(v1 + 2120) = off_3BCF8;
    *(__m128i *)(v1 + 2096) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"OBJC", (__m128i)(unsigned __int64)"OBJC");
    *(_QWORD *)(v1 + 1816) = v1;
    *(_QWORD *)(v1 + 1832) = v1;
    *(_BYTE *)(v1 + 1944) = 0;
    *(_QWORD *)(v1 + 1952) = v1;
    *(_BYTE *)(v1 + 2064) = 0;
    *(_QWORD *)(v1 + 2080) = 40;
    *(_DWORD *)(v1 + 2088) = 0x4000000;
    *(_QWORD *)(v1 + 2112) = v1;
    *(_DWORD *)(v1 + 2128) = 1;
    *(_QWORD *)(v1 + 2136) = v1;
    *(_QWORD *)(v1 + 2144) = -1;
    *(_BYTE *)(v1 + 2152) = 0;
    *(_DWORD *)(v1 + 2168) = 1;
    *(_QWORD *)(v1 + 2160) = &off_3BDE8;
    *(_QWORD *)(v1 + 2184) = off_3BE18;
    *(_QWORD *)(v1 + 2208) = -4294957296LL;
    *(_QWORD *)(v1 + 2224) = off_3BEB8;
    *(_QWORD *)(v1 + 2248) = &off_3BEE0;
    *(_QWORD *)(v1 + 2272) = &off_3BF08;
    *(_QWORD *)(v1 + 2296) = off_3BF30;
    *(_QWORD *)(v1 + 2320) = off_3BF58;
    *(_QWORD *)(v1 + 2352) = off_3BF58;
    *(_QWORD *)(v1 + 2384) = off_3BF58;
    *(_QWORD *)(v1 + 2176) = v1;
    *(_DWORD *)(v1 + 2192) = 1;
    *(_QWORD *)(v1 + 2200) = v1;
    *(_BYTE *)(v1 + 2216) = 0;
    *(_QWORD *)(v1 + 2232) = 0;
    *(_QWORD *)(v1 + 2240) = v1;
    *(_QWORD *)(v1 + 2256) = 0;
    *(_QWORD *)(v1 + 2264) = v1;
    *(_QWORD *)(v1 + 2280) = 0;
    *(_QWORD *)(v1 + 2288) = v1;
    *(_QWORD *)(v1 + 2304) = 0;
    *(_QWORD *)(v1 + 2312) = v1;
    *(_DWORD *)(v1 + 2328) = 1;
    *(_QWORD *)(v1 + 2336) = v1;
    *(_DWORD *)(v1 + 2344) = 0;
    *(_DWORD *)(v1 + 2360) = 1;
    *(_QWORD *)(v1 + 2368) = v1;
    *(_DWORD *)(v1 + 2376) = 1;
    *(_DWORD *)(v1 + 2392) = 1;
    *(_QWORD *)(v1 + 2400) = v1;
    *(_DWORD *)(v1 + 2408) = 4;
    *(_DWORD *)(v1 + 2424) = 1;
    *(_QWORD *)(v1 + 2416) = off_3BF58;
    v3 = _mm_loadl_epi64((const __m128i *)off_3C0B0);
    *(_QWORD *)(v1 + 2608) = v1 + 2120;
    *(_QWORD *)(v1 + 2480) = v1 + 2320;
    *(__m128i *)(v1 + 2464) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)"Objective-C Options...");
    v4 = _mm_loadl_epi64((const __m128i *)off_3C0B8);
    *(_QWORD *)(v1 + 2624) = "Shift+O";
    *(_QWORD *)(v1 + 2496) = "Ctrl+Shift+O";
    *(__m128i *)(v1 + 2528) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)"Reload Objective-C info");
    *(_QWORD *)(v1 + 2544) = v1 + 2352;
    *(__m128i *)(v1 + 2592) = _mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)"objc:RunUntilMessageReceived",
                                (__m128i)(unsigned __int64)"Run until message received");
    v5 = _mm_loadl_epi64((const __m128i *)off_3C0C0);
    *(_QWORD *)(v1 + 2672) = v1 + 2160;
    *(_QWORD *)(v1 + 2560) = "";
    *(__m128i *)(v1 + 2656) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)"Jump by selector...");
    *(_QWORD *)(v1 + 2432) = v1;
    *(_DWORD *)(v1 + 2440) = 5;
    *(_QWORD *)(v1 + 2448) = 0;
    *(_DWORD *)(v1 + 2456) = 64;
    *(_QWORD *)(v1 + 2488) = v1;
    *(_QWORD *)(v1 + 2504) = 0;
    *(_QWORD *)(v1 + 2512) = 0x4FFFFFFFFLL;
    *(_DWORD *)(v1 + 2520) = 64;
    *(_QWORD *)(v1 + 2552) = v1;
    *(_QWORD *)(v1 + 2568) = 0;
    *(_QWORD *)(v1 + 2576) = 0x4FFFFFFFFLL;
    *(_DWORD *)(v1 + 2584) = 64;
    *(_QWORD *)(v1 + 2616) = v1;
    *(_QWORD *)(v1 + 2632) = 0;
    *(_QWORD *)(v1 + 2640) = 0x4FFFFFFFFLL;
    *(_DWORD *)(v1 + 2648) = 64;
    *(_QWORD *)(v1 + 2680) = v1;
    *(_QWORD *)(v1 + 2688) = "Ctrl+Alt+O";
    v6 = _mm_loadl_epi64((const __m128i *)off_3C0C8);
    *(_QWORD *)(v1 + 2752) = "";
    *(_QWORD *)(v1 + 2736) = v1 + 2384;
    *(__m128i *)(v1 + 2720) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)"Re-analyze global block functions");
    v7 = _mm_loadl_epi64((const __m128i *)off_3C0D0);
    *(_QWORD *)(v1 + 2816) = "";
    *(_QWORD *)(v1 + 2800) = v1 + 2416;
    *(_QWORD *)(v1 + 2864) = v1 + 2184;
    *(__m128i *)(v1 + 2784) = _mm_unpacklo_epi64(
                                v7,
                                (__m128i)(unsigned __int64)"Analyze stack-allocated blocks (entire database)");
    v8 = _mm_loadl_epi64((const __m128i *)&off_3C0D8);
    *(_QWORD *)(v1 + 2880) = "Ctrl+Shift+S";
    *(_QWORD *)(v1 + 2696) = 0;
    *(_QWORD *)(v1 + 2704) = 0x4FFFFFFFFLL;
    *(_DWORD *)(v1 + 2712) = 64;
    *(_QWORD *)(v1 + 2744) = v1;
    *(_QWORD *)(v1 + 2760) = 0;
    *(_QWORD *)(v1 + 2768) = 0x4FFFFFFFFLL;
    *(_DWORD *)(v1 + 2776) = 64;
    *(_QWORD *)(v1 + 2808) = v1;
    *(_QWORD *)(v1 + 2824) = 0;
    *(_QWORD *)(v1 + 2832) = 0x4FFFFFFFFLL;
    *(_DWORD *)(v1 + 2840) = 64;
    *(_QWORD *)(v1 + 2872) = v1;
    *(_QWORD *)(v1 + 2888) = 0;
    *(_QWORD *)(v1 + 2896) = 0x4FFFFFFFFLL;
    *(__m128i *)(v1 + 2848) = _mm_unpacklo_epi64(
                                v8,
                                (__m128i)(unsigned __int64)"Analyze stack-allocated blocks (current function)");
    if ( (unsigned __int8)netnode_check() )
      netnode_supset();
    hook_event_listener();
    v9 = v1 + 2456;
    hook_event_listener();
    hook_event_listener();
    hook_event_listener();
    add_idc_func();
    callui(1097);
    do
    {
      if ( (unsigned __int8)callui(127) )
        callui(129);
      v9 += 64;
    }
    while ( v1 + 2904 != v9 );
    callui(129);
    callui(129);
    sub_DA70((_DWORD *)(v1 + 1816));
    set_module_data();
  }
  else if ( get_name_ea() == -1 || (unsigned __int8)get_tinfo() )
  {
    return 0;
  }
  else
  {
    get_stock_tinfo();
    apply_tinfo();
    v1 = 0;
    clear_tinfo_t();
  }
  return v1;
}
