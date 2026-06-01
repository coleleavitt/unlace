__int64 __fastcall sub_6B40(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 *v10; // rax
  __int64 v11; // r8
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned __int64 *v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 *v17; // rcx
  unsigned __int64 *v18; // rax
  __m128i *v19; // r15
  __int64 v20; // rbx
  __m128i *v21; // r13
  unsigned __int64 v22; // rdx
  const __m128i *v23; // rbx
  const __m128i *v24; // rdi
  unsigned int v25; // r12d
  char *v27; // r14
  __int64 v28; // rbx
  unsigned __int64 *v29; // r13
  unsigned __int64 v30; // rdx
  unsigned __int64 *v31; // rbx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 *v34; // rax
  unsigned __int64 *v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int128 v42; // [rsp+2h] [rbp-1A8h] BYREF
  __int64 v43; // [rsp+12h] [rbp-198h]
  __int64 v44; // [rsp+1Ah] [rbp-190h]
  __int64 v45; // [rsp+22h] [rbp-188h]
  char v46; // [rsp+2Ah] [rbp-180h] BYREF
  unsigned __int64 v47; // [rsp+16Ah] [rbp-40h] BYREF

  v47 = __readfsqword(0x28u);
  v10 = (unsigned __int64 *)&v46;
  v42 = -1;
  v43 = -1;
  v44 = 0;
  v45 = 0;
  do
  {
    v11 = 0;
    *(_WORD *)v10 = 0;
    v10 += 5;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *(v10 - 2) = 0;
  }
  while ( &v47 != v10 );
  v12 = *(unsigned __int64 **)(a1 + 8);
  v13 = *v12;
  if ( *v12 < v12[1] )
  {
    do
    {
      if ( (int)decode_insn() <= 0 )
        break;
      v14 = sub_5DB0(a1, (__int64)&v42);
      if ( v14 == 2 )
        break;
      if ( !v14 )
      {
        v15 = *(unsigned __int64 **)(a1 + 40);
        v16 = *(_QWORD *)(a1 + 48);
        v17 = &v15[v16];
        if ( v15 == v17 )
          goto LABEL_14;
        v18 = *(unsigned __int64 **)(a1 + 40);
        while ( *v18 != v13 )
        {
          if ( v17 == ++v18 )
            goto LABEL_14;
        }
        if ( v18 == v17 )
        {
LABEL_14:
          if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v16 + 1) )
          {
            v40 = qvector_reserve();
            v41 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v40;
            v17 = (unsigned __int64 *)(v40 + 8 * v41);
          }
          *v17 = v13;
          ++*(_QWORD *)(a1 + 48);
        }
      }
      v13 += WORD1(v44);
    }
    while ( v13 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) );
  }
  v19 = *(__m128i **)(a1 + 16);
  v20 = 2LL * *(_QWORD *)(a1 + 24);
  v21 = &v19[v20];
  if ( &v19[v20] != v19 )
  {
    if ( (v20 * 16) >> 5 )
    {
      _BitScanReverse64(&v22, (v20 * 16) >> 5);
      sub_6810(
        *(__m128i **)(a1 + 16),
        &v19[v20],
        2LL * (int)v22,
        (__int64 (__fastcall *)(__int64, __int64))&loc_5270,
        v11,
        a9);
      if ( v20 > 32 )
      {
        v23 = v19 + 32;
        sub_63E0(v19, v19 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))&loc_5270);
        do
        {
          v24 = v23;
          v23 += 2;
          sub_6350(v24, (__int64 (__fastcall *)(__m128i *, const __m128i *))&loc_5270);
        }
        while ( v21 != v23 );
        goto LABEL_22;
      }
    }
    else
    {
      sub_6810(*(__m128i **)(a1 + 16), &v19[v20], -2, (__int64 (__fastcall *)(__int64, __int64))&loc_5270, v11, a9);
    }
    sub_63E0(v19, &v19[v20], (__int64 (__fastcall *)(__m128i *, const __m128i *))&loc_5270);
  }
LABEL_22:
  v25 = sub_5EF0(a1);
  if ( !(_BYTE)v25 )
    return v25;
  v27 = *(char **)(a1 + 40);
  v28 = 8LL * *(_QWORD *)(a1 + 48);
  v29 = (unsigned __int64 *)&v27[v28];
  if ( v27 != &v27[v28] )
  {
    if ( v28 >> 3 )
    {
      _BitScanReverse64(&v30, v28 >> 3);
      sub_5510(*(__m128i **)(a1 + 40), v29, 2LL * (int)v30, 0.0, a3, a4);
      if ( v28 > 128 )
      {
        v31 = (unsigned __int64 *)(v27 + 128);
        sub_5440(v27, v27 + 128);
        do
        {
          v32 = *v31;
          v33 = *(v31 - 1);
          v34 = v31 - 1;
          if ( *v31 >= v33 )
          {
            v35 = v31;
          }
          else
          {
            do
            {
              v34[1] = v33;
              v35 = v34;
              v33 = *--v34;
            }
            while ( v32 < v33 );
          }
          ++v31;
          *v35 = v32;
        }
        while ( v29 != v31 );
        goto LABEL_33;
      }
    }
    else
    {
      sub_5510(*(__m128i **)(a1 + 40), v29, -2, 0.0, a3, a4);
    }
    sub_5440(v27, (char *)v29);
LABEL_33:
    v36 = *(_QWORD *)(a1 + 40);
    v37 = v36 + 8LL * *(_QWORD *)(a1 + 48);
    while ( v37 != v36 )
    {
      v36 += 8;
      netnode_supset();
    }
  }
  v38 = *(_QWORD *)(a1 + 16);
  v39 = v38 + 32LL * *(_QWORD *)(a1 + 24);
  while ( v39 != v38 )
  {
    v38 += 32;
    netnode_supset();
  }
  return v25;
}

