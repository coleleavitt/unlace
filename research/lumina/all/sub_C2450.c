__int64 __fastcall sub_C2450(char *a1, _QWORD *a2, int a3, unsigned __int8 a4)
{
  signed int v4; // edx
  int i; // r8d
  int v6; // ebx
  __int64 result; // rax
  unsigned __int64 v8; // r8
  char v9; // dl
  char v10; // r13
  int v11; // r12d
  char *v12; // rcx
  int v13; // r11d
  __int64 v14; // r10
  int v15; // r10d
  unsigned __int64 v16; // rdx
  char *v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  int v20; // edi
  __int64 v21; // rdx
  const char *v22; // r8
  int v23; // edi
  int v24; // r9d
  int v25; // r10d
  int v26; // edx
  int v27; // edx
  bool v28; // zf

  if ( a4 == 1 )
  {
    result = 0;
    v6 = 1;
    v8 = (unsigned __int64)&a1[a3];
  }
  else
  {
    v4 = a3 & 0xFFFFFFFE;
    for ( i = 3 - a4; v4 > i; i += 2 )
    {
      if ( a1[i] )
        break;
    }
    v6 = 2;
    result = v4 > i;
    v8 = (unsigned __int64)&a1[i ^ 1];
    a1 += a4 & 1;
  }
  if ( (unsigned __int64)a1 >= v8 )
  {
    *a2 = 0;
    return 0xFFFFFFFFLL;
  }
  v9 = *a1;
  if ( (byte_1BEF00[(unsigned __int8)*a1] & 1) != 0 )
  {
    while ( 1 )
    {
      a1 += v6;
      if ( (unsigned __int64)a1 >= v8 )
        break;
      v9 = *a1;
      if ( (byte_1BEF00[(unsigned __int8)*a1] & 1) == 0 )
        goto LABEL_27;
    }
    v10 = 1;
    v11 = 0;
    goto LABEL_13;
  }
LABEL_27:
  if ( v9 == 45 )
  {
    v11 = 1;
    a1 += v6;
  }
  else
  {
    v17 = a1;
    v11 = 0;
    a1 += v6;
    if ( v9 != 43 )
      a1 = v17;
  }
  if ( (unsigned __int64)a1 >= v8 )
  {
    v10 = 1;
    goto LABEL_13;
  }
  v18 = *a1;
  if ( (_BYTE)v18 == 48 )
  {
    v12 = a1;
    while ( 1 )
    {
      v12 += v6;
      if ( (unsigned __int64)v12 >= v8 )
        break;
      v18 = *v12;
      if ( (_BYTE)v18 != 48 )
      {
        v10 = a1 == v12;
        goto LABEL_36;
      }
    }
    v28 = a1 == v12;
    a1 = v12;
    v10 = v28;
    goto LABEL_13;
  }
  v12 = a1;
  v10 = 1;
LABEL_36:
  v13 = 0;
  v14 = 0;
  if ( (unsigned int)((char)v18 - 48) > 9 )
  {
    a1 = v12;
LABEL_13:
    v12 = a1;
    v13 = 0;
    v14 = 0;
    goto LABEL_14;
  }
  do
  {
    v13 += v6;
    v14 = v18 + 10 * v14 - 48;
    a1 = &v12[v13];
    if ( (unsigned __int64)a1 >= v8 )
      break;
    v18 = *a1;
  }
  while ( (unsigned int)((char)v18 - 48) <= 9 );
  v10 &= v13 == 0;
  if ( v14 >= 0 )
  {
LABEL_14:
    if ( v11 )
      v14 = -v14;
    *a2 = v14;
    if ( !v10 )
      goto LABEL_17;
    return 0xFFFFFFFFLL;
  }
  v19 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v11 )
    v19 = 0x8000000000000000LL;
  *a2 = v19;
  if ( v10 )
    return 0xFFFFFFFFLL;
LABEL_17:
  if ( !(_DWORD)result && v8 > (unsigned __int64)a1 )
  {
    v20 = v13;
    v21 = v13;
    while ( (byte_1BEF00[(unsigned __int8)v12[v21]] & 1) != 0 )
    {
      v20 += v6;
      v21 = v20;
      if ( v8 <= (unsigned __int64)&v12[v20] )
        goto LABEL_19;
    }
    result = 1;
  }
LABEL_19:
  if ( 19 * v6 <= v13 )
  {
    v15 = 1;
    if ( 19 * v6 < v13 )
      goto LABEL_21;
    v22 = "922337203685477580";
    v23 = 0;
    v24 = 0;
    do
    {
      v25 = *v22;
      ++v24;
      v26 = v12[v23];
      v23 += v6;
      ++v22;
      v27 = 10 * (v26 - v25);
      v15 = v27;
    }
    while ( !v27 && v24 <= 17 );
    if ( !v27 )
      v15 = v12[18 * v6] - 56;
    if ( v15 >= 0 )
    {
LABEL_21:
      v16 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v11 )
        v16 = 0x8000000000000000LL;
      *a2 = v16;
      if ( v15 )
      {
        return 2;
      }
      else if ( !v11 )
      {
        return 3;
      }
    }
  }
  return result;
}
