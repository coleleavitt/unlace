unsigned __int64 __fastcall sub_2800(__int64 a1, const char *a2)
{
  __int64 tinfo_size; // r13
  __int64 tinfo_tid; // rax
  __int64 v5; // r15
  int word; // ebx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdx
  unsigned __int8 default_reftype; // al
  __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int16 v14; // ax
  __int64 v15; // [rsp+8h] [rbp-480h]
  __int64 v16; // [rsp+18h] [rbp-470h] BYREF
  __int64 idati; // [rsp+20h] [rbp-468h] BYREF
  const char *v18; // [rsp+28h] [rbp-460h]
  __int16 v19; // [rsp+30h] [rbp-458h]
  _BYTE v20[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v21; // [rsp+448h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v18 = "ClassStruct";
  v16 = 0;
  v19 = 256;
  idati = get_idati();
  create_tinfo(&v16, 61, 61, &idati);
  if ( !(unsigned __int8)get_tinfo_property(v16, 2) )
  {
    parse_decls(
      0,
      "enum __bitmask ClassFlags : char{CLASSF_HAS_DEFAULT = 0x1,CLASSF_MASTER_CLASS = 0x2,CLASSF_VARIANT_CLASS = 0x4,CLA"
      "SSF_DISCARD_ON_SAVE = 0x8,CLASSF_NEVER_SAVED = 0x10,CLASSF_HAS_RELOC = 0x20,CLASSF_C_HANDLERS = 0x40,};struct Clas"
      "sStruct{void __far *superClass __offset(OFF32);int masterOffset;int methodCount __udec;int instanceSize __udec;int"
      " vdRelocTable;int relocTable;ClassFlags flags;char masterMethods;};",
      sub_2570,
      1024);
    v19 = 256;
    v18 = "ClassStruct";
    idati = get_idati();
    create_tinfo(&v16, 61, 61, &idati);
  }
  if ( (unsigned __int8)get_tinfo_property(v16, 2) )
  {
    tinfo_size = get_tinfo_size(0, v16, 0);
    tinfo_tid = get_tinfo_tid(&v16, 0);
    create_data(a1, 1610612736, tinfo_size, tinfo_tid);
    v5 = getseg(a1);
    if ( v5 )
    {
      word = (unsigned __int16)get_word(a1 + 6);
      v7 = tinfo_size + a1;
      v8 = 2 * word;
      v9 = v8 + v7;
      if ( (unsigned __int64)(v8 + v7) < *(_QWORD *)(v5 + 8) )
      {
        create_data(v7, 0x10000000, v8, -1);
        set_op_type(v7, 0x22222202200000LL, 0);
        v10 = 4 * word;
        if ( *(_QWORD *)(v5 + 8) >= (unsigned __int64)(v9 + v10) )
        {
          create_data(v9, 0x20000000, v10, -1);
          default_reftype = get_default_reftype(v9);
          op_offset(v9, 0, default_reftype, -1, 0, 0);
          if ( word )
          {
            v15 = v9 + 4LL * (unsigned int)(word - 1);
            while ( 1 )
            {
              v12 = (unsigned __int16)get_word(v9);
              v13 = 16LL * (unsigned __int16)get_word(v9 + 2) + v12;
              auto_mark_range(v13, v13 + 1, 20);
              auto_mark_range(v13, v13 + 1, 30);
              v14 = get_word(v7);
              qsnprintf(v20, 1024, "%s_%u", a2, v14);
              add_entry(v13, v13, v20, 1, 1);
              v7 += 2;
              if ( v9 == v15 )
                break;
              v9 += 4;
            }
          }
        }
      }
    }
  }
  clear_tinfo_t(&v16);
  return v21 - __readfsqword(0x28u);
}
