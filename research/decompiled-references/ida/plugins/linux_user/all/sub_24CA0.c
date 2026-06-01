__int64 __fastcall sub_24CA0(__int64 a1, __int64 a2, int a3, double a4, double a5, __m128 a6, __m128 a7)
{
  char v9; // al
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  char v13; // r15
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // r14
  __int16 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // ecx
  int v23; // r8d
  bool v24; // zf
  __int64 v25; // r9
  __int64 v26; // r11
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // esi
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __m128i v34; // xmm1
  double v35; // xmm0_8
  __int64 v36; // rsi
  unsigned int v37; // eax
  __int64 v38; // rax
  unsigned int v39; // r13d
  char v40; // al
  __int64 v41; // r9
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r9
  _QWORD *v50; // rax
  __int64 v51; // r11
  _QWORD *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 v57; // r13
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // [rsp+0h] [rbp-108h]
  __int64 v65; // [rsp+0h] [rbp-108h]
  __int64 v66; // [rsp+0h] [rbp-108h]
  __int64 v67; // [rsp+8h] [rbp-100h]
  __int64 v68; // [rsp+8h] [rbp-100h]
  __int64 v69; // [rsp+8h] [rbp-100h]
  __int64 v70; // [rsp+8h] [rbp-100h]
  __int64 v71; // [rsp+8h] [rbp-100h]
  __int64 v72; // [rsp+10h] [rbp-F8h]
  __int64 v73; // [rsp+10h] [rbp-F8h]
  __int64 v74; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v75; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v76; // [rsp+18h] [rbp-F0h]
  char v77; // [rsp+2Fh] [rbp-D9h] BYREF
  __int64 v78; // [rsp+30h] [rbp-D8h] BYREF
  int v79; // [rsp+38h] [rbp-D0h]
  char v80[16]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v82; // [rsp+C8h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v79 = a3;
  v78 = 0;
  v77 = 0;
  v9 = sub_1DD40(a1, (unsigned int *)&v78, &v77);
  if ( !v9 )
    return 0;
  v13 = v9;
  v14 = v78;
  v15 = *(_QWORD *)(a1 + 1224);
  v16 = a1 + 1216;
  v17 = WORD2(v78);
  if ( !v15 )
    goto LABEL_9;
  v18 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v15 + 16);
      v19 = *(_QWORD *)(v15 + 24);
      if ( (int)v78 > *(_DWORD *)(v15 + 32) )
        break;
      v18 = v15;
      v15 = *(_QWORD *)(v15 + 16);
      if ( !v10 )
        goto LABEL_7;
    }
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v19 );
LABEL_7:
  if ( v18 == v16 || (int)v78 < *(_DWORD *)(v18 + 32) )
  {
LABEL_9:
    sub_32190(a1, (unsigned int)"EVENT FOR UNKNOWN THREAD %d, IGNORED...\n", v78, v10, v11, v12);
    v20 = HIBYTE(v17);
    if ( (_BYTE)v17 != 127 )
      v20 = 0;
    ptrace(PTRACE_CONT, v14, 0, v20);
    return 0;
  }
  if ( *(_DWORD *)(v18 + 60) == 1
    && !*(_BYTE *)(a1 + 1349)
    && (v78 & 0x7F00000000LL) != 0
    && (char)((BYTE4(v78) & 0x7F) + 1) <= 1 )
  {
    if ( under_debugger )
      BUG();
    interr();
LABEL_48:
    set_debug_event_code();
    if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)(a2 + 24) = v14;
      *(_BYTE *)(a1 + 1349) = 1;
      goto LABEL_24;
    }
LABEL_131:
    sub_10260();
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(v18 + 60) = 1;
  sub_1ED60(a1, 0, 1);
  v24 = v77 == 0;
  *(_BYTE *)(a1 + 1412) = 0;
  if ( !v24 )
  {
LABEL_24:
    v29 = *(_QWORD *)(a1 + 1224);
    v30 = *(_DWORD *)(a2 + 4);
    if ( v29 )
    {
      v31 = a1 + 1216;
      do
      {
        while ( 1 )
        {
          v32 = *(_QWORD *)(v29 + 16);
          v33 = *(_QWORD *)(v29 + 24);
          if ( v30 > *(_DWORD *)(v29 + 32) )
            break;
          v31 = v29;
          v29 = *(_QWORD *)(v29 + 16);
          if ( !v32 )
            goto LABEL_29;
        }
        v29 = *(_QWORD *)(v29 + 24);
      }
      while ( v33 );
LABEL_29:
      if ( v16 != v31 && v30 >= *(_DWORD *)(v31 + 32) )
        *(_BYTE *)(v31 + 56) = 0;
    }
    copy_debug_event();
    return 1;
  }
  v25 = *(_QWORD *)(a1 + 1224);
  if ( !v25 )
    goto LABEL_23;
  v26 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v27 = *(_QWORD *)(v25 + 16);
      v28 = *(_QWORD *)(v25 + 24);
      if ( (signed int)v14 > *(_DWORD *)(v25 + 32) )
        break;
      v26 = v25;
      v25 = *(_QWORD *)(v25 + 16);
      if ( !v27 )
        goto LABEL_21;
    }
    v25 = *(_QWORD *)(v25 + 24);
  }
  while ( v28 );
LABEL_21:
  if ( v26 == v16 || (signed int)v14 < *(_DWORD *)(v26 + 32) )
  {
LABEL_23:
    sub_32190(a1, (unsigned int)"thread %d disappeared after freezing?!...\n", v14, v22, v23, v25);
    goto LABEL_24;
  }
  v34 = _mm_cvtsi32_si128(v14);
  *(_QWORD *)&v35 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340)), v34).m128i_u64[0];
  *(double *)a2 = v35;
  if ( *(_BYTE *)(a1 + 1349) )
  {
    *(_QWORD *)(a2 + 8) = -1;
    *(_BYTE *)(a2 + 16) = 0;
    if ( (unsigned __int8)v17 == 127 )
      goto LABEL_51;
    if ( !__OFSUB__((v17 & 0x7F) + 1, 1) && (v17 & 0x7F) != 0 )
      goto LABEL_37;
LABEL_43:
    v14 = HIBYTE(v17);
LABEL_38:
    if ( *(_QWORD *)(a1 + 1248) <= 1u || *(_DWORD *)(v26 + 40) == *(_DWORD *)(a1 + 1340) )
      goto LABEL_48;
    free_debug_event();
    sub_1EB80(a1, *(_DWORD *)(a2 + 4), 3);
    goto LABEL_24;
  }
  v67 = v26;
  v64 = v25;
  if ( !__OFSUB__((v17 & 0x7F) + 1, 1) && (v17 & 0x7F) != 0 )
  {
    ptrace(PTRACE_GETSIGINFO, v14, 0, v80);
    v36 = v81;
    *(_BYTE *)(a2 + 16) = 0;
    v25 = v64;
    v26 = v67;
    *(_QWORD *)(a2 + 8) = v36;
    if ( (unsigned __int8)v17 != 127 )
    {
LABEL_37:
      v68 = v26;
      v14 = v17 & 0x7F;
      v37 = (unsigned int)strsignal(v14);
      sub_32190(
        a1,
        (unsigned int)"SIGNALED pid=%d tid=%d signal='%s'(%d) pc=%a\n",
        *(_DWORD *)a2,
        *(_DWORD *)(a2 + 4),
        v37,
        v14);
      v26 = v68;
      goto LABEL_38;
    }
    goto LABEL_51;
  }
  v38 = ptrace(PTRACE_PEEKUSER, v14, 128, 0);
  *(_BYTE *)(a2 + 16) = 0;
  v25 = v64;
  v26 = v67;
  *(_QWORD *)(a2 + 8) = v38;
  if ( (unsigned __int8)v17 != 127 )
    goto LABEL_43;
LABEL_51:
  v69 = v26;
  v65 = v25;
  v39 = HIBYTE(v17);
  set_debug_event_code();
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    goto LABEL_130;
  *(_DWORD *)(a2 + 24) = v39;
  *(_BYTE *)(a2 + 28) = 1;
  *(_QWORD *)(a2 + 32) = -1;
  if ( v39 == 19 && *(_BYTE *)(v69 + 64) )
  {
    *(_BYTE *)(v69 + 64) = 0;
    goto LABEL_62;
  }
  v72 = v69;
  v70 = v65;
  v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v39);
  if ( v66 )
  {
    sub_BF00((__int64 *)(a2 + 40));
    v40 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, a2, v66);
    v41 = v70;
    v42 = v72;
    v13 = v40;
    if ( !v40 && (*(_BYTE *)(v66 + 4) & 2) != 0 )
      v39 = 0;
  }
  else
  {
    sub_BF00((__int64 *)(a2 + 40));
    v42 = v72;
    v41 = v70;
  }
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    goto LABEL_130;
  v71 = a1 + 1208;
  if ( *(_DWORD *)(a2 + 24) != 5 )
    goto LABEL_57;
  v44 = *(_QWORD *)(a2 + 8);
  v45 = v44 - 1;
  if ( !v44 )
    goto LABEL_57;
  v46 = *(_QWORD *)(a1 + 992);
  if ( v46 == v45 && v46 )
  {
    if ( !sub_20110(a1, v14) )
    {
      sub_B0B0((__int64)"%a: could not return from the shlib breakpoint!\n", v35);
      return 1;
    }
    if ( !(unsigned __int8)sub_24AD0((_QWORD *)a1, v35, v34, a6, a7) )
      goto LABEL_62;
LABEL_91:
    set_debug_event_code();
    goto LABEL_92;
  }
  v47 = *(_QWORD *)(a1 + 960);
  if ( v47 == v45 && v47 || (v48 = *(_QWORD *)(a1 + 976)) != 0 && v48 == v45 )
  {
    v53 = *(_QWORD *)(a1 + 168);
    v54 = *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 1344) = v14;
    v55 = 0x8E38E38E38E38E39LL * (((v53 - *(_QWORD *)(a1 + 176)) >> 3) + ((v54 - *(_QWORD *)(a1 + 136)) >> 3));
    v56 = (*(_QWORD *)(a1 + 192) == 0) + ((__int64)(*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 160)) >> 3) - 1;
    v57 = v55 + 8 * v56 - v56;
    if ( *(_QWORD *)(a1 + 952) )
      sub_216C0(a1);
    if ( !sub_20110(a1, v14) )
    {
      sub_B0B0((__int64)"%a: could not return from the thread breakpoint!\n", v35);
      return 1;
    }
    v58 = (*(_QWORD *)(a1 + 192) == 0) + ((__int64)(*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 160)) >> 3) - 1;
    if ( v57 == 0x8E38E38E38E38E39LL
              * (((__int64)(*(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 176)) >> 3)
               + ((__int64)(*(_QWORD *)(a1 + 152) - *(_QWORD *)(a1 + 136)) >> 3))
              + 8 * v58
              - v58 )
      goto LABEL_62;
    goto LABEL_91;
  }
  if ( *(_QWORD *)(a1 + 1424) <= 1u )
  {
    v76 = v45;
    v74 = v41;
    sub_24AD0((_QWORD *)a1, v35, v34, a6, a7);
    v63 = sub_107A0(v71, v14);
    v49 = v74;
    v45 = v76;
    if ( v16 != v63 )
      v49 = v63 + 40;
  }
  else
  {
    v49 = v42 + 40;
  }
  v75 = v45;
  v73 = v49;
  if ( (unsigned __int8)sub_15770(a1, a2) )
    goto LABEL_92;
  v50 = *(_QWORD **)(a1 + 528);
  v51 = a1 + 520;
  if ( v50 )
  {
    v52 = (_QWORD *)(a1 + 520);
    do
    {
      if ( v50[4] >= v75 )
      {
        v52 = v50;
        v50 = (_QWORD *)v50[2];
      }
      else
      {
        v50 = (_QWORD *)v50[3];
      }
    }
    while ( v50 );
    if ( (_QWORD *)v51 != v52 && v75 >= v52[4] )
    {
      v59 = *(_QWORD **)(a1 + 432);
      v60 = &v59[*(_QWORD *)(a1 + 440)];
      if ( v59 == v60 )
        goto LABEL_109;
      while ( v75 != *v59 )
      {
        if ( v60 == ++v59 )
          goto LABEL_109;
      }
      if ( v60 == v59 )
      {
LABEL_109:
        v61 = *(_QWORD **)(a1 + 1368);
        if ( v61 )
        {
          v62 = (_QWORD *)(a1 + 1360);
          do
          {
            if ( v61[4] >= v75 )
            {
              v62 = v61;
              v61 = (_QWORD *)v61[2];
            }
            else
            {
              v61 = (_QWORD *)v61[3];
            }
          }
          while ( v61 );
          if ( (_QWORD *)(a1 + 1360) != v62 && v75 >= v62[4] )
            goto LABEL_62;
        }
        set_debug_event_code();
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
          sub_102A0();
        *(_QWORD *)(a2 + 8) = v75;
        *(_OWORD *)(a2 + 24) = -1;
        goto LABEL_92;
      }
    }
  }
  if ( v73 && *(_BYTE *)(v73 + 16) )
    goto LABEL_91;
  if ( !v66 || (*(_BYTE *)(v66 + 4) & 2) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
    {
      v39 = *(_DWORD *)(a2 + 24);
      goto LABEL_57;
    }
LABEL_130:
    sub_102C0();
    goto LABEL_131;
  }
LABEL_92:
  v39 = 0;
LABEL_57:
  v43 = sub_107A0(v71, v14);
  if ( v43 == v16 )
    goto LABEL_24;
  *(_DWORD *)(v43 + 52) = v39;
  if ( !*(_BYTE *)(a1 + 1413) && (unsigned __int8)sub_33590(a1, a2, 0) )
    return 0;
  if ( v13 || (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    goto LABEL_24;
  sub_33820(a1, a2, v66);
LABEL_62:
  if ( !*(_BYTE *)(a1 + 1413) && !*(_BYTE *)(a1 + 1414) )
  {
    sub_210C0(a1, 0);
    return 0;
  }
  set_debug_event_code();
  return 1;
}

