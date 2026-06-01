__int64 __fastcall sub_36B20(__int64 a1, __int64 a2)
{
  __int64 tinfo_tid; // r15
  __int64 tinfo_size; // rax
  __int64 v5; // r13
  char *v6; // rsi
  char *v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  char strlit; // al
  unsigned __int64 v12; // r8
  size_t v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  _WORD *v16; // rax
  void *v17; // rax
  unsigned __int64 v18; // [rsp+0h] [rbp-178h]
  __int64 v19; // [rsp+0h] [rbp-178h]
  __int64 v20; // [rsp+0h] [rbp-178h]
  unsigned __int64 v21; // [rsp+8h] [rbp-170h]
  size_t v22; // [rsp+10h] [rbp-168h]
  unsigned __int64 v23; // [rsp+10h] [rbp-168h]
  unsigned __int64 v24; // [rsp+10h] [rbp-168h]
  __int64 v25; // [rsp+18h] [rbp-160h]
  __int64 v26; // [rsp+28h] [rbp-150h] BYREF
  __int64 v27; // [rsp+30h] [rbp-148h] BYREF
  __int64 v28; // [rsp+38h] [rbp-140h] BYREF
  void *src; // [rsp+40h] [rbp-138h]
  __int128 v30; // [rsp+48h] [rbp-130h]
  __int64 v31; // [rsp+60h] [rbp-118h]
  __int128 v32; // [rsp+68h] [rbp-110h]
  __int64 v33; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+88h] [rbp-F0h]
  __int128 v35; // [rsp+A0h] [rbp-D8h]
  char *v36; // [rsp+B0h] [rbp-C8h]
  __int128 v37; // [rsp+B8h] [rbp-C0h]
  __int64 v38; // [rsp+C8h] [rbp-B0h]
  __int128 v39; // [rsp+D0h] [rbp-A8h]
  __int128 v40; // [rsp+E0h] [rbp-98h]
  __int64 v41; // [rsp+110h] [rbp-68h]
  int v42; // [rsp+118h] [rbp-60h]
  __int64 v43; // [rsp+120h] [rbp-58h]
  char v44; // [rsp+128h] [rbp-50h]
  unsigned __int64 v45; // [rsp+138h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  LOWORD(v36) = 256;
  *((_QWORD *)&v35 + 1) = "__CFString";
  *(_QWORD *)&v35 = get_idati();
  create_tinfo();
  if ( !(unsigned __int8)get_tinfo_property()
    || (tinfo_tid = get_tinfo_tid(), tinfo_size = get_tinfo_size(), v5 = tinfo_size, tinfo_tid == -1)
    || tinfo_size == -1
    || !(unsigned __int8)is_loaded()
    || !(unsigned __int8)create_data() )
  {
    v9 = -1;
    goto LABEL_21;
  }
  v38 = 0;
  v41 = 1;
  v42 = -1;
  v43 = 0;
  v44 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v36 = (char *)qvector_reserve();
  *(_QWORD *)&v37 = 5;
  strcpy(v36, "data");
  if ( (unsigned int)find_tinfo_udt_member() == -1 )
    goto LABEL_57;
  v6 = v36;
  v18 = (unsigned __int64)v35 >> 3;
  if ( *((_QWORD *)&v37 + 1) <= 4u )
  {
    v36 = (char *)qvector_reserve();
    v6 = v36;
  }
  *(_QWORD *)&v37 = 5;
  *(_DWORD *)v6 = 1868983913;
  v36[4] = 0;
  if ( (unsigned int)find_tinfo_udt_member() == -1 )
  {
LABEL_55:
    if ( under_debugger )
      goto LABEL_59;
    interr();
LABEL_57:
    if ( !under_debugger )
      interr();
LABEL_59:
    BUG();
  }
  v7 = v36;
  v21 = v35;
  if ( *((_QWORD *)&v37 + 1) <= 6u )
  {
    v36 = (char *)qvector_reserve();
    v7 = v36;
  }
  *(_QWORD *)&v37 = 7;
  *(_DWORD *)v7 = 1735288172;
  *((_WORD *)v7 + 2) = 26740;
  v36[6] = 0;
  if ( (unsigned int)find_tinfo_udt_member() == -1 )
  {
    if ( under_debugger )
      goto LABEL_59;
    interr();
    goto LABEL_55;
  }
  v8 = v35;
  if ( (unsigned __int8)sub_1D300(a1, &v26, a2 + v18)
    && (unsigned __int8)sub_1D300(a1, &v27, a2 + (v21 >> 3))
    && (unsigned __int8)sub_1D300(a1, &v28, (v8 >> 3) + a2) )
  {
    if ( !(unsigned __int8)is_loaded() )
    {
LABEL_26:
      v9 = v5 + a2;
      goto LABEL_16;
    }
    if ( v27 == 1992 )
    {
      strlit = create_strlit();
    }
    else
    {
      if ( v27 != 2000 )
        goto LABEL_26;
      getinf_flag();
      add_encoding();
      strlit = create_strlit();
    }
    if ( !strlit )
      goto LABEL_26;
    src = nullptr;
    v30 = 0;
    if ( get_ea_name() <= 0 )
    {
LABEL_41:
      v31 = 0;
      v32 = 0;
      if ( get_strlit_contents() > 0 )
      {
        v33 = 0;
        v34 = 0;
        sub_35470(&v33);
        set_cmt();
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree();
        }
      }
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree();
      }
      if ( src )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
      goto LABEL_26;
    }
    if ( !(_QWORD)v30 )
      goto LABEL_49;
    v12 = v30 - 1;
    if ( (_QWORD)v30 == 1 )
      goto LABEL_49;
    v19 = 0;
    if ( (_QWORD)v30 != 2 )
    {
      v24 = v30 - 1;
      v19 = v30 - 2;
      memmove(src, (char *)src + 1, v30 - 2);
      v12 = v24;
    }
    if ( *((_QWORD *)&v30 + 1) < v12 )
    {
      v23 = v12;
      src = (void *)qvector_reserve();
      v12 = v23;
    }
    *(_QWORD *)&v30 = v12;
    *((_BYTE *)src + v19) = 0;
    if ( (_QWORD)v30 )
    {
      v13 = v30 - 1;
      v14 = v30 + 5;
      v15 = v30 + 6;
      if ( *((_QWORD *)&v30 + 1) >= (unsigned __int64)(v30 + 6) )
        goto LABEL_38;
    }
    else
    {
LABEL_49:
      if ( *((_QWORD *)&v30 + 1) > 6u )
      {
        *(_QWORD *)&v30 = 7;
        *((_BYTE *)src + 6) = 0;
LABEL_40:
        v16 = src;
        *(_DWORD *)src = 1953719907;
        v16[2] = 24434;
        set_name();
        make_name_auto();
        goto LABEL_41;
      }
      v15 = 7;
      v14 = 6;
      v13 = 0;
    }
    v25 = v14;
    v22 = v13;
    v20 = v15;
    v17 = (void *)qvector_reserve();
    v14 = v25;
    v13 = v22;
    src = v17;
    v15 = v20;
LABEL_38:
    *(_QWORD *)&v30 = v15;
    *((_BYTE *)src + v14) = 0;
    if ( v13 )
      memmove((char *)src + 6, src, v13);
    goto LABEL_40;
  }
  v9 = -1;
LABEL_16:
  clear_tinfo_t();
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
LABEL_21:
  clear_tinfo_t();
  return v9;
}

