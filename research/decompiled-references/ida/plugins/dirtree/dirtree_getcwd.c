unsigned __int64 __fastcall dirtree_getcwd(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  void *v4; // rbp
  __m128i v5; // xmm1
  void *v6; // rdi
  __m128i v7; // xmm1
  void *v8; // rdi
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v12; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 96);
  v13 = __readfsqword(0x28u);
  sub_774470(&ptr, a2, v2, 0);
  v4 = ptr;
  v5 = _mm_loadu_si128(&v12);
  ptr = 0;
  v12 = 0;
  v6 = *(void **)a1;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v10 = v5;
    qfree(v6);
    v7 = _mm_load_si128(&v10);
    v8 = ptr;
    *(_QWORD *)a1 = v4;
    *(__m128i *)(a1 + 8) = v7;
    if ( v8 )
    {
      v12.m128i_i64[0] = 0;
      qfree(v8);
    }
  }
  else
  {
    *(_QWORD *)a1 = v4;
    *(__m128i *)(a1 + 8) = v5;
  }
  return v13 - __readfsqword(0x28u);
}
