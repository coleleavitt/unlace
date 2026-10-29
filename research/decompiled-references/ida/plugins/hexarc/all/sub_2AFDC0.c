unsigned __int64 __fastcall sub_2AFDC0(__int64 *a1, _QWORD *a2, _QWORD **a3)
{
  size_t v3; // rax
  size_t v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // r12
  size_t v7; // rax
  size_t v8; // r15
  const char *v9; // r14
  size_t v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 *v17; // r15
  size_t v18; // rax
  size_t v19; // rcx
  size_t v20; // r14
  const void *v21; // r15
  size_t v22; // rax
  _QWORD *v23; // rdx
  _QWORD *i; // rax
  size_t v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  size_t v30; // [rsp+10h] [rbp-A8h]
  _QWORD *v32; // [rsp+28h] [rbp-90h]
  __int64 v33; // [rsp+30h] [rbp-88h] BYREF
  __int128 v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  __int128 v36; // [rsp+50h] [rbp-68h]
  _BYTE v37[5]; // [rsp+6Eh] [rbp-4Ah] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v3 = pack_dd() - (_QWORD)v37;
  if ( v3 )
    sub_2AB490(a1, v37, v3);
  v4 = pack_dd() - (_QWORD)v37;
  if ( v4 )
    sub_2AB490(a1, v37, v4);
  v5 = (_QWORD *)*a2;
  v32 = (_QWORD *)*a2;
  if ( !*a2 )
    return v38 - __readfsqword(0x28u);
  if ( !a2[1] )
    return v38 - __readfsqword(0x28u);
  v6 = (_QWORD *)v5[1];
  if ( v6 == v5 )
    return v38 - __readfsqword(0x28u);
  do
  {
    v7 = pack_dq() - (_QWORD)v37;
    if ( v7 )
      sub_2AB490(a1, v37, v7);
    v8 = v6[5];
    if ( v8 )
    {
      v9 = (const char *)v6[4];
      if ( v9 )
      {
        v8 = strlen((const char *)v6[4]);
        if ( v8 > 0xFFFFFFFF )
          goto LABEL_69;
LABEL_13:
        v10 = pack_dd() - (_QWORD)v37;
        if ( v10 )
          sub_2AB490(a1, v37, v10);
        if ( v8 )
          sub_2AB490(a1, v9, v8);
        goto LABEL_17;
      }
    }
    else
    {
      v9 = s1;
      if ( s1 )
        goto LABEL_13;
    }
    v26 = pack_dd() - (_QWORD)v37;
    if ( v26 )
      sub_2AB490(a1, v37, v26);
LABEL_17:
    v33 = 0;
    v35 = 0;
    v34 = 0;
    v36 = 0;
    if ( !a3 )
    {
      if ( (unsigned __int8)serialize_tinfo() )
      {
        v17 = &v33;
LABEL_51:
        v14 = v17[1];
        v11 = (_QWORD *)*v17;
        if ( v14 <= 0xFFFFFFFF )
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
        sub_37B760(51491);
      goto LABEL_74;
    }
    v11 = *a3;
    if ( !*a3 )
    {
      v14 = 0;
      v17 = &v33;
      goto LABEL_26;
    }
    v12 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
    v13 = v12;
    if ( !v12 )
      goto LABEL_50;
    v14 = *v12 & 2LL;
    if ( (*v12 & 2) != 0 )
    {
      v14 = 0;
      v11 = nullptr;
      v17 = &v33;
      goto LABEL_26;
    }
    v15 = v6[3];
    while ( 1 )
    {
      v16 = v13[3];
      if ( v15 >= v16 )
        break;
      v13 = (_QWORD *)v13[1];
LABEL_24:
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
        v11 = nullptr;
        v17 = &v33;
        goto LABEL_26;
      }
    }
    if ( v16 < v15 )
    {
      v13 = (_QWORD *)v13[2];
      goto LABEL_24;
    }
    if ( v13 != v11 )
    {
LABEL_50:
      v17 = v13 + 4;
      goto LABEL_51;
    }
    v11 = nullptr;
    v17 = &v33;
LABEL_26:
    v30 = v14;
    v18 = pack_dd() - (_QWORD)v37;
    v19 = v30;
    if ( v18 )
    {
      sub_2AB490(a1, v37, v18);
      v19 = v30;
    }
    if ( v19 )
      sub_2AB490(a1, v11, v19);
    v20 = v17[4];
    v21 = (const void *)v17[3];
    if ( v20 > 0xFFFFFFFF )
      goto LABEL_67;
    v22 = pack_dd() - (_QWORD)v37;
    if ( v22 )
      sub_2AB490(a1, v37, v22);
    if ( v20 )
      sub_2AB490(a1, v21, v20);
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree();
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree();
    }
    if ( (*v6 & 2) == 0 )
    {
      v23 = (_QWORD *)v6[2];
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        v27 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v28 = *v27;
        if ( (*v27 & 2) == 0 )
        {
          while ( v6 == (_QWORD *)v27[2] )
          {
            v6 = v27;
            v29 = v28 & 0xFFFFFFFFFFFFFFFCLL;
            v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v28 & 2) != 0 )
            {
              v6 = (_QWORD *)v29;
              goto LABEL_44;
            }
            v27 = (_QWORD *)v29;
          }
        }
        v6 = v27;
      }
      else
      {
        for ( i = (_QWORD *)v23[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v23 = i;
        v6 = v23;
      }
    }
LABEL_44:
    ;
  }
  while ( v32 != v6 );
  return v38 - __readfsqword(0x28u);
}

