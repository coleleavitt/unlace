unsigned __int64 __fastcall sub_4BB00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 i; // r12
  int v4; // eax
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 176) == 12 && !*(_BYTE *)(a2 + 442) )
    sub_4B6C0(a2);
  v2 = *(_QWORD *)(a2 + 320);
  for ( i = v2 + 32LL * *(_QWORD *)(a2 + 328); i != v2; v2 += 32 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v2 + 24);
      if ( v4 != 1 )
        break;
      netnode_check();
      v2 += 32;
      netnode_supset();
      netnode_supset();
      netnode_supset();
      if ( i == v2 )
        return v6 - __readfsqword(0x28u);
    }
    if ( v4 == 2 )
    {
      netnode_check();
      netnode_supset();
      netnode_supset();
      netnode_supset();
    }
  }
  return v6 - __readfsqword(0x28u);
}

