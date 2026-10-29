__int64 *__fastcall sub_5B30(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+10h] [rbp-28h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v15 = _mm_loadu_si128(a3);
  v16 = a3[1].m128i_i64[0];
  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  v8 = (int)qvsnprintf(0, 0, a2, a3, a5, a6, v15.m128i_i64[0], v15.m128i_i64[1], v16, v17);
  if ( (_DWORD)v8 )
  {
    v11 = *a1;
    v12 = (int)v8 + 1LL;
    if ( a1[2] < v12 )
    {
      v14 = qvector_reserve(a1, *a1, v8 + 1, 1);
      *a1 = v14;
      v11 = v14;
    }
    a1[1] = v12;
    ((void (__fastcall *)(__int64, unsigned __int64, __int64, __m128i *, __int64, __int64))qvsnprintf)(
      v11,
      v12,
      a2,
      &v15,
      v9,
      v10);
  }
  return a1;
}

