__int64 __fastcall sub_15150(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) != 159 )
    return v8 - __readfsqword(0x28u);
  netnode_check(&v7, "$ vmm functions", 0, 0);
  *(_QWORD *)(a1 + 112) = v7;
  if ( !(unsigned __int8)netnode_exist(a1 + 112) )
    return v8 - __readfsqword(0x28u);
  v5 = sub_150B0(a1, a2);
  if ( v5 != -1 && v5 != a3 )
  {
    del_cref(*(_QWORD *)(a2 + 16), v5, 0);
    sub_7FF0(0xBC8u, *(_QWORD *)(a2 + 16));
  }
  sub_7FF0(0xBC7u, *(_QWORD *)(a2 + 16), a3);
  if ( (get_flags_ex(*(_QWORD *)(a2 + 16), 4, v6) & 0x600) == 0 )
    create_insn(*(_QWORD *)(a2 + 16), 0);
  return add_cref(*(_QWORD *)(a2 + 16), a3, 19);
}

