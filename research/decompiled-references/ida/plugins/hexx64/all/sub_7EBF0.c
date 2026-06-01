unsigned __int64 __fastcall sub_7EBF0(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __int64 v8; // rdi
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  __m128i v12; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)a1 = sub_7CFC0((__int64)a2, 0, a3);
  if ( *a2 >= a2[1] )
    sub_7A510(a3);
  *(_DWORD *)(a1 + 8) = unpack_dd();
  sub_7D150((__int64)&v11, a2, a3);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v11;
  v11 = 0;
  v6 = _mm_loadu_si128(&v12);
  v12 = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v10 = v6;
    qfree(v4);
    v7 = _mm_load_si128(&v10);
    v8 = v11;
    *(_QWORD *)(a1 + 16) = v5;
    *(__m128i *)(a1 + 24) = v7;
    if ( v8 )
    {
      v12.m128i_i64[0] = 0;
      qfree(v8);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v5;
    *(__m128i *)(a1 + 24) = v6;
  }
  return v13 - __readfsqword(0x28u);
}

