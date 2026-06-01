__int64 __fastcall sub_5A300(unsigned int *a1)
{
  __int64 result; // rax
  char v3; // al
  __int64 v4; // rsi
  char v5; // dl
  int *v6; // r12
  int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  int v16; // r13d
  int *v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v22; // r13d
  int *v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi

  if ( (unsigned __int8)getinf_flag() )
    return sub_59840(a1);
  v3 = getinf();
  v4 = *((_QWORD *)a1 + 1);
  v5 = v3 & 0xF;
  if ( (v3 & 0xF) != 7 )
  {
    if ( (v3 & 8) != 0 )
    {
      v6 = (int *)&unk_972C8;
      if ( v5 == 8 )
        v6 = (int *)&unk_972E0;
    }
    else
    {
      v6 = (int *)&unk_972E0;
      if ( v5 != 2 )
      {
        v6 = (int *)&unk_972C8;
        if ( v5 == 3 )
          v6 = (int *)&unk_972B0;
      }
    }
    *a1 = 1;
    if ( v4 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree();
      *((_QWORD *)a1 + 1) = 0;
      v4 = 0;
      *((_QWORD *)a1 + 3) = 0;
      v7 = *v6;
      if ( *v6 == -1 )
      {
LABEL_15:
        if ( *((_QWORD *)a1 + 4) )
        {
          *((_QWORD *)a1 + 5) = 0;
          qfree();
          *((_QWORD *)a1 + 4) = 0;
          *((_QWORD *)a1 + 6) = 0;
        }
        v10 = *((_QWORD *)a1 + 2);
        v11 = *a1;
        a1[1] = v10;
        result = (unsigned int)v10;
        if ( (unsigned int)v11 <= 6 )
        {
          v12 = 84;
          if ( _bittest64(&v12, v11) )
          {
            result = a1[10] + (unsigned int)v10;
            a1[1] = result;
          }
        }
        return result;
      }
    }
    else
    {
      v7 = *v6;
    }
    v8 = *((_QWORD *)a1 + 2);
    while ( 1 )
    {
      ++v6;
      if ( *((_QWORD *)a1 + 3) < (unsigned __int64)(v8 + 1) )
      {
        v9 = qvector_reserve();
        v8 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 1) = v9;
        v4 = v9;
      }
      *(_DWORD *)(v4 + 4 * v8) = v7;
      v8 = *((_QWORD *)a1 + 2) + 1LL;
      *((_QWORD *)a1 + 2) = v8;
      v7 = *v6;
      if ( *v6 == -1 )
        break;
      v4 = *((_QWORD *)a1 + 1);
    }
    goto LABEL_15;
  }
  *a1 = 2;
  if ( v4 )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree();
    *((_QWORD *)a1 + 1) = 0;
    v13 = 0;
    *((_QWORD *)a1 + 3) = 0;
  }
  else
  {
    v13 = *((_QWORD *)a1 + 3);
  }
  v14 = *((_QWORD *)a1 + 2);
  v15 = 0;
  v16 = 0;
  v17 = (int *)&unk_97250;
  while ( 1 )
  {
    ++v17;
    if ( v13 < v14 + 1 )
    {
      v18 = qvector_reserve();
      v14 = *((_QWORD *)a1 + 2);
      *((_QWORD *)a1 + 1) = v18;
      v15 = v18;
    }
    *(_DWORD *)(v15 + 4 * v14) = v16;
    v14 = *((_QWORD *)a1 + 2) + 1LL;
    *((_QWORD *)a1 + 2) = v14;
    v16 = *v17;
    if ( *v17 == -1 )
      break;
    v13 = *((_QWORD *)a1 + 3);
    v15 = *((_QWORD *)a1 + 1);
  }
  if ( *((_QWORD *)a1 + 4) )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree();
    *((_QWORD *)a1 + 4) = 0;
    v19 = 0;
    *((_QWORD *)a1 + 6) = 0;
  }
  else
  {
    v19 = *((_QWORD *)a1 + 6);
  }
  v20 = *((_QWORD *)a1 + 5);
  v21 = 0;
  v22 = 45;
  v23 = (int *)&unk_97230;
  while ( 1 )
  {
    ++v23;
    if ( v19 < v20 + 1 )
    {
      v24 = qvector_reserve();
      v20 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 4) = v24;
      v21 = v24;
    }
    *(_DWORD *)(v21 + 4 * v20) = v22;
    v20 = *((_QWORD *)a1 + 5) + 1LL;
    *((_QWORD *)a1 + 5) = v20;
    v22 = *v23;
    if ( *v23 == -1 )
      break;
    v19 = *((_QWORD *)a1 + 6);
    v21 = *((_QWORD *)a1 + 4);
  }
  v25 = *((_QWORD *)a1 + 2);
  v26 = *a1;
  a1[1] = v25;
  result = (unsigned int)v25;
  if ( (unsigned int)v26 <= 6 )
  {
    v27 = 84;
    if ( _bittest64(&v27, v26) )
    {
      result = (unsigned int)(v25 + v20);
      a1[1] = result;
    }
  }
  return result;
}

