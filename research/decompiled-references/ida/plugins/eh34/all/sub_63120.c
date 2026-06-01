__int64 __fastcall sub_63120(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __m128i v7; // xmm0
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __m128i v10; // [rsp+8h] [rbp-60h] BYREF
  char v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  sub_62FD0((__int64)&v9, a2, a4);
  if ( v11 || (sub_24980(&v9, a2 + 88, a5, a3, a2 + 224, *(_QWORD *)(a2 + 216) + 240LL), v11) )
  {
    *(_QWORD *)a1 = v9;
    v7 = _mm_loadu_si128(&v10);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v7;
  }
  else
  {
    sub_256E0(a2 + 64, (_QWORD *)(a2 + 224));
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}

