unsigned __int64 __fastcall dirtree_get_entry_attrs(__int64 a1)
{
  void *v2; // rbp
  __m128i v3; // xmm1
  void *v4; // rdi
  __m128i v5; // xmm1
  void *v6; // rdi
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v10; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_77C2B0(&ptr);
  v2 = ptr;
  v3 = _mm_loadu_si128(&v10);
  ptr = 0;
  v10 = 0;
  v4 = *(void **)a1;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v8 = v3;
    qfree(v4);
    v5 = _mm_load_si128(&v8);
    v6 = ptr;
    *(_QWORD *)a1 = v2;
    *(__m128i *)(a1 + 8) = v5;
    if ( v6 )
    {
      v10.m128i_i64[0] = 0;
      qfree(v6);
    }
  }
  else
  {
    *(_QWORD *)a1 = v2;
    *(__m128i *)(a1 + 8) = v3;
  }
  return v11 - __readfsqword(0x28u);
}
