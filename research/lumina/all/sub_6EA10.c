unsigned __int64 __fastcall sub_6EA10(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  size_t v5; // rdx
  _QWORD *v6; // rbx
  size_t v7; // rax
  size_t v8; // rax
  const char *v9; // rsi
  __int64 v11; // [rsp+10h] [rbp-68h]
  _BYTE v12[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v13[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v13[0] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 24);
  v11 = v4;
  sub_69D50(a2);
  if ( v4 )
  {
    do
    {
      v6 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 160 * v3);
      v7 = sub_196E10(v12, v13, *v6) - (_QWORD)v12;
      if ( v7 )
        sub_67AC0(a2, v12, v7);
      v8 = sub_196E10(v12, v13, v6[1]) - (_QWORD)v12;
      if ( v8 )
        sub_67AC0(a2, v12, v8);
      v9 = s1;
      if ( v6[3] )
        v9 = (const char *)v6[2];
      if ( v9 )
      {
        v5 = strlen(v9) + 1;
      }
      else
      {
        v5 = 1;
        v9 = "";
      }
      ++v3;
      sub_67AC0(a2, v9, v5);
      sub_6E8A0((__int64)(v6 + 5), a2);
    }
    while ( v11 != v3 );
  }
  return sub_69D50(a2);
}
