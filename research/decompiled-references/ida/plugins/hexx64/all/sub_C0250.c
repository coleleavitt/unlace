unsigned __int64 __fastcall sub_C0250(__int64 a1, __m128i a2)
{
  __int64 v2; // rdx
  unsigned int *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rbx
  int v14; // r13d
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  int *v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 i; // r12
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v41; // rsi
  _DWORD *v42; // rax
  _DWORD *v43; // rsi
  _QWORD *v44; // r13
  _QWORD *v45; // rbp
  void (__fastcall *v46)(_QWORD); // rax
  _QWORD *v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rdi
  char *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // rbx
  int v54; // r13d
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rsi
  _QWORD *v63; // rbx
  __int64 v64; // r14
  __int64 v65; // r13
  unsigned int v66; // edx
  unsigned int v67; // eax
  __m128i v68; // xmm1
  int v69; // eax
  __int64 v70; // [rsp+8h] [rbp-90h]
  __int64 v71; // [rsp+8h] [rbp-90h]
  unsigned __int64 v72; // [rsp+10h] [rbp-88h]
  unsigned __int64 v73; // [rsp+18h] [rbp-80h]
  int v74; // [rsp+24h] [rbp-74h]
  unsigned __int64 v75; // [rsp+28h] [rbp-70h]
  __int64 v76; // [rsp+30h] [rbp-68h]
  __int64 v77; // [rsp+38h] [rbp-60h]
  int v78; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v79; // [rsp+44h] [rbp-54h]
  unsigned __int64 v80; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 328);
  v80 = __readfsqword(0x28u);
  v4 = *(unsigned int **)(a1 + 16);
  v5 = *(_DWORD *)(v2 + 64);
  v6 = *v4;
  if ( (unsigned int)v6 >= v5 )
    goto LABEL_84;
  v7 = *(_QWORD *)(v2 + 528);
  v76 = *(_QWORD *)(v7 + 8 * v6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 320) + 1512LL) & 1) != 0 )
  {
    sub_BFFA0(a1, v76, ***(_QWORD ***)(a1 + 40), v7, a2);
    v69 = *(_DWORD *)(v76 + 24);
    BYTE1(v69) &= ~2u;
    LOBYTE(v69) = v69 | 0x80;
    *(_DWORD *)(v76 + 24) = v69;
    v39 = *(_QWORD *)(a1 + 328);
    return sub_66FA0(v39, 1);
  }
  v8 = *(int *)(a1 + 224);
  v9 = v4[v8];
  if ( (unsigned int)v9 >= v5 )
LABEL_84:
    sub_B7BA0(*(double *)a2.m128i_i64);
  v70 = 0;
  v77 = *(_QWORD *)(v7 + 8 * v9);
  if ( *(_DWORD *)(a1 + 416) )
    v70 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v9) + 48LL);
  v75 = *(_QWORD *)(a1 + 48);
  if ( v75 )
  {
    v73 = 0;
    v10 = 0;
    v11 = 0;
    v75 = 0;
    LODWORD(v7) = 0;
    v72 = -1;
    while ( 1 )
    {
      v12 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v11);
      if ( !v12[1] )
        goto LABEL_30;
      v74 = v7;
      v13 = 8 * v11;
      v14 = 0;
      v15 = 0;
      do
      {
        v18 = *(_DWORD *)(sub_330E60(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + v13), v14) + 4);
        if ( (v18 & 2) != 0 )
          goto LABEL_23;
        v19 = *(_QWORD *)(*v12 + 8 * v15);
        if ( v19 )
        {
          if ( v70 == v19 )
            goto LABEL_23;
          if ( *(_DWORD *)v19 == 55 && *(_BYTE *)(v19 + 32) == 7 )
          {
            v41 = *(int *)(a1 + 224);
            if ( (int)v41 <= 0 )
              goto LABEL_23;
            v42 = *(_DWORD **)(a1 + 16);
            v43 = &v42[v41];
            while ( *(_DWORD *)(v19 + 40) != *v42 )
            {
              if ( ++v42 == v43 )
                goto LABEL_23;
            }
          }
          if ( sub_C0160(a1, v19, *(double *)a2.m128i_i64) )
          {
            v16 = *(_QWORD *)(v19 + 24);
            v17 = v72;
            if ( v16 < v72 )
            {
              if ( v74 )
              {
                v72 = *(_QWORD *)(v19 + 24);
              }
              else
              {
                if ( v16 >= *(_QWORD *)(*(_QWORD *)(v76 + 56) + 24LL) )
                  v17 = *(_QWORD *)(v19 + 24);
                v72 = v17;
              }
            }
            if ( v73 < v16 )
            {
              v75 = v73;
              v73 = *(_QWORD *)(v19 + 24);
            }
          }
          sub_11D5A0(v19);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 320) + 64LL) == 1 )
            v10 = v19;
        }
        else if ( (v18 & 1) == 0 )
        {
          if ( !under_debugger )
            sub_383060(0xC388u, *(double *)a2.m128i_i64);
          goto LABEL_85;
        }
LABEL_23:
        v15 = ++v14;
      }
      while ( (unsigned __int64)v14 < v12[1] );
      LODWORD(v7) = v74;
LABEL_30:
      v7 = (unsigned int)(v7 + 1);
      v11 = (int)v7;
      if ( (unsigned __int64)(int)v7 >= *(_QWORD *)(a1 + 48) )
      {
        v8 = *(int *)(a1 + 224);
        goto LABEL_32;
      }
    }
  }
  v72 = -1;
  v10 = 0;
LABEL_32:
  if ( (int)v8 > 0 )
  {
    v20 = 0;
    do
    {
      v21 = *(_QWORD *)(a1 + 328);
      v22 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * v20);
      if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 64) )
        goto LABEL_82;
      v23 = *(_QWORD *)(v21 + 528);
      v24 = *(_QWORD *)(v23 + 8 * v22);
      v25 = *(int **)(v24 + 56);
      if ( !v25 || (v26 = *v25, v26 != 55) && v26 != 62 )
        sub_1D51C0(v24, 0, v23, v7);
      v27 = *(_DWORD *)(v24 + 24);
      ++v20;
      BYTE1(v27) &= ~2u;
      LOBYTE(v27) = v27 | 0x80;
      *(_DWORD *)(v24 + 24) = v27;
      v28 = *(_DWORD *)(a1 + 224);
    }
    while ( v28 > (int)v20 );
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL);
    v29 = *(_QWORD *)(v7 + 8LL * v28);
    if ( !*(_QWORD *)(v29 + 48) )
    {
LABEL_42:
      if ( v28 > 0 )
      {
        v31 = 1;
        while ( 1 )
        {
          v7 = *(_QWORD *)(a1 + 16);
          v32 = *(_QWORD *)(a1 + 328);
          v33 = *(unsigned int *)(v7 + 4LL * v31);
          if ( (unsigned int)v33 >= *(_DWORD *)(v32 + 64) )
            break;
          v29 = *(_QWORD *)(v32 + 528);
          v34 = *(_QWORD *)(v29 + 8 * v33);
          for ( i = *(_QWORD *)(v34 + 48); i; i = *(_QWORD *)(i + 8) )
          {
            if ( *(char *)(i + 4) >= 0 )
              break;
            sub_11D5A0(i);
            v36 = *(_DWORD *)(v34 + 24);
            BYTE1(v36) &= ~2u;
            LOBYTE(v36) = v36 | 0x80;
            *(_DWORD *)(v34 + 24) = v36;
          }
          if ( *(_DWORD *)(a1 + 224) < ++v31 )
            goto LABEL_50;
        }
LABEL_82:
        if ( !under_debugger )
          sub_383060(0xCDEFu, *(double *)a2.m128i_i64);
LABEL_85:
        BUG();
      }
      goto LABEL_50;
    }
LABEL_41:
    v30 = *(_DWORD *)(v77 + 24);
    BYTE1(v30) &= ~2u;
    LOBYTE(v30) = v30 | 0x80;
    *(_DWORD *)(v77 + 24) = v30;
    v28 = *(_DWORD *)(a1 + 224);
    goto LABEL_42;
  }
  v29 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL);
  if ( *(_QWORD *)(*(_QWORD *)(v29 + 8 * v8) + 48LL) )
    goto LABEL_41;
LABEL_50:
  if ( v70 )
  {
    sub_BFFA0(a1, v77, v70, v7, a2);
  }
  else
  {
    v50 = (char *)sub_BFEB0(a1, v76, v29, v7);
    sub_B9850(v76, v50, v10, v72, *(double *)a2.m128i_i64);
    if ( *(_QWORD *)(a1 + 280) )
    {
      v53 = v75;
      if ( v72 >= v75 )
        v53 = v72;
      v54 = 0;
      v55 = 0;
      v71 = v53;
      do
      {
        a2.m128i_i64[0] = 0;
        v56 = j__qalloc_or_throw(80, (__int64)v50, v51, v52);
        v57 = *(_QWORD *)(a1 + 272);
        *(_QWORD *)(v56 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v56 + 40) = 0;
        *(_QWORD *)(v56 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v56 + 56) = 0;
        *(_QWORD *)(v56 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v56 + 72) = 0;
        *(_OWORD *)(v56 + 8) = 0;
        sub_1253A0(v56, v57 + 88 * v55 + 8);
        v50 = (char *)v56;
        ++v54;
        sub_B9850(v76, (char *)v56, v10, v71, 0.0);
        v55 = v54;
      }
      while ( (unsigned __int64)v54 < *(_QWORD *)(a1 + 280) );
      v50 = nullptr;
      sub_1D51C0(v76, 0, v51, v52);
    }
    if ( *(_DWORD *)(a1 + 420) != -1 )
    {
      v58 = sub_1229A0(*(_QWORD *)(v77 + 48));
      v61 = (_QWORD *)j__qalloc_or_throw(80, (__int64)v50, v59, v60);
      v62 = *(_QWORD *)(v58 + 24);
      v63 = v61;
      v64 = (__int64)(v61 + 4);
      v65 = (__int64)(v61 + 8);
      v61[4] = 0xFFFFFFFF00000000LL;
      v61[5] = 0;
      v61[6] = 0xFFFFFFFF00000000LL;
      v61[7] = 0;
      v61[8] = 0xFFFFFFFF00000000LL;
      v61[9] = 0;
      sub_330970((__int64)v61, v62);
      *(_DWORD *)v63 = 4;
      v66 = *(_DWORD *)(a1 + 228);
      v67 = *(_DWORD *)(a1 + 424);
      v78 = 1;
      v79 = __PAIR64__(v67, v66);
      sub_125180(v64, (unsigned __int8 *)&v78);
      sub_11CDA0((__int64)&v78);
      a2 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 228));
      v68 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 420));
      v78 = 1;
      a2.m128i_i64[0] = _mm_unpacklo_epi32(a2, v68).m128i_u64[0];
      v79 = a2.m128i_i64[0];
      sub_125180(v65, (unsigned __int8 *)&v78);
      sub_11CDA0((__int64)&v78);
      sub_A3160(v77, v63, *(_QWORD *)(v58 + 16), *(double *)a2.m128i_i64);
    }
  }
  sub_1D4FD0(*(_QWORD *)(a1 + 328));
  **(_DWORD **)(a1 + 328) |= 0x400u;
  *(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) &= ~8u;
  sub_2169A0(*(_QWORD **)(a1 + 328), (int **)(a1 + 392));
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 320) + 64LL) != 1 )
  {
    v44 = *(_QWORD **)(a1 + 328);
    v45 = (_QWORD *)v44[98];
    if ( v45 )
    {
      v46 = *(void (__fastcall **)(_QWORD))(*v45 + 8LL);
      if ( (char *)v46 == (char *)sub_66F30 )
      {
        v47 = v45 + 27;
        *v45 = off_4EC750;
        do
        {
          v48 = (__int64)v47;
          v47 -= 4;
          sub_66C80(v48, *(double *)a2.m128i_i64);
        }
        while ( v47 != v45 + 3 );
        v49 = v45[1];
        *v45 = &unk_4EC808;
        if ( v49 )
        {
          v45[2] = 0;
          qfree(v49);
        }
        j__qfree((__int64)v45);
      }
      else
      {
        v46(v44[98]);
      }
    }
    v44[98] = 0;
    sub_670E0(v44, a1 + 392, v37, v38);
  }
  v39 = *(_QWORD *)(a1 + 328);
  return sub_66FA0(v39, 1);
}

