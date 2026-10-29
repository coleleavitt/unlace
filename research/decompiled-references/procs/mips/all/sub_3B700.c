__int64 __fastcall sub_3B700(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[7]; // [rsp+10h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  v1 = netnode_altval(*(_QWORD *)(a1 + 152), -4, 65);
  if ( !v1 )
  {
    netnode_check(v6, "$ got", 0, 0);
    if ( (unsigned __int8)netnode_exist(v6) )
    {
      v3 = netnode_altval(v6[0], 0, 65);
      if ( node2ea(v3 - 1) != -1 )
      {
        netnode_check(&v5, "$ got", 0, 0);
        v1 = netnode_altval(v5, -1, 65);
        netnode_supdel(v5, -1, 65);
        v4 = *(_QWORD *)(a1 + 152);
        v6[0] = v1;
        netnode_supset(v4, -4, v6, 8, 65);
      }
    }
  }
  return v1;
}
