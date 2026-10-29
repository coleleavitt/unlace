__int64 __fastcall sub_233C0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  int v8; // esi
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v20; // r10
  __int64 v21; // rsi
  __int64 v22; // rdi
  int v23; // esi
  __int64 v24; // r10
  __int64 v25; // rdi

  v3 = a2;
  v5 = a1[3];
  v6 = a1[2];
  v7 = v6 + 32 * v5;
  if ( v7 == v6 )
  {
    v10 = 0;
    goto LABEL_10;
  }
  v8 = *(_DWORD *)(v6 + 24);
  a3 = 0;
  if ( v8 == 17 )
  {
    a2 = a1[2];
    if ( (unsigned int)(*(_DWORD *)(v6 + 24) - 10) <= 7 )
    {
      do
      {
        v10 = *(_QWORD *)(a2 + 8);
        if ( a3 - v10 != *(_QWORD *)(a2 + 16) )
          break;
        a2 += 32LL;
        if ( v7 == a2 )
        {
          v6 = v7;
          goto LABEL_10;
        }
        a3 = v10;
        v6 = a2;
      }
      while ( (unsigned int)(*(_DWORD *)(a2 + 24) - 10) <= 7 );
    }
    if ( v7 == a2 )
      goto LABEL_27;
    v8 = *(_DWORD *)(a2 + 24);
  }
  if ( v8 != 1 )
    goto LABEL_7;
  v24 = *(_QWORD *)(v6 + 8);
  a2 = *(_QWORD *)(v6 + 16);
  v25 = a3 - v24;
  if ( a3 - v24 - a2 == 8 )
  {
    a3 = v24 + a2;
    v25 = *(_QWORD *)(v6 + 16);
  }
  if ( a2 == v25 )
  {
    v6 += 32LL;
    a3 = v24;
  }
  if ( v7 != v6 )
  {
LABEL_7:
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6 + 24);
      if ( (unsigned int)(v9 - 8) > 1 && (unsigned int)(v9 - 18) > 9 )
        break;
      v10 = *(_QWORD *)(v6 + 8);
      a2 = a3 - v10;
      if ( a3 - v10 != *(_QWORD *)(v6 + 16) )
        goto LABEL_27;
      v6 += 32LL;
      if ( v7 == v6 )
        goto LABEL_10;
      a3 = v10;
    }
    if ( (unsigned int)(v9 - 40) <= 1 || (a2 = (unsigned int)(v9 - 50), (unsigned int)a2 <= 9) )
    {
      v19 = *(_QWORD *)(v6 + 8);
      v20 = *(_QWORD *)(v6 + 16);
      v21 = a3 - v19;
      v22 = v20 + v19;
      a2 = (v21 - v20) & 0xFFFFFFFFFFFFFFFBLL;
      if ( a2 == 8 )
        a3 = v22;
      if ( v7 != v6 )
      {
        while ( 1 )
        {
          v23 = *(_DWORD *)(v6 + 24);
          if ( (unsigned int)(v23 - 40) > 1 )
          {
            a2 = (unsigned int)(v23 - 50);
            if ( (unsigned int)a2 > 9 )
              break;
          }
          v10 = *(_QWORD *)(v6 + 8);
          a2 = a3 - v10;
          if ( a3 - v10 != *(_QWORD *)(v6 + 16) )
            break;
          v6 += 32LL;
          if ( v7 == v6 )
            goto LABEL_10;
          a3 = v10;
        }
      }
    }
  }
LABEL_27:
  v10 = a3;
LABEL_10:
  v11 = v7 - v6;
  v12 = a1[11];
  v13 = a1 + 10;
  a1[3] = v5 - (v11 >> 5);
  if ( !v12 )
    goto LABEL_54;
  a2 = (unsigned __int64)(a1 + 10);
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v12 + 16);
      a3 = *(_QWORD *)(v12 + 24);
      if ( *(int *)(v12 + 32) <= 1 )
        break;
      a2 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v14 )
        goto LABEL_15;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( a3 );
LABEL_15:
  if ( v13 == (_QWORD *)a2 || *(int *)(a2 + 32) > 2 )
  {
LABEL_54:
    sub_22120(v13, a2, a3);
    return sub_23690();
  }
  v15 = a1[1];
  v16 = -v10;
  v17 = v10 - *(_QWORD *)(a2 + 40);
  if ( v3 && *(unsigned __int16 *)(v15 + 40) == v16 && v17 < *(_QWORD *)(v15 + 32) )
    v17 = *(_QWORD *)(v15 + 32);
  result = set_frame_size(v15, v17, (unsigned __int16)v16, 0);
  if ( !(_BYTE)result )
    return 0;
  if ( a1[16] != -1 )
  {
    *(_QWORD *)(a1[1] + 16LL) |= 0x10uLL;
    if ( (unsigned __int8)update_func(a1[1]) )
      return update_fpd(a1[1], v10 - a1[15]);
    return 0;
  }
  return result;
}

