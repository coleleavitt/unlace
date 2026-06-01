__int64 __fastcall sub_24F900(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  unsigned int v4; // ebx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-78h] BYREF
  int v7; // [rsp+8h] [rbp-70h]
  __int64 v8; // [rsp+10h] [rbp-68h]
  __int128 v9; // [rsp+18h] [rbp-60h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  unsigned __int64 v14; // [rsp+58h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a1 == a3 )
  {
    return 0;
  }
  else
  {
    v12 = a2;
    v4 = a2;
    v13 = a3;
    v9 = 0;
    v7 = 2;
    v8 = 0;
    v10 = 0;
    v6 = (__int64 (__fastcall **)())&off_4AC498;
    v11 = 0;
    sub_24E700((__int64 *)&v6, a1, 0);
    v3 = *(_QWORD *)(a2 + 8) == 0;
    v6 = off_4A8538;
    LOBYTE(v4) = !v3;
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  return v4;
}

