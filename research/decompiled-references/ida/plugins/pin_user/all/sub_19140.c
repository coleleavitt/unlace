char __fastcall sub_19140(__int64 a1, __int64 *a2)
{
  char result; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  const char *v6; // rdx
  bool v7; // zf
  const char *v8; // rax
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  result = sub_18B00(a1, 7u, 0, 0);
  if ( !result )
    return result;
  *(_BYTE *)(a1 + 1289) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  v9[0] = 0;
  v5 = sub_26190(v4, v9, 8, 0xFFFFFFFFLL);
  if ( v5 <= 7 )
  {
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
      return 0;
    }
    v7 = *(_BYTE *)(a1 + 1289) == 0;
    *(_BYTE *)(a1 + 1288) = 1;
    if ( v7 && !*(_BYTE *)(a1 + 81) )
    {
      v8 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
      sub_BDA0((__int64)"Network error: %s\n", v8);
      return 0;
    }
    return 0;
  }
  if ( v5 != 8 )
    return 0;
  v6 = "?";
  if ( LODWORD(v9[0]) <= 0x1D )
    v6 = off_38B20[SLODWORD(v9[0])];
  sub_18640(a1, (__int64)"RECV %s\n", v6);
  if ( LODWORD(v9[0]) == 1 )
  {
    *(_BYTE *)(a1 + 1296) = 1;
    return 0;
  }
  else
  {
    if ( LODWORD(v9[0]) != 7 )
    {
      if ( LODWORD(v9[0]) && !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 1289) )
        sub_BDA0((__int64)"Error retrieving memory info from PIN side.\n");
      return 0;
    }
    return sub_18E90(a1, HIDWORD(v9[0]), a2);
  }
}

