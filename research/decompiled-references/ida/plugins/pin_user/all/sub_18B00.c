__int64 __fastcall sub_18B00(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  bool v8; // zf
  const char *v9; // rax
  unsigned __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1288) && !*(_BYTE *)(a1 + 1289) )
    return 0;
  v10 = 0;
  v11 = -1;
  if ( a2 > 0x1D )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 24);
  v11 = a3;
  v10 = __PAIR64__(a4, a2);
  v6 = sub_26290(v5, &v10, 16);
  if ( v6 <= 0xF )
  {
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
    }
    else
    {
      v8 = *(_BYTE *)(a1 + 1289) == 0;
      *(_BYTE *)(a1 + 1288) = 1;
      if ( v8 && !*(_BYTE *)(a1 + 81) )
      {
        v9 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
        sub_BDA0((__int64)"Network error: %s\n", v9);
      }
    }
    return 0;
  }
  if ( v6 != 16 )
    return 0;
  if ( a2 != 6 )
    sub_18640(a1, (__int64)"SENT %s\n", off_38B20[a2]);
  return 1;
}

