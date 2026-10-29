__int64 __fastcall sub_B2E0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7)
{
  unsigned __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)is_defarg(a6, a3) && !(unsigned __int8)is_numop(a6, a3) )
    return a6;
  if ( (unsigned int)get_auto_state() != 40 )
    return a6;
  if ( (a4 & 0xFFFFFFEF) == 0xE )
    return a6;
  if ( a5 > 0x3FF )
    return a6;
  if ( !(unsigned __int8)sub_B100(a1, &v14, v15, *(_QWORD *)(a2 + 16), a4, a7) )
    return a6;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v14 + a5);
  if ( (unsigned __int8)is_mapped(v12) != 1 || v12 <= 0xFFF )
    return a6;
  op_offset(*(_QWORD *)(a2 + 16), a3, *(_DWORD *)(a1 + 296) | 0x40u, v12, 0, 0);
  v13 = v15[0];
  if ( (get_flags_ex(v15[0], 4) & 0xF00000) == 0 )
    op_offset(v13, 0, *(_DWORD *)(a1 + 292) | 0x40u, v12, 0, 0);
  return get_flags_ex(*(_QWORD *)(a2 + 16), 0);
}
