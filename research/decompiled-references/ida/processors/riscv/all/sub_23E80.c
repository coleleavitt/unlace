__int64 __fastcall sub_23E80(
        __int64 *a1,
        unsigned __int8 a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char *v11; // rax
  __int128 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  __m128i *v21; // r14
  __int64 v22; // rbx
  __m128i *v23; // rbp
  unsigned __int64 v24; // rdx
  const __m128i *v25; // rbx
  const __m128i *v26; // rdi
  unsigned int v27; // r12d
  __int64 *v28; // rax
  __int64 *v29; // rbx
  __int64 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rsi
  char *v33; // r13
  __int64 v34; // rbx
  unsigned __int64 *v35; // rbp
  unsigned __int64 v36; // rdx
  unsigned __int64 *v37; // rbx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // rax
  unsigned __int64 *v41; // rsi
  __int64 *v42; // rbx
  __int64 *v43; // r13
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 *v51; // rsi
  __int64 v52; // rax
  char v53; // r13
  __int64 v54; // rcx
  char v55; // r10
  __int64 v56; // rax
  int v57; // edi
  unsigned __int64 *v58; // rsi
  __int64 v59; // [rsp+0h] [rbp-1D8h] BYREF
  int v60; // [rsp+8h] [rbp-1D0h]
  __int128 v61; // [rsp+10h] [rbp-1C8h]
  __int64 v62; // [rsp+20h] [rbp-1B8h]
  __int128 v63; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-198h]
  __int64 v65; // [rsp+48h] [rbp-190h]
  __int64 v66; // [rsp+50h] [rbp-188h]
  char v67; // [rsp+58h] [rbp-180h] BYREF
  __int16 v68; // [rsp+5Eh] [rbp-17Ah]
  __int16 v69; // [rsp+86h] [rbp-152h]
  __int16 v70; // [rsp+AEh] [rbp-12Ah]
  _QWORD v71[8]; // [rsp+198h] [rbp-40h] BYREF

  v71[0] = __readfsqword(0x28u);
  v64 = -1;
  v11 = &v67;
  v63 = -1;
  v12 = (__int128 *)v71;
  v65 = 0;
  v66 = 0;
  do
  {
    v13 = 0;
    v14 = 0;
    *(_WORD *)v11 = 0;
    v11 += 40;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *((_QWORD *)v11 - 2) = 0;
  }
  while ( v71 != (_QWORD *)v11 );
  v15 = (unsigned __int64 *)a1[1];
  v16 = *v15;
  if ( *v15 < v15[1] )
  {
    do
    {
      if ( (int)decode_insn(&v63, v16, v12, v13, v14, a9, 0.0) <= 0 )
        break;
      v17 = sub_22E20(a1, (__int64)&v63);
      if ( v17 == 2 )
        break;
      if ( !v17 )
      {
        v18 = a1[7];
        v19 = a1[6];
        v12 = (__int128 *)(v18 + 1);
        if ( a1[8] < (unsigned __int64)(v18 + 1) )
        {
          v48 = qvector_reserve(a1 + 6, v19, v12, 8);
          a1[6] = v48;
          v19 = v48;
          v18 = a1[7];
        }
        *(_QWORD *)(v19 + 8 * v18) = v16;
        ++a1[7];
      }
      v16 += WORD1(v65);
    }
    while ( v16 < *(_QWORD *)(a1[1] + 8) );
  }
  v20 = a1[16];
  if ( v20 == -1 || !(unsigned int)decode_insn(&v63, v20, v12, v13, v14, a9, 0.0) )
    goto LABEL_14;
  v50 = a1[16];
  v51 = (__int64 *)a1[1];
  v59 = 0;
  v60 = -1;
  v61 = 0;
  if ( v50 == -1 && v51 )
    v52 = *v51;
  else
    v52 = v50;
  v62 = v52;
  func_tail_iterator_set(&v59, v51);
  v53 = 0;
  while ( (unsigned __int8)func_item_iterator_succ(&v59, sub_220F0, 0) )
  {
    decode_insn(&v63, v62, v12, v54, v14, a9, 0.0);
    if ( (_WORD)v65 == 49 || (_WORD)v65 == 13 )
    {
      if ( v68 != 8 || v69 != 2 )
      {
LABEL_47:
        v55 = sub_17AE0(*a1, (__int64)&v63, 8u);
        v12 = &v63;
        v14 = *(_QWORD *)(*a1 + 16);
        v56 = 0;
        v57 = *(_DWORD *)(v14 + 104);
        do
        {
          if ( v57 <= (unsigned __int16)v65 && *(_DWORD *)(v14 + 108) > (int)(unsigned __int16)v65 )
          {
            a9 = (unsigned int)(dword_2B0C0[v56]
                              & *(_DWORD *)(*(_QWORD *)(v14 + 112) + 16LL * ((unsigned __int16)v65 - v57) + 8));
            if ( ((dword_2B0C0[v56] & *(_DWORD *)(*(_QWORD *)(v14 + 112) + 16LL * ((unsigned __int16)v65 - v57) + 8)) != 0
               || (dword_2B0E0[v56] & *(_DWORD *)(*(_QWORD *)(v14 + 112) + 16LL * ((unsigned __int16)v65 - v57) + 8)) != 0)
              && *((_WORD *)v12 + 23) == 8 )
            {
              v53 |= *((_BYTE *)v12 + 41) == 4;
            }
          }
          ++v56;
          v12 = (__int128 *)((char *)v12 + 40);
        }
        while ( v56 != 4 );
        if ( v55 )
          goto LABEL_56;
      }
    }
    else if ( (unsigned __int16)(v65 - 487) > 2u || v70 != 2 || v68 != 8 && v69 != 8 )
    {
      goto LABEL_47;
    }
  }
  if ( !v53 )
LABEL_56:
    a1[16] = -1;
  if ( v59 )
    lock_func_range(v59, 0);
LABEL_14:
  v21 = (__m128i *)a1[2];
  v22 = 2 * a1[3];
  v23 = &v21[v22];
  if ( v21 != &v21[v22] )
  {
    if ( (v22 * 16) >> 5 )
    {
      _BitScanReverse64(&v24, (v22 * 16) >> 5);
      sub_23B50(
        (__m128i *)a1[2],
        &v21[v22],
        2LL * (int)v24,
        (__int64 (__fastcall *)(__int64, __int64))sub_22100,
        v14,
        a9);
      if ( v22 > 32 )
      {
        v25 = v21 + 32;
        sub_23720(v21, v21 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_22100);
        do
        {
          v26 = v25;
          v25 += 2;
          sub_23690(v26, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_22100);
        }
        while ( v23 != v25 );
        goto LABEL_19;
      }
    }
    else
    {
      sub_23B50((__m128i *)a1[2], &v21[v22], -2, (__int64 (__fastcall *)(__int64, __int64))sub_22100, v14, a9);
    }
    sub_23720(v21, &v21[v22], (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_22100);
  }
LABEL_19:
  v27 = sub_233C0(a1, a2, (__int64)v12);
  if ( !(_BYTE)v27 )
    return v27;
  v28 = (__int64 *)a1[1];
  if ( v28[1] - *v28 != 1 )
    sub_22CA0(a1 + 2, *a1, *v28);
  v29 = (__int64 *)a1[2];
  v30 = &v29[4 * a1[3]];
  while ( v30 != v29 )
  {
    v31 = *a1;
    v32 = *v29;
    LOBYTE(v59) = 1;
    v29 += 4;
    netnode_supset(*(_QWORD *)(v31 + 104), v32, &v59, 1, 256);
  }
  v33 = (char *)a1[6];
  v34 = 8 * a1[7];
  v35 = (unsigned __int64 *)&v33[v34];
  if ( v33 == &v33[v34] )
    goto LABEL_33;
  if ( !(v34 >> 3) )
  {
    sub_22500((__m128i *)a1[6], v35, -2, 0.0, a4, a5);
    goto LABEL_62;
  }
  _BitScanReverse64(&v36, v34 >> 3);
  sub_22500((__m128i *)a1[6], v35, 2LL * (int)v36, 0.0, a4, a5);
  if ( v34 <= 128 )
  {
LABEL_62:
    sub_222C0(v33, (char *)v35);
    goto LABEL_31;
  }
  v37 = (unsigned __int64 *)(v33 + 128);
  sub_222C0(v33, v33 + 128);
  do
  {
    while ( 1 )
    {
      v38 = *v37;
      v39 = *(v37 - 1);
      v40 = v37 - 1;
      if ( *v37 < v39 )
        break;
      v58 = v37++;
      *v58 = v38;
      if ( v35 == v37 )
        goto LABEL_31;
    }
    do
    {
      v40[1] = v39;
      v41 = v40;
      v39 = *--v40;
    }
    while ( v38 < v39 );
    ++v37;
    *v41 = v38;
  }
  while ( v35 != v37 );
LABEL_31:
  v42 = (__int64 *)a1[6];
  v43 = &v42[a1[7]];
  while ( v43 != v42 )
  {
    v44 = *a1;
    v45 = *v42;
    LOBYTE(v59) = 1;
    ++v42;
    netnode_supset(*(_QWORD *)(v44 + 104), v45, &v59, 1, 256);
  }
LABEL_33:
  v46 = a1[16];
  if ( v46 != -1 )
  {
    v49 = *a1;
    LOBYTE(v59) = 1;
    netnode_supset(*(_QWORD *)(v49 + 104), v46, &v59, 1, 256);
  }
  return v27;
}

