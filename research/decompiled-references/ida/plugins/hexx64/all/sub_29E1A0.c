__int64 __fastcall sub_29E1A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 (__fastcall **v7)(); // [rsp+10h] [rbp-98h] BYREF
  int v8; // [rsp+18h] [rbp-90h]
  __int64 v9; // [rsp+20h] [rbp-88h]
  __int128 v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+38h] [rbp-70h]
  __int128 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  unsigned int v14; // [rsp+58h] [rbp-50h]
  unsigned __int64 v15; // [rsp+68h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v2 = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v13 = a2;
    v8 = 0;
    v7 = (__int64 (__fastcall **)())&off_4E0ED0;
    v9 = 0;
    v11 = 0;
    v14 = 0;
    v10 = 0;
    v12 = 0;
    sub_255A80((__int64 *)&v7, a1 + 16, 0, 0.0);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 440LL);
    if ( (int)v4 <= 0 )
    {
      v2 = v14;
    }
    else
    {
      v5 = 0;
      v6 = 104LL * (unsigned int)(v4 - 1);
      while ( 1 )
      {
        v14 += sub_32E220();
        v2 = v14;
        if ( v5 == v6 )
          break;
        v5 += 104;
      }
    }
    v7 = off_4DBCF8;
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9);
    }
  }
  return v2;
}

