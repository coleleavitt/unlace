__int64 __fastcall sub_59A00(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 idati; // rbp
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  const char *v22; // rsi

  idati = get_idati(a1, a2, a3, a4, a5, a6);
  result = a1[1];
  if ( result != idati )
  {
    del_til(*(_QWORD *)result);
    a1[1] = idati;
    netnode_kill(a1 + 2);
    v9 = sub_1CBE0(*a1);
    v10 = *a1;
    a1[2] = v9;
    sub_1CE00(v10, a2, v9);
    sub_58B20(a1);
    result = (unsigned int)debug;
    if ( (debug & 0x400000) != 0 )
    {
      v15 = get_idati(a1, a2, v11, v12, v13, v14);
      v16 = (_QWORD *)a1[1];
      v17 = 33;
      if ( v16 == (_QWORD *)v15 )
        v17 = 61;
      sub_20160(
        &qword_CB430,
        (__int64)"dwarf_til_t(til=%p (%c=idati), til->name=%s, mappings=%a)",
        v16,
        v17,
        *v16,
        a1[2]);
      v22 = src;
      if ( (_QWORD)xmmword_CB438 )
        LODWORD(v22) = qword_CB430;
      return sub_88B80((unsigned int)"%s now using idati\n", (_DWORD)v22, v18, v19, v20, v21);
    }
  }
  return result;
}
