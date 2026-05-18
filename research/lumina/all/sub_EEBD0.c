int __fastcall sub_EEBD0(__int64 a1, _DWORD *a2, char *a3, unsigned int a4, char *a5, unsigned int a6, double a7)
{
  int v7; // eax
  int v8; // r10d
  char *v9; // rbx
  char *v10; // rbp
  int result; // eax
  __int64 v12; // r10
  int v13; // r10d
  int v14; // r11d
  int v15; // r13d
  __int64 v16; // r12
  __int64 v17; // r10
  __int64 v18; // r12
  int v19; // eax
  int v20; // r11d
  __int64 *v23; // rbx

  v7 = (unsigned __int8)a3[1];
  v8 = (unsigned __int8)a5[1];
  v9 = &a3[(unsigned __int8)*a3];
  v10 = &a5[(unsigned __int8)*a5];
  if ( v7 == v8 )
  {
    v13 = byte_1BAAE8[(unsigned __int8)a3[1]];
    if ( !(_BYTE)v13 )
    {
LABEL_6:
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
      result = 0;
      if ( *(_WORD *)(v12 + 6) > 1u )
      {
        v23 = *(__int64 **)(a1 + 24);
        if ( !*a2 )
        {
          sub_CD5F0((_BYTE *)(v12 + 4), (__int64 *)(v12 + 16), a6, a5, (__int64)v23);
          *a2 = 1;
        }
        return sub_EE540(a4, a3, v23, 1, a7);
      }
      return result;
    }
    v14 = (unsigned __int8)*v10;
    v15 = (unsigned __int8)*v9;
    result = v15 - v14;
    if ( v15 == v14 )
    {
      v16 = (unsigned int)(v13 - 1);
      v17 = 1;
      v18 = v16 + 1;
      while ( v18 != v17 )
      {
        v19 = (unsigned __int8)v9[v17];
        v20 = (unsigned __int8)v10[v17++];
        result = v19 - v20;
        if ( result )
          goto LABEL_21;
      }
      goto LABEL_6;
    }
LABEL_21:
    if ( ((v15 ^ *v10) & 0x80u) != 0 )
      result = ((char)v15 >> 31) | 1;
  }
  else
  {
    if ( (unsigned __int8)a3[1] <= 7u || (unsigned __int8)a5[1] <= 7u )
    {
      if ( (unsigned __int8)a5[1] > 7u )
      {
        result = (*v9 >> 31) | 1;
        goto LABEL_13;
      }
      if ( (unsigned __int8)a3[1] > 7u )
      {
        result = ((*v10 >> 31) & 2) - 1;
        goto LABEL_13;
      }
      result = v7 - v8;
      if ( result > 0 )
      {
        if ( *v9 < 0 )
          result = -1;
        goto LABEL_13;
      }
      if ( *v10 < 0 )
      {
        result = 1;
        goto LABEL_13;
      }
    }
    else
    {
      result = v7 - v8;
    }
    if ( !result )
      goto LABEL_6;
  }
LABEL_13:
  if ( **(_BYTE **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) + 24LL) )
    return -result;
  return result;
}
