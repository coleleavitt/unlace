__int64 *__fastcall sub_14010(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rbx
  bool v9; // cc
  __m128i *v10; // rsi
  __m128i si128; // xmm0
  __int64 v13; // rax

  v8 = *a2;
  v9 = (unsigned __int64)(*a2)[2] <= 0x12;
  v10 = (__m128i *)**a2;
  if ( v9 )
  {
    v13 = qvector_reserve(v8, v10, 19, 1, a5, a6);
    *v8 = v13;
    v10 = (__m128i *)v13;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_19160);
  v8[1] = 19;
  v10[1].m128i_i16[0] = 25710;
  *v10 = si128;
  *(_BYTE *)(*v8 + 18) = 0;
  return sub_13580(
           *a2 + 3,
           (__int64)"0x%08llX",
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 112LL) + 624LL)
                     + 8LL * *(int *)(**(_QWORD **)(a1 + 192) + 4 * a5)));
}

