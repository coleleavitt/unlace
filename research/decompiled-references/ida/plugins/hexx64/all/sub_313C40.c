__int64 __fastcall sub_313C40(__int64 a1, unsigned int *a2, double a3, __m128 a4)
{
  int v4; // eax
  unsigned int v5; // edx
  int v7; // esi
  signed int v9; // edi
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  int v26; // esi
  _QWORD *v27; // r10
  __int64 v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  int v31; // ecx
  __int64 v32; // rax
  unsigned __int64 i; // [rsp+8h] [rbp-80h]
  __int64 v34; // [rsp+10h] [rbp-78h]
  __int64 v35; // [rsp+18h] [rbp-70h]
  __m128 v36; // [rsp+20h] [rbp-68h] BYREF
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __m128i v38; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v4 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    return 0;
  v5 = *a2;
  if ( !*a2 )
    return 0;
  v7 = *(_DWORD *)(a1 + 4);
  v9 = v7 + a2[1];
  if ( (unsigned __int64)v9 > 8 )
    return 0;
  v10 = v4 & 0xF;
  v11 = v5 & 0xF;
  LOBYTE(v5) = v11 == 5 || v10 == 5;
  if ( (_BYTE)v5 )
  {
    if ( v10 == 5 && v11 == 5 )
    {
      *(_QWORD *)(a1 + 8) |= *((_QWORD *)a2 + 1) << (8 * (unsigned __int8)v7);
      *(_QWORD *)(a1 + 16) |= *((_QWORD *)a2 + 2) << (8 * (unsigned __int8)v7);
      *(_DWORD *)(a1 + 4) = a2[1] + v7;
      sub_312F60(a1, a3, a4);
      return 1;
    }
    return 0;
  }
  if ( v11 != 2 )
  {
    if ( v10 != 2 )
      return v5;
    v13 = *(_QWORD *)(a1 + 16);
    if ( !v13 )
      return v5;
    goto LABEL_14;
  }
  if ( *((_QWORD *)a2 + 2) == 1 )
  {
    v27 = *((_QWORD **)a2 + 1);
    if ( v27[1] == 1 )
    {
      v28 = *v27 << (8 * (unsigned __int8)v7);
      if ( v10 == 1 )
      {
        sub_312B80(a1, a3);
        v31 = *(_DWORD *)(a1 + 4);
        v32 = 0;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        if ( v31 != 8 )
          v32 = 1LL << (8 * (unsigned __int8)v31);
        v37 = v28;
        v38.m128i_i64[0] = v32;
        sub_316BB0((__int64 *)(a1 + 8), (__m128i *)&v37, 0.0, a4);
        v9 = *(_DWORD *)(a1 + 4) + a2[1];
      }
      else
      {
        if ( v10 != 2 )
          return v5;
        v29 = *(_QWORD **)(a1 + 8);
        v30 = &v29[2 * *(_QWORD *)(a1 + 16)];
        if ( v30 != v29 )
        {
          if ( ((16 * *(_BYTE *)(a1 + 16)) & 0x10) == 0 || (*v29 += v28, v29 += 2, v29 != v30) )
          {
            do
            {
              *v29 += v28;
              v29[2] += v28;
              v29 += 4;
            }
            while ( v29 != v30 );
          }
          v9 = *(_DWORD *)(a1 + 4) + a2[1];
        }
      }
      *(_DWORD *)(a1 + 4) = v9;
      return 1;
    }
  }
  if ( v10 != 2 )
    return v5;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = 0;
  if ( v13 )
  {
LABEL_14:
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v14 += *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * (int)v15 + 8);
      if ( v14 > 0x10 )
        return v5;
      if ( ++v15 >= v13 )
      {
        if ( v11 != 2 )
          return v5;
        break;
      }
    }
  }
  v16 = *((_QWORD *)a2 + 2);
  v17 = *((_QWORD *)a2 + 1);
  if ( !v16 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    v37 = 0;
    v38 = 0;
LABEL_32:
    v23 = v37;
    v24 = _mm_loadu_si128(&v38);
    v37 = v20;
    v25 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v23;
    *(__m128i *)(a1 + 16) = v24;
    v26 = a2[1] + v7;
    v38.m128i_i64[1] = v25;
    *(_DWORD *)(a1 + 4) = v26;
    if ( v20 )
    {
      v38.m128i_i64[0] = 0;
      qfree(v20);
    }
    return 1;
  }
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    v18 += *(_QWORD *)(v17 + 16LL * (int)v19 + 8);
    if ( v18 > 0x10 )
      return v5;
    if ( ++v19 == v16 )
    {
      if ( v18 * v14 > 0x10 )
        return v5;
      v37 = 0;
      v20 = *(_QWORD *)(a1 + 8);
      v35 = v17 + 16 * v19;
      v38 = 0;
      if ( v35 != v17 )
      {
        v34 = v17;
        do
        {
          for ( i = 0; i < *(_QWORD *)(v34 + 8); ++i )
          {
            v21 = v20 + 16LL * *(_QWORD *)(a1 + 16);
            if ( v21 != v20 )
            {
              v22 = v20;
              do
              {
                v36 = _mm_loadh_ps((const double *)(v22 + 8));
                sub_316BB0(&v37, (__m128i *)&v36, *(double *)v36.m128_u64, a4);
                v22 += 16;
              }
              while ( v21 != v22 );
              v20 = *(_QWORD *)(a1 + 8);
              v7 = *(_DWORD *)(a1 + 4);
            }
          }
          v34 += 16;
        }
        while ( v35 != v34 );
      }
      goto LABEL_32;
    }
  }
}

