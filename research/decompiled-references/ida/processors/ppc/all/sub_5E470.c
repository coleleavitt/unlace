unsigned __int64 __fastcall sub_5E470(__int64 a1)
{
  __m128i *v2; // rax
  const char *v3; // rsi
  _BYTE *v4; // rdi
  size_t v5; // rbx
  const char *v6; // rsi
  void *v8; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  void *v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  unsigned __int64 v16; // [rsp+58h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v2 = (__m128i *)qvector_reserve(&src, 0, 19, 1);
  src = v2;
  v3 = (_BYTE *)(&stru_6360 + 9);
  n[0] = 19;
  *v2 = _mm_load_si128((const __m128i *)&xmmword_77FD0);
  v4 = src;
  v11 = a1;
  v5 = n[0];
  v2[1].m128i_i16[0] = 25449;
  v12 = nullptr;
  v4[18] = 0;
  v13 = 0;
  if ( v5 )
  {
    v8 = (void *)qalloc_or_throw(v5);
    v3 = (const char *)src;
    v12 = v8;
    *((_QWORD *)&v13 + 1) = v5;
    memcpy(v8, src, v5);
    *(_QWORD *)&v13 = v5;
    v4 = src;
  }
  v15 = 3;
  v14 = 0x2FFFFFFFFLL;
  if ( v4 )
  {
    n[0] = 0;
    qfree(v4, v3);
  }
  if ( !(_BYTE)byte_959F8 && __cxa_guard_acquire(&byte_959F8) )
  {
    qword_95A20 = 8;
    dword_95A28 = 256;
    xmmword_95A00 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_94B70),
                                (__m128i)(unsigned __int64)"ppc");
    xmmword_95A10 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_94B78),
                                (__m128i)(unsigned __int64)&off_94920);
    __cxa_atexit(nullsub_13, &xmmword_95A00, &off_842E0);
    __cxa_guard_release(&byte_959F8);
  }
  v6 = (const char *)(unsigned int)dword_959F0;
  create_std_modmerge_handlers(&v11, (unsigned int)dword_959F0, &xmmword_95A00, &off_95880, 4);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, v6);
  }
  return v16 - __readfsqword(0x28u);
}

