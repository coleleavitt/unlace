__int64 __fastcall sub_2AA60(const char **a1, unsigned __int8 *a2, _DWORD *a3)
{
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int8 *v15; // rbx
  unsigned __int8 *v16; // r14
  const char *v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v17[1] = (const char *)__readfsqword(0x28u);
  v4 = sub_2A250(a2, a1, v17);
  if ( (unsigned int)qsscanf() != 1 )
    return 2;
  v6 = sub_2A250(v4, a1, v17);
  if ( (unsigned int)qsscanf() != 1 )
    return 2;
  v7 = sub_2A250(v6, a1, v17);
  if ( (unsigned int)qsscanf() != 1 )
    return 2;
  v8 = *v7;
  if ( (unsigned __int8)v8 > 0xDu || (v9 = -9218, _bittest64(&v9, v8)) )
  {
    v10 = -9218;
    do
    {
      do
        v11 = *++v7;
      while ( (unsigned __int8)v11 > 0xDu );
    }
    while ( _bittest64(&v10, v11) );
    if ( (_BYTE)v11 != 10 && (_BYTE)v11 != 13 )
      goto LABEL_15;
  }
  else if ( (_BYTE)v8 != 10 && (_BYTE)v8 != 13 )
  {
    goto LABEL_23;
  }
  do
  {
    do
      v11 = *++v7;
    while ( (_BYTE)v11 == 13 );
  }
  while ( (_BYTE)v11 == 10 );
  if ( (unsigned __int8)v11 <= 0xDu )
  {
LABEL_15:
    v12 = -9218;
    if ( !_bittest64(&v12, v11) )
      goto LABEL_23;
  }
  v13 = -9218;
  do
  {
    do
      v14 = *++v7;
    while ( (unsigned __int8)v14 > 0xDu );
  }
  while ( _bittest64(&v13, v14) );
  while ( (_BYTE)v14 == 10 || (_BYTE)v14 == 13 )
    LOBYTE(v14) = *++v7;
LABEL_23:
  v15 = sub_2A250(v7, a1, v17);
  if ( (unsigned int)qsscanf() != 1 )
    return 2;
  *a3 |= 4u;
  v16 = sub_2A250(v15, a1, v17);
  if ( (unsigned int)qsscanf() == 1 )
    sub_2A250(v16, a1, v17);
  else
    a3[140] = 0;
  if ( (unsigned int)qsscanf() == 1 )
    *a3 |= 0x40u;
  return 0;
}

