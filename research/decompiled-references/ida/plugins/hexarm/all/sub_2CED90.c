unsigned __int64 __fastcall sub_2CED90(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  unsigned __int64 v5; // r12
  __int64 *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12
  __int64 v19; // rdi
  unsigned __int8 (*v20)(void); // rax
  __int64 v21; // rdi
  __int64 v22; // rbp
  unsigned __int8 (*v23)(void); // rax
  __int64 *v25; // rbp
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // r13
  _QWORD *v30; // r15
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rdi
  __int64 v36; // rbp
  __int64 v37; // r13
  __int64 v38; // rax
  _QWORD *v39; // rdi
  unsigned __int64 v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+8h] [rbp-80h]
  unsigned __int64 i; // [rsp+8h] [rbp-80h]
  __int64 *v45; // [rsp+18h] [rbp-70h]
  __int64 *v46; // [rsp+20h] [rbp-68h]
  __int64 *v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h] BYREF
  __int128 v49; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v4 = a1[14] == 0;
  v50 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( v4 )
  {
    if ( a1[1] )
    {
      v40 = 0;
      v6 = a1 + 2;
      do
      {
        switch_dbctx();
        v7 = a2[v40];
        sub_2CE9C0((__int64 *)(v7 + 40), v5);
        v8 = *v6;
        v9 = *v6 + 200 * v6[1];
        if ( *v6 != v9 )
        {
          do
          {
            v10 = *(_QWORD *)(v8 + 192);
            v11 = v8;
            v8 += 200;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 192 * v10) + 8LL))(
              *(_QWORD *)(v7 + 40) + 192 * v10,
              v11);
          }
          while ( v8 != v9 );
          v9 = *v6;
        }
        if ( v9 )
        {
          v12 = v6[1];
          if ( v12 )
          {
            v13 = 0;
            do
            {
              v14 = 5 * v13++;
              v15 = (_QWORD *)(v9 + 40 * v14);
              *v15 = &off_4DBC10;
              sub_2BAAF0(v15);
              v9 = *v6;
            }
            while ( v12 != v13 );
          }
          v6[1] = 0;
          qfree();
          *v6 = 0;
          v6[2] = 0;
        }
        ++v40;
        v6 += 3;
      }
      while ( v40 < a1[1] );
      goto LABEL_13;
    }
    if ( a3 )
    {
      v45 = nullptr;
      v16 = *a2;
      v41 = a2[1];
      v46 = (__int64 *)(*a2 + 40LL);
      v47 = (__int64 *)(v41 + 40);
      goto LABEL_16;
    }
    return v50 - __readfsqword(0x28u);
  }
  v48 = 0;
  v49 = 0;
  sub_2CE9C0(&v48, v5);
  v25 = a1 + 2;
  for ( i = 0; i < a1[1]; v25 += 3 )
  {
    switch_dbctx();
    v26 = *v25;
    v27 = *v25 + 200 * v25[1];
    if ( *v25 != v27 )
    {
      do
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v48 + 192LL * *(_QWORD *)(v26 + 192)) + 8LL))(
          v48 + 192LL * *(_QWORD *)(v26 + 192),
          v26);
        v26 += 200;
      }
      while ( v27 != v26 );
      v27 = *v25;
    }
    if ( v27 )
    {
      v28 = v25[1];
      if ( v28 )
      {
        v29 = 0;
        do
        {
          v30 = (_QWORD *)(v27 + 200 * v29);
          *v30 = &off_4DBBE8;
          cleanup_argloc();
          if ( v30[13] )
          {
            v30[14] = 0;
            qfree();
          }
          clear_tinfo_t();
          if ( v30[9] )
          {
            v30[10] = 0;
            qfree();
          }
          ++v29;
          cleanup_argloc();
          cleanup_argloc();
          v27 = *v25;
        }
        while ( v28 != v29 );
      }
      v25[1] = 0;
      qfree();
      *v25 = 0;
      v25[2] = 0;
    }
    v31 = a2[i];
    sub_2CE9C0((__int64 *)(v31 + 40), v5 - a1[14]);
    if ( v5 )
    {
      v32 = 0;
      v33 = 0;
      do
      {
        if ( *(_DWORD *)(a1[11] + 4 * v32) )
        {
          v34 = v33 + 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v31 + 40) + 192 * v33) + 8LL))(
            *(_QWORD *)(v31 + 40) + 192 * v33,
            v48 + 192 * v32);
          v33 = v34;
        }
        ++v32;
      }
      while ( v32 != v5 );
    }
    else
    {
      v33 = 0;
    }
    if ( *(_QWORD *)(v31 + 48) != v33 )
    {
      if ( !under_debugger )
        sub_3835A0(1962);
      BUG();
    }
    ++i;
  }
  v35 = v48;
  if ( v48 )
  {
    v36 = v49;
    if ( (_QWORD)v49 )
    {
      v37 = 0;
      do
      {
        v38 = 3 * v37++;
        v39 = (_QWORD *)((v38 << 6) + v35);
        *v39 = &off_4DBC10;
        sub_2BAAF0(v39);
        v35 = v48;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v49 = 0;
    qfree();
    if ( a3 )
      goto LABEL_14;
    return v50 - __readfsqword(0x28u);
  }
LABEL_13:
  if ( !a3 )
    return v50 - __readfsqword(0x28u);
LABEL_14:
  v45 = nullptr;
  v16 = *a2;
  v46 = (__int64 *)(*a2 + 40LL);
  v41 = a2[1];
  v47 = (__int64 *)(v41 + 40);
  if ( a1[1] > 2u )
    v45 = (__int64 *)(a2[2] + 40LL);
LABEL_16:
  v17 = *(_QWORD *)(v16 + 48);
  if ( v17 )
  {
    v18 = 0;
    v17 = 0;
    do
    {
      v21 = 192 * v18 + *(_QWORD *)(v16 + 40);
      v22 = 192 * v18;
      v23 = **(unsigned __int8 (***)(void))v21;
      if ( (char *)v23 == (char *)sub_2AD480 )
      {
        if ( *(_DWORD *)(v21 + 40) == 1 )
          goto LABEL_21;
      }
      else if ( v23() )
      {
        goto LABEL_21;
      }
      v19 = v22 + *(_QWORD *)(v41 + 40);
      v20 = **(unsigned __int8 (***)(void))v19;
      if ( (char *)v20 == (char *)sub_2AD480 )
      {
        if ( *(_DWORD *)(v19 + 40) == 1 )
          goto LABEL_21;
      }
      else if ( v20() )
      {
LABEL_21:
        if ( v17 < v18 )
        {
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 192 * v17) + 8LL))(
            *(_QWORD *)(v16 + 40) + 192 * v17,
            v22 + *(_QWORD *)(v16 + 40));
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v41 + 40) + 192 * v17) + 8LL))(
            *(_QWORD *)(v41 + 40) + 192 * v17,
            v22 + *(_QWORD *)(v41 + 40));
          if ( v45 )
            (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*v45 + 192 * v17) + 8LL))(
              *v45 + 192 * v17,
              v22 + *v45);
        }
        ++v17;
      }
      ++v18;
    }
    while ( v18 < *(_QWORD *)(v16 + 48) );
  }
  switch_dbctx();
  sub_2CE9C0(v46, v17);
  switch_dbctx();
  sub_2CE9C0(v47, v17);
  if ( !v45 )
    return v50 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2CE9C0(v45, v17);
}

