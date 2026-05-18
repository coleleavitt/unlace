unsigned __int64 __fastcall sub_6DEC0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // eax
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+18h] [rbp-40h]
  char v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v13 = a1;
  v12 = 1;
  v11 = 0;
  v8 = &off_236EA0;
  v9 = a2;
  v10 = a3;
  v3 = sub_196ED0(&v9, a3);
  v4 = v10;
  for ( LODWORD(v11) = v3; v9 < v10; v4 = v10 )
  {
    while ( 1 )
    {
      v5 = sub_196ED0(&v9, v4);
      if ( v12 == 1 || v5 )
        break;
      v6 = sub_196ED0(&v9, v10);
      v12 = 1;
      v4 = v10;
      v11 = v6;
      if ( v9 >= v10 )
        return v14 - __readfsqword(0x28u);
    }
    HIDWORD(v11) += v5;
    if ( (unsigned int)sub_6C9C0((unsigned __int64 *)&v8) )
      break;
    if ( v12 )
      v12 = 0;
  }
  return v14 - __readfsqword(0x28u);
}
