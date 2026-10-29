unsigned __int64 __fastcall sub_2B7140(__int64 *a1, _QWORD *a2, _QWORD **a3, double a4)
{
  size_t v4; // rax
  size_t v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  size_t v8; // rax
  size_t v9; // r15
  const char *v10; // r14
  size_t v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 *v18; // r15
  size_t v19; // rax
  size_t v20; // rcx
  size_t v21; // r14
  const void *v22; // r15
  size_t v23; // rax
  _QWORD *v24; // rdx
  _QWORD *i; // rax
  size_t v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  size_t v31; // [rsp+10h] [rbp-A8h]
  _QWORD *v33; // [rsp+28h] [rbp-90h]
  __int64 v34; // [rsp+30h] [rbp-88h] BYREF
  __int128 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int128 v37; // [rsp+50h] [rbp-68h]
  _BYTE v38[5]; // [rsp+6Eh] [rbp-4Ah] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v4 = pack_dd() - (_QWORD)v38;
  if ( v4 )
    sub_2B2810(a1, v38, v4);
  v5 = pack_dd() - (_QWORD)v38;
  if ( v5 )
    sub_2B2810(a1, v38, v5);
  v6 = (_QWORD *)*a2;
  v33 = (_QWORD *)*a2;
  if ( !*a2 )
    return v39 - __readfsqword(0x28u);
  if ( !a2[1] )
    return v39 - __readfsqword(0x28u);
  v7 = (_QWORD *)v6[1];
  if ( v7 == v6 )
    return v39 - __readfsqword(0x28u);
  do
  {
    v8 = pack_dq() - (_QWORD)v38;
    if ( v8 )
      sub_2B2810(a1, v38, v8);
    v9 = v7[5];
    if ( v9 )
    {
      v10 = (const char *)v7[4];
      if ( v10 )
      {
        v9 = strlen((const char *)v7[4]);
        if ( v9 > 0xFFFFFFFF )
          goto LABEL_69;
LABEL_13:
        v11 = pack_dd() - (_QWORD)v38;
        if ( v11 )
          sub_2B2810(a1, v38, v11);
        if ( v9 )
          sub_2B2810(a1, v10, v9);
        goto LABEL_17;
      }
    }
    else
    {
      v10 = s1;
      if ( s1 )
        goto LABEL_13;
    }
    v27 = pack_dd() - (_QWORD)v38;
    if ( v27 )
      sub_2B2810(a1, v38, v27);
LABEL_17:
    a4 = 0.0;
    v34 = 0;
    v36 = 0;
    v35 = 0;
    v37 = 0;
    if ( !a3 )
    {
      if ( (unsigned __int8)serialize_tinfo() )
      {
        v18 = &v34;
LABEL_51:
        v15 = v18[1];
        v12 = (_QWORD *)*v18;
        if ( v15 <= 0xFFFFFFFF )
          goto LABEL_26;
        if ( under_debugger )
          goto LABEL_74;
        interr();
LABEL_67:
        if ( under_debugger )
          goto LABEL_74;
        interr();
LABEL_69:
        if ( under_debugger )
LABEL_74:
          BUG();
        interr();
      }
      if ( !under_debugger )
        sub_383060(0xC923u, a4);
      goto LABEL_74;
    }
    v12 = *a3;
    if ( !*a3 )
    {
      v15 = 0;
      v18 = &v34;
      goto LABEL_26;
    }
    v13 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
    v14 = v13;
    if ( !v13 )
      goto LABEL_50;
    v15 = *v13 & 2LL;
    if ( (*v13 & 2) != 0 )
    {
      v15 = 0;
      v12 = nullptr;
      v18 = &v34;
      goto LABEL_26;
    }
    v16 = v7[3];
    while ( 1 )
    {
      v17 = v14[3];
      if ( v16 >= v17 )
        break;
      v14 = (_QWORD *)v14[1];
LABEL_24:
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
        v12 = nullptr;
        v18 = &v34;
        goto LABEL_26;
      }
    }
    if ( v17 < v16 )
    {
      v14 = (_QWORD *)v14[2];
      goto LABEL_24;
    }
    if ( v14 != v12 )
    {
LABEL_50:
      v18 = v14 + 4;
      goto LABEL_51;
    }
    v12 = nullptr;
    v18 = &v34;
LABEL_26:
    v31 = v15;
    v19 = pack_dd() - (_QWORD)v38;
    v20 = v31;
    if ( v19 )
    {
      sub_2B2810(a1, v38, v19);
      v20 = v31;
    }
    if ( v20 )
      sub_2B2810(a1, v12, v20);
    v21 = v18[4];
    v22 = (const void *)v18[3];
    if ( v21 > 0xFFFFFFFF )
      goto LABEL_67;
    v23 = pack_dd() - (_QWORD)v38;
    if ( v23 )
      sub_2B2810(a1, v38, v23);
    if ( v21 )
      sub_2B2810(a1, v22, v21);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    if ( (*v7 & 2) == 0 )
    {
      v24 = (_QWORD *)v7[2];
      if ( (*(_BYTE *)v24 & 2) != 0 )
      {
        v28 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
        v29 = *v28;
        if ( (*v28 & 2) == 0 )
        {
          while ( v7 == (_QWORD *)v28[2] )
          {
            v7 = v28;
            v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
            v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v29 & 2) != 0 )
            {
              v7 = (_QWORD *)v30;
              goto LABEL_44;
            }
            v28 = (_QWORD *)v30;
          }
        }
        v7 = v28;
      }
      else
      {
        for ( i = (_QWORD *)v24[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v24 = i;
        v7 = v24;
      }
    }
LABEL_44:
    ;
  }
  while ( v33 != v7 );
  return v39 - __readfsqword(0x28u);
}

