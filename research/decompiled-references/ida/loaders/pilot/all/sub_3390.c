unsigned __int64 __fastcall sub_3390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r15
  __int16 word; // bp
  int dword; // edx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int16 v14; // ax
  __int64 v16; // r8
  __int16 v17; // ax
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // [rsp+8h] [rbp-70h]
  _QWORD v23[3]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-48h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v7 = a1 + 4;
  v26 = __readfsqword(0x28u);
  word = get_word(a1);
  dword = get_dword(a1 + 4);
  v11 = word;
  if ( word == dword )
  {
    v12 = word;
    if ( a5 != -1 && (v13 = a5 + word, v22 = v11, v14 = get_word(a5 + v11), v12 = v22, v14 == 20217) )
    {
      create_data(a1, 0x10000000, 2, -1);
      create_data(v7, 0x20000000, 4, -1);
      op_offset(a1, 0, 513, -1, a5, 0);
      v16 = a5;
    }
    else
    {
      v13 = a4 + v12;
      if ( (unsigned __int16)get_word(a4 + v12) != 20217 )
        return v26 - __readfsqword(0x28u);
      create_data(a1, 0x10000000, 2, -1);
      create_data(v7, 0x20000000, 4, -1);
      op_offset(a1, 0, 513, -1, a4, 0);
      v16 = a4;
    }
    op_offset(v7, 0, 514, -1, v16, 0);
    create_data(a1 + 2, 0x10000000, 2, -1);
    create_data(a1 + 8, 0x20000000, 4, -1);
    op_offset(a1 + 8, 0, 2, -1, a1, 0);
    set_cmt(a1, "Short jump table offset", 0);
    set_cmt(a1 + 2, "Number of jump table entries", 0);
    set_cmt(v7, "Long jump table offset", 0);
    set_cmt(a1 + 8, "Offset to xref data", 0);
    v23[2] = a3;
    v23[0] = 4;
    v23[1] = 0;
    v24 = 0;
    v25 = 0;
    v17 = get_word(a1 + 2);
    if ( v17 )
    {
      v18 = v13 + 6;
      v19 = v13 + 6 + 6LL * (unsigned __int16)(v17 - 1);
      while ( 1 )
      {
        v24 = (unsigned int)get_dword(v13 + 2);
        set_fixup(v13 + 2, v23);
        if ( (unsigned __int16)get_word(a1 + v24) == 20054 || (unsigned __int16)get_word(a1 + v24) == 1711 )
        {
          v20 = a1 + v24;
          v21 = a1 + v24 + 1;
          auto_mark_range(a1 + v24, v21, 20);
          auto_mark_range(v20, v21, 30);
          auto_mark_range(v13, v13 + 1, 20);
          auto_mark_range(v13, v13 + 1, 30);
        }
        v13 = v18;
        if ( v19 == v18 )
          break;
        v18 += 6;
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}

