void __fastcall sub_D67C0(int *a1, _DWORD *a2, _DWORD **a3, int a4, unsigned int a5)
{
  int *v5; // r14
  int v7; // r15d
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // r14d
  char v14; // al
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+8h] [rbp-50h]
  int v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+Ch] [rbp-4Ch]
  int v24; // [rsp+Ch] [rbp-4Ch]
  int v25; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( *a2 != 1 )
    return;
  v5 = a1;
  v7 = *(_DWORD *)(*((_QWORD *)a1 + 14) + 80LL);
  if ( !a3 )
  {
    v8 = a4;
    v12 = (a4 - 1) & a4;
    goto LABEL_12;
  }
  a2 = *a3;
  a1 = &v25;
  v25 = 0;
  get_tinfo_size();
  v8 = v25;
  v9 = (v25 - 1) & v25;
  if ( v9 )
    goto LABEL_78;
  v10 = 2 * v7;
  if ( v25 > 2 * v7 )
  {
    if ( a5 <= 0x10 )
    {
      v24 = (v25 - 1) & v25;
      v19 = getinf();
      v10 = 2 * v7;
      if ( v19 == 176 || v19 == 256 )
      {
        if ( v7 > v10 )
        {
LABEL_65:
          v8 = v10;
          goto LABEL_66;
        }
LABEL_68:
        v8 = v10;
        goto LABEL_69;
      }
      v9 = v24;
LABEL_29:
      a2 = &dword_200;
      a1 = &dword_40 + 3;
      v20 = v9;
      v23 = v10;
      v14 = getinf_flag();
      v12 = v20;
      if ( v14 )
        goto LABEL_12;
      v10 = v23;
      if ( v7 > v23 )
      {
        v8 = v23;
        if ( a5 > 0x10 )
          goto LABEL_32;
        goto LABEL_65;
      }
      v8 = v23;
      if ( a5 > 0x10 )
      {
LABEL_50:
        a2 = (_DWORD *)&byte_4;
        a1 = &dword_40 + 3;
        if ( (unsigned __int8)getinf_flag() )
          goto LABEL_33;
        goto LABEL_51;
      }
      goto LABEL_68;
    }
    if ( a5 != 256 && a5 != 176 )
      goto LABEL_29;
    v17 = 2 * v7;
    if ( v7 <= v10 )
      v17 = v7;
    v18 = v17 & (v17 - 1);
    if ( *((_BYTE *)v5 + 145) )
    {
      if ( !v18 )
      {
        v13 = 2 * v7;
        if ( v10 < v17 )
          goto LABEL_35;
        goto LABEL_62;
      }
    }
    else if ( !v18 )
    {
      v13 = 2 * v7;
      if ( v17 > v10 )
        goto LABEL_35;
LABEL_62:
      if ( v7 > v10 )
        goto LABEL_17;
      goto LABEL_22;
    }
LABEL_78:
    sub_CF1B0((__int64)a1, (__int64)a2);
    sub_D6C60((__int64)a1, (int)a2);
    return;
  }
  v11 = a5;
  if ( v7 <= v25 )
  {
    if ( a5 > 0x10 )
    {
LABEL_48:
      if ( v11 == 176 || v11 == 256 )
        goto LABEL_51;
      goto LABEL_50;
    }
LABEL_69:
    a1 = (_DWORD *)(&qword_60 + 3);
    v11 = getinf();
    goto LABEL_48;
  }
  if ( a5 <= 0x10 )
  {
LABEL_66:
    a1 = (_DWORD *)(&qword_60 + 3);
    v11 = getinf();
  }
  if ( v11 == 176 || v11 == 256 )
  {
    v12 = (v8 - 1) & v8;
    goto LABEL_12;
  }
LABEL_32:
  a2 = (_DWORD *)&word_2;
  a1 = &dword_40 + 3;
  if ( (unsigned __int8)getinf_flag() )
  {
LABEL_33:
    v12 = v8 & (v8 - 1);
    goto LABEL_12;
  }
LABEL_51:
  v8 = v7;
  v12 = (v7 - 1) & v7;
LABEL_12:
  if ( *((_BYTE *)v5 + 145) )
  {
    v15 = a5;
    if ( a5 <= 0x10 )
    {
      a1 = (_DWORD *)(&qword_60 + 3);
      v21 = v12;
      v15 = getinf();
      v12 = v21;
    }
    if ( v15 != 176 && v15 != 256 )
    {
      a2 = (_DWORD *)&word_2;
      a1 = &dword_40 + 3;
      v22 = v12;
      getinf_flag();
      v12 = v22;
    }
  }
  if ( v12 )
    goto LABEL_78;
  v13 = 2 * v7;
  if ( v8 > 2 * v7 )
  {
    if ( a5 <= 0x10 )
    {
      v16 = getinf();
      if ( v16 == 176 || v16 == 256 )
      {
        if ( v7 > v13 )
          goto LABEL_41;
        goto LABEL_55;
      }
LABEL_38:
      if ( (unsigned __int8)getinf_flag() )
        return;
      if ( v7 > v13 )
      {
        if ( a5 > 0x10 )
        {
LABEL_19:
          getinf_flag();
          return;
        }
        goto LABEL_41;
      }
      if ( a5 > 0x10 )
      {
LABEL_24:
        getinf_flag();
        return;
      }
      goto LABEL_55;
    }
LABEL_35:
    if ( a5 == 256 || a5 == 176 )
      return;
    goto LABEL_38;
  }
  if ( v8 >= v7 )
  {
    if ( a5 > 0x10 )
    {
LABEL_22:
      if ( a5 == 176 || a5 == 256 )
        return;
      goto LABEL_24;
    }
LABEL_55:
    a5 = getinf();
    goto LABEL_22;
  }
  if ( a5 <= 0x10 )
LABEL_41:
    a5 = getinf();
LABEL_17:
  if ( a5 != 176 && a5 != 256 )
    goto LABEL_19;
}

