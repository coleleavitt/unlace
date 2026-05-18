unsigned __int64 __fastcall sub_CE220(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v5; // [rsp+18h] [rbp-40h]
  __int64 v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]

  v2 = *(_BYTE *)(a1 + 292);
  *(_BYTE *)(a1 + 292) = 3;
  v7 = __readfsqword(0x28u);
  v5 = 0;
  v4[1] = sub_C4540;
  v6 = 0;
  v4[0] = a1;
  v4[2] = sub_DE260;
  if ( a2 )
    sub_CDCD0((__int64)v4, a2);
  result = __readfsqword(0x28u) ^ v7;
  *(_BYTE *)(a1 + 292) = v2;
  return result;
}
