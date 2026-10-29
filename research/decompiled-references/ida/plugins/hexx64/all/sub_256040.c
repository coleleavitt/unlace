__int64 __fastcall sub_256040(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-C8h] BYREF
  int v6; // [rsp+8h] [rbp-C0h]
  __int64 v7; // [rsp+10h] [rbp-B8h]
  __int128 v8; // [rsp+18h] [rbp-B0h]
  __int64 v9; // [rsp+28h] [rbp-A0h]
  __int128 v10; // [rsp+30h] [rbp-98h]
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-88h] BYREF
  int v12; // [rsp+48h] [rbp-80h]
  __int64 v13; // [rsp+50h] [rbp-78h]
  __int128 v14; // [rsp+58h] [rbp-70h]
  __int64 v15; // [rsp+68h] [rbp-60h]
  __int128 v16; // [rsp+70h] [rbp-58h]
  unsigned __int64 v17; // [rsp+88h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  sub_283C90(a1, 1);
  sub_284A90(a1);
  v1 = sub_270860(a1);
  if ( (_BYTE)v1 )
  {
    sub_284DF0(a1, 0);
    sub_283C90(a1, 0);
    v5 = (__int64 (__fastcall **)())&off_4DFB58;
    v6 = 0;
    v7 = 0;
    v9 = 0;
    v8 = 0;
    v10 = 0;
    sub_255A80((__int64 *)&v5, a1 + 16, 0, 0.0);
    sub_255F70(a1);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(v3 + 432);
    if ( 104LL * *(_QWORD *)(v3 + 440) )
    {
      do
      {
        *(_DWORD *)(v4 + 24) &= ~1u;
        v4 += 104;
      }
      while ( v4 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * *(_QWORD *)(*(_QWORD *)(a1 + 8) + 440LL) );
    }
    v12 = 0;
    v13 = 0;
    v15 = 0;
    v11 = (__int64 (__fastcall **)())&off_4DFB98;
    v14 = 0;
    v16 = 0;
    sub_255A80((__int64 *)&v11, a1 + 16, 0, 0.0);
    v11 = off_4DBCF8;
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
  return v1;
}

