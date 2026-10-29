__int64 __fastcall sub_665D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __m128i v7; // xmm0
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  __m128i v10; // [rsp+8h] [rbp-50h] BYREF
  char v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v5 = a2[59];
  v12 = __readfsqword(0x28u);
  v5 += 296;
  a2[27] = v5;
  a2[15] = v5;
  sub_663D0((__int64)&v9, a2, a3, a4, a5);
  if ( v11 || (sub_63120((__int64)&v9, (__int64)a2, a3, (__int64 *)(a2[59] + 208LL), a2[59] + 40LL), v11) )
  {
    *(_QWORD *)a1 = v9;
    v7 = _mm_loadu_si128(&v10);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v7;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}

