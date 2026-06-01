unsigned __int64 __fastcall sub_59570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // bl
  __int64 v8; // rdi
  int v10; // r13d
  __int64 idati; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v6 = a2;
  v18 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
  {
    v10 = (unsigned __int8)a2;
    idati = get_idati(a1, a2, a3, a4, a5, a6);
    v12 = *(_QWORD **)(a1 + 8);
    v13 = 33;
    if ( v12 == (_QWORD *)idati )
      v13 = 61;
    sub_20160(
      &qword_CB430,
      (__int64)"dwarf_til_t(til=%p (%c=idati), til->name=%s, mappings=%a)",
      v12,
      v13,
      *v12,
      *(_QWORD *)(a1 + 16));
    v16 = src;
    if ( (_QWORD)xmmword_CB438 )
      LODWORD(v16) = qword_CB430;
    sub_88B80((unsigned int)"%s::set_til_next_offset_bias(is_info=%d, off=%llu)\n", (_DWORD)v16, v10, a3, v14, v15);
  }
  v8 = *(_QWORD *)(a1 + 16);
  v17 = a3;
  netnode_supset(v8, 3LL - v6, &v17, 8, 83);
  return v18 - __readfsqword(0x28u);
}

