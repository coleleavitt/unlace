unsigned __int64 __fastcall sub_137FB0(__int64 a1, int a2, __int64 a3, double a4, __m128 a5)
{
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) > a2 || (unsigned __int64)(a2 + a3) > 0xFFFF )
  {
    if ( !under_debugger )
      sub_383060(0xC4F4u, a4);
LABEL_9:
    BUG();
  }
  v7.m128i_i64[1] = a3;
  v7.m128i_i64[0] = a2;
  if ( (unsigned __int8)sub_317E70((_QWORD *)(a1 + 1160), &v7, 0) )
  {
    if ( !under_debugger )
      sub_383060(0xC842u, a4);
    goto LABEL_9;
  }
  v7.m128i_i64[0] = a2;
  v7.m128i_i64[1] = a3;
  sub_316BB0((__int64 *)(a1 + 1160), &v7, a4, a5);
  return v8 - __readfsqword(0x28u);
}

