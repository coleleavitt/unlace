__int64 __fastcall sub_977B0(__int64 a1, bool *a2, __int64 *a3)
{
  int v4; // edx
  bool v5; // al
  __m128i v6; // kr00_16
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 32);
  v8 = 0;
  v5 = sub_945B0(a3, &v8, v4);
  v6 = v8;
  if ( v5 )
    *a2 = sub_97360(a3, v8.m128i_i64);
  if ( v6.m128i_i64[0] )
  {
    if ( !v6.m128i_i64[1] )
    {
      if ( !under_debugger )
        interr(30458);
      BUG();
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v6.m128i_i64[1] + 88) + 480LL))(
      *(_QWORD *)(v6.m128i_i64[1] + 160),
      v6.m128i_i64[0],
      10);
  }
  LOBYTE(a3) = v6.m128i_i64[0] != 0;
  return (unsigned int)a3;
}
