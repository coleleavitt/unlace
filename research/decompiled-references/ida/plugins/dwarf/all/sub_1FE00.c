__int64 __fastcall sub_1FE00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r13
  _QWORD *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // [rsp+10h] [rbp-90h] BYREF
  __int64 v19; // [rsp+18h] [rbp-88h] BYREF
  __int16 v20; // [rsp+20h] [rbp-80h]
  char v21; // [rsp+22h] [rbp-7Eh]
  __int64 v22; // [rsp+30h] [rbp-70h] BYREF
  __int128 v23; // [rsp+38h] [rbp-68h]
  _QWORD *v24; // [rsp+50h] [rbp-50h] BYREF
  __int128 v25; // [rsp+58h] [rbp-48h]
  unsigned __int64 v26; // [rsp+68h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v18 = a3;
  v20 = 0;
  v19 = 0;
  v21 = 48;
  v22 = 0;
  v23 = 0;
  if ( sub_17460(0x7D5u, &v22, &v18, 0, 1, 0, 0) > 0 )
  {
    if ( *(_BYTE *)(a1 + 2801) )
    {
LABEL_4:
      if ( a2 )
        copy_tinfo_t(a2, v22 + 8);
      v3 = 1;
      goto LABEL_7;
    }
    v24 = nullptr;
    v25 = 0;
    sub_17460(0x7D5u, &v24, 0, 0, 1, 0, 0);
    v9 = v24;
    v10 = &v24[3 * v25];
    if ( v10 == v24 )
    {
LABEL_26:
      *(_BYTE *)(a1 + 2801) = 1;
      if ( v9 )
      {
        v15 = v25;
        if ( (_QWORD)v25 )
        {
          v16 = 0;
          do
          {
            v17 = 3 * v16++;
            clear_tinfo_t(&v9[v17 + 1]);
            v9 = v24;
          }
          while ( v15 != v16 );
        }
        *(_QWORD *)&v25 = 0;
        qfree(v9);
      }
      goto LABEL_4;
    }
    while ( (unsigned int)copy_named_type(0, 0, *v9) )
    {
      v9 += 3;
      if ( v10 == v9 )
      {
        v9 = v24;
        goto LABEL_26;
      }
    }
    v11 = v24;
    if ( v24 )
    {
      v12 = v25;
      if ( (_QWORD)v25 )
      {
        v13 = 0;
        do
        {
          v14 = 3 * v13++;
          clear_tinfo_t(&v11[v14 + 1]);
          v11 = v24;
        }
        while ( v12 != v13 );
      }
      *(_QWORD *)&v25 = 0;
      qfree(v11);
    }
  }
  v3 = 0;
LABEL_7:
  v4 = v22;
  if ( v22 )
  {
    v5 = v23;
    if ( (_QWORD)v23 )
    {
      v6 = 0;
      do
      {
        v7 = 3 * v6++;
        clear_tinfo_t(v4 + 8 * v7 + 8);
        v4 = v22;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v4);
  }
  clear_tinfo_t(&v19);
  return v3;
}

