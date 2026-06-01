__int64 __fastcall sub_3C6410(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-50h] BYREF
  __int128 v7; // [rsp+8h] [rbp-48h]
  __int64 v8; // [rsp+18h] [rbp-38h]
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  v6 = 0;
  v8 = 0;
  v7 = 0;
  v4 = sub_3C6160((__int64)&v6, a2, a3, a4);
  if ( (_BYTE)v4 )
    print_tinfo();
  clear_tinfo_t();
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v4;
}

