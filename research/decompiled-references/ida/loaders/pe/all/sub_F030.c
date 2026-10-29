__int64 __fastcall sub_F030(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 8);
  v4 = __readfsqword(0x28u);
  if ( !v2 || (unsigned __int64)(v2 - 1) <= 0x3FF )
    return netnode_supset();
  netnode_check();
  netnode_supset();
  netnode_setblob();
  return v4 - __readfsqword(0x28u);
}
