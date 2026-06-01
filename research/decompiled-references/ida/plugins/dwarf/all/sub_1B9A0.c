unsigned __int64 __fastcall sub_1B9A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 2784);
  v6 = __readfsqword(0x28u);
  if ( v3 == -1 )
  {
    *(_BYTE *)(a1 + 2798) = 1;
    netnode_check(&v5, "$ DWARF renamed addresses", 25, 1);
    v3 = v5;
    *(_QWORD *)(a1 + 2784) = v5;
  }
  LOBYTE(v5) = 1;
  netnode_supset(v3, a2, &v5, 1, 321);
  return v6 - __readfsqword(0x28u);
}

