bool __fastcall sub_10DE0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rsi
  bool result; // al
  bool v7; // [rsp+Fh] [rbp-459h]
  __int64 v8; // [rsp+10h] [rbp-458h] BYREF
  __int128 v9; // [rsp+18h] [rbp-450h]
  char v10[1032]; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int64 v11; // [rsp+438h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( !strncmp((const char *)a3, "__T0", 4u)
    || *(_BYTE *)a3 == 95 && *(_BYTE *)(a3 + 1) == 36 && *(_BYTE *)(a3 + 2) == 115 )
  {
    v5 = a3 + 1;
  }
  else
  {
    v5 = a3;
  }
  if ( !sub_1C020(a1 + 136, v5, v10, 1024) || (unsigned __int8)dirtree_mkdir(*a2, v10) > 1u )
    return 0;
  v9 = 0;
  v8 = 0;
  sub_10D20(&v8, (__int64)"%s/%s", v10, (const char *)a3);
  result = (unsigned __int8)dirtree_rename(*a2, a3, v8) == 0;
  if ( v8 )
  {
    v7 = result;
    *(_QWORD *)&v9 = 0;
    qfree(v8);
    return v7;
  }
  return result;
}

