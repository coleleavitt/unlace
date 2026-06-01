__int64 __fastcall sub_9AEB0(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned int v4; // eax
  __m128i v5; // kr00_16
  unsigned int v6; // ebx
  __m128i v8; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  LOBYTE(v4) = sub_945B0(a3, &v8, 71);
  v5 = v8;
  v6 = v4;
  if ( (_BYTE)v4 )
    v6 = sub_9AB20(a3, a2);
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
  return v6;
}
