__int64 __fastcall sub_5BBC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  size_t v5; // rax
  unsigned int v6; // ebx
  _QWORD v8[5]; // [rsp+10h] [rbp-3888h] BYREF
  __int64 v9; // [rsp+38h] [rbp-3860h]
  __int128 v10; // [rsp+40h] [rbp-3858h]
  char v11[4096]; // [rsp+850h] [rbp-3048h] BYREF
  char s[4096]; // [rsp+1850h] [rbp-2048h] BYREF
  unsigned __int64 v13; // [rsp+3858h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  qstrncpy();
  qsplitfile();
  qstrlwr();
  sub_58E50(a1, 1);
  sub_58A40();
  qstrlwr();
  if ( (unsigned int)sub_58CE0(a1, s, v11, 4096) )
  {
    sub_59130(a1);
    return 28;
  }
  else
  {
    v4 = qfopen();
    if ( v4 )
    {
      if ( (unsigned __int8)sub_591F0(a1, (__int64)v11) )
      {
        qstrncpy();
        qstrlwr();
        qbasename();
        qsplitfile();
        qsnprintf();
        v5 = strlen(s);
        v8[2] = s;
        v8[1] = &s[v5];
        v8[0] = v11;
        v8[3] = 4096 - v5;
        v9 = 0;
        v8[4] = a3;
        v10 = 0;
        qstrncpy();
        v6 = sub_5AC60(a1, v4, 1, (__int64)v8);
        qfclose();
        if ( v9 )
        {
          *(_QWORD *)&v10 = 0;
          qfree();
        }
      }
      else
      {
        v6 = 36;
        qfclose();
      }
    }
    else
    {
      sub_59130(a1);
      return 1;
    }
  }
  return v6;
}

