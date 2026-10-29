bool __fastcall sub_32CB80(_BYTE *a1, __int64 a2, double a3, __m128 a4)
{
  char tinfo_property; // al
  char tinfo_details; // r15
  unsigned int v7; // eax
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r15
  int tinfo_size; // eax
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r12
  _QWORD *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // r14
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v25; // eax
  unsigned int v26; // r13d
  int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // [rsp+24h] [rbp-16Ch]
  __int64 v31; // [rsp+60h] [rbp-130h] BYREF
  __int64 v32; // [rsp+68h] [rbp-128h]
  __int64 v33; // [rsp+78h] [rbp-118h]
  __int64 v34; // [rsp+80h] [rbp-110h]
  _UNKNOWN **v35; // [rsp+A0h] [rbp-F0h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-E8h]
  __int64 v37; // [rsp+B0h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-D8h]
  __int64 v39; // [rsp+C0h] [rbp-D0h]
  __int64 v40; // [rsp+C8h] [rbp-C8h]
  __int128 v41; // [rsp+D0h] [rbp-C0h]
  __int64 v42; // [rsp+E0h] [rbp-B0h]
  int v43; // [rsp+E8h] [rbp-A8h]
  char v44; // [rsp+ECh] [rbp-A4h]
  __int64 v45; // [rsp+F0h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-98h]
  __int64 v47; // [rsp+108h] [rbp-88h]
  __int64 v48; // [rsp+110h] [rbp-80h] BYREF
  __int64 v49; // [rsp+118h] [rbp-78h] BYREF
  __int128 v50; // [rsp+120h] [rbp-70h]
  __int64 v51; // [rsp+130h] [rbp-60h]
  __int128 v52; // [rsp+138h] [rbp-58h]
  char v53; // [rsp+148h] [rbp-48h]
  unsigned __int64 v54; // [rsp+158h] [rbp-38h]

  v54 = __readfsqword(0x28u);
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
  v53 = 16;
  v48 = 0;
  v49 = 0;
  v45 = 0;
  v47 = 0;
  v51 = 0;
  v46 = 0;
  v50 = 0;
  v52 = 0;
  tinfo_details = get_tinfo_details();
  if ( tinfo_details && (unsigned __int64)v46 < *(int *)(a2 + 656) )
  {
    v7 = v53 & 0xF0;
    if ( v7 <= 0x10 )
    {
      v7 = getinf();
      v36 = a2;
      v35 = &off_4E3668;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v42 = 0;
      v43 = v7;
      v41 = 0;
      if ( v7 <= 0x10 )
        v7 = getinf();
    }
    else
    {
      v36 = a2;
      v35 = &off_4E3668;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v42 = 0;
      v43 = v53 & 0xF0;
      v41 = 0;
    }
    if ( v7 != 176 )
    {
      if ( v7 != 256 )
        goto LABEL_15;
      goto LABEL_68;
    }
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        goto LABEL_68;
      netnode_check();
      v26 = netnode_altval();
      if ( v26 <= 0x74 )
        goto LABEL_68;
      v27 = *(_DWORD *)(get_ph() + 4);
      if ( !v27 )
        goto LABEL_15;
      v28 = (unsigned int)(v27 - 13);
      if ( (unsigned int)v28 > 0x3B || (v29 = 0x800000000000005LL, !_bittest64(&v29, v28)) )
      {
LABEL_68:
        tinfo_details = 0;
        goto LABEL_15;
      }
      tinfo_details = v26 != 117;
    }
LABEL_15:
    v44 = tinfo_details;
    if ( (get_tinfo_property() & 0x3F) == 1
      || sub_32C920((__int64)&v35, (__int64)&v48, (__int64)&v49) && ((v48 & 0xF) != 0xD || (v48 & 0x100) != 0) )
    {
      sub_1C44E0((__int64)&v31, a2, (__int64)&v45);
      v8 = 0;
      v9 = 0;
      if ( !(_QWORD)v46 )
      {
LABEL_36:
        if ( v33 )
        {
          v34 = 0;
          qfree(v33);
        }
        qfree(v32);
        v35 = &off_4E3668;
        qfree(v39);
        qfree(v37);
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          qfree(v51);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v13 = v45;
        if ( v45 )
        {
          v14 = v46;
          v15 = 0;
          if ( (_QWORD)v46 )
          {
            do
            {
              v16 = (_QWORD *)(v13 + 80 * v15);
              clear_tinfo_t();
              v17 = v16[5];
              if ( v17 )
              {
                v16[6] = 0;
                qfree(v17);
              }
              v18 = v16[2];
              if ( v18 )
              {
                v16[3] = 0;
                qfree(v18);
              }
              ++v15;
              cleanup_argloc();
              v13 = v45;
            }
            while ( v14 != v15 );
          }
          *(_QWORD *)&v46 = 0;
          qfree(v13);
        }
        return (unsigned int)verify_tinfo() == 0;
      }
      while ( 1 )
      {
        *(_QWORD *)&v41 = &v37;
        v10 = v45 + 80 * v9;
        if ( !v44 && (unsigned int)(*(_DWORD *)(v45 + 80 * v9) - 3) <= 1 )
          break;
        tinfo_size = get_tinfo_size();
        v30 = tinfo_size;
        if ( tinfo_size <= 0 || tinfo_size > 0xFFFF && *(_DWORD *)v10 == 2 )
          break;
        if ( (get_tinfo_property() & 0xF) == 9 && !sub_11CB40(v30) )
          break;
        if ( (unsigned int)verify_argloc() )
          break;
        *((_QWORD *)&v41 + 1) = v10 + 64;
        v42 = v10;
        if ( (unsigned int)for_all_arglocs() )
          break;
        v12 = v53 & 0xF0;
        if ( (v53 & 0xF0) == 0xC0 )
          v12 = HIDWORD(v47);
        if ( v12 <= 0x10 )
          v12 = getinf();
        if ( v12 - 208 <= 0x2F )
        {
          v25 = get_tinfo_size();
          if ( !(unsigned __int8)sub_1C6910(&v31, v10, v10 + 64, v25, 0.0, a4) )
            break;
        }
        if ( (*(_BYTE *)(v10 + 64) & 0xF) == 0xD && (*(_QWORD *)(v10 + 64) & 0x100LL) == 0
          || !(unsigned __int8)print_tinfo() )
        {
          break;
        }
        v9 = ++v8;
        if ( v8 >= (unsigned __int64)v46 )
          goto LABEL_36;
      }
      if ( v33 )
      {
        v34 = 0;
        qfree(v33);
      }
      qfree(v32);
    }
    v35 = &off_4E3668;
    qfree(v39);
    qfree(v37);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v19 = v45;
  if ( !v45 )
    return 0;
  v20 = v46;
  if ( (_QWORD)v46 )
  {
    v21 = 0;
    do
    {
      v22 = (_QWORD *)(v19 + 80 * v21);
      clear_tinfo_t();
      v23 = v22[5];
      if ( v23 )
      {
        v22[6] = 0;
        qfree(v23);
      }
      v24 = v22[2];
      if ( v24 )
      {
        v22[3] = 0;
        qfree(v24);
      }
      cleanup_argloc();
      v19 = v45;
      ++v21;
    }
    while ( v20 != v21 );
  }
  *(_QWORD *)&v46 = 0;
  qfree(v19);
  return 0;
}

