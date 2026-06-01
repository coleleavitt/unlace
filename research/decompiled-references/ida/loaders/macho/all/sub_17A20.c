unsigned __int64 __fastcall sub_17A20(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rcx
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 32);
  v2 = v1[30];
  if ( *(_QWORD *)(v1[1] + 16LL) == v2 || v2 == -1 || v1[23] && rangeset_t_find_range() )
    netnode_supset();
  return v4 - __readfsqword(0x28u);
}

