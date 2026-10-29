__int64 __fastcall sub_2FF30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebx
  _QWORD v10[4]; // [rsp+40h] [rbp-E8h] BYREF
  int v11; // [rsp+60h] [rbp-C8h]
  __int64 v12; // [rsp+68h] [rbp-C0h]
  __int128 v13; // [rsp+70h] [rbp-B8h]
  int v14; // [rsp+80h] [rbp-A8h]
  __int64 v15; // [rsp+88h] [rbp-A0h]
  __int128 v16; // [rsp+90h] [rbp-98h]
  __int64 v17; // [rsp+A0h] [rbp-88h]
  __int128 v18; // [rsp+A8h] [rbp-80h]
  __int64 v19; // [rsp+B8h] [rbp-70h]
  __int128 v20; // [rsp+C0h] [rbp-68h]
  int v21; // [rsp+D0h] [rbp-58h]
  __int128 v22; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v23; // [rsp+E8h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a3 != 0 && a2 != 0 && qlseek() == a2 && qlread() == 4 && qlseek() == a2 )
  {
    v10[0] = a4;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v10[1] = a5 + a4;
    v11 = 0;
    v10[2] = a2;
    v10[3] = a3;
    v13 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    sub_2FB80((__int64 *)(a1 + 648), (__int64)v10);
    v6 = 1;
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v6;
}

