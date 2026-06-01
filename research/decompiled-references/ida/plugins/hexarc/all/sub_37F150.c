signed __int64 __fastcall sub_37F150(__int64 a1)
{
  const char *v1; // r13
  char *v3; // rax
  char v4; // dl
  char *v5; // r12
  int v6; // ecx
  char *v7; // rax
  char *v8; // rsi
  size_t v9; // rbx
  __int64 v10; // rax
  signed __int64 v11; // r12
  __int64 v13; // r14
  void *v14; // rdi
  char *v15; // rsi
  const char *v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // [rsp+0h] [rbp-48h]
  __m128i v20; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v1 = *(const char **)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  v3 = sub_37D8F0(*(const char **)a1);
  if ( !v3 )
    return 0;
  v4 = v3[1];
  v5 = v3 + 1;
  v6 = 1;
  v7 = v3 + 1;
  if ( !v4 )
  {
    v19 = 0;
    v20 = 0;
    goto LABEL_17;
  }
  do
  {
    while ( 1 )
    {
      v8 = v7++;
      if ( v4 != 40 )
        break;
      v4 = *v7;
      ++v6;
      if ( !*v7 )
        goto LABEL_9;
    }
    if ( v4 == 41 && !--v6 )
      break;
    v4 = *v7;
  }
  while ( *v7 );
LABEL_9:
  v19 = 0;
  v9 = v8 - v5;
  v20 = 0;
  if ( v8 != v5 )
  {
    v13 = v9 + 1;
    if ( v9 != -1 )
    {
      v19 = qvector_reserve();
      v14 = (void *)v19;
LABEL_18:
      v15 = v5;
      v20.m128i_i64[0] = v13;
      v11 = v5 - v1;
      memmove(v14, v15, v9);
      *(_BYTE *)(v19 + v9) = 0;
      v17 = *(_QWORD *)(a1 + 16);
      v18 = _mm_loadu_si128(&v20);
      v16 = *(const char **)a1;
      *(_QWORD *)a1 = v19;
      v20.m128i_i64[1] = v17;
      *(__m128i *)(a1 + 8) = v18;
      if ( !v16 )
        return v11;
      goto LABEL_11;
    }
LABEL_17:
    v9 = -1;
    v13 = 0;
    v14 = nullptr;
    goto LABEL_18;
  }
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = 0;
  v11 = v5 - v1;
  v20.m128i_i64[1] = v10;
  *(_OWORD *)(a1 + 8) = 0;
LABEL_11:
  v20.m128i_i64[0] = 0;
  qfree();
  return v11;
}

