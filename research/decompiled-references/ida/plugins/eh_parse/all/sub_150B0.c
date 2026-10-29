__int64 __fastcall sub_150B0(__int64 a1, __int64 a2)
{
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[1] = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) == 159
    && (netnode_check(v3, "$ vmm functions", 0, 0),
        *(_QWORD *)(a1 + 112) = v3[0],
        (unsigned __int8)netnode_exist(a1 + 112))
    && (v3[0] = *(_QWORD *)(a2 + 16), sub_7FF0(0xBC6u, v3[0], v3) == 1) )
  {
    return v3[0];
  }
  else
  {
    return -1;
  }
}

