__int64 __fastcall sub_13100(__int64 a1, const __m128i *a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  size_t v5; // rbx
  size_t v6; // r13

  v3 = 16 * a3;
  result = 0x7FFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  if ( v3 > 0x7FFFFFFFFFFFFFF0LL )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  v5 = v3;
  if ( v3 )
  {
    result = operator new(v3);
    v6 = result + v5;
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 16) = result + v5;
    if ( v5 == 16 )
      *(__m128i *)result = _mm_loadu_si128(a2);
    else
      result = (__int64)memcpy((void *)result, a2, v5);
    *(_QWORD *)(a1 + 8) = v6;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  return result;
}

