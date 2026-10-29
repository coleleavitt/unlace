__int64 __fastcall sub_4D300(__int64 a1, __int64 a2, unsigned int a3)
{
  __m128i v4; // xmm0
  void *v5; // rbp
  __int64 v6; // rdi
  __int128 v8; // [rsp+10h] [rbp-78h] BYREF
  __int64 v9; // [rsp+20h] [rbp-68h]
  __int64 v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+30h] [rbp-58h] BYREF
  void *v12[2]; // [rsp+38h] [rbp-50h]
  _OWORD v13[2]; // [rsp+48h] [rbp-40h]
  unsigned __int64 v14; // [rsp+68h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v13[0] = 0;
  v9 = a2;
  v10 = a3;
  v8 = 0;
  *(_OWORD *)v12 = 0;
  v4 = _mm_loadu_si128((const __m128i *)((char *)&v8 + 12));
  v11 = 7;
  *(__m128i *)((char *)v13 + 12) = v4;
  sub_4CCA0((__int64 *)(a1 + 8), (unsigned __int64)&v11);
  if ( v11 == 6 )
  {
    v5 = v12[0];
    if ( v12[0] )
    {
      v6 = *(_QWORD *)v12[0];
      if ( *(_QWORD *)v12[0] )
      {
        *((_QWORD *)v12[0] + 1) = 0;
        qfree(v6);
      }
      operator delete(v5, 0x18u);
    }
  }
  return a1;
}

