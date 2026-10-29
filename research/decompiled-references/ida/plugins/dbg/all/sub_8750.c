__int64 __fastcall sub_8750(__int64 a1, unsigned __int16 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r14
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rbx

  v6 = a6;
  v8 = a5;
  v9 = sub_81F0(a1, a2, a3, a4, a5, a6);
  v10 = v9;
  if ( v9 == -1 )
    return v10;
  set_name(v9, a4, 1281);
  if ( !(unsigned __int8)sub_5AB0(v10, v8) )
    return v10;
  sub_4AD0(v10, v6);
  return v10;
}

