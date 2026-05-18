_BOOL8 __fastcall sub_CE0B0(__int64 a1, int a2, __int64 a3)
{
  _BOOL8 result; // rax
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  int v5; // [rsp+8h] [rbp-50h]
  _QWORD v6[2]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 *v9; // [rsp+38h] [rbp-20h]
  unsigned __int64 v10; // [rsp+48h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v6[0] = 0;
  v6[1] = sub_CF570;
  v5 = a2;
  v7 = 0;
  v9 = &v4;
  v4 = a3;
  result = 1;
  if ( a1 )
  {
    sub_CDCD0((__int64)v6, a1);
    return WORD2(v8) == 0;
  }
  return result;
}
