_BOOL8 __fastcall sub_CE2B0(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  _QWORD v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = a2;
  v6[0] = 0;
  v6[1] = sub_CF9D0;
  v4 = 0;
  v7 = 0;
  if ( a1 )
  {
    sub_CDCD0((__int64)v6, a1);
    v4 = WORD2(v8);
  }
  if ( !a3 )
    v4 &= ~2u;
  return v4 != 0;
}
