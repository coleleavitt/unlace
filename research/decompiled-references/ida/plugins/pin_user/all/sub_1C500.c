__int64 __fastcall sub_1C500(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebp
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  bool v9; // zf
  const char *v10; // rax
  _QWORD v11[9]; // [rsp+0h] [rbp-48h] BYREF

  v11[3] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1C370(a1) )
  {
    v4 = a3 | 0x200;
    v5 = *(_QWORD *)(a1 + 1240);
    *(_DWORD *)(a1 + 1224) = v4;
    if ( !(unsigned __int8)sub_18B00(a1, 0x15u, v4, v5) )
      return 0;
    if ( (_DWORD)v5 )
    {
      v6 = 16LL * (unsigned int)v5;
      v7 = sub_26290(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 1232), v6);
      if ( v7 < v6 )
      {
        if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
        {
          *(_WORD *)(a1 + 1288) = 257;
        }
        else
        {
          v9 = *(_BYTE *)(a1 + 1289) == 0;
          *(_BYTE *)(a1 + 1288) = 1;
          if ( v9 && !*(_BYTE *)(a1 + 81) )
          {
            v10 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
            sub_BDA0((__int64)"Network error: %s\n", v10);
          }
        }
        return 0;
      }
      if ( v6 != v7 )
        return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 1224) == a3 )
      return 1;
    *(_DWORD *)(a1 + 1224) = a3;
    if ( !(unsigned __int8)sub_18B00(a1, 0x15u, a3, 0) )
      return 0;
  }
  v11[0] = 0;
  v11[1] = -1;
  if ( !(unsigned __int8)sub_18D10(a1, (int *)v11) )
    return 0;
  if ( LODWORD(v11[0]) )
  {
    if ( LODWORD(v11[0]) != 1 && !*(_BYTE *)(a1 + 1289) )
      sub_BDA0((__int64)"Error in send message, packet code %x.\n", 21);
    return 0;
  }
  return 1;
}

