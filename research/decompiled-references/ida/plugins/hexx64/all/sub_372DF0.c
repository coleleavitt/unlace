__int64 __fastcall sub_372DF0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v2)(); // rbx
  int v4; // eax
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-A8h] BYREF
  int v6; // [rsp+8h] [rbp-A0h]
  __int64 v7; // [rsp+10h] [rbp-98h]
  __int128 v8; // [rsp+18h] [rbp-90h]
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int128 v10; // [rsp+30h] [rbp-78h]
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-68h]
  int v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  __int128 v14; // [rsp+58h] [rbp-50h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  __int128 v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+80h] [rbp-28h]
  unsigned __int64 v18; // [rsp+88h] [rbp-20h]

  LODWORD(v2) = 1;
  v18 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v2 = &v5;
    v17 = a2;
    v6 = 0;
    v7 = 0;
    v9 = 0;
    v5 = off_4E6248;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v11 = (__int64 (__fastcall **)())&off_4E6208;
    v8 = 0;
    v10 = 0;
    v14 = 0;
    v16 = 0;
    v4 = sub_255A80((__int64 *)&v5, a1 + 16, 0, 0.0);
    v5 = off_4E6248;
    v11 = off_4DBCF8;
    LOBYTE(v2) = v4 == 0;
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    v5 = off_4DBCF8;
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9);
    }
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v7);
    }
  }
  return (unsigned int)v2;
}

