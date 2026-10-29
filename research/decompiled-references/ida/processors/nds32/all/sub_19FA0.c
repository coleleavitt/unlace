__int64 __fastcall sub_19FA0(_QWORD *a1, int *a2, __int64 i)
{
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  int *v8; // rbx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  char *v12; // r10
  char *v13; // r8
  char *v14; // r10
  char *v15; // r8
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 result; // rax
  char *v20; // r8
  int v21; // eax
  bool v22; // zf

  v4 = (unsigned int)a2;
  v5 = a1[3];
  v6 = a1[2];
  v7 = v6 + 32 * v5;
  if ( v7 == v6 )
  {
    v8 = nullptr;
    goto LABEL_16;
  }
  i = *(unsigned int *)(v6 + 24);
  if ( (unsigned int)i > 5 )
    goto LABEL_24;
  i = a1[2];
  a2 = nullptr;
  while ( 1 )
  {
    v8 = *(int **)(i + 8);
    if ( (char *)a2 - (char *)v8 != *(_QWORD *)(i + 16) )
    {
LABEL_7:
      if ( v7 == i )
        goto LABEL_28;
      v9 = *(_DWORD *)(i + 24);
      switch ( v9 )
      {
        case 28:
          goto LABEL_49;
        case 29:
          goto LABEL_30;
        case 30:
          goto LABEL_36;
      }
LABEL_11:
      for ( i = (unsigned int)(*(_DWORD *)(v6 + 24) - 6); (unsigned int)i <= 8; i = (unsigned int)(*(_DWORD *)(v6 + 24)
                                                                                                 - 6) )
      {
        v8 = *(int **)(v6 + 8);
        i = (char *)a2 - (char *)v8;
        if ( (char *)a2 - (char *)v8 != *(_QWORD *)(v6 + 16) )
          break;
        v6 += 32;
        if ( v7 == v6 )
          goto LABEL_16;
        a2 = v8;
      }
      v8 = a2;
      v5 -= (v7 - v6) >> 5;
      break;
    }
    i += 32;
    if ( v7 == i )
      break;
    a2 = v8;
    v6 = i;
    if ( *(_DWORD *)(i + 24) > 5u )
      goto LABEL_7;
  }
LABEL_16:
  while ( 1 )
  {
    v10 = a1[11];
    a1[3] = v5;
    if ( v10 )
    {
      a2 = (int *)(a1 + 10);
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v10 + 16);
          i = *(_QWORD *)(v10 + 24);
          if ( *(int *)(v10 + 32) <= 30 )
            break;
          a2 = (int *)v10;
          v10 = *(_QWORD *)(v10 + 16);
          if ( !v11 )
            goto LABEL_21;
        }
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( i );
LABEL_21:
      if ( a2 != (int *)(a1 + 10) && a2[8] <= 31 )
        break;
    }
    v6 = sub_181A0(v4, a2, i);
LABEL_24:
    a2 = nullptr;
    if ( (_DWORD)i != 28 )
    {
      if ( (_DWORD)i != 29 )
      {
        if ( (_DWORD)i != 30 )
          goto LABEL_27;
        goto LABEL_36;
      }
LABEL_30:
      v12 = *(char **)(v6 + 8);
      i = *(_QWORD *)(v6 + 16);
      v13 = (char *)((char *)a2 - v12);
      if ( (unsigned __int64)((char *)a2 - v12 - i) <= 4 )
      {
        a2 = (int *)&v12[i];
        v13 = *(char **)(v6 + 16);
      }
      if ( (char *)i == v13 )
      {
        v6 += 32;
        a2 = (int *)v12;
      }
      if ( v6 == v7 )
        goto LABEL_28;
      if ( *(_DWORD *)(v6 + 24) != 30 )
        goto LABEL_11;
      goto LABEL_36;
    }
LABEL_49:
    v8 = *(int **)(v6 + 8);
    i = *(_QWORD *)(v6 + 16);
    v20 = (char *)((char *)a2 - (char *)v8);
    if ( (unsigned __int64)((char *)a2 - (char *)v8 - i) <= 4 )
    {
      a2 = (int *)((char *)v8 + i);
      v20 = *(char **)(v6 + 16);
    }
    if ( (char *)i == v20 )
    {
      i = v6 + 32;
      if ( v7 != v6 + 32 )
      {
        v21 = *(_DWORD *)(v6 + 56);
        a2 = v8;
        if ( v21 == 29 )
        {
          v6 = i;
          goto LABEL_30;
        }
        v22 = v21 == 30;
        v6 = i;
        if ( !v22 )
          goto LABEL_11;
LABEL_36:
        v14 = *(char **)(v6 + 8);
        i = *(_QWORD *)(v6 + 16);
        v15 = (char *)((char *)a2 - v14);
        if ( (unsigned __int64)((char *)a2 - v14 - i) <= 4 )
        {
          a2 = (int *)&v14[i];
          v15 = *(char **)(v6 + 16);
        }
        if ( (char *)i == v15 )
        {
          v6 += 32;
          a2 = (int *)v14;
        }
        goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      if ( v7 != v6 )
        goto LABEL_11;
LABEL_28:
      v8 = a2;
    }
  }
  v16 = (unsigned __int64)v8 - *((_QWORD *)a2 + 5);
  v17 = -(__int64)v8;
  v18 = a1[1];
  if ( (_BYTE)v4 && *(unsigned __int16 *)(v18 + 40) == v17 && v16 < *(_QWORD *)(v18 + 32) )
    v16 = *(_QWORD *)(v18 + 32);
  result = set_frame_size(a1[1], v16, (unsigned __int16)v17, 0);
  if ( !(_BYTE)result )
    return 0;
  if ( a1[16] != -1 )
  {
    *(_QWORD *)(a1[1] + 16LL) |= 0x10uLL;
    if ( !(unsigned __int8)update_func(a1[1]) )
      return 0;
    return update_fpd(a1[1], (char *)v8 - a1[15]);
  }
  return result;
}

