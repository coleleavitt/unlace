unsigned __int64 __fastcall sub_2A1800(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbp
  int v4; // eax
  _DWORD *v5; // r15
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r13
  _QWORD *v14; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  int v21; // [rsp+10h] [rbp-A0h]
  int v22; // [rsp+14h] [rbp-9Ch]
  int tinfo_size; // [rsp+18h] [rbp-98h]
  __int64 tinfo_property; // [rsp+30h] [rbp-80h] BYREF
  __int64 v26; // [rsp+38h] [rbp-78h] BYREF
  __int128 v27; // [rsp+40h] [rbp-70h]
  _DWORD v28[6]; // [rsp+58h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v2 = (_QWORD *)a1[2];
  v27 = 0;
  v26 = 0;
  if ( !v2 )
    return v29 - __readfsqword(0x28u);
  if ( !a1[3] )
    return v29 - __readfsqword(0x28u);
  v3 = (_QWORD *)v2[1];
  if ( v3 == v2 )
    return v29 - __readfsqword(0x28u);
  do
  {
LABEL_4:
    v4 = *((_DWORD *)v3 + 14);
    if ( (unsigned int)(v4 - 1) > 1 )
      goto LABEL_25;
    if ( *((_DWORD *)v3 + 10) == 8 )
    {
      v5 = (_DWORD *)v3[6];
      v21 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 24LL) + 8LL) == 68 )
        goto LABEL_25;
      goto LABEL_7;
    }
    do
    {
      if ( *((_DWORD *)v3 + 6) != 8 )
        break;
      v5 = (_DWORD *)v3[4];
      v21 = 1;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 24LL) + 8LL) == 68 )
        break;
LABEL_7:
      tinfo_property = 0;
      if ( (unsigned int)(v5[2] + 1) <= 0x100 )
        tinfo_property = get_tinfo_property();
      v6 = *(_QWORD **)(*(_QWORD *)(a1[1] + 8LL) + 1376LL);
      if ( !v6 )
        goto LABEL_12;
      v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v7 )
        goto LABEL_13;
      if ( (*(_BYTE *)(*v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_12;
      v19 = **(_QWORD **)v5;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v7 + 24);
        if ( v19 >= v20 )
          break;
        v7 = *(_QWORD *)(v7 + 8);
LABEL_53:
        if ( (*(_BYTE *)v7 & 2) != 0 )
          goto LABEL_12;
      }
      if ( v20 < v19 )
      {
        v7 = *(_QWORD *)(v7 + 16);
        goto LABEL_53;
      }
      if ( v6 != (_QWORD *)v7 )
      {
LABEL_13:
        v8 = (unsigned int *)(v3 + 5);
        if ( !v21 )
          v8 = (unsigned int *)(v3 + 3);
        v9 = v8;
        v22 = *((_DWORD *)v3 + 16);
        tinfo_size = get_tinfo_size();
        v28[0] = 0;
        sub_29F770((__int64)v28, v9, 0.0);
        v10 = v27;
        v11 = v26;
        v12 = v26;
        if ( 8LL * (_QWORD)v27 )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)v12;
            if ( !sub_259AA0(*(_QWORD *)(**(_QWORD **)v12 + 24LL), *(_QWORD *)(*(_QWORD *)v5 + 24LL), 0.0)
              && *(_DWORD *)(v13 + 8) == v5[2]
              && **(_QWORD **)v13 == **(_QWORD **)v5 )
            {
              break;
            }
            v11 = v26;
            v10 = v27;
            v12 += 8;
            if ( v12 == v26 + 8LL * (_QWORD)v27 )
              goto LABEL_47;
          }
          v5 = *(_DWORD **)v12;
        }
        else
        {
LABEL_47:
          if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v10 + 1) )
          {
            v26 = qvector_reserve((__int64)&v26, v11, v10 + 1, 8);
            v11 = v26;
            v10 = v27;
          }
          *(_QWORD *)(v11 + 8 * v10) = v5;
          *(_QWORD *)&v27 = v27 + 1;
        }
        sub_2A1180(*(_QWORD *)(a1[1] + 8LL), a2, (__int64)v5, (__int64)v28, v22, tinfo_size, 0.0);
        sub_29EC30((__int64)v28, 0.0);
        clear_tinfo_t();
        goto LABEL_23;
      }
LABEL_12:
      if ( (unsigned int)sub_32E340(&tinfo_property) )
        goto LABEL_13;
      clear_tinfo_t();
LABEL_23:
      if ( v21 == 1 )
        break;
      v4 = *((_DWORD *)v3 + 14);
LABEL_25:
      ;
    }
    while ( (unsigned int)(v4 - 1) <= 1 );
    if ( (*v3 & 2) != 0 )
      continue;
    v14 = (_QWORD *)v3[2];
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v16 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
      v17 = *v16;
      if ( (*v16 & 2) == 0 )
      {
        while ( v3 == (_QWORD *)v16[2] )
        {
          v3 = v16;
          v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
          v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v17 & 2) != 0 )
          {
            v3 = (_QWORD *)v18;
            if ( a1[2] != v18 )
              goto LABEL_4;
            goto LABEL_30;
          }
          v16 = (_QWORD *)v18;
        }
      }
      v3 = v16;
      if ( (_QWORD *)a1[2] == v16 )
        break;
      goto LABEL_4;
    }
    do
    {
      v3 = v14;
      v14 = (_QWORD *)v14[1];
    }
    while ( (*(_BYTE *)v14 & 2) == 0 );
  }
  while ( (_QWORD *)a1[2] != v3 );
LABEL_30:
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return v29 - __readfsqword(0x28u);
}

