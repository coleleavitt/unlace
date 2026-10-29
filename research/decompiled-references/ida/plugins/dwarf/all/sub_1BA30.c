bool __fastcall sub_1BA30(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 2784);
  v5[1] = __readfsqword(0x28u);
  if ( v3 == -1 && !*(_BYTE *)(a1 + 2798) )
  {
    *(_BYTE *)(a1 + 2798) = 1;
    netnode_check(v5, "$ DWARF renamed addresses", 25, 0);
    v3 = v5[0];
    *(_QWORD *)(a1 + 2784) = v5[0];
  }
  return (unsigned __int8)netnode_charval(v3, a2, 321) != 0;
}

