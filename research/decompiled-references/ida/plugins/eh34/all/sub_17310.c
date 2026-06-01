__int64 (__fastcall **__fastcall sub_17310(__int64 a1, const char *a2))()
{
  _QWORD *v3; // rdi
  __m128i v4; // xmm0
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rax
  const char *v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rbp
  _QWORD *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rbp
  _QWORD *v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rbp
  void *v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // r14
  __int64 v39; // r13
  __int64 i; // r12
  __int64 v41; // rbp
  _QWORD *v42; // r15
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rbp
  void *v46; // rdi
  __int64 v47; // rbp
  void *v48; // rdi
  __int64 v49; // rbp
  void *v50; // rdi
  __int64 v51; // rdi
  _QWORD *v52; // rbp
  _QWORD *v53; // r12
  __int64 v54; // rdi
  void *v55; // rdi
  _QWORD *v56; // rbp
  void *v57; // rdi
  void *v58; // rdi
  _QWORD *v59; // rbp
  void *v60; // rdi
  void *v61; // rdi
  unsigned __int64 v62; // rsi
  __int64 v63; // rbp
  void *v64; // rdi
  __int64 v65; // rbp
  _QWORD *v66; // r12
  __int64 v67; // rdi
  __int64 v68; // rbp
  void *v69; // rdi
  __int64 v70; // rbp
  void *v71; // rdi
  __int64 v72; // rbp
  void *v73; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v75; // rdi

  v3 = (_QWORD *)(a1 + 3800);
  *(v3 - 475) = &off_8BB28;
  v4 = _mm_loadl_epi64((const __m128i *)&off_8BD78);
  *(v3 - 466) = &off_8BCF8;
  *v3 = off_8CA90;
  *(__m128i *)(v3 - 469) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)off_8BCD0);
  ((void (*)(void))sub_6D1D0)();
  v5 = *(_QWORD *)(a1 + 3864);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 3872) = 0;
    qfree(v5);
  }
  v6 = *(_QWORD *)(a1 + 3840);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 3848) = 0;
    qfree(v6);
  }
  v7 = *(_QWORD *)(a1 + 3816);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 3824) = 0;
    qfree(v7);
  }
  *(_QWORD *)(a1 + 3632) = off_8CA90;
  sub_6D1D0(a1 + 3632);
  v8 = *(_QWORD *)(a1 + 3696);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 3704) = 0;
    qfree(v8);
  }
  v9 = *(_QWORD *)(a1 + 3672);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 3680) = 0;
    qfree(v9);
  }
  v10 = *(_QWORD *)(a1 + 3648);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 3656) = 0;
    qfree(v10);
  }
  *(_QWORD *)(a1 + 3464) = off_8CA90;
  sub_6D1D0(a1 + 3464);
  v11 = *(_QWORD *)(a1 + 3528);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 3536) = 0;
    qfree(v11);
  }
  v12 = *(_QWORD *)(a1 + 3504);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 3512) = 0;
    qfree(v12);
  }
  v13 = *(_QWORD *)(a1 + 3480);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 3488) = 0;
    qfree(v13);
  }
  *(_QWORD *)(a1 + 3296) = off_8CA90;
  sub_6D1D0(a1 + 3296);
  v14 = *(_QWORD *)(a1 + 3360);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 3368) = 0;
    qfree(v14);
  }
  v15 = *(_QWORD *)(a1 + 3336);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 3344) = 0;
    qfree(v15);
  }
  v16 = *(_QWORD *)(a1 + 3312);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 3320) = 0;
    qfree(v16);
  }
  *(_QWORD *)(a1 + 3120) = off_8CA90;
  sub_6D1D0(a1 + 3120);
  v19 = *(_QWORD *)(a1 + 3184);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 3192) = 0;
    qfree(v19);
  }
  v20 = *(_QWORD *)(a1 + 3160);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 3168) = 0;
    qfree(v20);
  }
  v21 = *(_QWORD *)(a1 + 3136);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 3144) = 0;
    qfree(v21);
  }
  v22 = *(_BYTE *)(a1 + 3096) == 0;
  *(_QWORD *)(a1 + 2896) = off_8C790;
  *(_QWORD *)(a1 + 3056) = &off_8BB08;
  if ( !v22 )
  {
    v23 = *(_QWORD *)(a1 + 3088);
    v24 = s1;
    if ( *(_QWORD *)(v23 + 8) )
      v24 = *(const char **)v23;
    a2 = s1;
    if ( *(_QWORD *)(a1 + 3072) )
      a2 = *(const char **)(a1 + 3064);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(130, a2, v24, &callui, v17, v18);
    *(_BYTE *)(a1 + 3096) = 0;
  }
  v25 = *(_QWORD *)(a1 + 3064);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 3072) = 0;
    qfree(v25);
  }
  *(_QWORD *)(a1 + 2896) = off_8CA90;
  sub_6D1D0(a1 + 2896);
  v26 = *(_QWORD *)(a1 + 2960);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 2968) = 0;
    qfree(v26);
  }
  v27 = *(_QWORD *)(a1 + 2936);
  if ( v27 )
  {
    *(_QWORD *)(a1 + 2944) = 0;
    qfree(v27);
  }
  v28 = *(_QWORD *)(a1 + 2912);
  if ( v28 )
  {
    *(_QWORD *)(a1 + 2920) = 0;
    qfree(v28);
  }
  v29 = *(_QWORD *)(a1 + 2864);
  while ( v29 )
  {
    v30 = (_QWORD *)v29;
    sub_16270(*(_QWORD **)(v29 + 24));
    v31 = *(_QWORD *)(v29 + 32);
    v29 = *(_QWORD *)(v29 + 16);
    if ( v31 )
    {
      v30[5] = 0;
      qfree(v31);
    }
    a2 = (const char *)&dword_40;
    operator delete(v30, 0x40u);
  }
  *(_QWORD *)(a1 + 2816) = &off_8C768;
  remove_event_listener(a1 + 2816);
  *(_QWORD *)(a1 + 2792) = &off_8C768;
  remove_event_listener(a1 + 2792);
  v32 = *(_QWORD *)(a1 + 2736);
  while ( v32 )
  {
    v33 = (_QWORD *)v32;
    sub_16530(*(_QWORD **)(v32 + 24));
    v34 = *(_QWORD *)(v32 + 40);
    v32 = *(_QWORD *)(v32 + 16);
    if ( v34 )
    {
      v33[6] = 0;
      qfree(v34);
    }
    a2 = (const char *)&dword_40;
    operator delete(v33, 0x40u);
  }
  v35 = *(_QWORD *)(a1 + 2688);
  while ( v35 )
  {
    sub_16FD0(*(_QWORD **)(v35 + 24));
    v36 = (void *)v35;
    v35 = *(_QWORD *)(v35 + 16);
    a2 = (const char *)&qword_28;
    operator delete(v36, 0x28u);
  }
  v37 = *(_QWORD *)(a1 + 2632);
  *(_QWORD *)(a1 + 2152) = &off_8C4B0;
  if ( v37 )
  {
    v38 = *(_QWORD *)(a1 + 2640);
    if ( v38 )
    {
      v39 = 0;
      for ( i = 0; i != v38; ++i )
      {
        v41 = *(_QWORD *)(v37 + v39 + 48);
        if ( v41 )
        {
          do
          {
            v42 = (_QWORD *)v41;
            sub_16D10(*(_QWORD **)(v41 + 24));
            v43 = *(_QWORD *)(v41 + 64);
            v41 = *(_QWORD *)(v41 + 16);
            if ( v43 )
            {
              v42[9] = 0;
              qfree(v43);
            }
            a2 = (const char *)&qword_58;
            operator delete(v42, 0x58u);
          }
          while ( v41 );
          v37 = *(_QWORD *)(a1 + 2632);
        }
        v39 += 88;
      }
    }
    *(_QWORD *)(a1 + 2640) = 0;
    qfree(v37);
  }
  v44 = *(_QWORD *)(a1 + 2600);
  if ( v44 )
  {
    *(_QWORD *)(a1 + 2608) = 0;
    qfree(v44);
  }
  v45 = *(_QWORD *)(a1 + 2568);
  while ( v45 )
  {
    sub_16FD0(*(_QWORD **)(v45 + 24));
    v46 = (void *)v45;
    v45 = *(_QWORD *)(v45 + 16);
    a2 = (const char *)&qword_28;
    operator delete(v46, 0x28u);
  }
  sub_171A0(*(_QWORD **)(a1 + 2520));
  v47 = *(_QWORD *)(a1 + 2472);
  while ( v47 )
  {
    sub_16FD0(*(_QWORD **)(v47 + 24));
    v48 = (void *)v47;
    v47 = *(_QWORD *)(v47 + 16);
    a2 = (const char *)&qword_28;
    operator delete(v48, 0x28u);
  }
  *(_QWORD *)(a1 + 2152) = &unk_8C9D8;
  sub_5F670(a1 + 2152, a2);
  v49 = *(_QWORD *)(a1 + 2392);
  while ( v49 )
  {
    sub_16FD0(*(_QWORD **)(v49 + 24));
    v50 = (void *)v49;
    v49 = *(_QWORD *)(v49 + 16);
    operator delete(v50, 0x28u);
  }
  v51 = *(_QWORD *)(a1 + 2344);
  if ( v51 )
  {
    *(_QWORD *)(a1 + 2352) = 0;
    qfree(v51);
  }
  if ( *(_BYTE *)(a1 + 2320) )
  {
    v75 = *(_QWORD *)(a1 + 2296);
    *(_BYTE *)(a1 + 2320) = 0;
    if ( v75 )
    {
      *(_QWORD *)(a1 + 2304) = 0;
      qfree(v75);
    }
  }
  sub_E860(a1 + 840);
  v52 = *(_QWORD **)(a1 + 656);
  while ( v52 )
  {
    v53 = v52;
    v52 = (_QWORD *)*v52;
    v54 = v53[2];
    if ( v54 )
    {
      v53[3] = 0;
      qfree(v54);
    }
    operator delete(v53, 0x38u);
  }
  memset(*(void **)(a1 + 640), 0, 8LL * *(_QWORD *)(a1 + 648));
  v55 = *(void **)(a1 + 640);
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  if ( v55 != (void *)(a1 + 688) )
    operator delete(v55, 8LL * *(_QWORD *)(a1 + 648));
  v56 = *(_QWORD **)(a1 + 600);
  while ( v56 )
  {
    v57 = v56;
    v56 = (_QWORD *)*v56;
    operator delete(v57, 0x18u);
  }
  memset(*(void **)(a1 + 584), 0, 8LL * *(_QWORD *)(a1 + 592));
  v58 = *(void **)(a1 + 584);
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  if ( v58 != (void *)(a1 + 632) )
    operator delete(v58, 8LL * *(_QWORD *)(a1 + 592));
  v59 = *(_QWORD **)(a1 + 544);
  while ( v59 )
  {
    v60 = v59;
    v59 = (_QWORD *)*v59;
    operator delete(v60, 0x10u);
  }
  memset(*(void **)(a1 + 528), 0, 8LL * *(_QWORD *)(a1 + 536));
  v61 = *(void **)(a1 + 528);
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  v62 = *(_QWORD *)(a1 + 536);
  if ( v61 != (void *)(a1 + 576) )
  {
    v62 *= 8LL;
    operator delete(v61, v62);
  }
  v63 = *(_QWORD *)(a1 + 496);
  while ( v63 )
  {
    sub_15DF0(*(_QWORD **)(v63 + 24));
    v64 = (void *)v63;
    v63 = *(_QWORD *)(v63 + 16);
    v62 = 48;
    operator delete(v64, 0x30u);
  }
  sub_15720(*(_QWORD **)(a1 + 448));
  v65 = *(_QWORD *)(a1 + 400);
  while ( v65 )
  {
    v66 = (_QWORD *)v65;
    sub_167F0(*(_QWORD **)(v65 + 24));
    v67 = *(_QWORD *)(v65 + 48);
    v65 = *(_QWORD *)(v65 + 16);
    if ( v67 )
    {
      v66[7] = 0;
      qfree(v67);
    }
    v62 = 144;
    operator delete(v66, 0x90u);
  }
  v68 = *(_QWORD *)(a1 + 352);
  while ( v68 )
  {
    sub_15C20(*(_QWORD **)(v68 + 24));
    v69 = (void *)v68;
    v68 = *(_QWORD *)(v68 + 16);
    v62 = 64;
    operator delete(v69, 0x40u);
  }
  v70 = *(_QWORD *)(a1 + 304);
  while ( v70 )
  {
    sub_15DF0(*(_QWORD **)(v70 + 24));
    v71 = (void *)v70;
    v70 = *(_QWORD *)(v70 + 16);
    v62 = 48;
    operator delete(v71, 0x30u);
  }
  v72 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 184) = off_8BAC8;
  while ( v72 )
  {
    sub_16AB0(*(_QWORD **)(v72 + 24));
    v73 = (void *)v72;
    v72 = *(_QWORD *)(v72 + 16);
    v62 = 48;
    operator delete(v73, 0x30u);
  }
  *(_QWORD *)(a1 + 56) = &off_8C768;
  remove_event_listener(a1 + 56);
  result = &off_8B970;
  v22 = *(_BYTE *)(a1 + 8) == 0;
  *(_QWORD *)a1 = &off_8B970;
  if ( !v22 )
  {
    result = (__int64 (__fastcall **)())get_hexdsp(a1 + 56, v62);
    if ( result )
      result = (__int64 (__fastcall **)())((__int64 (__fastcall *)(__int64, _QWORD, __int64))result)(575, sub_14200, a1);
    *(_BYTE *)(a1 + 8) = 0;
  }
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return (__int64 (__fastcall **)())qfree(*(_QWORD *)(a1 + 16));
  }
  return result;
}

