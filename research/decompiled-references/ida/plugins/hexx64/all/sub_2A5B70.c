__int64 __fastcall sub_2A5B70(unsigned int *a1, __int64 a2, __m128 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __m128i *v5; // rax
  __int64 result; // rax

  v3 = (_QWORD *)operator new(0x10u);
  *v3 = 3;
  v4 = v3;
  v3[1] = 0;
  v5 = (__m128i *)qalloc();
  if ( !v5 )
    sub_4D462();
  v5->m128i_i64[0] = 0;
  v5->m128i_i64[1] = 0;
  v4[1] = v5;
  sub_2A5950(v5, nullptr, a1, a3);
  sub_29EDB0((__int64)a1, a2, v4, *(double *)a3.m128_u64);
  result = sub_29C0C0((__int64)a1, *(_QWORD *)(a2 + 96), *(double *)a3.m128_u64);
  a1[1] = result;
  return result;
}

