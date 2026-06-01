char __fastcall sub_D2D80(int *a1, _DWORD *a2, _DWORD **a3, __int64 a4, unsigned int a5)
{
  int *v5; // r14
  _DWORD *v6; // r13
  int v8; // r15d
  int v9; // ebx
  int v10; // r12d
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v14; // r13
  int v15; // r14d
  char v16; // al
  int v17; // eax
  char v18; // al
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // [rsp+8h] [rbp-50h]
  unsigned int v23; // [rsp+8h] [rbp-50h]
  unsigned int v24; // [rsp+8h] [rbp-50h]
  int v25; // [rsp+Ch] [rbp-4Ch]
  int v26; // [rsp+Ch] [rbp-4Ch]
  int v27; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *a2 != 1 )
    return 0;
  v5 = a1;
  v6 = a2;
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 14) + 80LL);
  if ( !a3 )
  {
    v10 = a4 - 1;
    v9 = a4;
    v11 = ((_DWORD)a4 - 1) & (unsigned int)a4;
    goto LABEL_12;
  }
  a2 = *a3;
  a1 = &v27;
  v27 = 0;
  get_tinfo_size();
  v9 = v27;
  v10 = v27 - 1;
  v11 = (v27 - 1) & (unsigned int)v27;
  if ( ((v27 - 1) & v27) != 0 )
    goto LABEL_82;
  a4 = (unsigned int)(2 * v8);
  if ( v27 > (int)a4 )
  {
    if ( a5 <= 0x10 )
    {
      v26 = v10 & v27;
      v21 = getinf();
      LODWORD(a4) = 2 * v8;
      if ( v21 == 176 || v21 == 256 )
      {
        if ( v8 > (int)a4 )
        {
LABEL_69:
          v9 = a4;
          goto LABEL_70;
        }
LABEL_72:
        v9 = a4;
        goto LABEL_73;
      }
      LODWORD(v11) = v26;
    }
    else if ( a5 == 256 || a5 == 176 )
    {
      v9 = 2 * v8;
      v14 = *((_QWORD *)v6 + 1);
      if ( v8 <= (int)a4 )
        v9 = v8;
      v10 = v9 - 1;
      v20 = v9 & (v9 - 1);
      if ( *((_BYTE *)v5 + 145) )
      {
        if ( v20 )
          goto LABEL_82;
        v15 = 2 * v8;
        if ( (int)a4 < v9 )
          goto LABEL_36;
      }
      else
      {
        if ( v20 )
          goto LABEL_82;
        v15 = 2 * v8;
        if ( v9 > (int)a4 )
          goto LABEL_36;
      }
      if ( v8 > (int)a4 )
        goto LABEL_17;
      goto LABEL_23;
    }
    a2 = &dword_200;
    a1 = &dword_40 + 3;
    v22 = v11;
    v25 = a4;
    v16 = getinf_flag();
    v11 = v22;
    if ( v16 )
      goto LABEL_12;
    LODWORD(a4) = v25;
    if ( v8 > v25 )
    {
      v9 = v25;
      if ( a5 > 0x10 )
        goto LABEL_33;
      goto LABEL_69;
    }
    v9 = v25;
    if ( a5 > 0x10 )
    {
LABEL_54:
      a2 = (_DWORD *)&byte_4;
      a1 = &dword_40 + 3;
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_34;
      goto LABEL_55;
    }
    goto LABEL_72;
  }
  v12 = a5;
  if ( v8 <= v27 )
  {
    if ( a5 > 0x10 )
    {
LABEL_52:
      if ( v12 == 176 || v12 == 256 )
        goto LABEL_55;
      goto LABEL_54;
    }
LABEL_73:
    a1 = (_DWORD *)(&qword_60 + 3);
    v12 = getinf();
    goto LABEL_52;
  }
  if ( a5 <= 0x10 )
  {
LABEL_70:
    a1 = (_DWORD *)(&qword_60 + 3);
    v12 = getinf();
  }
  if ( v12 == 176 || v12 == 256 )
  {
    v10 = v9 - 1;
    v11 = (v9 - 1) & (unsigned int)v9;
    goto LABEL_12;
  }
LABEL_33:
  a2 = (_DWORD *)&unk_2;
  a1 = &dword_40 + 3;
  if ( (unsigned __int8)getinf_flag() )
  {
LABEL_34:
    v10 = v9 - 1;
    v11 = v9 & (unsigned int)(v9 - 1);
    goto LABEL_12;
  }
LABEL_55:
  v10 = v8 - 1;
  v9 = v8;
  v11 = (v8 - 1) & (unsigned int)v8;
LABEL_12:
  v14 = *((_QWORD *)v6 + 1);
  if ( *((_BYTE *)v5 + 145) )
  {
    v17 = a5;
    if ( a5 <= 0x10 )
    {
      a1 = (_DWORD *)(&qword_60 + 3);
      v23 = v11;
      v17 = getinf();
      v11 = v23;
    }
    if ( v17 != 176 && v17 != 256 )
    {
      a2 = (_DWORD *)&unk_2;
      a1 = &dword_40 + 3;
      v24 = v11;
      v18 = getinf_flag();
      v11 = v24;
      if ( !v18 )
        v14 &= -v8;
    }
  }
  if ( !(_DWORD)v11 )
  {
    v15 = 2 * v8;
    if ( v9 <= 2 * v8 )
    {
      if ( v9 < v8 )
      {
        if ( a5 > 0x10 )
        {
LABEL_17:
          if ( a5 == 176 || a5 == 256 )
            goto LABEL_26;
          goto LABEL_19;
        }
LABEL_44:
        a5 = getinf();
        goto LABEL_17;
      }
      if ( a5 > 0x10 )
        goto LABEL_23;
      goto LABEL_59;
    }
    if ( a5 <= 0x10 )
    {
      v19 = getinf();
      if ( v19 == 176 || v19 == 256 )
      {
        v9 = 2 * v8;
        if ( v8 > v15 )
          goto LABEL_44;
LABEL_59:
        a5 = getinf();
LABEL_23:
        if ( a5 == 176 || a5 == 256 )
          goto LABEL_20;
        goto LABEL_25;
      }
LABEL_41:
      if ( (unsigned __int8)getinf_flag() )
      {
        v8 = v9;
        return ((v14 + v10) & -v8) == v14;
      }
      v9 = v15;
      if ( v8 > v15 )
      {
        if ( a5 > 0x10 )
        {
LABEL_19:
          if ( !(unsigned __int8)getinf_flag() )
          {
LABEL_20:
            v10 = v8 - 1;
            return ((v14 + v10) & -v8) == v14;
          }
LABEL_26:
          v10 = v9 - 1;
          v8 = v9;
          return ((v14 + v10) & -v8) == v14;
        }
        goto LABEL_44;
      }
      if ( a5 > 0x10 )
      {
LABEL_25:
        if ( !(unsigned __int8)getinf_flag() )
          goto LABEL_20;
        goto LABEL_26;
      }
      goto LABEL_59;
    }
LABEL_36:
    if ( a5 == 256 || a5 == 176 )
    {
      if ( v8 > v15 )
        v8 = v15;
      v10 = v8 - 1;
      return ((v14 + v10) & -v8) == v14;
    }
    goto LABEL_41;
  }
LABEL_82:
  sub_CB770(a1, a2, v11, a4);
  return sub_D3220();
}

