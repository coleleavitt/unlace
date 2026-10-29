__int64 *__fastcall sub_1CDD0(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v16 = _mm_loadu_si128(a3);
  v17 = a3[1].m128i_i64[0];
  v7 = (int)qvsnprintf(0, 0, a2, a3, a5, a6);
  if ( (_DWORD)v7 )
  {
    v10 = (int)v7 + 1LL;
    v11 = *a1;
    v12 = (a1[1] == 0) + a1[1] - 1;
    v13 = (a1[1] == 0) + a1[1] + (int)v7;
    if ( a1[2] < v13 )
    {
      v15 = qvector_reserve(a1, v11, (a1[1] == 0) + a1[1] + v7, 1);
      *a1 = v15;
      v11 = v15;
    }
    a1[1] = v13;
    qvsnprintf(v11 + v12, v10, a2, &v16, v8, v9);
  }
  return a1;
}
