unsigned __int64 __fastcall sub_94760(__int64 *a1, int a2, __int64 a3)
{
  bool v4; // al
  __m128i v5; // kr00_16
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  v4 = sub_945B0(a1, &v7, a2);
  v5 = v7;
  if ( v4 )
    sub_8A9B0((__int64)a1, v7.m128i_i64, a3);
  if ( v5.m128i_i64[0] )
  {
    if ( !v5.m128i_i64[1] )
    {
      if ( !under_debugger )
        interr(30458);
      BUG();
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v5.m128i_i64[1] + 88) + 480LL))(
      *(_QWORD *)(v5.m128i_i64[1] + 160),
      v5.m128i_i64[0],
      10);
  }
  return v8 - __readfsqword(0x28u);
}

