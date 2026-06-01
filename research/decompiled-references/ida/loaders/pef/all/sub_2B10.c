unsigned __int64 __fastcall sub_2B10(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 default_reftype; // al
  unsigned __int8 v8; // al
  unsigned __int64 dword; // r12
  __int64 v10; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _BYTE v16[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v17; // [rsp+408h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  default_reftype = get_default_reftype(a1);
  op_offset(a1, 0, default_reftype, -1, 0, 0);
  v8 = get_default_reftype(a1 + 4);
  op_offset(a1 + 4, 0, v8, -1, 0, 0);
  dword = (unsigned int)get_dword(a1 + 4);
  if ( (unsigned __int8)segtype(dword) == 3 && dword < qword_81E8 )
  {
    qword_81E8 = dword;
    if ( *(_DWORD *)(get_ph() + 4) != 15 )
    {
      sub_2590();
      sub_2C60(dword, 0, v12, v13, v14, v15, a7);
    }
    sub_2A50(0xBB9u, dword, 0);
  }
  set_name(a1, a2, 1024);
  qsnprintf(v16, 1024, &unk_6000, a2);
  v10 = (unsigned int)get_dword(a1);
  add_entry(v10, v10, v16, 1, 1);
  make_name_auto(v10);
  return v17 - __readfsqword(0x28u);
}

