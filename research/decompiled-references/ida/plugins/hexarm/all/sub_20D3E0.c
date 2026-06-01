__int64 __fastcall sub_20D3E0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  char *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r14
  char **v9; // rbx
  const char *v10; // r12
  char *v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  size_t v14; // rax
  size_t v15; // rbx
  void *v16; // rdi
  size_t v17; // rbp
  __int64 v18; // rax
  char *s1; // [rsp+0h] [rbp-48h]
  __m128i v20; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v2 = 0;
  v3 = *a2;
  v21 = __readfsqword(0x28u);
  s1 = nullptr;
  v20 = 0;
  if ( (v3 & 0x100) == 0 )
    return v2;
  v6 = nullptr;
  if ( !get_tinfo_pdata() || (v7 = v20.m128i_i64[0]) == 0 || v20.m128i_i32[0] - 1 <= 2 )
  {
    v2 = 0;
    goto LABEL_17;
  }
  v8 = v20.m128i_i64[0] - 2;
  if ( *(_BYTE *)(v20.m128i_i64[0] - 2) == 116 && *(_BYTE *)(v20.m128i_i32[0] - 3) == 95 )
  {
    if ( v8 > 1 )
    {
      if ( v20.m128i_i64[1] < (unsigned __int64)v8 )
      {
        s1 = (char *)qvector_reserve();
        v6 = s1;
      }
      v20.m128i_i64[0] -= 2;
      v6[v7 - 3] = 0;
    }
    v6 = s1;
    v2 = validate_name();
    if ( (_BYTE)v2 && a1 )
    {
      v11 = *(char **)a1;
      v12 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = s1;
      v13 = _mm_loadu_si128(&v20);
      v6 = v11;
      v20.m128i_i64[1] = v12;
      *(__m128i *)(a1 + 8) = v13;
    }
    goto LABEL_17;
  }
  v9 = off_4D9720;
  while ( 1 )
  {
    if ( stristr() )
    {
      v10 = *v9;
      if ( !strcmp(nullptr, *v9) )
        v10 = v9[1];
    }
    else
    {
      if ( !stristr() )
        goto LABEL_11;
      v10 = v9[1];
      if ( !strcmp(nullptr, v10) )
        v10 = *v9;
    }
    if ( v10 )
      break;
LABEL_11:
    v9 += 2;
    if ( algn_4D97B0 == (_BYTE *)v9 )
    {
      v6 = nullptr;
      v2 = 0;
      goto LABEL_17;
    }
  }
  if ( a1 )
  {
    v14 = strlen(v10);
    v15 = v14;
    if ( !v14 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v6 = nullptr;
      v2 = 1;
      goto LABEL_17;
    }
    v16 = *(void **)a1;
    v17 = v14 + 1;
    if ( *(_QWORD *)(a1 + 16) < v14 + 1 )
    {
      v18 = qvector_reserve();
      *(_QWORD *)a1 = v18;
      v16 = (void *)v18;
    }
    *(_QWORD *)(a1 + 8) = v17;
    memmove(v16, v10, v15);
    *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
  }
  v6 = nullptr;
  v2 = 1;
LABEL_17:
  if ( v6 )
  {
    v20.m128i_i64[0] = 0;
    qfree();
  }
  return v2;
}

