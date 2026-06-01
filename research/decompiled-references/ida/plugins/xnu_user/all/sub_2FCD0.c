unsigned __int64 __fastcall sub_2FCD0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  __int64 v5; // rdi
  __int64 v6; // rbp
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  __int64 v9; // rdi
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __m128i v13; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = src;
  v3 = *(_QWORD *)(a2 + 8) == 0;
  v14 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)a2;
  sub_2F0B0((__int64)&v12, v2);
  v5 = *(_QWORD *)(a1 + 80);
  v6 = v12;
  v12 = 0;
  v7 = _mm_loadu_si128(&v13);
  v13 = 0;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 88) = 0;
    v11 = v7;
    qfree();
    v8 = _mm_load_si128(&v11);
    v9 = v12;
    *(_QWORD *)(a1 + 80) = v6;
    *(__m128i *)(a1 + 88) = v8;
    if ( v9 )
    {
      v13.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(a1 + 80) = v6;
    *(__m128i *)(a1 + 88) = v7;
  }
  return v14 - __readfsqword(0x28u);
}

