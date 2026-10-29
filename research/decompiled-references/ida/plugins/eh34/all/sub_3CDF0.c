__int64 __fastcall sub_3CDF0(__int64 a1, __int64 a2, __m128 *a3)
{
  bool v3; // zf
  char v6; // al
  __m128i v7; // xmm0
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __m128i v9; // [rsp+8h] [rbp-40h] BYREF
  char v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = *(_BYTE *)(a2 + 1985) == 0xFF;
  v11 = __readfsqword(0x28u);
  if ( v3 )
    goto LABEL_2;
  sub_6DFF0(a3);
  v6 = *(_BYTE *)(a2 + 1985);
  if ( v6 == 3 )
  {
    sub_F110((__int64)&v8, a2 + 48, a3);
    if ( v10 )
    {
LABEL_7:
      *(_QWORD *)a1 = v8;
      v7 = _mm_loadu_si128(&v9);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v7;
      return a1;
    }
  }
  else if ( v6 == 4 )
  {
    sub_66740(&v8, a2 + 1360, a3);
    if ( v10 )
      goto LABEL_7;
  }
LABEL_2:
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

