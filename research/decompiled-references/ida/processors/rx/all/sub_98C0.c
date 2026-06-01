__int64 __fastcall sub_98C0(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char *v9; // rax
  __int64 v10; // r9
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // r11
  int v14; // edx
  int v15; // eax
  unsigned __int64 *v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 *v18; // rcx
  unsigned __int64 *v19; // rax
  char *v20; // r15
  __int64 v21; // rbp
  char *v22; // r13
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  const __m128i *v27; // rbp
  const __m128i *v28; // rdi
  unsigned int v29; // r12d
  char *v31; // r14
  __int64 v32; // rbp
  unsigned __int64 *v33; // r13
  unsigned __int64 v34; // rdx
  unsigned __int64 *v35; // rbp
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 *v38; // rax
  unsigned __int64 *v39; // rsi
  __int64 v40; // rbp
  __int64 v41; // r14
  __int64 v42; // rbp
  __int64 v43; // r14
  unsigned __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int128 v47; // [rsp+2h] [rbp-318h] BYREF
  __int64 v48; // [rsp+12h] [rbp-308h]
  __int64 v49; // [rsp+1Ah] [rbp-300h]
  __int64 v50; // [rsp+22h] [rbp-2F8h]
  char v51; // [rsp+2Ah] [rbp-2F0h] BYREF
  char v52; // [rsp+16Ah] [rbp-1B0h] BYREF
  __int128 v53; // [rsp+172h] [rbp-1A8h] BYREF
  __int64 v54; // [rsp+182h] [rbp-198h]
  __int64 v55; // [rsp+18Ah] [rbp-190h]
  __int64 v56; // [rsp+192h] [rbp-188h]
  char v57; // [rsp+19Ah] [rbp-180h] BYREF
  unsigned __int64 v58; // [rsp+2DAh] [rbp-40h] BYREF

  v58 = __readfsqword(0x28u);
  v9 = &v51;
  v47 = -1;
  v48 = -1;
  v49 = 0;
  v50 = 0;
  do
  {
    v10 = 0;
    *(_WORD *)v9 = 0;
    v9 += 40;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *((_QWORD *)v9 - 2) = 0;
  }
  while ( &v52 != v9 );
  v11 = *(unsigned __int64 **)(a1 + 8);
  v12 = *v11;
  if ( *v11 < v11[1] )
  {
    do
    {
      if ( (int)decode_insn() <= 0 )
        break;
      v15 = sub_8B50(a1, (__int64)&v47);
      if ( v15 == 2 )
        break;
      if ( v15 )
      {
        if ( (unsigned __int8)sub_8370(*(_QWORD *)a1, (__int64)&v47, 0) )
          break;
        v14 = *(_DWORD *)(a1 + 80);
        if ( v14 != -1 && (unsigned __int8)sub_8370(v13, (__int64)&v47, v14) )
          *(_DWORD *)(a1 + 80) = -1;
      }
      else
      {
        v16 = *(unsigned __int64 **)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 48);
        v18 = &v16[v17];
        if ( v16 == v18 )
          goto LABEL_18;
        v19 = *(unsigned __int64 **)(a1 + 40);
        while ( *v19 != v12 )
        {
          if ( v18 == ++v19 )
            goto LABEL_18;
        }
        if ( v19 == v18 )
        {
LABEL_18:
          if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v17 + 1) )
          {
            v45 = qvector_reserve();
            v46 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v45;
            v18 = (unsigned __int64 *)(v45 + 8 * v46);
          }
          *v18 = v12;
          ++*(_QWORD *)(a1 + 48);
        }
      }
      v12 += WORD1(v49);
    }
    while ( v12 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) );
  }
  v20 = *(char **)(a1 + 16);
  v21 = 32LL * *(_QWORD *)(a1 + 24);
  v22 = &v20[v21];
  if ( &v20[v21] != v20 )
  {
    if ( v21 >> 5 )
    {
      _BitScanReverse64(&v23, v21 >> 5);
      sub_9730(
        *(_QWORD *)(a1 + 16),
        (unsigned __int64)&v20[v21],
        2LL * (int)v23,
        (__int64 (__fastcall *)(__int64, __int64))sub_7D10,
        a8,
        v10);
      if ( v21 > 512 )
      {
        v27 = (const __m128i *)(v20 + 512);
        sub_9310(v20, v20 + 512, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_7D10, v24, v25, v26);
        do
        {
          v28 = v27;
          v27 += 2;
          sub_9280(v28, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_7D10);
        }
        while ( v22 != (char *)v27 );
        goto LABEL_26;
      }
    }
    else
    {
      sub_9730(
        *(_QWORD *)(a1 + 16),
        (unsigned __int64)&v20[v21],
        -2,
        (__int64 (__fastcall *)(__int64, __int64))sub_7D10,
        a8,
        v10);
    }
    sub_9310(v20, &v20[v21], (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_7D10, v24, v25, v26);
  }
LABEL_26:
  v29 = sub_8E60(a1);
  if ( !(_BYTE)v29 )
    return v29;
  v31 = *(char **)(a1 + 40);
  v32 = 8LL * *(_QWORD *)(a1 + 48);
  v33 = (unsigned __int64 *)&v31[v32];
  if ( v31 != &v31[v32] )
  {
    if ( v32 >> 3 )
    {
      _BitScanReverse64(&v34, v32 >> 3);
      sub_7F90(*(__m128i **)(a1 + 40), v33, 2LL * (int)v34, 0.0, a3, a4);
      if ( v32 > 128 )
      {
        v35 = (unsigned __int64 *)(v31 + 128);
        sub_7EC0(v31, v31 + 128);
        do
        {
          v36 = *v35;
          v37 = *(v35 - 1);
          v38 = v35 - 1;
          if ( *v35 >= v37 )
          {
            v39 = v35;
          }
          else
          {
            do
            {
              v38[1] = v37;
              v39 = v38;
              v37 = *--v38;
            }
            while ( v36 < v37 );
          }
          ++v35;
          *v39 = v36;
        }
        while ( v33 != v35 );
LABEL_37:
        v40 = *(_QWORD *)(a1 + 40);
        v41 = v40 + 8LL * *(_QWORD *)(a1 + 48);
        while ( v41 != v40 )
        {
          v40 += 8;
          netnode_supset();
        }
        goto LABEL_39;
      }
    }
    else
    {
      sub_7F90(*(__m128i **)(a1 + 40), v33, -2, 0.0, a3, a4);
    }
    sub_7EC0(v31, (char *)v33);
    goto LABEL_37;
  }
LABEL_39:
  v42 = *(_QWORD *)(a1 + 16);
  v43 = v42 + 32LL * *(_QWORD *)(a1 + 24);
  while ( v43 != v42 )
  {
    v42 += 32;
    netnode_supset();
  }
  v54 = -1;
  v44 = (unsigned __int64 *)&v57;
  v55 = 0;
  v56 = 0;
  v53 = -1;
  do
  {
    *(_WORD *)v44 = 0;
    v44 += 5;
    *((_WORD *)v44 - 19) = 0;
    *((_WORD *)v44 - 18) = 0;
    *((_DWORD *)v44 - 2) = 0;
    *((_WORD *)v44 - 17) = 0;
    *((_OWORD *)v44 - 2) = 0;
    *(v44 - 2) = 0;
  }
  while ( v44 != &v58 );
  if ( decode_prev_insn() != -1 )
    sub_8F40(a1, (__int64)&v53);
  return v29;
}

