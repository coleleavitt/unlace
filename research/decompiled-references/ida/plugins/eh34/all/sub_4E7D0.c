unsigned __int64 __fastcall sub_4E7D0(__int64 a1, unsigned __int8 a2)
{
  __int64 i; // rbx
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  for ( i = *(_QWORD *)(a1 + 24); a1 + 8 != i; i = std::_Rb_tree_increment(i) )
  {
    v3 = *(_QWORD *)(i + 32);
    v4 = *(_QWORD *)(i + 40);
    v5 = sub_1DD10();
    v7 = v4 - v3;
    netnode_supset(v5, v3, &v7, 8, a2 | 0x100u);
  }
  return v8 - __readfsqword(0x28u);
}

