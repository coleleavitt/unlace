unsigned __int64 __fastcall sub_14180(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v3 = a1 + *(unsigned __int16 *)(a3 + 2);
  v4 = a1 + *(unsigned __int16 *)(a3 + 5);
  v5 = v3 + *(unsigned __int8 *)(a3 + 4);
  if ( v3 > v4 )
    v3 = a1 + *(unsigned __int16 *)(a3 + 5);
  if ( v3 > v5 )
    v3 = v5;
  if ( a1 >= a1 + a2 || v3 < a1 || v4 + *(unsigned __int8 *)(a3 + 7) < a1 )
    sub_A7E0((__int64)"Wrong exception handler definition");
  netnode_supset();
  netnode_supset();
  netnode_supset();
  netnode_supset();
  auto_mark_range();
  auto_mark_range();
  return v7 - __readfsqword(0x28u);
}

