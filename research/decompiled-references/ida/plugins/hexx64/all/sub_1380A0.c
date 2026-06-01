unsigned __int64 __fastcall sub_1380A0(__int64 a1, int a2, __int64 a3, double a4, __m128 a5)
{
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) > a2 )
    return v8 - __readfsqword(0x28u);
  if ( (unsigned __int64)(a2 + a3) > 0xFFFF )
    return v8 - __readfsqword(0x28u);
  v7.m128i_i64[0] = a2;
  v7.m128i_i64[1] = a3;
  if ( (unsigned __int8)sub_317E70((_QWORD *)(a1 + 1160), &v7, 0) )
    return v8 - __readfsqword(0x28u);
  else
    return sub_137FB0(a1, a2, a3, a4, a5);
}

