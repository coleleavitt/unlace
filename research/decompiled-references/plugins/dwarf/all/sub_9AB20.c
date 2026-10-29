__int64 __fastcall sub_9AB20(__int64 *a1, __int64 *a2)
{
  unsigned int v2; // eax
  __m128i v3; // kr00_16
  unsigned int v4; // ebx
  unsigned int v6; // eax
  __m128i v7; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  LOBYTE(v2) = sub_945B0(a1, &v7, 71);
  v3 = v7;
  v4 = v2;
  if ( (_BYTE)v2 )
  {
    LOBYTE(v6) = sub_9AA50(a1, v7.m128i_i64, a2);
    v4 = v6;
  }
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
