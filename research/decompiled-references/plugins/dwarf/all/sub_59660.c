unsigned __int64 __fastcall sub_59660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 idati; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  const char *v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
  {
    idati = get_idati(a1, a2, a3, a4, a5, a6);
    v14 = *(_QWORD **)(a1 + 8);
    v15 = 33;
    if ( v14 == (_QWORD *)idati )
      v15 = 61;
    sub_20160(
      &qword_CB430,
      (__int64)"dwarf_til_t(til=%p (%c=idati), til->name=%s, mappings=%a)",
      v14,
      v15,
      *v14,
      *(_QWORD *)(a1 + 16));
    v17 = src;
    if ( (_QWORD)xmmword_CB438 )
      LODWORD(v17) = qword_CB430;
    sub_88B80((unsigned int)"%s::set_offset_biases(ssid=%s, dib=%llu, dtb=%llu)\n", (_DWORD)v17, a2, a3, a4, v16);
  }
  v10 = *(_QWORD *)(a1 + 16);
  v18 = a3;
  netnode_hashset(v10, a2, &v18, 8, 72);
  v11 = *(_QWORD *)(a1 + 16);
  v18 = a4;
  netnode_hashset(v11, a2, &v18, 8, 86);
  return v19 - __readfsqword(0x28u);
}
