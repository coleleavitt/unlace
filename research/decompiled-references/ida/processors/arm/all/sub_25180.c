__int64 __fastcall sub_25180(__int64 a1, const char *a2, char a3, __int64 *a4)
{
  __int64 v4; // r13
  __int64 i; // r12
  const char *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  const char *v9; // rbp
  char v11; // al
  const char *v12; // rbx
  int v13; // eax
  __int64 *v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // rbp
  const char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // dl
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r13
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  size_t v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  struct _Unwind_Exception *v36; // rbx
  __int64 v37; // [rsp+0h] [rbp-B8h]
  __int64 scalar_bt; // [rsp+8h] [rbp-B0h]
  const char *v39; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+18h] [rbp-A0h]
  __int64 v41; // [rsp+28h] [rbp-90h]
  __int64 v42; // [rsp+30h] [rbp-88h]
  __int64 v43; // [rsp+38h] [rbp-80h]
  __int128 v44; // [rsp+40h] [rbp-78h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  __int128 v46; // [rsp+58h] [rbp-60h]
  char v47; // [rsp+68h] [rbp-50h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( !a2 || a3 )
    return v48 - __readfsqword(0x28u);
  v9 = a2;
  if ( (get_aflags() & 0x2000000) != 0 )
    goto LABEL_34;
  v11 = *a2;
  v12 = a2;
  if ( *a2 == 106 )
  {
    if ( a2[1] != 95 )
      goto LABEL_34;
    v11 = a2[2];
    v12 = a2 + 2;
  }
  if ( v11 == 64 )
    v11 = *++v12;
  if ( v11 == 95 )
  {
    do
      ++v12;
    while ( *v12 == 95 );
  }
  if ( strlen(v12) <= 0xF
    || strncmp(v12, "RTC_Check_", 0xAu)
    || (v13 = strncmp(v12 + 11, "_to_", 4u)) != 0
    || (v12[16] & 0xBF) != 0 )
  {
LABEL_34:
    v39 = 0;
    v40 = 0;
    getinf(37);
    if ( (int)demangle_name() > 0 )
    {
      if ( !(_QWORD)v40 )
        return v48 - __readfsqword(0x28u);
      v9 = v39;
    }
    v30 = strlen(v9);
    if ( v30 > 0xA && !strcmp(&v9[v30 - 11], "::`vftable'") )
    {
      if ( !a4 )
        return sub_23B10(a1);
      v31 = a4[1];
      v32 = (__int64 *)(*a4 + 8 * v31);
      if ( (__int64 *)*a4 == v32 )
        goto LABEL_45;
      v33 = (__int64 *)*a4;
      while ( *v33 != a1 )
      {
        if ( v32 == ++v33 )
          goto LABEL_45;
      }
      if ( v32 == v33 )
      {
LABEL_45:
        if ( a4[2] < (unsigned __int64)(v31 + 1) )
        {
          v34 = qvector_reserve((__int64)a4, *a4, v31 + 1, 8);
          v35 = a4[1];
          *a4 = v34;
          v32 = (__int64 *)(v34 + 8 * v35);
        }
        *v32 = a1;
        ++a4[1];
      }
    }
    return v48 - __readfsqword(0x28u);
  }
  v14 = qword_AA4C0;
  while ( v12[10] - 48 != *((char *)v14 + 8) || v12[15] - 48 != *((char *)v14 + 9) )
  {
    ++v13;
    v14 += 2;
    if ( v13 == 6 )
      goto LABEL_34;
  }
  v15 = v13;
  v16 = &qword_AA4C0[2 * v13];
  if ( !*(_BYTE *)v16 )
  {
    v47 = 16;
    v39 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v45 = 0;
    v40 = 0;
    v44 = 0;
    v46 = 0;
    get_scalar_bt();
    copy_tinfo_t();
    clear_tinfo_t();
    scalar_bt = (unsigned __int8)get_scalar_bt();
    v39 = (const char *)qvector_reserve((__int64)&v39, 0, 1, 80);
    v17 = &v39[80 * v40];
    *(_DWORD *)v17 = 0;
    *((_QWORD *)v17 + 1) = 0;
    *((_QWORD *)v17 + 2) = 0;
    *((_QWORD *)v17 + 5) = 0;
    *((_QWORD *)v17 + 8) = 0;
    *((_DWORD *)v17 + 18) = 0;
    *(_OWORD *)(v17 + 24) = 0;
    *((_OWORD *)v17 + 3) = 0;
    *(_QWORD *)&v40 = v40 + 1;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( LOBYTE(qword_AA4C0[2 * v15 + 1]) != 8
      || (unsigned __int8)getinf_flag(3, 4, v18, v19, v20, v21, v37, scalar_bt, (__int64)v39) )
    {
      v22 = 112;
    }
    else
    {
      v22 = 48;
    }
    HIDWORD(v41) = 0;
    v47 = v22 | v47 & 0xF;
    create_tinfo();
    if ( !*(_BYTE *)v16 )
    {
      if ( !under_debugger )
      {
        v36 = (struct _Unwind_Exception *)interr(10212);
        clear_tinfo_t();
        if ( v45 )
        {
          *(_QWORD *)&v46 = 0;
          qfree(v45);
        }
        cleanup_argloc();
        clear_tinfo_t();
        if ( v39 )
        {
          v4 = v40;
          for ( i = 0; v4 != i; ++i )
          {
            v6 = &v39[80 * i];
            clear_tinfo_t();
            v7 = *((_QWORD *)v6 + 5);
            if ( v7 )
            {
              *((_QWORD *)v6 + 6) = 0;
              qfree(v7);
            }
            v8 = *((_QWORD *)v6 + 2);
            if ( v8 )
            {
              *((_QWORD *)v6 + 3) = 0;
              qfree(v8);
            }
            cleanup_argloc();
          }
          *(_QWORD *)&v40 = 0;
          qfree((__int64)v39);
        }
        _Unwind_Resume(v36);
      }
      BUG();
    }
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v23 = (__int64)v39;
    if ( v39 )
    {
      v24 = v40;
      if ( (_QWORD)v40 )
      {
        v25 = 0;
        do
        {
          v26 = (_QWORD *)(v23 + 80 * v25);
          clear_tinfo_t();
          v27 = v26[5];
          if ( v27 )
          {
            v26[6] = 0;
            qfree(v27);
          }
          v28 = v26[2];
          if ( v28 )
          {
            v26[3] = 0;
            qfree(v28);
          }
          ++v25;
          cleanup_argloc();
          v23 = (__int64)v39;
        }
        while ( v24 != v25 );
      }
      *(_QWORD *)&v40 = 0;
      qfree(v23);
    }
  }
  return apply_tinfo();
}
