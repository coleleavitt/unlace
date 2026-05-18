unsigned __int64 __fastcall sub_70D30(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 i; // r15
  size_t v4; // rax
  __int64 v5; // r13
  __int64 j; // r15
  size_t v7; // rax
  _BYTE v9[5]; // [rsp+Eh] [rbp-4Ah] BYREF
  _BYTE v10[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v11[0] = __readfsqword(0x28u);
  sub_69D50(a2);
  sub_69D50(a2);
  v2 = a1[2];
  sub_69D50(a2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = sub_196E10(v9, v11, *(_QWORD *)(a1[1] + 8 * i)) - (_QWORD)v9;
      if ( v4 )
        sub_67AC0(a2, v9, v4);
    }
  }
  v5 = a1[5];
  sub_69D50(a2);
  if ( v5 )
  {
    for ( j = 0; j != v5; ++j )
    {
      v7 = sub_196CD0(v9, v10) - (_QWORD)v9;
      if ( v7 )
        sub_67AC0(a2, v9, v7);
    }
  }
  return v11[0] - __readfsqword(0x28u);
}
