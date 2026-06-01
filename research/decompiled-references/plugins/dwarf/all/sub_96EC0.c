__int64 __fastcall sub_96EC0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __m128i v3; // kr00_16
  unsigned int v4; // ebx
  __m128i v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  sub_95870(a1, &v6, a3);
  v3 = v6;
  v4 = sub_96D10((__int64)a1, a2, v6.m128i_i64);
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
