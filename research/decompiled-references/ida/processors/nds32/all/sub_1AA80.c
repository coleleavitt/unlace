__int64 __fastcall sub_1AA80(__int64 a1, unsigned __int8 a2, double a3, double a4, __m128 a5, __int64 a6, __int64 a7)
{
  char *v8; // rdx
  char *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  __m128i *v18; // r14
  __int64 v19; // rbp
  __m128i *v20; // r12
  unsigned __int64 v21; // rdx
  const __m128i *v22; // rbp
  const __m128i *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rax
  __int64 *v27; // r13
  __int64 *v28; // r14
  __int64 v29; // rax
  __int64 v30; // rsi
  char *v31; // r14
  __int64 v32; // r12
  unsigned __int64 *v33; // r13
  unsigned __int64 v34; // rdx
  unsigned __int64 *v35; // r12
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 *v38; // rax
  unsigned __int64 *v39; // rsi
  __int64 *v40; // r13
  __int64 *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rsi
  unsigned __int64 *v45; // rax
  __int128 v46; // xmm0
  unsigned __int64 v47; // r15
  unsigned __int64 *v48; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 *v54; // rsi
  __int64 v55; // rax
  char v56; // r14
  __int64 v57; // rcx
  char v58; // al
  unsigned __int16 v59; // r11
  char v60; // r10
  char *v61; // rax
  __int64 v62; // rdi
  int v63; // esi
  unsigned __int64 *v64; // rsi
  unsigned __int8 v65; // [rsp+0h] [rbp-358h]
  __int64 v66; // [rsp+0h] [rbp-358h]
  __int64 v68; // [rsp+10h] [rbp-348h] BYREF
  int v69; // [rsp+18h] [rbp-340h]
  __int128 v70; // [rsp+20h] [rbp-338h]
  __int64 v71; // [rsp+30h] [rbp-328h]
  __int128 v72; // [rsp+40h] [rbp-318h] BYREF
  __int64 v73; // [rsp+50h] [rbp-308h]
  __int64 v74; // [rsp+58h] [rbp-300h]
  __int64 v75; // [rsp+60h] [rbp-2F8h]
  char v76; // [rsp+68h] [rbp-2F0h] BYREF
  char v77; // [rsp+69h] [rbp-2EFh] BYREF
  __int16 v78; // [rsp+6Eh] [rbp-2EAh]
  __int16 v79; // [rsp+96h] [rbp-2C2h]
  char v80; // [rsp+1A8h] [rbp-1B0h] BYREF
  _BYTE v81[7]; // [rsp+1A9h] [rbp-1AFh] BYREF
  __int128 v82; // [rsp+1B0h] [rbp-1A8h] BYREF
  __int64 v83; // [rsp+1C0h] [rbp-198h]
  __int64 v84; // [rsp+1C8h] [rbp-190h]
  __int64 v85; // [rsp+1D0h] [rbp-188h]
  char v86; // [rsp+1D8h] [rbp-180h] BYREF
  __int64 v87; // [rsp+200h] [rbp-158h]
  unsigned __int64 v88; // [rsp+318h] [rbp-40h] BYREF

  v8 = &v80;
  v88 = __readfsqword(0x28u);
  v72 = -1;
  v9 = &v76;
  v73 = -1;
  v74 = 0;
  v75 = 0;
  do
  {
    v10 = 0;
    v11 = 0;
    *(_WORD *)v9 = 0;
    v9 += 40;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *((_QWORD *)v9 - 2) = 0;
  }
  while ( &v80 != v9 );
  v12 = *(unsigned __int64 **)(a1 + 8);
  v13 = *v12;
  if ( *v12 < v12[1] )
  {
    do
    {
      if ( (int)decode_insn(&v72, v13, v8, a7, v10, v11, 0.0) <= 0 )
        break;
      v14 = sub_19380(a1, (__int64)&v72);
      if ( v14 == 2 )
        break;
      if ( !v14 )
      {
        v15 = *(_QWORD *)(a1 + 56);
        v16 = *(_QWORD *)(a1 + 48);
        v8 = (char *)(v15 + 1);
        if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v15 + 1) )
        {
          v50 = qvector_reserve(a1 + 48, v16, v8, 8);
          *(_QWORD *)(a1 + 48) = v50;
          v16 = v50;
          v15 = *(_QWORD *)(a1 + 56);
        }
        *(_QWORD *)(v16 + 8 * v15) = v13;
        ++*(_QWORD *)(a1 + 56);
      }
      v13 += WORD1(v74);
    }
    while ( v13 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) );
  }
  v17 = *(_QWORD *)(a1 + 128);
  if ( v17 == -1 || !(unsigned int)decode_insn(&v72, v17, v8, a7, v10, v11, 0.0) )
    goto LABEL_14;
  v53 = *(_QWORD *)(a1 + 128);
  v54 = *(__int64 **)(a1 + 8);
  v68 = 0;
  v69 = -1;
  v70 = 0;
  if ( v53 == -1 && v54 )
    v55 = *v54;
  else
    v55 = v53;
  v71 = v55;
  func_tail_iterator_set(&v68);
  v56 = 0;
  while ( (unsigned __int8)func_item_iterator_succ(&v68, sub_18170, 0) )
  {
    decode_insn(&v72, v71, v8, v57, v10, v11, 0.0);
    if ( (_WORD)v74 != 5 )
    {
      if ( (v74 & 0xFFFD) != 0x19 )
        goto LABEL_52;
      goto LABEL_51;
    }
    if ( v78 == 28 )
    {
LABEL_51:
      if ( v79 != 31 )
        goto LABEL_52;
    }
    else
    {
LABEL_52:
      v66 = *(_QWORD *)a1;
      v58 = sub_18F40(*(_QWORD *)a1, (__int64)&v72, 0x1Cu);
      v8 = nullptr;
      v60 = v58;
      v61 = &v77;
      v62 = *(_QWORD *)(v66 + 16);
      v57 = v59;
      v63 = *(_DWORD *)(v62 + 104);
      v11 = 16LL * (v59 - v63);
      do
      {
        if ( v63 <= v59 && *(_DWORD *)(v62 + 108) > (int)v59 )
        {
          v10 = *(unsigned int *)(*(_QWORD *)(v62 + 112) + v11 + 8);
          if ( (*(_DWORD *)((_BYTE *)&unk_23200 + (_QWORD)v8) & *(_DWORD *)(*(_QWORD *)(v62 + 112) + v11 + 8)) != 0
            || (v10 = *(_DWORD *)((_BYTE *)&unk_23220 + (_QWORD)v8) & (unsigned int)v10, (_DWORD)v10) )
          {
            if ( *(_WORD *)(v61 + 5) == 28 )
            {
              LOBYTE(v10) = *v61 == 4;
              v56 |= v10;
            }
          }
        }
        v61 += 40;
        v8 += 4;
      }
      while ( v81 != v61 );
      if ( v60 )
        goto LABEL_61;
    }
  }
  if ( !v56 )
LABEL_61:
    *(_QWORD *)(a1 + 128) = -1;
  if ( v68 )
    lock_func_range(v68, 0, v8, v57, v10, v11);
LABEL_14:
  v18 = *(__m128i **)(a1 + 16);
  v19 = 2LL * *(_QWORD *)(a1 + 24);
  v20 = &v18[v19];
  if ( v18 != &v18[v19] )
  {
    if ( (v19 * 16) >> 5 )
    {
      _BitScanReverse64(&v21, (v19 * 16) >> 5);
      sub_1A750(
        *(__m128i **)(a1 + 16),
        &v18[v19],
        2LL * (int)v21,
        (__int64 (__fastcall *)(__int64, __int64))sub_18180,
        v10,
        v11);
      if ( v19 > 32 )
      {
        v22 = v18 + 32;
        sub_1A320(v18, v18 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_18180);
        do
        {
          v23 = v22;
          v22 += 2;
          sub_1A290(v23, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_18180);
        }
        while ( v20 != v22 );
        goto LABEL_19;
      }
    }
    else
    {
      sub_1A750(*(__m128i **)(a1 + 16), &v18[v19], -2, (__int64 (__fastcall *)(__int64, __int64))sub_18180, v10, v11);
    }
    sub_1A320(v18, &v18[v19], (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_18180);
  }
LABEL_19:
  v65 = sub_19FA0((_QWORD *)a1, (int *)a2, (__int64)v8);
  if ( !v65 )
    return v65;
  v26 = *(__int64 **)(a1 + 8);
  if ( v26[1] - *v26 != 1 )
    sub_18DE0((__int64 *)(a1 + 16), *(_QWORD *)a1, *v26);
  v27 = *(__int64 **)(a1 + 16);
  v28 = &v27[4 * *(_QWORD *)(a1 + 24)];
  while ( v28 != v27 )
  {
    v29 = *(_QWORD *)a1;
    v30 = *v27;
    LOBYTE(v68) = 1;
    v27 += 4;
    netnode_supset(*(_QWORD *)(v29 + 104), v30, &v68, 1, 256);
  }
  v31 = *(char **)(a1 + 48);
  v32 = 8LL * *(_QWORD *)(a1 + 56);
  v33 = (unsigned __int64 *)&v31[v32];
  if ( v31 == &v31[v32] )
    goto LABEL_33;
  if ( !(v32 >> 3) )
  {
    sub_18580(*(__m128i **)(a1 + 48), v33, -2, 0.0, a4, a5);
    goto LABEL_67;
  }
  _BitScanReverse64(&v34, v32 >> 3);
  sub_18580(*(__m128i **)(a1 + 48), v33, 2LL * (int)v34, 0.0, a4, a5);
  if ( v32 <= 128 )
  {
LABEL_67:
    sub_18340(v31, (char *)v33);
    goto LABEL_31;
  }
  v35 = (unsigned __int64 *)(v31 + 128);
  sub_18340(v31, v31 + 128);
  do
  {
    while ( 1 )
    {
      v36 = *v35;
      v37 = *(v35 - 1);
      v38 = v35 - 1;
      if ( *v35 < v37 )
        break;
      v64 = v35++;
      *v64 = v36;
      if ( v33 == v35 )
        goto LABEL_31;
    }
    do
    {
      v38[1] = v37;
      v39 = v38;
      v37 = *--v38;
    }
    while ( v36 < v37 );
    ++v35;
    *v39 = v36;
  }
  while ( v33 != v35 );
LABEL_31:
  v40 = *(__int64 **)(a1 + 48);
  v41 = &v40[*(_QWORD *)(a1 + 56)];
  while ( v41 != v40 )
  {
    v42 = *(_QWORD *)a1;
    v43 = *v40;
    LOBYTE(v68) = 1;
    ++v40;
    netnode_supset(*(_QWORD *)(v42 + 104), v43, &v68, 1, 256);
  }
LABEL_33:
  v44 = *(_QWORD *)(a1 + 128);
  if ( v44 != -1 )
  {
    v52 = *(_QWORD *)a1;
    LOBYTE(v68) = 1;
    netnode_supset(*(_QWORD *)(v52 + 104), v44, &v68, 1, 256);
  }
  v45 = *(unsigned __int64 **)(a1 + 8);
  v46 = 0;
  v47 = *v45;
  if ( *v45 < v45[1] )
  {
    do
    {
      v83 = -1;
      v48 = (unsigned __int64 *)&v86;
      v84 = 0;
      v85 = 0;
      v82 = -1;
      do
      {
        *(_WORD *)v48 = 0;
        v48 += 5;
        *((_WORD *)v48 - 19) = 0;
        *((_WORD *)v48 - 18) = 0;
        *((_DWORD *)v48 - 2) = 0;
        *((_WORD *)v48 - 17) = 0;
        *((_OWORD *)v48 - 2) = v46;
        *(v48 - 2) = 0;
      }
      while ( v48 != &v88 );
      if ( (int)decode_insn(&v82, v47, 0, 0, v24, v25, *(double *)&v46) <= 0 )
        break;
      v46 = 0;
      if ( (v84 & 0xFFFD) == 0x19 && (v87 & 0xFFFF00000000FF00LL) == 0x1F000000000300LL )
      {
        v51 = *(_QWORD *)a1;
        LOBYTE(v68) = 2;
        netnode_supset(*(_QWORD *)(v51 + 104), v83, &v68, 1, 256);
        v46 = 0;
      }
      v47 += WORD1(v84);
    }
    while ( v47 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) );
  }
  return v65;
}

