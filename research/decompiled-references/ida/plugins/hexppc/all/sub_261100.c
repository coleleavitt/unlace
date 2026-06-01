__int64 __fastcall sub_261100(__int64 a1, __int64 a2, __int64 a3, signed int a4)
{
  __int64 v4; // rbp
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  sub_260DA0(&v6, a1, a4);
  v4 = qstpncpy() - a2;
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v4;
}

