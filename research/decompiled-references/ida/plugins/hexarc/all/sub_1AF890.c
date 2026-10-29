__int64 sub_1AF890(_QWORD *a1, int a2, __int64 a3, ...)
{
  size_t v4; // rbp
  unsigned int v5; // eax
  unsigned int v6; // r12d
  void *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rdi
  __int64 v13; // rax
  void *s; // [rsp+0h] [rbp-118h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-110h]
  gcc_va_list va; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-E0h]

  v17 = __readfsqword(0x28u);
  s = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 > 0 )
  {
    s = (void *)qvector_reserve();
    n[0] = a2 + 1LL;
    *((_BYTE *)s + a2) = 0;
    memset(s, 32, a2);
  }
  va_start(va, a3);
  sub_F4350((__int64 *)&s);
  v4 = n[0];
  if ( n[0] <= 1 )
  {
    v6 = 0;
    v7 = nullptr;
    if ( !n[0] )
      goto LABEL_5;
  }
  else
  {
    v5 = tag_remove();
    v4 = n[0];
    v6 = v5;
    v7 = nullptr;
    if ( !n[0] )
      goto LABEL_5;
  }
  v7 = (void *)qalloc_or_throw();
  memcpy(v7, s, v4);
LABEL_5:
  v8 = a1[6];
  v9 = a1[5];
  if ( a1[7] < (unsigned __int64)(v8 + 1) )
  {
    v13 = qvector_reserve();
    a1[5] = v13;
    v8 = a1[6];
    v9 = v13;
  }
  v10 = v9 + 24 * v8;
  *(_QWORD *)v10 = v7;
  v11 = s;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  ++a1[6];
  if ( v11 )
  {
    n[0] = 0;
    qfree();
  }
  return v6;
}

