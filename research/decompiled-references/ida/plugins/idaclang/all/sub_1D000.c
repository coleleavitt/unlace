unsigned __int64 __fastcall sub_1D000(__int64 a1)
{
  void *v2; // rdi
  size_t v3; // rbx
  void *src; // [rsp+0h] [rbp-68h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-60h]
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  void *v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  unsigned __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  unsigned __int64 v12; // [rsp+58h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve(&src, 0, 17, 1);
  n[0] = 17;
  *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_223F0);
  v2 = src;
  v7 = a1;
  v3 = n[0];
  *((_BYTE *)src + 16) = 0;
  v8 = nullptr;
  v9 = 0;
  if ( v3 )
  {
    v8 = (void *)qalloc_or_throw(v3);
    *((_QWORD *)&v9 + 1) = v3;
    memcpy(v8, src, v3);
    *(_QWORD *)&v9 = v3;
    v2 = src;
  }
  v11 = 2;
  v10 = 0xFFFFFFFEFFFFFFFFLL;
  if ( v2 )
  {
    n[0] = 0;
    qfree(v2);
  }
  create_std_modmerge_handlers(&v7, (unsigned int)dword_29364, &xmmword_29380, 0, 0);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v12 - __readfsqword(0x28u);
}

