unsigned __int64 __fastcall sub_18DB40(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rsi
  _QWORD *v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // r12
  unsigned __int64 *v9; // r13
  unsigned __int64 v10; // rcx
  char *v11; // rdi
  char *v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 *v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx

  v3 = a2[1];
  v4 = a1[15];
  v5 = (_QWORD *)a1[14];
  v6 = &v5[v4];
  if ( v5 == v6 )
    goto LABEL_7;
  result = a1[14];
  while ( v3 != *(_QWORD *)result )
  {
    result += 8LL;
    if ( v6 == (_QWORD *)result )
      goto LABEL_7;
  }
  if ( v6 == (_QWORD *)result )
  {
LABEL_7:
    v8 = a1[17] + 16LL * *(int *)(*a2 + 72LL);
    if ( a1[16] < (unsigned __int64)(v4 + 1) )
    {
      v17 = qvector_reserve();
      v18 = a1[15];
      a1[14] = v17;
      v6 = (_QWORD *)(v17 + 8 * v18);
    }
    *v6 = v3;
    ++a1[15];
    result = *(_QWORD *)v8;
    if ( !*(_QWORD *)v8 )
      return result;
    if ( !*(_QWORD *)(v8 + 8) )
      return result;
    v9 = *(unsigned __int64 **)(result + 8);
    if ( (unsigned __int64 *)result == v9 )
      return result;
    while ( 1 )
    {
LABEL_12:
      v10 = v9[6];
      v11 = (char *)v9[5];
      v12 = &v11[24 * v10];
      if ( v11 != v12 )
      {
        while ( a2[1] != *((_QWORD *)v11 + 1) )
        {
          v11 += 24;
          if ( v12 == v11 )
            goto LABEL_20;
        }
        if ( v11 != v12 )
        {
          v13 = v12 - v11;
          if ( (__int64)(0xAAAAAAAAAAAAAAABLL * (v13 >> 3) - 2) >= 0 )
          {
            memmove(v11, v11 + 24, v13 - 24);
            v10 = v9[6];
          }
          v9[6] = v10 - 1;
        }
      }
LABEL_20:
      result = *v9;
      if ( (*v9 & 2) != 0 )
        goto LABEL_23;
      v14 = (unsigned __int64 *)v9[2];
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
        result &= 0xFFFFFFFFFFFFFFFCLL;
        v15 = *(_QWORD *)result;
        if ( (*(_QWORD *)result & 2) == 0 )
        {
          while ( v9 == *(unsigned __int64 **)(result + 16) )
          {
            v9 = (unsigned __int64 *)result;
            v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
            v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v15 & 2) != 0 )
            {
              v9 = (unsigned __int64 *)v16;
              if ( *(_QWORD *)v8 != v16 )
                goto LABEL_12;
              return result;
            }
            result = v16;
          }
        }
        v9 = (unsigned __int64 *)result;
        if ( *(_QWORD *)v8 == result )
          return result;
      }
      else
      {
        do
        {
          v9 = v14;
          v14 = (unsigned __int64 *)v14[1];
        }
        while ( (*(_BYTE *)v14 & 2) == 0 );
LABEL_23:
        if ( *(unsigned __int64 **)v8 == v9 )
          return result;
      }
    }
  }
  return result;
}

