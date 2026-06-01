__m128 __fastcall sub_40A80(__int64 a1, const char *a2)
{
  int v3; // ebp
  void *v4; // rdi
  int v5; // eax
  char **v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  char i; // al
  char v11; // dl
  __m128 v12; // xmm2
  char *v14; // rbp
  int v15; // r13d
  __int64 v16; // r12
  char *v17; // rbx
  __int64 v18; // rax
  char v19; // r13
  const char *v20; // rdi
  char *v21; // rbp
  int v22; // eax
  float v23; // xmm0_4
  int v24; // eax
  const char *v25; // rax
  float v26; // [rsp+Ch] [rbp-3Ch]
  unsigned int v27; // [rsp+Ch] [rbp-3Ch]
  char *endptr[7]; // [rsp+10h] [rbp-38h] BYREF

  endptr[1] = (char *)__readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( *a2 )
  {
    v3 = strlen(a2 + 1) + 2;
    v4 = (void *)operator new[](v3);
    if ( v3 <= 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 1;
    v4 = (void *)operator new[](1u);
  }
  v4 = memcpy(v4, a2, (unsigned int)v3);
LABEL_5:
  v5 = *(_DWORD *)(a1 + 124);
  if ( v5 <= 0 )
  {
LABEL_14:
    if ( v4 )
      operator delete[](v4);
    return 0;
  }
  v6 = *(char ***)(a1 + 112);
  v7 = (__int64)&v6[4 * (unsigned int)(v5 - 1) + 4];
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    for ( i = **v6; i; i = (*v6)[v9] )
    {
      v11 = *((_BYTE *)v4 + v8);
      if ( !v11 )
        break;
      if ( i != v11 )
        goto LABEL_13;
      v8 = ++v9;
    }
    if ( v3 == *((_DWORD *)v6 + 3) )
      break;
LABEL_13:
    v6 += 4;
    if ( (char **)v7 == v6 )
      goto LABEL_14;
  }
  if ( v4 )
    operator delete[](v4);
  if ( !v6 )
    return 0;
  v14 = v6[2];
  if ( v14 )
  {
    if ( *v14 )
    {
      v15 = strlen(v14 + 1) + 2;
      v16 = v15;
      v17 = (char *)operator new[](v15);
      if ( v15 <= 0 )
        goto LABEL_26;
    }
    else
    {
      v16 = 1;
      v17 = (char *)operator new[](1u);
    }
    v18 = 0;
    do
    {
      v17[v18] = v14[v18];
      ++v18;
    }
    while ( v18 != v16 );
LABEL_26:
    v19 = 0;
    v20 = v17;
    if ( *v17 == 45 )
    {
      v20 = v17 + 1;
      v19 = 1;
    }
    goto LABEL_28;
  }
  v19 = 0;
  v25 = (const char *)operator new[](1u);
  *v25 = 0;
  v20 = v25;
  v17 = (char *)v25;
LABEL_28:
  v12 = 0;
  v12.m128_f32[0] = (float)(int)strtol(v20, endptr, 10);
  if ( *endptr[0] == 46 )
  {
    v21 = endptr[0] + 1;
    v26 = v12.m128_f32[0];
    v22 = strtol(endptr[0] + 1, endptr, 10);
    v12 = (__m128)v12.m128_u32[0];
    v23 = (float)v22 * flt_59740[endptr[0] - v21];
    v12.m128_f32[0] = v12.m128_f32[0] + v23;
    if ( *endptr[0] == 101 )
    {
      *(float *)&v27 = v26 + v23;
      v24 = strtol(endptr[0] + 1, endptr, 10);
      v12 = (__m128)v27;
      v12.m128_f32[0] = *(float *)&v27 * powf(10.0, (float)v24);
    }
  }
  if ( v19 )
    v12 = _mm_xor_ps(v12, (__m128)xmmword_59580);
  if ( v17 )
  {
    operator delete[](v17);
    return (__m128)v12.m128_u32[0];
  }
  return v12;
}

