__int64 __fastcall sub_36ECF0(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rbp
  char v13; // al
  unsigned int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  bool v23; // cl
  char v24; // bp
  __int64 v25; // r13
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // [rsp+8h] [rbp-1C0h]
  char v32; // [rsp+Eh] [rbp-1BAh]
  char v33; // [rsp+Fh] [rbp-1B9h]
  __int64 v34; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v35; // [rsp+18h] [rbp-1B0h]
  __int64 v36; // [rsp+28h] [rbp-1A0h]
  __int64 v37; // [rsp+30h] [rbp-198h]
  __int64 v38; // [rsp+38h] [rbp-190h]
  __int128 v39; // [rsp+40h] [rbp-188h]
  __int64 v40; // [rsp+50h] [rbp-178h]
  __int128 v41; // [rsp+58h] [rbp-170h]
  char v42; // [rsp+68h] [rbp-160h]
  _BYTE v43[8]; // [rsp+70h] [rbp-158h] BYREF
  __int64 v44; // [rsp+78h] [rbp-150h]
  __int64 v45; // [rsp+80h] [rbp-148h]
  __int64 v46; // [rsp+90h] [rbp-138h]
  __int64 v47; // [rsp+98h] [rbp-130h]
  _DWORD *v48; // [rsp+C8h] [rbp-100h]
  __int64 v49; // [rsp+D0h] [rbp-F8h]
  __int64 v50; // [rsp+E0h] [rbp-E8h]
  __int64 v51; // [rsp+E8h] [rbp-E0h]
  __int64 v52; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+108h] [rbp-C0h]
  __int64 v54; // [rsp+110h] [rbp-B8h]
  __int64 v55; // [rsp+120h] [rbp-A8h]
  __int64 v56; // [rsp+128h] [rbp-A0h]
  _DWORD *v57; // [rsp+158h] [rbp-70h]
  __int64 v58; // [rsp+160h] [rbp-68h]
  __int64 v59; // [rsp+170h] [rbp-58h]
  __int64 v60; // [rsp+178h] [rbp-50h]
  unsigned __int64 v61; // [rsp+188h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936)) )
    return 64;
  v2 = *(int *)(a1 + 480);
  v33 = 1;
  if ( (_DWORD)v2 != -1 )
    v33 = sub_369E00(*(_QWORD *)(a1 + 432) + 104 * v2, a2);
  v3 = *(_QWORD *)(a1 + 1496);
  v34 = 0;
  v36 = 0;
  v4 = *(_BYTE *)(v3 + 148) == 2;
  v42 = 16;
  v5 = v33 & v4;
  v4 = *(_QWORD *)(a1 + 464) == 0;
  v37 = 0;
  v32 = v5;
  v38 = 0;
  v40 = 0;
  v35 = 0;
  v39 = 0;
  v41 = 0;
  if ( v4 )
  {
    v14 = 256;
    if ( v5 )
      goto LABEL_13;
  }
  else
  {
    v31 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v7 < v8 + 1 )
      {
        v34 = qvector_reserve((__int64)&v34, v6, v8 + 1, 80);
        v6 = v34;
        v8 = v35;
      }
      v10 = v6 + 80 * v8;
      *(_DWORD *)v10 = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 40) = 0;
      *(_QWORD *)(v10 + 64) = 0;
      *(_DWORD *)(v10 + 72) = 0;
      *(_OWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 48) = 0;
      v11 = *(_QWORD *)(a1 + 456);
      *(_QWORD *)&v35 = v35 + 1;
      v12 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(v11 + 4 * v9);
      sub_1C7740(&v52, a1, v12, *(unsigned int *)(v12 + 88), 0.0);
      copy_argloc();
      cleanup_argloc();
      copy_tinfo_t();
      v13 = sub_369E00(v12, 0.0);
      v9 = ++v31;
      v32 &= v13;
      if ( (unsigned __int64)v31 >= *(_QWORD *)(a1 + 464) )
        break;
      v7 = *((_QWORD *)&v35 + 1);
      v8 = v35;
      v6 = v34;
    }
    v14 = 256;
    if ( v32 )
    {
LABEL_11:
      v15 = v40;
      if ( !v40 )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  *((_QWORD *)&v39 + 1) = (int)sub_36EC70(a1, 0.0);
  v14 = guess_func_cc();
  if ( v14 == 16 )
  {
    v14 = guess_func_cc();
    if ( v14 == 16 )
    {
      if ( (_QWORD)v35 )
      {
        if ( !under_debugger )
          sub_383060(0xC7C3u, 0.0);
        BUG();
      }
LABEL_49:
      v26 = getinf();
      v23 = v26 == 176;
      if ( v26 != 256 )
      {
        if ( v26 != 176 )
          goto LABEL_11;
        goto LABEL_51;
      }
      goto LABEL_63;
    }
  }
  if ( v14 == 112 )
  {
    if ( (getinf() & 0xF) != 6 )
      goto LABEL_47;
    v24 = getinf_flag();
    if ( v24 )
      goto LABEL_47;
    v25 = *(_QWORD *)(a1 + 1496);
    sub_D10B0((__int64)v43, v25, 0x80u);
    if ( !v51 && v49 == 1 )
    {
      sub_D10B0((__int64)&v52, v25, 0x70u);
      if ( v58 )
        v24 = *v48 == *v57;
      if ( v59 )
      {
        v60 = 0;
        qfree(v59);
      }
      if ( v57 )
      {
        v58 = 0;
        qfree((__int64)v57);
      }
      if ( v55 )
      {
        v56 = 0;
        qfree(v55);
      }
      if ( v53 )
      {
        v54 = 0;
        qfree(v53);
      }
    }
    if ( v50 )
    {
      v51 = 0;
      qfree(v50);
    }
    if ( v48 )
    {
      v49 = 0;
      qfree((__int64)v48);
    }
    if ( v46 )
    {
      v47 = 0;
      qfree(v46);
    }
    if ( v44 )
    {
      v45 = 0;
      qfree(v44);
    }
    if ( !v24 )
      goto LABEL_47;
LABEL_46:
    if ( (unsigned __int8)sub_36EA50(a1) )
    {
      v14 = 128;
      if ( *(_DWORD *)(sub_13D280((_QWORD *)a1, 0, 0.0) + 88) == *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) )
        goto LABEL_11;
    }
    goto LABEL_47;
  }
  if ( v14 == 128 )
    goto LABEL_46;
  if ( v14 <= 0x10 )
    goto LABEL_49;
  v23 = v14 == 176;
  if ( v14 != 256 )
  {
    if ( v14 != 176 )
      goto LABEL_30;
LABEL_51:
    if ( (unsigned __int64)getinf() > 0x397
      || (unsigned __int8)getinf_flag()
      && (netnode_check(), v27 = netnode_altval(), v27 > 0x74)
      && ((v28 = *(_DWORD *)(get_ph() + 4)) == 0
       || (v29 = (unsigned int)(v28 - 13), (unsigned int)v29 <= 0x3B)
       && (v30 = 0x800000000000005LL, _bittest64(&v30, v29))
       && v27 != 117) )
    {
LABEL_30:
      if ( v14 - 208 > 0x2F )
        goto LABEL_11;
      goto LABEL_47;
    }
    goto LABEL_64;
  }
LABEL_63:
  if ( v23 )
    goto LABEL_51;
LABEL_64:
  if ( v33 )
    goto LABEL_30;
LABEL_47:
  v15 = v40;
  v14 = 112;
  if ( v40 )
  {
LABEL_12:
    *(_QWORD *)&v41 = 0;
    qfree(v15);
  }
LABEL_13:
  cleanup_argloc();
  clear_tinfo_t();
  v16 = v34;
  if ( v34 )
  {
    v17 = v35;
    if ( (_QWORD)v35 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + 80 * v18);
        clear_tinfo_t();
        v20 = v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          qfree(v20);
        }
        v21 = v19[2];
        if ( v21 )
        {
          v19[3] = 0;
          qfree(v21);
        }
        ++v18;
        cleanup_argloc();
        v16 = v34;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v35 = 0;
    qfree(v16);
  }
  return v14;
}

