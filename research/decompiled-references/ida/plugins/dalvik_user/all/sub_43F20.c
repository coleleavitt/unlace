__int64 __fastcall sub_43F20(__int64 a1, char a2, unsigned __int64 a3)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 56) = a2;
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64((__m128i)a3, (__m128i)a3);
  result = qalloc();
  *(_QWORD *)a1 = result;
  if ( !result )
    sub_43DF0((__int64)"JDWP encoder");
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}

