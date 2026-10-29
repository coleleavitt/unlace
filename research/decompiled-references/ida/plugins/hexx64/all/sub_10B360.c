unsigned __int64 __fastcall sub_10B360(__m128i *a1, _QWORD *a2, const __m128i *a3, char a4, double a5)
{
  __int8 v8; // al
  const __m128i *v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (a4 & 2) != 0 )
  {
    v8 = a3->m128i_i8[8];
    if ( v8 == 1 )
      goto LABEL_5;
    if ( v8 != 5 )
      sub_101D30(a5);
    if ( (unsigned __int8)sub_1026C0(a2, a3->m128i_i64[0], 1u) )
      goto LABEL_5;
  }
  if ( (a4 & 4) != 0 && a3->m128i_i8[8] == 5 )
  {
LABEL_5:
    v9 = a3;
    sub_10B0E0(a1, (__int64)a3, &v9);
  }
  return v10 - __readfsqword(0x28u);
}

