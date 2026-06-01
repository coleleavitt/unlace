__int64 __fastcall sub_33710(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int type_ordinal; // ebx
  unsigned int v6; // eax
  __int64 idati; // rax
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v10; // [rsp+20h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 312);
  v11 = __readfsqword(0x28u);
  type_ordinal = get_type_ordinal(v3);
  if ( !type_ordinal )
  {
    v6 = alloc_type_ordinals(*(_QWORD *)(a1 + 312), 1);
    v8 = 0;
    type_ordinal = v6;
    idati = *(_QWORD *)(a1 + 312);
    v10 = 0;
    v9[1] = "";
    if ( !idati )
      idati = get_idati();
    v9[0] = idati;
    create_tinfo(&v8, 13, 189, v9);
    save_tinfo(&v8, *(_QWORD *)(a1 + 312), type_ordinal, a2, 1);
    clear_tinfo_t(&v8);
  }
  return type_ordinal;
}
