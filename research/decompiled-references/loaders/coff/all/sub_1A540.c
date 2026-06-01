__int64 __fastcall sub_1A540(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v6; // ebp
  unsigned __int16 v7; // ax
  int v9; // edx
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax

  v6 = sub_16B00(a1, a2, a3, a4);
  if ( !(_BYTE)v6 )
    return v6;
  v7 = *(_WORD *)(a3 + 12);
  if ( v7 != 6 )
  {
    if ( v7 > 6u )
    {
      if ( (unsigned __int16)(v7 - 12) <= 2u )
      {
        sub_5F40(0x57u, a1[4], 1);
        create_insn(a1[4], 0);
      }
    }
    else if ( v7 == 3 )
    {
      create_insn(a1[4], 0);
    }
    return v6;
  }
  v9 = *(_DWORD *)(a2 + 4);
  v10 = a1[4];
  if ( (v9 & 1) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 16);
    v11 = 0;
    if ( v13 != -1 )
    {
      v14 = sel2para(v13, a2);
      v9 = *(_DWORD *)(a2 + 4);
      v11 = 16 * v14;
    }
  }
  v12 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 8) = v10;
  *(_DWORD *)(a2 + 4) = v9 | 1;
  *(_QWORD *)(a2 + 24) = v11 + v12 - v10;
  set_fixup(a1[4], a2);
  return v6;
}
