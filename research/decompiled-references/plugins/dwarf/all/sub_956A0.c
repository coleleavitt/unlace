__int64 __fastcall sub_956A0(__int64 *a1, unsigned __int16 a2)
{
  bool v2; // al
  __m128i v3; // kr00_16
  __int64 v4; // rbx
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  v2 = sub_945B0(a1, &v6, a2);
  v3 = v6;
  if ( v2 && (unsigned __int16)sub_872B0((__int64)a1, &v6) == 7969 )
    v4 = sub_95540(a1, v6.m128i_i64);
  else
    v4 = 0;
  if ( v3.m128i_i64[0] )
  {
    if ( !v3.m128i_i64[1] )
    {
      if ( !under_debugger )
        interr(30458);
      BUG();
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v3.m128i_i64[1] + 88) + 480LL))(
      *(_QWORD *)(v3.m128i_i64[1] + 160),
      v3.m128i_i64[0],
      10);
  }
  return v4;
}
