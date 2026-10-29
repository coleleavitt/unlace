_QWORD *__fastcall sub_24D8E0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, double a5)
{
  _DWORD *exception; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // eax
  int v10; // ebp
  _QWORD *v11; // rdx
  unsigned __int64 i; // rax
  int v13; // eax
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbp
  unsigned __int64 v25; // rbx
  char v26; // r9
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  int v33; // edx
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // r15
  _QWORD *v45; // rcx
  __int64 tinfo_size; // rax
  int v47; // ecx
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // r12
  __int64 v52; // rbp
  _QWORD *v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 *v59; // rax
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  __int64 v67; // rbx
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rsi
  int v71; // eax
  __int64 v72; // rdi
  _QWORD *v73; // [rsp+8h] [rbp-170h]
  int v74; // [rsp+10h] [rbp-168h]
  __int64 v75; // [rsp+10h] [rbp-168h]
  __int64 *v76; // [rsp+18h] [rbp-160h]
  __int64 v77; // [rsp+20h] [rbp-158h]
  _QWORD *v79; // [rsp+38h] [rbp-140h]
  __int64 v80; // [rsp+50h] [rbp-128h]
  _QWORD *v81; // [rsp+60h] [rbp-118h]
  char v82; // [rsp+6Ch] [rbp-10Ch]
  __int64 v84; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v85; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v86; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v87[2]; // [rsp+A0h] [rbp-D8h] BYREF
  void *v88; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v89; // [rsp+B8h] [rbp-C0h]
  __int64 tinfo_property; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v91; // [rsp+D8h] [rbp-A0h]
  __int64 v92; // [rsp+E8h] [rbp-90h]
  __int64 v93; // [rsp+F0h] [rbp-88h]
  __int64 v94; // [rsp+F8h] [rbp-80h]
  __int128 v95; // [rsp+100h] [rbp-78h]
  __int64 v96; // [rsp+110h] [rbp-68h]
  __int128 v97; // [rsp+118h] [rbp-60h]
  char v98; // [rsp+128h] [rbp-50h]
  unsigned __int64 v99; // [rsp+138h] [rbp-40h]

  v82 = a4;
  v99 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_383060(0xC4E3u, a5);
    goto LABEL_106;
  }
  v7 = *(_QWORD *)(a2 + 72);
  v8 = *(_DWORD *)(v7 + 284);
  if ( v8 == 1 )
  {
    v68 = j__qalloc_or_throw(64, a2, (__int64)a3, a4);
    *(_QWORD *)(v68 + 8) = 0xFFFFFFFF00000000LL;
    v79 = (_QWORD *)v68;
    *(_QWORD *)v68 = -1;
    *(_QWORD *)(v68 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v68 + 40) = 0;
    *(_QWORD *)(v68 + 48) = 0;
    *(_DWORD *)(v68 + 56) = 0;
    *(_OWORD *)(v68 + 24) = 0;
    return v79;
  }
  if ( v8 == 25 )
  {
    if ( *(_QWORD *)(v7 + 32) != 2 )
    {
      if ( !under_debugger )
        sub_383060(0xC97Cu, a5);
      goto LABEL_106;
    }
    v57 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(v57 + 80) == 9 )
    {
      if ( *(_QWORD *)(**(_QWORD **)(v57 + 88) + 440LL) < (unsigned __int64)*(int *)(*(_QWORD *)(v57 + 88) + 16LL)
        || (copy_tinfo_t(),
            v58 = *(_QWORD *)(v7 + 24),
            v59 = *(__int64 **)(v58 + 88),
            v60 = *v59,
            v61 = *((int *)v59 + 4),
            *(_QWORD *)(v60 + 440) < v61) )
      {
        sub_23E380(a5);
      }
      *(_DWORD *)(v58 + 84) = *(_DWORD *)(*(_QWORD *)(v60 + 432) + 104 * v61 + 88);
      v7 = *(_QWORD *)(a2 + 72);
    }
  }
  v81 = *(_QWORD **)(*(_QWORD *)(a1 + 176) + 8LL);
  v10 = (*(int *)(v7 + 280) >> 1) & 4 | (*(int *)(v7 + 280) >> 2) & 1;
  if ( *(_BYTE *)(a2 + 32) == 11 )
  {
    v84 = 0;
    goto LABEL_9;
  }
  v84 = 0;
  if ( (v10 & 3) != 0 )
    goto LABEL_9;
  v11 = (_QWORD *)v81[172];
  if ( !v11 )
    goto LABEL_9;
  i = *v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( i )
  {
    if ( (*(_BYTE *)i & 2) != 0 )
      goto LABEL_9;
    v69 = *(_QWORD *)(i + 24);
    v70 = *(_QWORD *)(a2 + 24);
    if ( v70 >= v69 )
      goto LABEL_81;
LABEL_78:
    for ( i = *(_QWORD *)(i + 8); ; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)i & 2) != 0 )
        goto LABEL_9;
      v69 = *(_QWORD *)(i + 24);
      if ( v70 < v69 )
        goto LABEL_78;
LABEL_81:
      if ( v69 >= v70 )
        break;
    }
    if ( v11 == (_QWORD *)i )
    {
LABEL_9:
      sub_336290(&tinfo_property, v7);
      copy_tinfo_t();
      clear_tinfo_t();
      if ( !under_debugger )
        sub_383060(0xCC87u, a5);
      goto LABEL_106;
    }
  }
  copy_tinfo_t();
  if ( *(_DWORD *)(a2 + 68) )
  {
    tinfo_property = get_tinfo_property();
    if ( (get_tinfo_property() & 0x3F) != 1 )
    {
      clear_tinfo_t();
      goto LABEL_10;
    }
    clear_tinfo_t();
    goto LABEL_9;
  }
LABEL_10:
  tinfo_property = get_tinfo_property();
  copy_tinfo_t();
  clear_tinfo_t();
  v85 = get_tinfo_property();
  v13 = *(_DWORD *)(a2 + 68);
  if ( v13 )
  {
    if ( get_tinfo_size() < (unsigned __int64)v13 && (get_tinfo_property() & 0xF) != 9 )
    {
      v71 = get_tinfo_property();
      sub_32C430(&tinfo_property, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 68), v71);
      copy_tinfo_t();
      clear_tinfo_t();
      v72 = *(_QWORD *)(a1 + 328);
      tinfo_property = 0;
      *(_QWORD *)&v91 = 0;
      sub_32DC20(v72, &v84, -1, &v85, &tinfo_property);
      cleanup_argloc();
    }
  }
  else if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_property = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v62 = *(_QWORD *)(a1 + 328);
    tinfo_property = 0;
    *(_QWORD *)&v91 = 0;
    sub_32DC20(v62, &v84, -1, &v85, &tinfo_property);
    cleanup_argloc();
  }
  sub_32C540(&v86, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), &v84);
  if ( *(_DWORD *)a2 == 57 )
  {
    v14 = (_QWORD *)&word_2;
    v17 = sub_24D0D0(a1, a2 + 32, a2 + 48, (__int64)&v84, a5);
    if ( (get_tinfo_property() & 0xF) != 0xA )
    {
      v14 = &v86;
      sub_244E70(v17, (__int64)&v86, v15, v16);
    }
  }
  else
  {
    v14 = *(__int64 **)(a2 + 24);
    v17 = sub_249AF0(a1, v14, a2 + 32, &v86, &v86, 16, a5);
  }
  v18 = j__qalloc_or_throw(64, (__int64)v14, v15, v16);
  *(_QWORD *)v18 = -1;
  v19 = v18;
  *(_QWORD *)(v18 + 24) = v17;
  *(_DWORD *)(v18 + 8) = 57;
  *(_QWORD *)(v18 + 12) = -1;
  *(_QWORD *)(v18 + 32) = 0;
  *(_QWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 48) = 0;
  *(_DWORD *)(v18 + 56) = 0;
  v79 = (_QWORD *)v18;
  *(_QWORD *)v18 = *(_QWORD *)(a2 + 24);
  v20 = v85;
  v85 = 0;
  *(_QWORD *)(v19 + 48) = v20;
  v23 = qalloc_or_throw(40, (__int64)v14, v21, v22);
  tinfo_property = 0;
  tinfo_property = get_tinfo_property();
  *(_QWORD *)v23 = 0;
  *(_QWORD *)(v23 + 24) = 0;
  *(_OWORD *)(v23 + 8) = 0;
  copy_tinfo_t();
  *(_DWORD *)(v23 + 32) = v10;
  v79[4] = v23;
  clear_tinfo_t();
  v24 = *(_QWORD *)(v7 + 32);
  v76 = (__int64 *)v79[4];
  sub_246200(v76, (int)v24);
  tinfo_property = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v96 = 0;
  v98 = 16;
  v91 = 0;
  v95 = 0;
  v97 = 0;
  v87[0] = 0;
  v87[0] = get_tinfo_property();
  LOBYTE(v23) = get_tinfo_details();
  clear_tinfo_t();
  if ( !(_BYTE)v23 )
    get_tinfo_details();
  v25 = 0;
  v77 = (unsigned int)(v24 - 1);
  if ( (int)v24 > 0 )
  {
    while ( 1 )
    {
      v43 = 80 * v25 + *(_QWORD *)(v7 + 24);
      v73 = (_QWORD *)(v43 + 24);
      if ( v25 < (unsigned __int64)v91 )
        v73 = (_QWORD *)(tinfo_property + 80 * v25 + 64);
      v44 = *(int *)(v43 + 4);
      if ( v44 != get_tinfo_size() )
        break;
      v45 = (_QWORD *)(v43 + 24);
      if ( *(_BYTE *)v43 == 10 && **(_BYTE **)(v43 + 8) == 6 )
      {
        sub_E7D60();
        v45 = (_QWORD *)(v43 + 24);
      }
      v26 = 2;
      if ( (*(_BYTE *)(v7 + 281) & 1) != 0 )
        v26 = 4 * (*(_DWORD *)(v7 + 8) - 1 == (_DWORD)v25) + 2;
      v27 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, v43, v45, v45, v26, 0.0);
      v28 = v27;
      if ( !v27 )
      {
        if ( !under_debugger )
          sub_383060(0xC4E5u, 0.0);
        goto LABEL_106;
      }
      v29 = *v76;
      *(_BYTE *)(v29 + 72 * v25 + 60) = *(_DWORD *)(v7 + 8) <= (int)v25;
      v30 = *(_QWORD *)(a1 + 328);
      v31 = v29 + 72 * v25;
      v74 = *(_DWORD *)(*(_QWORD *)(v30 + 112) + 80LL);
      if ( !(unsigned __int8)sub_246B40(v27, v30, v73, 0.0) )
      {
        if ( *(_BYTE *)(v31 + 60) )
        {
          if ( (get_tinfo_property() & 0xF) != 0xB )
          {
            tinfo_size = get_tinfo_size();
            v47 = v74;
            v80 = v74 - 1;
            v75 = v80 + tinfo_size;
            if ( (((v80 + tinfo_size) ^ (v80 + get_tinfo_size())) & -v47) != 0 )
              v28 = sub_244E70(v28, (__int64)v73, v48, v75);
          }
        }
      }
      v32 = *(_QWORD *)v28;
      *(_QWORD *)v28 = *(_QWORD *)v31;
      v33 = *(_DWORD *)(v31 + 8);
      *(_QWORD *)v31 = v32;
      LODWORD(v32) = *(_DWORD *)(v28 + 8);
      *(_DWORD *)(v28 + 8) = v33;
      v34 = *(_DWORD *)(v31 + 12);
      *(_DWORD *)(v31 + 8) = v32;
      LODWORD(v32) = *(_DWORD *)(v28 + 12);
      *(_DWORD *)(v28 + 12) = v34;
      v35 = *(_QWORD *)(v31 + 24);
      *(_DWORD *)(v31 + 12) = v32;
      v36 = *(_QWORD *)(v28 + 24);
      *(_QWORD *)(v28 + 24) = v35;
      v37 = *(_QWORD *)(v31 + 32);
      *(_QWORD *)(v31 + 24) = v36;
      v38 = *(_QWORD *)(v28 + 32);
      *(_QWORD *)(v28 + 32) = v37;
      v39 = *(_QWORD *)(v31 + 40);
      *(_QWORD *)(v31 + 32) = v38;
      v40 = *(_QWORD *)(v28 + 40);
      *(_QWORD *)(v28 + 40) = v39;
      v41 = *(_QWORD *)(v31 + 48);
      *(_QWORD *)(v31 + 40) = v40;
      v42 = *(_QWORD *)(v28 + 48);
      *(_QWORD *)(v28 + 48) = v41;
      LODWORD(v41) = *(_DWORD *)(v31 + 56);
      *(_QWORD *)(v31 + 48) = v42;
      LODWORD(v42) = *(_DWORD *)(v28 + 56);
      *(_DWORD *)(v28 + 56) = v41;
      *(_DWORD *)(v31 + 56) = v42;
      if ( v28 )
      {
        sub_255630(v28);
        clear_tinfo_t();
        j__qfree(v28);
      }
      copy_tinfo_t();
      if ( *(_QWORD *)v31 == -1 )
        *(_QWORD *)v31 = *(_QWORD *)(v43 + 16);
      if ( v25 == v77 )
        goto LABEL_38;
      ++v25;
    }
    if ( !under_debugger )
      sub_383060(0xC4E4u, 0.0);
LABEL_106:
    BUG();
  }
LABEL_38:
  if ( v82 )
  {
    sub_64000(v87, v7 + 96, 0.0);
    v88 = nullptr;
    v89 = 0;
    v67 = *(_QWORD *)(v7 + 120);
    if ( v67 )
    {
      v88 = (void *)qalloc_or_throw(16 * v67, v7 + 96, v63, v64);
      *((_QWORD *)&v89 + 1) = v67;
      memcpy(v88, *(const void **)(v7 + 112), 16 * v67);
      *(_QWORD *)&v89 = v67;
    }
    sub_64640(v87, (__int64 *)(v7 + 240), v63, v64, v65, v66);
    sub_317C60((__int64 *)&v88, v7 + 256);
    if ( !(unsigned __int8)sub_64880(v87) || (_QWORD)v89 )
    {
      if ( v88 )
      {
        *(_QWORD *)&v89 = 0;
        qfree((__int64)v88);
      }
      qfree(v87[0]);
      if ( *(_QWORD *)(v7 + 56) != 1 )
      {
        if ( !under_debugger )
          sub_383060(0xC4E6u, 0.0);
        goto LABEL_106;
      }
      sub_32C270(v87, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(*(_QWORD *)(v7 + 48) + 4LL));
      v79 = sub_24AA50(a1, *(__int64 **)(a2 + 24), *(_QWORD *)(v7 + 48), v87, (__int64)v79, 0.0);
      clear_tinfo_t();
    }
    else
    {
      if ( v88 )
        qfree((__int64)v88);
      qfree(v87[0]);
    }
  }
  v49 = sub_1CE9E0((__int64)v81);
  if ( v49 && v49[4] != v81[11] )
  {
    if ( v79 )
    {
      sub_255630((__int64)v79);
      clear_tinfo_t();
      j__qfree((__int64)v79);
    }
    exception = __cxa_allocate_exception(0x30u);
    v6 = v81[5];
    *(_QWORD *)exception = off_4DBCD0;
    exception[2] = -17;
    *((_QWORD *)exception + 2) = v6;
    *((_QWORD *)exception + 3) = 0;
    *((_OWORD *)exception + 2) = 0;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
  }
  sub_246B40((__int64)v79, *(_QWORD *)(a1 + 328), a3, 0.0);
  if ( v96 )
  {
    *(_QWORD *)&v97 = 0;
    qfree(v96);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v50 = tinfo_property;
  if ( tinfo_property )
  {
    v51 = v91;
    if ( (_QWORD)v91 )
    {
      v52 = 0;
      do
      {
        v53 = (_QWORD *)(v50 + 80 * v52);
        clear_tinfo_t();
        v54 = v53[5];
        if ( v54 )
        {
          v53[6] = 0;
          qfree(v54);
        }
        v55 = v53[2];
        if ( v55 )
        {
          v53[3] = 0;
          qfree(v55);
        }
        ++v52;
        cleanup_argloc();
        v50 = tinfo_property;
      }
      while ( v51 != v52 );
    }
    *(_QWORD *)&v91 = 0;
    qfree(v50);
  }
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v79;
}

