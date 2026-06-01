unsigned __int64 __fastcall sub_D280(_DWORD *a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  if ( *a1 <= 1u )
  {
    ea2node();
    pack_dq();
  }
  netnode_supset();
  return v2 - __readfsqword(0x28u);
}

