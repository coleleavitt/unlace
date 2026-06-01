__int64 __fastcall sub_27DEB0(__int64 a1)
{
  int v1; // eax
  __int64 (__fastcall ***v2)(); // rbx
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-68h] BYREF
  int v5; // [rsp+8h] [rbp-60h]
  __int64 v6; // [rsp+10h] [rbp-58h]
  __int128 v7; // [rsp+18h] [rbp-50h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v5 = 0;
  v2 = &v4;
  v6 = 0;
  v8 = 0;
  v4 = (__int64 (__fastcall **)())&off_4AD2F8;
  v7 = 0;
  v9 = 0;
  v1 = sub_24E700((__int64 *)&v4, a1, 0);
  v4 = off_4A8538;
  LOBYTE(v2) = v1 != 0;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return (unsigned int)v2;
}

