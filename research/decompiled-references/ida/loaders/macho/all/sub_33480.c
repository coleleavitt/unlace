__int64 __fastcall sub_33480(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  __m128i v11; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  result = 0;
  if ( !*(_QWORD *)(a1 + 752) )
    return 0;
  v3 = *(_QWORD *)(a1 + 824);
  if ( v3 )
  {
    a2[3] = v3;
    *((_BYTE *)a2 + 32) = 0;
    sub_33300(
      &v10,
      *(_QWORD *)(a1 + 752),
      *(_QWORD *)(a1 + 808),
      0,
      *(_QWORD *)(a1 + 816),
      *(_BYTE *)(a1 + 773),
      *(_BYTE *)(a1 + 772));
    v4 = *a2;
    v5 = v10;
    v10 = 0;
    v6 = _mm_loadu_si128(&v11);
    v11 = 0;
    if ( v4 )
    {
      a2[1] = 0;
      v9 = v6;
      qfree();
      v7 = _mm_load_si128(&v9);
      v8 = v10;
      *a2 = v5;
      *(__m128i *)(a2 + 1) = v7;
      if ( v8 )
      {
        v11.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      *a2 = v5;
      *(__m128i *)(a2 + 1) = v6;
    }
    return 1;
  }
  return result;
}

