unsigned __int8 *__fastcall sub_E5F00(__int64 *a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // r8
  const char *v9; // rax
  unsigned __int8 *v10; // rbx
  int v11; // r14d
  unsigned __int8 v12; // bp
  _DWORD *v13; // rdi
  int v14; // eax
  int v16; // eax
  unsigned __int8 *v17; // rdi
  unsigned __int8 *v18; // rdx
  unsigned __int8 *v21; // [rsp+10h] [rbp-48h]
  unsigned __int8 *v22; // [rsp+10h] [rbp-48h]
  const char *v23; // [rsp+18h] [rbp-40h]

  v7 = sub_CFF50(*a1, (unsigned __int8 **)a2);
  if ( !v7 )
  {
LABEL_25:
    if ( a5 )
      *a5 = 0;
    return nullptr;
  }
  v8 = v7;
  if ( (*(_BYTE *)(*a1 + 50) & 4) == 0 )
  {
    v17 = *(unsigned __int8 **)(a2 + 88);
    if ( v17 )
    {
      v18 = v7;
      if ( v17 == v7 )
        goto LABEL_25;
      while ( v17 != *((unsigned __int8 **)v18 + 8) && *((_QWORD *)v18 + 8) != 0 )
        v18 = *((unsigned __int8 **)v18 + 8);
      *((_QWORD *)v18 + 8) = 0;
    }
  }
  v9 = "UPDATE";
  v10 = v8;
  if ( a3 == 128 )
    v9 = "DELETE";
  v11 = 0;
  v23 = v9;
  do
  {
    while ( 1 )
    {
      v12 = v10[16];
      if ( v12 == a3 )
      {
        v13 = *((_DWORD **)v10 + 4);
        if ( !v13 || !a4 || (v21 = v8, v16 = sub_CFFF0(v13, a4), v8 = v21, v16) )
        {
LABEL_13:
          v14 = v10[17];
          goto LABEL_14;
        }
      }
      if ( v12 == 0x96 )
        break;
      if ( v12 == 127 && v10[18] != 0 && a3 == 129 && !a1[20] )
        goto LABEL_13;
      v10 = *((unsigned __int8 **)v10 + 8);
      if ( !v10 )
        goto LABEL_15;
    }
    v10[16] = a3;
    if ( *(_BYTE *)(a2 + 63) == 1 )
    {
      if ( a3 != 127 )
      {
        v22 = v8;
        sub_DBD10((__int64)a1, "%s RETURNING is not available on virtual tables", v23);
        v8 = v22;
      }
      v10[17] = 1;
      v14 = 1;
    }
    else
    {
      v10[17] = 2;
      v14 = 2;
    }
LABEL_14:
    v10 = *((unsigned __int8 **)v10 + 8);
    v11 |= v14;
  }
  while ( v10 );
LABEL_15:
  if ( a5 )
    *a5 = v11;
  if ( !v11 )
    return nullptr;
  return v8;
}
