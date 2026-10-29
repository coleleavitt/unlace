const char *__fastcall sub_59480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 idati; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  const char *result; // rax

  idati = get_idati(a1, a2, a3, a4, a5, a6);
  v7 = *(_QWORD **)(a1 + 8);
  v8 = 33;
  if ( v7 == (_QWORD *)idati )
    v8 = 61;
  sub_20160(
    &qword_CB430,
    (__int64)"dwarf_til_t(til=%p (%c=idati), til->name=%s, mappings=%a)",
    v7,
    v8,
    *v7,
    *(_QWORD *)(a1 + 16));
  result = (const char *)qword_CB430;
  if ( !(_QWORD)xmmword_CB438 )
    return src;
  return result;
}

