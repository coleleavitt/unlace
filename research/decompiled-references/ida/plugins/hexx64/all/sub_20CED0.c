__int64 __fastcall sub_20CED0(__int64 *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // edx
  const void *v6; // r12
  size_t v7; // rax
  size_t v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __m128i v11; // xmm0
  void *v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __m128i v16; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 8);
  v17 = __readfsqword(0x28u);
  if ( v2 == 68 )
  {
    if ( a1 )
    {
      v6 = *(const void **)(a2 + 24);
      if ( v6 && (v7 = strlen(*(const char **)(a2 + 24)), (v8 = v7) != 0) )
      {
        v12 = (void *)*a1;
        v13 = v7 + 1;
        if ( a1[2] < v7 + 1 )
        {
          v14 = qvector_reserve((__int64)a1, *a1, v7 + 1, 1);
          *a1 = v14;
          v12 = (void *)v14;
        }
        a1[1] = v13;
        memmove(v12, v6, v8);
        *(_BYTE *)(*a1 + v8) = 0;
      }
      else
      {
        a1[1] = 0;
      }
    }
    return 1;
  }
  v4 = 0;
  if ( v2 == 64 )
  {
    v15 = 0;
    v16 = 0;
    sub_263730(&v15);
    if ( v16.m128i_i64[0] > 1uLL )
      tag_remove();
    v9 = v15;
    if ( a1 )
    {
      v9 = *a1;
      v10 = a1[2];
      *a1 = v15;
      v11 = _mm_loadu_si128(&v16);
      v15 = v9;
      v16.m128i_i64[1] = v10;
      *(__m128i *)(a1 + 1) = v11;
    }
    if ( v9 )
    {
      v16.m128i_i64[0] = 0;
      qfree(v9);
    }
    return 1;
  }
  return v4;
}

