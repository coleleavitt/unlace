__int64 __fastcall sub_23D20(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  int v6; // r12d
  __int64 v7; // rax
  int v8; // ebx

  v3 = a2 - 96;
  if ( (unsigned int)v3 > 0xC )
    return 0;
  v6 = dword_2F160[v3];
  v7 = sub_2A190(a2);
  v8 = a3 & ((1 << v6) - 1);
  if ( (unsigned __int8)(a3 & ((1 << v6) - 1)) < *(_BYTE *)v7 )
    return (a3 >> v6) | (*(unsigned __int8 *)(*(_QWORD *)(v7 + 8) + (unsigned __int8)v8) << 24);
  sub_A980((__int64)"Impossible to get table for coded 0x%x", (unsigned __int8)v8);
  return 0;
}

