unsigned __int64 __fastcall sub_69FC0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 i; // r15
  size_t v4; // rax
  __int64 v5; // rbx
  __int64 j; // rbp
  __int64 v7; // r14
  size_t v8; // rax
  size_t v9; // r15
  const void *v10; // r14
  size_t v11; // rax
  _BYTE v13[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v14[0] = __readfsqword(0x28u);
  sub_69D50(a2);
  v2 = a1[3];
  sub_69D50(a2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = sub_196CD0(v13, v14) - (_QWORD)v13;
      if ( v4 )
        sub_67AC0(a2, v13, v4);
    }
  }
  v5 = a1[6];
  sub_69D50(a2);
  if ( v5 )
  {
    for ( j = 0; j != v5; ++j )
    {
      v7 = a1[5] + 32 * j;
      v8 = sub_196CD0(v13, v14) - (_QWORD)v13;
      if ( v8 )
        sub_67AC0(a2, v13, v8);
      v9 = *(_QWORD *)(v7 + 16);
      v10 = *(const void **)(v7 + 8);
      if ( v9 > 0xFFFFFFFF )
      {
        if ( !unk_2439A0 )
          sub_198E10(5);
        BUG();
      }
      v11 = sub_196CD0(v13, v14) - (_QWORD)v13;
      if ( v11 )
        sub_67AC0(a2, v13, v11);
      if ( v9 )
        sub_67AC0(a2, v10, v9);
    }
  }
  return v14[0] - __readfsqword(0x28u);
}
