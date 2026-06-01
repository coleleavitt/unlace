__int64 __fastcall sub_1EFB00(__int64 a1, __int64 *a2, unsigned int *a3, int *a4, int a5, char a6, double a7)
{
  unsigned int v7; // eax
  bool v8; // zf
  __int64 v9; // r13
  unsigned int *v10; // r12
  int v11; // eax
  int *v12; // rdi
  int v13; // ebp
  int v14; // r10d
  int v15; // r14d
  int v16; // edx
  int v17; // esi
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rcx
  int *v21; // rdx
  int *v22; // rax
  int *v23; // rcx
  int v24; // r14d
  int v25; // ebp
  __int64 v26; // rax
  int v28; // r14d
  __int64 v29; // rax
  int *v30; // rbp
  int v31; // r15d
  __int64 range; // rax
  int v33; // eax
  int v34; // edi
  unsigned int *v35; // rax
  int v36; // r15d
  bool v37; // r15
  int tinfo_property; // eax
  int v39; // [rsp+Ch] [rbp-BCh]
  int v40; // [rsp+Ch] [rbp-BCh]
  unsigned int *v41; // [rsp+10h] [rbp-B8h]
  int v44; // [rsp+28h] [rbp-A0h]
  unsigned int v45; // [rsp+28h] [rbp-A0h]
  int *v48; // [rsp+40h] [rbp-88h] BYREF
  __int128 v49; // [rsp+48h] [rbp-80h]
  __int64 v50; // [rsp+60h] [rbp-68h]
  __int128 v51; // [rsp+68h] [rbp-60h]
  __int64 v52; // [rsp+78h] [rbp-50h]
  int v53; // [rsp+80h] [rbp-48h]
  unsigned __int64 v54; // [rsp+88h] [rbp-40h]

  v7 = a3[22];
  v8 = *a3 == 2;
  v54 = __readfsqword(0x28u);
  v9 = *a2;
  v39 = v7;
  v41 = a3;
  if ( v8 && v9 > 0 )
  {
    v35 = (unsigned int *)qalloc_or_throw(16, (__int64)a2, (__int64)a3, (__int64)a4);
    *v35 = 0;
    v10 = v35;
    copy_argloc();
    if ( (unsigned __int8)sub_1C55E0(v10, a1, v9, (unsigned int)v39, 1, a7) )
    {
      v36 = v39 - v9;
      v41 = v10;
      v9 = 0;
      v39 = v36;
    }
  }
  else
  {
    v10 = nullptr;
  }
  v48 = nullptr;
  v49 = 0;
  v11 = sub_1C37C0(a4, (__int64 *)&v48, a5, (__int64)v41, v39, 1);
  v12 = v48;
  if ( !v11 )
  {
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree((__int64)v48);
    }
    goto LABEL_46;
  }
  if ( v39 != *v48 )
  {
    v50 = 0;
    v52 = 0;
    v53 = -1;
    v51 = 0;
    if ( (unsigned __int8)calc_tinfo_gaps() && (_QWORD)v51 && (_QWORD)v49 )
    {
      v28 = 0;
      v29 = 0;
      do
      {
        v30 = &v48[6 * v29];
        v31 = v30[5] + *v30;
        range = rangeset_t_find_range();
        if ( range )
        {
          v33 = *(_QWORD *)(range + 8) - v31;
          v34 = a5 - (*v30 + v30[4]);
          if ( v34 < 0 )
          {
            if ( !under_debugger )
              sub_383060(0xC9B2u, 0.0);
LABEL_67:
            BUG();
          }
          if ( v33 > v34 )
            v33 = a5 - (*v30 + v30[4]);
          *v30 += v33;
        }
        v29 = ++v28;
      }
      while ( v28 < (unsigned __int64)v49 );
    }
    sub_1C36C0(&v48);
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v50);
    }
    v12 = v48;
  }
  v13 = v12[4];
  v14 = v12[5];
  if ( !(_QWORD)v49 )
  {
    if ( !under_debugger )
      sub_383060(0xCA7Bu, 0.0);
    goto LABEL_67;
  }
  v15 = *v12;
  if ( (_QWORD)v49 != 1 )
  {
    v16 = *v12;
    v17 = v12[4];
    v18 = 0;
    v19 = 1;
    v20 = 0;
    while ( 1 )
    {
      v22 = &v12[6 * v19];
      v23 = &v12[6 * v20];
      if ( v16 + v17 != v22[4] )
        break;
      if ( v23[5] + v16 != v22[5] )
        break;
      v15 += *v22;
      LODWORD(v19) = v18 + 2;
      ++v18;
      v19 = (int)v19;
      if ( (int)v19 >= (unsigned __int64)v49 )
        break;
      v20 = v18;
      v21 = &v12[6 * v18];
      v17 = v21[4];
      v16 = *v21;
    }
  }
  if ( v12 )
  {
    v44 = v12[5];
    *(_QWORD *)&v49 = 0;
    qfree((__int64)v12);
    v14 = v44;
  }
  if ( v15 == -1 )
  {
    if ( v10 )
    {
      cleanup_argloc();
      qfree((__int64)v10);
    }
    return 0;
  }
  if ( !v15 )
  {
LABEL_46:
    if ( !under_debugger )
      sub_383060(0xC7D6u, 0.0);
    goto LABEL_67;
  }
  if ( a6 )
  {
    v26 = v13 - v14 + v9;
  }
  else
  {
    v24 = v13 + v15;
    if ( v24 < v39 )
    {
      v37 = *a4 == 2;
      if ( *v41 == 2 && *a4 == 2 )
      {
        if ( !under_debugger )
          sub_383060(0xC7D4u, 0.0);
        goto LABEL_67;
      }
      v40 = v14;
      v45 = *v41;
      tinfo_property = get_tinfo_property();
      v14 = v40;
      if ( v24 < tinfo_property )
      {
        if ( v45 != 2 || v37 )
        {
          if ( !under_debugger )
            sub_383060(0xC7D7u, 0.0);
          goto LABEL_67;
        }
        return 0;
      }
    }
    v25 = v13 - v14;
    if ( v9 < 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC8D8u, 0.0);
      goto LABEL_67;
    }
    v26 = v9 + v25;
    if ( v9 > v26 != v25 < 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC7D8u, 0.0);
      goto LABEL_67;
    }
    if ( v26 < 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC815u, 0.0);
      goto LABEL_67;
    }
  }
  *a2 = v26;
  if ( v10 )
  {
    cleanup_argloc();
    qfree((__int64)v10);
  }
  return 1;
}

