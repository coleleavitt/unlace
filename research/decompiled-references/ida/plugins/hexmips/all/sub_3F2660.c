unsigned __int64 __fastcall sub_3F2660(
        __int64 a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        unsigned __int64 *a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r12
  unsigned int v19; // esi
  __int64 (*v20)(void); // rax
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rsi
  int *v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // r15
  unsigned __int64 *v29; // rax
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128 v35; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+18h] [rbp-40h]

  v14 = *(_QWORD *)(a1 + 80);
  v36 = __readfsqword(0x28u);
  v15 = *(_QWORD *)(a1 + 72);
  v16 = v15 + 32 * v14;
  while ( v16 != v15 )
  {
    while ( 1 )
    {
      v24 = *(int **)(a1 + 56);
      if ( (unsigned int)(v24[187] - 1) <= 1 )
        break;
LABEL_3:
      v19 = *(unsigned __int16 *)(v15 + 24);
      if ( (_WORD)v19 != 31 )
        goto LABEL_4;
      v25 = *(_QWORD *)(v15 + 16);
LABEL_26:
      if ( v24[20] < v25 )
      {
        v19 = *(unsigned __int16 *)(v15 + 24);
        goto LABEL_5;
      }
      v31 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(v15 + 8) + a2[17] - a2[22];
      *(_DWORD *)(a1 + 128) = v31 | 1;
      if ( v24[20] > (int)v25 )
        *(_DWORD *)(a1 + 128) = v31 | 9;
      a3 = _mm_loadh_ps((const double *)(v15 + 16));
      v35 = a3;
      sub_F38C0(a2, &v35);
      v24 = *(int **)(a1 + 56);
      v19 = *(unsigned __int16 *)(v15 + 24);
LABEL_4:
      if ( (unsigned int)(v24[187] - 1) <= 2 )
        goto LABEL_15;
LABEL_5:
      v20 = *(__int64 (**)(void))(*(_QWORD *)v24 + 168LL);
      if ( (char *)v20 == (char *)sub_3E5480 )
        v21 = sub_3E5480(v24, v19);
      else
        v21 = v20();
      if ( v21 != -1 )
      {
        v22 = *(_QWORD *)(a1 + 16);
        v23 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v22 + 1) )
        {
          v32 = qvector_reserve();
          *(_QWORD *)(a1 + 8) = v32;
          v23 = v32;
          v22 = *(_QWORD *)(a1 + 16);
        }
        *(_DWORD *)(v23 + 4 * v22) = v21;
        ++*(_QWORD *)(a1 + 16);
      }
      v15 += 32;
      if ( v16 == v15 )
        return v36 - __readfsqword(0x28u);
    }
    v25 = *(_QWORD *)(v15 + 16);
    if ( v25 == 4 )
    {
      sub_32C190(a2, *(_QWORD *)v15, 0x32u, (__int64)a12, a13, a14, a3, a4, a5, a6, a7, a8, a9, a10);
      v24 = *(int **)(a1 + 56);
      goto LABEL_3;
    }
    v19 = *(unsigned __int16 *)(v15 + 24);
    if ( (_WORD)v19 == 31 )
      goto LABEL_26;
LABEL_15:
    if ( (unsigned __int16)(v19 - 4) > 7u )
      goto LABEL_5;
    v26 = *(unsigned __int64 **)(a1 + 96);
    v27 = *(_QWORD *)(a1 + 104);
    v28 = *(_QWORD *)v15;
    a12 = &v26[v27];
    if ( v26 != a12 )
    {
      v29 = *(unsigned __int64 **)(a1 + 96);
      while ( v28 != *v29 )
      {
        if ( a12 == ++v29 )
          goto LABEL_21;
      }
      if ( a12 != v29 )
      {
        if ( !under_debugger )
          sub_37E160(0xCCCCu, *(double *)a3.m128_u64);
        BUG();
      }
    }
LABEL_21:
    if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v27 + 1) )
    {
      v33 = qvector_reserve();
      v34 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 96) = v33;
      a12 = (unsigned __int64 *)(v33 + 8 * v34);
    }
    v15 += 32;
    *a12 = v28;
    ++*(_QWORD *)(a1 + 104);
  }
  return v36 - __readfsqword(0x28u);
}

