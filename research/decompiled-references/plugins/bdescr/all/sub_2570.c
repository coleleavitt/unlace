__int64 __fastcall sub_2570(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rbp
  unsigned int *v5; // rdi
  __int64 v6; // rdx
  unsigned int *v7; // r8
  unsigned int *v8; // rbx
  __int64 i; // rdx
  unsigned int *v10; // rax
  __int64 v11; // rsi
  char v12; // al
  char v13; // cl
  __int64 v14; // rax

  v2 = a1[28];
  if ( !v2 )
    return -1;
  v3 = *a2;
  if ( *a2 == -1 )
    return -1;
  v5 = (unsigned int *)a1[27];
  v6 = v2;
  v7 = &v5[v6];
  v8 = v5;
  for ( i = (v6 * 4) >> 2; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v10 = &v8[i >> 1];
      if ( *v10 >= v3 )
        break;
      v8 = v10 + 1;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_7;
    }
  }
LABEL_7:
  if ( v7 == v8 )
  {
    --v8;
  }
  else if ( v5 != v8 )
  {
    v11 = *v8;
    if ( v3 != v11 )
    {
      v12 = netnode_charval(a1[23], v11, 322);
      v5 = (unsigned int *)a1[27];
      v13 = v12;
      v14 = *v8;
      if ( (v13 & 0x10) != 0 )
        v14 -= 4;
      if ( v3 != v14 )
        --v8;
    }
  }
  return v8 - v5;
}
