__m128 __fastcall sub_40640(__int64 a1, int a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rbp
  int v4; // r13d
  __int64 v5; // r12
  char *v6; // rbx
  __int64 v7; // rax
  char v8; // r12
  const char *v9; // rdi
  __m128 v10; // xmm2
  char *v12; // rbp
  int v13; // eax
  float v14; // xmm0_4
  int v15; // eax
  float v16; // [rsp+Ch] [rbp-3Ch]
  unsigned int v17; // [rsp+Ch] [rbp-3Ch]
  char *endptr[7]; // [rsp+10h] [rbp-38h] BYREF

  endptr[1] = (char *)__readfsqword(0x28u);
  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  if ( (char *)v2 == (char *)sub_3FF40 )
  {
    if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 124) )
      return 0;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL * a2 + 16);
  }
  else
  {
    v3 = v2();
  }
  if ( !v3 )
    return 0;
  if ( !*(_BYTE *)v3 )
  {
    v5 = 1;
    v6 = (char *)operator new[](1u);
LABEL_8:
    v7 = 0;
    do
    {
      v6[v7] = *(_BYTE *)(v3 + v7);
      ++v7;
    }
    while ( v7 != v5 );
    goto LABEL_10;
  }
  v4 = strlen((const char *)(v3 + 1)) + 2;
  v5 = v4;
  v6 = (char *)operator new[](v4);
  if ( v4 > 0 )
    goto LABEL_8;
LABEL_10:
  v8 = 0;
  v9 = v6;
  if ( *v6 == 45 )
  {
    v9 = v6 + 1;
    v8 = 1;
  }
  v10 = 0;
  v10.m128_f32[0] = (float)(int)strtol(v9, endptr, 10);
  if ( *endptr[0] == 46 )
  {
    v12 = endptr[0] + 1;
    v16 = v10.m128_f32[0];
    v13 = strtol(endptr[0] + 1, endptr, 10);
    v10 = (__m128)v10.m128_u32[0];
    v14 = (float)v13 * flt_59740[endptr[0] - v12];
    v10.m128_f32[0] = v10.m128_f32[0] + v14;
    if ( *endptr[0] == 101 )
    {
      *(float *)&v17 = v16 + v14;
      v15 = strtol(endptr[0] + 1, endptr, 10);
      v10 = (__m128)v17;
      v10.m128_f32[0] = *(float *)&v17 * powf(10.0, (float)v15);
    }
  }
  if ( v8 )
    v10 = _mm_xor_ps(v10, (__m128)xmmword_59580);
  if ( v6 )
  {
    operator delete[](v6);
    return (__m128)v10.m128_u32[0];
  }
  return v10;
}

