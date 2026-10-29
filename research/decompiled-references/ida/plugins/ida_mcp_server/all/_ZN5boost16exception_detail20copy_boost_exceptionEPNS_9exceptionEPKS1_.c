unsigned __int64 __fastcall boost::exception_detail::copy_boost_exception(
        __m128i *this,
        __m128i *a2,
        const exception *a3)
{
  char *v4; // rbx
  const __m128i *v5; // r12
  __m128i v6; // xmm0
  __int64 v7; // rdi
  char *v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v4 = (char *)a2->m128i_i64[1];
  v10 = __readfsqword(0x28u);
  v5 = a2;
  if ( v4 )
  {
    a2 = (__m128i *)v4;
    (*(void (__fastcall **)(char **, char *, const exception *))(*(_QWORD *)v4 + 40LL))(&v9, v4, a3);
    v4 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 24LL))(v9);
      if ( v9 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 32LL))(v9);
    }
  }
  v6 = _mm_loadu_si128(v5 + 1);
  v7 = this->m128i_i64[1];
  *((_QWORD *)this + 4) = v5[2].m128i_i64[0];
  *(this + 1) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64, __m128i *, const exception *))(*(_QWORD *)v7 + 32LL))(v7, a2, a3);
  this->m128i_i64[1] = (__int64)v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(char *, __m128i *, const exception *))(*(_QWORD *)v4 + 24LL))(v4, a2, a3);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 32LL))(v4);
  }
  return v10 - __readfsqword(0x28u);
}

