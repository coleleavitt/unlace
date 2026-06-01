unsigned __int64 __fastcall sub_33AE60(__int64 a1)
{
  unsigned __int64 v2; // [rsp+8h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  netnode_check();
  if ( (unsigned __int8)netnode_exist() )
  {
    *(_DWORD *)(a1 + 1420) |= 1u;
    netnode_kill();
  }
  return v2 - __readfsqword(0x28u);
}

