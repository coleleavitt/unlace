unsigned __int64 __fastcall sub_67A00(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-38h] BYREF
  __int128 v3; // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  sub_15ED0(&v2);
  sub_65730(a1, &v2);
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return v4 - __readfsqword(0x28u);
}

