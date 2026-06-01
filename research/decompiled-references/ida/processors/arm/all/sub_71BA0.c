__int64 __fastcall sub_71BA0(__m128i *a1)
{
  if ( !*(_BYTE *)(a1[54].m128i_i64[0] + 1) )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  if ( (unsigned __int8)sub_71760(a1, 1, 0) || !(unsigned __int8)sub_711D0((__int64)a1, 1) )
    return 0;
  return sub_71870(a1);
}
