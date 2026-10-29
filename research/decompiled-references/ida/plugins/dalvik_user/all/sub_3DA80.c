__int64 __fastcall sub_3DA80(__int64 *a1, const char *a2)
{
  __int64 v3; // rax
  __m128 (__fastcall *v4)(__int64, const char *); // rax
  int v5; // ebp
  void *v6; // rdi
  int v7; // eax
  char **v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // ecx
  char i; // al
  char v13; // dl
  char *v15; // rbp
  int v16; // r13d
  __int64 v17; // r12
  char *v18; // rbx
  __int64 v19; // rax
  char v20; // r13
  const char *v21; // rdi
  float v22; // xmm2_4
  char *v23; // rbp
  int v24; // eax
  float v25; // xmm0_4
  int v26; // eax
  const char *v27; // rax
  float v28; // [rsp+Ch] [rbp-3Ch]
  char *endptr[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *a1;
  endptr[1] = (char *)__readfsqword(0x28u);
  v4 = *(__m128 (__fastcall **)(__int64, const char *))(v3 + 88);
  if ( v4 != sub_3D7E0 )
    return (unsigned int)(int)((float (__fastcall *)(__int64 *, const char *))v4)(a1, a2);
  if ( !a2 )
    return 0;
  if ( *a2 )
  {
    v5 = strlen(a2 + 1) + 2;
    v6 = (void *)operator new[](v5);
    if ( v5 <= 0 )
      goto LABEL_6;
  }
  else
  {
    v5 = 1;
    v6 = (void *)operator new[](1u);
  }
  v6 = memcpy(v6, a2, (unsigned int)v5);
LABEL_6:
  v7 = *((_DWORD *)a1 + 31);
  if ( v7 <= 0 )
  {
LABEL_15:
    if ( v6 )
      operator delete[](v6);
    return 0;
  }
  v8 = (char **)a1[14];
  v9 = (__int64)&v8[4 * (unsigned int)(v7 - 1) + 4];
  while ( 1 )
  {
    v10 = 0;
    v11 = 0;
    for ( i = **v8; i; i = (*v8)[v11] )
    {
      v13 = *((_BYTE *)v6 + v10);
      if ( !v13 )
        break;
      if ( i != v13 )
        goto LABEL_14;
      v10 = ++v11;
    }
    if ( *((_DWORD *)v8 + 3) == v5 )
      break;
LABEL_14:
    v8 += 4;
    if ( (char **)v9 == v8 )
      goto LABEL_15;
  }
  if ( v6 )
    operator delete[](v6);
  if ( !v8 )
    return 0;
  v15 = v8[2];
  if ( v15 )
  {
    if ( *v15 )
    {
      v16 = strlen(v15 + 1) + 2;
      v17 = v16;
      v18 = (char *)operator new[](v16);
      if ( v16 <= 0 )
        goto LABEL_26;
    }
    else
    {
      v17 = 1;
      v18 = (char *)operator new[](1u);
    }
    v19 = 0;
    do
    {
      v18[v19] = v15[v19];
      ++v19;
    }
    while ( v17 != v19 );
LABEL_26:
    v20 = 0;
    v21 = v18;
    if ( *v18 == 45 )
    {
      v21 = v18 + 1;
      v20 = 1;
    }
    goto LABEL_28;
  }
  v20 = 0;
  v27 = (const char *)operator new[](1u);
  *v27 = 0;
  v21 = v27;
  v18 = (char *)v27;
LABEL_28:
  v22 = (float)(int)strtol(v21, endptr, 10);
  if ( *endptr[0] == 46 )
  {
    v23 = endptr[0] + 1;
    v28 = v22;
    v24 = strtol(endptr[0] + 1, endptr, 10);
    v25 = (float)v24 * flt_6A7A0[endptr[0] - v23];
    v22 = v22 + v25;
    if ( *endptr[0] == 101 )
    {
      v26 = strtol(endptr[0] + 1, endptr, 10);
      v22 = (float)(v28 + v25) * powf(10.0, (float)v26);
    }
  }
  if ( v20 )
    v22 = -v22;
  if ( v18 )
    operator delete[](v18);
  return (unsigned int)(int)v22;
}

