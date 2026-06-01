bool __fastcall sub_327100(_BYTE *a1, __int64 a2)
{
  char tinfo_property; // al
  char tinfo_details; // r15
  unsigned int v5; // eax
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r15
  int tinfo_size; // eax
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // r14
  _QWORD *v18; // rbx
  int v19; // eax
  unsigned int v20; // r13d
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // [rsp+24h] [rbp-16Ch]
  __int64 v25; // [rsp+60h] [rbp-130h] BYREF
  __int64 v26; // [rsp+78h] [rbp-118h]
  __int64 v27; // [rsp+80h] [rbp-110h]
  _UNKNOWN **v28; // [rsp+A0h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-E8h]
  __int64 v30; // [rsp+B0h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-D8h]
  __int64 v32; // [rsp+C0h] [rbp-D0h]
  __int64 v33; // [rsp+C8h] [rbp-C8h]
  __int128 v34; // [rsp+D0h] [rbp-C0h]
  __int64 v35; // [rsp+E0h] [rbp-B0h]
  int v36; // [rsp+E8h] [rbp-A8h]
  char v37; // [rsp+ECh] [rbp-A4h]
  __int64 v38; // [rsp+F0h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+F8h] [rbp-98h]
  __int64 v40; // [rsp+108h] [rbp-88h]
  __int64 v41; // [rsp+110h] [rbp-80h] BYREF
  __int64 v42; // [rsp+118h] [rbp-78h] BYREF
  __int128 v43; // [rsp+120h] [rbp-70h]
  __int64 v44; // [rsp+130h] [rbp-60h]
  __int128 v45; // [rsp+138h] [rbp-58h]
  char v46; // [rsp+148h] [rbp-48h]
  unsigned __int64 v47; // [rsp+158h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0xF) != 0xC )
  {
    if ( (*a1 & 0x3F) == 0x3D )
    {
      tinfo_property = get_tinfo_property();
      if ( (tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0 )
        return (unsigned int)verify_tinfo() == 0;
    }
    else if ( (unsigned __int8)print_tinfo() )
    {
      return (unsigned int)verify_tinfo() == 0;
    }
    return 0;
  }
  get_func();
  if ( (int)lower_type() < 0 )
    return 0;
  v46 = 16;
  v41 = 0;
  v42 = 0;
  v38 = 0;
  v40 = 0;
  v44 = 0;
  v39 = 0;
  v43 = 0;
  v45 = 0;
  tinfo_details = get_tinfo_details();
  if ( tinfo_details && (unsigned __int64)v39 < *(int *)(a2 + 656) )
  {
    v5 = v46 & 0xF0;
    if ( v5 <= 0x10 )
    {
      v5 = getinf();
      v29 = a2;
      v28 = &off_4B6FE8;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v35 = 0;
      v36 = v5;
      v34 = 0;
      if ( v5 <= 0x10 )
        v5 = getinf();
    }
    else
    {
      v29 = a2;
      v28 = &off_4B6FE8;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v35 = 0;
      v36 = v46 & 0xF0;
      v34 = 0;
    }
    if ( v5 != 176 )
    {
      if ( v5 != 256 )
        goto LABEL_15;
      goto LABEL_68;
    }
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        goto LABEL_68;
      netnode_check();
      v20 = netnode_altval();
      if ( v20 <= 0x74 )
        goto LABEL_68;
      v21 = *(_DWORD *)(get_ph() + 4);
      if ( !v21 )
        goto LABEL_15;
      v22 = (unsigned int)(v21 - 13);
      if ( (unsigned int)v22 > 0x3B || (v23 = 0x800000000000005LL, !_bittest64(&v23, v22)) )
      {
LABEL_68:
        tinfo_details = 0;
        goto LABEL_15;
      }
      tinfo_details = v20 != 117;
    }
LABEL_15:
    v37 = tinfo_details;
    if ( (get_tinfo_property() & 0x3F) == 1
      || sub_326EA0((__int64)&v28, (__int64)&v41, (__int64)&v42) && ((v41 & 0xF) != 0xD || (v41 & 0x100) != 0) )
    {
      sub_1BF760((__int64)&v25, a2, (__int64)&v38);
      v6 = 0;
      v7 = 0;
      if ( !(_QWORD)v39 )
      {
LABEL_36:
        if ( v26 )
        {
          v27 = 0;
          qfree();
        }
        qfree();
        v28 = &off_4B6FE8;
        qfree();
        qfree();
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v11 = v38;
        if ( v38 )
        {
          v12 = v39;
          v13 = 0;
          if ( (_QWORD)v39 )
          {
            do
            {
              v14 = (_QWORD *)(v11 + 80 * v13);
              clear_tinfo_t();
              if ( v14[5] )
              {
                v14[6] = 0;
                qfree();
              }
              if ( v14[2] )
              {
                v14[3] = 0;
                qfree();
              }
              ++v13;
              cleanup_argloc();
              v11 = v38;
            }
            while ( v12 != v13 );
          }
          *(_QWORD *)&v39 = 0;
          qfree();
        }
        return (unsigned int)verify_tinfo() == 0;
      }
      while ( 1 )
      {
        *(_QWORD *)&v34 = &v30;
        v8 = v38 + 80 * v7;
        if ( !v37 && (unsigned int)(*(_DWORD *)(v38 + 80 * v7) - 3) <= 1 )
          break;
        tinfo_size = get_tinfo_size();
        v24 = tinfo_size;
        if ( tinfo_size <= 0 || tinfo_size > 0xFFFF && *(_DWORD *)v8 == 2 )
          break;
        if ( (get_tinfo_property() & 0xF) == 9 && !sub_117F80(v24) )
          break;
        if ( (unsigned int)verify_argloc() )
          break;
        *((_QWORD *)&v34 + 1) = v8 + 64;
        v35 = v8;
        if ( (unsigned int)for_all_arglocs() )
          break;
        v10 = v46 & 0xF0;
        if ( (v46 & 0xF0) == 0xC0 )
          v10 = HIDWORD(v40);
        if ( v10 <= 0x10 )
          v10 = getinf();
        if ( v10 - 208 <= 0x2F )
        {
          v19 = get_tinfo_size();
          if ( !(unsigned __int8)sub_1C1A70(&v25, v8, v8 + 64, v19) )
            break;
        }
        if ( (*(_BYTE *)(v8 + 64) & 0xF) == 0xD && (*(_QWORD *)(v8 + 64) & 0x100LL) == 0
          || !(unsigned __int8)print_tinfo() )
        {
          break;
        }
        v7 = ++v6;
        if ( v6 >= (unsigned __int64)v39 )
          goto LABEL_36;
      }
      if ( v26 )
      {
        v27 = 0;
        qfree();
      }
      qfree();
    }
    v28 = &off_4B6FE8;
    qfree();
    qfree();
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v15 = v38;
  if ( !v38 )
    return 0;
  v16 = v39;
  if ( (_QWORD)v39 )
  {
    v17 = 0;
    do
    {
      v18 = (_QWORD *)(v15 + 80 * v17);
      clear_tinfo_t();
      if ( v18[5] )
      {
        v18[6] = 0;
        qfree();
      }
      if ( v18[2] )
      {
        v18[3] = 0;
        qfree();
      }
      cleanup_argloc();
      v15 = v38;
      ++v17;
    }
    while ( v16 != v17 );
  }
  *(_QWORD *)&v39 = 0;
  qfree();
  return 0;
}

