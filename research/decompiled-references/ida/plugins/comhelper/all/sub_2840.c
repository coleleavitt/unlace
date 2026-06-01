__int64 __fastcall sub_2840(_QWORD *a1, __int64 *a2)
{
  void *v4; // rsi
  unsigned int v5; // ebx
  size_t v7; // rax
  size_t v8; // r12
  __m128i v9; // xmm0
  size_t v10; // r14
  void *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  void *v15; // rdi
  size_t v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 v19; // [rsp+Eh] [rbp-4AAh]
  unsigned __int8 v20; // [rsp+Fh] [rbp-4A9h]
  unsigned __int8 v21; // [rsp+10h] [rbp-4A8h]
  unsigned __int8 v22; // [rsp+14h] [rbp-4A4h]
  unsigned __int8 v23; // [rsp+18h] [rbp-4A0h]
  unsigned __int8 v24; // [rsp+1Ch] [rbp-49Ch]
  unsigned __int8 v25; // [rsp+20h] [rbp-498h]
  unsigned __int8 v26; // [rsp+24h] [rbp-494h]
  __m128i v27; // [rsp+28h] [rbp-490h] BYREF
  void *dest; // [rsp+38h] [rbp-480h]
  size_t n[3]; // [rsp+40h] [rbp-478h]
  __m128i v30[3]; // [rsp+58h] [rbp-460h] BYREF
  char s[1032]; // [rsp+88h] [rbp-430h] BYREF
  unsigned __int64 v32; // [rsp+490h] [rbp-28h]

  v32 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  dest = nullptr;
  if ( (unsigned int)qsscanf() != 11 )
  {
    v4 = (void *)*a2;
    if ( (unsigned __int64)a2[2] <= 0xC )
    {
      v17 = qvector_reserve();
      *a2 = v17;
      v4 = (void *)v17;
    }
    v5 = 0;
    a2[1] = 13;
    qmemcpy(v4, "syntax error", 12);
    *(_BYTE *)(*a2 + 12) = 0;
    goto LABEL_5;
  }
  v27.m128i_i64[1] = v20
                   | ((v19
                     | ((v21 | ((v22 | ((v23 | ((v24 | ((v25 | ((unsigned __int64)v26 << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  v7 = strlen(s);
  v8 = v7;
  if ( v7 )
  {
    v15 = dest;
    v16 = v7 + 1;
    if ( n[1] < v7 + 1 )
    {
      dest = (void *)qvector_reserve();
      v15 = dest;
    }
    n[0] = v16;
    memmove(v15, s, v8);
    *((_BYTE *)dest + v8) = 0;
    v10 = n[0];
    v30[0] = _mm_load_si128(&v27);
    if ( n[0] )
    {
      v11 = (void *)qalloc_or_throw();
      memcpy(v11, dest, v10);
      goto LABEL_11;
    }
  }
  else
  {
    v9 = _mm_load_si128(&v27);
    n[0] = 0;
    v30[0] = v9;
  }
  v10 = 0;
  v11 = nullptr;
LABEL_11:
  v12 = a1[15];
  v13 = a1[14];
  if ( a1[16] < (unsigned __int64)(v12 + 1) )
  {
    v18 = qvector_reserve();
    a1[14] = v18;
    v12 = a1[15];
    v13 = v18;
  }
  v14 = v13 + 40 * v12;
  *(__m128i *)v14 = _mm_load_si128(v30);
  *(_QWORD *)(v14 + 16) = v11;
  *(__m128i *)(v14 + 24) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  ++a1[15];
  v5 = 1;
LABEL_5:
  if ( dest )
  {
    n[0] = 0;
    qfree();
  }
  return v5;
}

