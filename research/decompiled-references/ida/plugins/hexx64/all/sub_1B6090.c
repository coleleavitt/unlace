__int64 sub_1B6090(_QWORD *a1, int a2, void *a3, ...)
{
  void *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  size_t v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // r12d
  void *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v17; // rax
  void *s; // [rsp+0h] [rbp-118h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-110h]
  gcc_va_list va; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-E0h]
  __int64 v22; // [rsp+58h] [rbp-C0h]

  va_start(va, a3);
  v22 = va_arg(va, _QWORD);
  va_end(va);
  v21 = __readfsqword(0x28u);
  s = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 > 0 )
  {
    s = (void *)qvector_reserve((__int64)&s, 0, a2 + 1LL, 1);
    n[0] = a2 + 1LL;
    *((_BYTE *)s + a2) = 0;
    memset(s, 32, a2);
  }
  v5 = a3;
  va_start(va, a3);
  sub_FAA10((__int64 *)&s);
  v8 = n[0];
  if ( n[0] <= 1 )
  {
    v10 = 0;
    v11 = nullptr;
    if ( !n[0] )
      goto LABEL_5;
  }
  else
  {
    v5 = s;
    v9 = tag_remove();
    v8 = n[0];
    v10 = v9;
    v11 = nullptr;
    if ( !n[0] )
      goto LABEL_5;
  }
  v11 = (void *)qalloc_or_throw(v8, (__int64)v5, v6, v7);
  memcpy(v11, s, v8);
LABEL_5:
  v12 = a1[6];
  v13 = a1[5];
  if ( a1[7] < (unsigned __int64)(v12 + 1) )
  {
    v17 = qvector_reserve((__int64)(a1 + 5), v13, v12 + 1, 24);
    a1[5] = v17;
    v12 = a1[6];
    v13 = v17;
  }
  v14 = v13 + 24 * v12;
  *(_QWORD *)v14 = v11;
  v15 = s;
  *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  ++a1[6];
  if ( v15 )
  {
    n[0] = 0;
    qfree((__int64)v15);
  }
  return v10;
}

