__int64 __fastcall sub_14230(__int64 a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  netnode_check(v2, "$ vmm functions", 0, 0);
  *(_QWORD *)(a1 + 112) = v2[0];
  return netnode_exist(a1 + 112);
}

