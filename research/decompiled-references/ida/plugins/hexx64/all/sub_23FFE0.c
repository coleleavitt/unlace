__int64 __fastcall sub_23FFE0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-78h] BYREF
  int v4; // [rsp+8h] [rbp-70h]
  __int64 v5; // [rsp+10h] [rbp-68h]
  __int128 v6; // [rsp+18h] [rbp-60h]
  __int64 v7; // [rsp+28h] [rbp-50h]
  __int128 v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+40h] [rbp-38h]
  unsigned int v10; // [rsp+48h] [rbp-30h]
  unsigned __int64 v11; // [rsp+58h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v9 = a1;
  v4 = 0;
  v5 = 0;
  v7 = 0;
  v3 = (__int64 (__fastcall **)())&off_4DFA18;
  v10 = 0;
  v6 = 0;
  v8 = 0;
  sub_255A80((__int64 *)&v3, a1 + 16, 0);
  v1 = v10;
  v3 = off_4DBCF8;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v1;
}

