__int64 __fastcall sub_15060(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __m128i v4; // xmm1
  __m128i v5; // xmm1
  __int64 v6; // rdi
  __m128i v8; // [rsp+0h] [rbp-1058h] BYREF
  __int64 v9; // [rsp+10h] [rbp-1048h] BYREF
  __m128i v10; // [rsp+18h] [rbp-1040h] BYREF
  char v11[4104]; // [rsp+30h] [rbp-1028h] BYREF
  unsigned __int64 v12; // [rsp+1038h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  qmakepath();
  sub_14D30((__int64)&v9, v11);
  v2 = *a2;
  v3 = v9;
  v9 = 0;
  v4 = _mm_loadu_si128(&v10);
  v10 = 0;
  if ( v2 )
  {
    a2[1] = 0;
    v8 = v4;
    qfree();
    v5 = _mm_load_si128(&v8);
    v6 = v9;
    *a2 = v3;
    *(__m128i *)(a2 + 1) = v5;
    if ( v6 )
    {
      v10.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *a2 = v3;
    *(__m128i *)(a2 + 1) = v4;
  }
  return 1;
}

