signed __int64 __fastcall sub_4FF80(__int64 a1, double a2)
{
  __int16 v3; // ax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  signed __int64 result; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax

  v3 = netnode_altval(*(_QWORD *)(a1 + 120), -3, 65);
  v4 = *(_QWORD *)(a1 + 120);
  *(_WORD *)(a1 + 472) = v3;
  if ( !netnode_altval(v4, -4, 65) )
  {
    *(_DWORD *)(a1 + 460) = 0x8000;
    goto LABEL_3;
  }
  v12 = netnode_altval(*(_QWORD *)(a1 + 120), -4, 65);
  if ( (v12 & 0x8000) != 0 )
  {
    *(_DWORD *)(a1 + 460) = v12;
    v14 = v12 & 0xF;
  }
  else
  {
    *(_DWORD *)(a1 + 460) = 0x8000;
    v13 = v12 & 3;
    if ( v13 == 1 )
      goto LABEL_3;
    if ( v13 == 2 )
    {
      *(_DWORD *)(a1 + 460) = 32769;
      goto LABEL_3;
    }
    sub_337D0((__int64)"Bad ISA flags; assuming AltiVec decoding.\n");
    v14 = *(_DWORD *)(a1 + 460) & 0xF;
  }
  if ( v14 > 4 )
  {
    sub_337D0((__int64)"Bad ISA flags in database; assuming AltiVec decoding.\n");
    *(_DWORD *)(a1 + 460) &= 0xFFFFFFF0;
  }
LABEL_3:
  v5 = netnode_altval(*(_QWORD *)(a1 + 120), -1, 65);
  v6 = node2ea(v5 - 1);
  if ( v6 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) )
    v6 = -1;
  *(_QWORD *)(a1 + 424) = v6;
  v7 = netnode_altval(*(_QWORD *)(a1 + 120), -5, 65);
  v8 = node2ea(v7 - 1);
  if ( v8 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) )
    v8 = -1;
  *(_QWORD *)(a1 + 432) = v8;
  v9 = netnode_altval(*(_QWORD *)(a1 + 120), -6, 65);
  v10 = node2ea(v9 - 1);
  if ( v10 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) )
    v10 = -1;
  *(_QWORD *)(a1 + 440) = v10;
  result = netnode_qsupstr(**(_QWORD **)(a1 + 216), a1 + 136, -1, 83);
  if ( result > 0 )
    return sub_4B350(a1 + 128, 0, a2);
  return result;
}

