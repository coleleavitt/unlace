unsigned __int64 __fastcall sub_11DC0(__int64 a1, _DWORD *a2)
{
  char v3; // r13
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 *v6; // rax
  const char *plugin_options; // rax
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // r13d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rbx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // al
  int dword; // ecx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rbx
  unsigned __int16 word; // r13
  __int64 v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-10B8h]
  __int64 v30; // [rsp+0h] [rbp-10B8h]
  __int64 v31; // [rsp+8h] [rbp-10B0h]
  __int64 v32; // [rsp+10h] [rbp-10A8h]
  __int64 v33; // [rsp+18h] [rbp-10A0h]
  unsigned int v34; // [rsp+28h] [rbp-1090h]
  signed int v35; // [rsp+30h] [rbp-1088h]
  __int64 idati; // [rsp+50h] [rbp-1068h] BYREF
  const char *v37; // [rsp+58h] [rbp-1060h]
  __int16 v38; // [rsp+60h] [rbp-1058h]
  char v39[4104]; // [rsp+70h] [rbp-1048h] BYREF
  unsigned __int64 v40; // [rsp+1078h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a2 && *a2 == 3 )
    goto LABEL_24;
  if ( *(_DWORD *)(a1 + 244) > 0x1Bu && *(_DWORD *)(a1 + 240) )
  {
    v3 = 1;
    get_plugin_options();
    goto LABEL_6;
  }
  plugin_options = (const char *)get_plugin_options();
  v3 = *(_BYTE *)(a1 + 986);
  if ( v3 || plugin_options && strstr(plugin_options, "fuzz") )
  {
    find_plugin();
    run_plugin();
    goto LABEL_19;
  }
  if ( !*(_DWORD *)(a1 + 88) || !*(_DWORD *)(a1 + 84) )
  {
LABEL_24:
    getinf_buf();
    set_file_ext();
    if ( (unsigned __int8)qfileexist() )
      goto LABEL_20;
    v9 = *(_WORD *)(a1 + 94);
    if ( (v9 & 8) != 0 || (v9 & 0x208) == 0 && *(_WORD *)(a1 + 96) == 523 )
    {
      find_plugin();
      run_plugin();
    }
    return v40 - __readfsqword(0x28u);
  }
LABEL_6:
  v4 = *(unsigned int *)(a1 + 240);
  v5 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
    while ( v4 < *v6 || v4 >= v6[1] )
    {
      --v5;
      v6 -= 4;
      if ( v5 == -1 )
        goto LABEL_11;
    }
    v10 = v4 + v6[2] - *v6;
    if ( v10 != -1 )
      v4 = v10;
  }
LABEL_11:
  idati = v4;
  netnode_supset();
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1168, 0, a2, -1, 0, &callui);
  if ( v3 )
  {
    v11 = *(_QWORD *)(a1 + 616);
    v12 = *(_DWORD *)(a1 + 244);
    v32 = qword_379D8;
    v13 = *(_QWORD *)(v11 + 16) & (qword_379D8 + *(unsigned int *)(a1 + 240));
    sub_97C0();
    v35 = v12 / 0x1C;
    getinf_flag();
    setinf_flag();
    if ( v13 != -1 && v12 > 0x1B )
    {
      LODWORD(v33) = 0;
      v14 = -1;
      do
      {
        if ( !(unsigned __int8)is_loaded() )
          break;
        create_data();
        set_cmt();
        set_op_type();
        v21 = *(_QWORD *)(v11 + 16) & (v13 + 4);
        v22 = is_loaded();
        dword = 0;
        if ( v22 )
          dword = get_dword();
        v24 = sub_72A0(v11, v21, (__int64)"TimeDateStamp: ", dword);
        create_data();
        set_cmt();
        set_op_type();
        v25 = *(_QWORD *)(v11 + 16) & (v24 + 2);
        create_data();
        set_cmt();
        set_op_type();
        v26 = *(_QWORD *)(v11 + 16) & (v25 + 2);
        word = get_word();
        LODWORD(v29) = word;
        if ( word > 0x10u )
        {
          qstrncpy();
          sub_70E0((__int64)"Unknown debug info type %d in IMAGE_DEBUG_DIRECTORY\n", word);
        }
        else
        {
          qsnprintf();
        }
        create_data();
        set_cmt();
        set_op_type();
        v15 = *(_QWORD *)(v11 + 16) & (v26 + 4);
        HIDWORD(v33) = 0;
        if ( (unsigned __int8)is_loaded() )
          HIDWORD(v33) = get_dword();
        create_data();
        set_cmt();
        set_op_type();
        v16 = *(_QWORD *)(v11 + 16) & (v15 + 4);
        v17 = v32;
        v31 = 0;
        if ( (unsigned __int8)is_loaded() )
        {
          v31 = (unsigned int)get_dword();
          v17 = v32 + v31;
        }
        create_data();
        if ( (unsigned __int8)is_loaded() && (unsigned int)get_dword() )
        {
          v28 = 4;
          if ( *(_WORD *)(a1 + 96) == 523 )
            v28 = 8;
          sub_73A0(v16, v32, v28, 0);
        }
        set_cmt();
        v18 = *(_QWORD *)(v11 + 16) & (v16 + 4);
        create_data();
        set_cmt();
        set_op_type();
        v13 = *(_QWORD *)(v11 + 16) & (v18 + 4);
        v19 = *(_QWORD *)(v11 + 16) & v17;
        if ( word <= 0x10u )
        {
          sub_97C0();
          if ( word == 2 )
          {
            if ( (unsigned __int8)is_loaded() )
            {
              v34 = get_dword();
              create_data();
              set_cmt();
              v29 = *(_QWORD *)(v11 + 16) & (v19 + 4);
              if ( v34 == 1129272397 )
              {
                create_data();
                set_cmt();
                create_data();
                set_cmt();
              }
              else if ( v34 <= 0x434F544D )
              {
                if ( v34 == 808534606 )
                {
                  create_data();
                  set_cmt();
                  set_op_type();
                  create_data();
                  set_cmt();
                  set_op_type();
                  create_data();
                  set_cmt();
                  set_op_type();
                  create_data();
                  set_cmt();
                }
              }
              else if ( v34 == 1396986706 || v34 == 1396986997 )
              {
                if ( !(unsigned int)get_named_type() )
                  parse_decls();
                v37 = "GUID";
                v38 = 256;
                idati = get_idati();
                create_tinfo();
                if ( (unsigned __int8)get_tinfo_property() )
                {
                  get_tinfo_tid();
                  get_tinfo_size();
                  create_data();
                  set_cmt();
                  v30 = *(_QWORD *)(v11 + 16) & (v29 + 16);
                  create_data();
                  set_cmt();
                  set_op_type();
                  v29 = *(_QWORD *)(v11 + 16) & (v30 + 4);
                  add_encoding();
                  sub_7E60(v29, v19 + SHIDWORD(v33) - v29);
                  set_name();
                  set_cmt();
                }
                clear_tinfo_t();
              }
            }
            else
            {
              create_data();
              set_cmt();
            }
          }
        }
        else
        {
          sub_97C0();
        }
        v20 = v14;
        if ( v19 > v14 )
          v19 = v14;
        if ( v31 )
          v20 = v19;
        LODWORD(v33) = v33 + 1;
        v14 = v20;
        if ( v35 <= (int)v33 )
          break;
      }
      while ( v13 < v20 );
    }
    setinf_flag();
  }
  if ( netnode_supstr() > 0 )
  {
    sub_8100((__int64)&idati, v39);
    sub_A710();
    if ( idati )
    {
      v37 = nullptr;
      qfree();
    }
  }
LABEL_19:
  getinf_buf();
  set_file_ext();
  if ( (unsigned __int8)qfileexist() )
LABEL_20:
    callui(1168, v39, 0, -1, 0, &callui, v29, v31, v32, v33);
  return v40 - __readfsqword(0x28u);
}

