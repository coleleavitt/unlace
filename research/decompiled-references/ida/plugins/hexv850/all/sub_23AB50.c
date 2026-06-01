__int64 __fastcall sub_23AB50(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-68h] BYREF
  int v4; // [rsp+8h] [rbp-60h]
  __int64 v5; // [rsp+10h] [rbp-58h]
  __int128 v6; // [rsp+18h] [rbp-50h]
  __int64 v7; // [rsp+28h] [rbp-40h]
  __int128 v8; // [rsp+30h] [rbp-38h]
  unsigned int v9; // [rsp+40h] [rbp-28h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  v7 = 0;
  v3 = (__int64 (__fastcall **)())&off_4B3378;
  v9 = 0;
  v6 = 0;
  v8 = 0;
  sub_2506C0(&v3, a1 + 16, 0);
  v1 = v9;
  v3 = off_4AF6D8;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v1;
}

