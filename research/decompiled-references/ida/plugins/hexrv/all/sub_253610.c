__int64 __fastcall sub_253610(__int64 a1)
{
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  sub_2B15B0(*(_QWORD *)(a1 + 216), *(_QWORD *)a1, 1);
  if ( (*(_DWORD *)(a1 + 108) & 0xFFFFFFF4) == 0 )
    return netnode_delvalue();
  netnode_set();
  return v2 - __readfsqword(0x28u);
}

