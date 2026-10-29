__int64 __fastcall sub_88260(_QWORD *a1, unsigned __int8 **a2, __m128i a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  __m128i v11; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  result = sub_87990((unsigned __int8 *)a1, (__int64)a2, a3);
  if ( (_BYTE)result )
  {
    a1[2] = sub_7CFC0((__int64)a2, 1u, *(double *)a3.m128i_i64);
    sub_7D2C0(a2, (_BYTE *)a1 + 24, *(double *)a3.m128i_i64);
    sub_7D150((__int64)&v10, a2, *(double *)a3.m128i_i64);
    v5 = a1[4];
    v6 = v10;
    v10 = 0;
    v7 = _mm_loadu_si128(&v11);
    v11 = 0;
    if ( v5 )
    {
      a1[5] = 0;
      v9 = v7;
      qfree(v5);
      v7 = _mm_load_si128(&v9);
      v8 = v10;
      a1[4] = v6;
      *(__m128i *)(a1 + 5) = v7;
      if ( v8 )
      {
        v11.m128i_i64[0] = 0;
        qfree(v8);
      }
    }
    else
    {
      a1[4] = v6;
      *(__m128i *)(a1 + 5) = v7;
    }
    result = extract_argloc();
    if ( !(_BYTE)result )
      sub_7A530(*(double *)v7.m128i_i64);
  }
  return result;
}

