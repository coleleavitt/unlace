__int64 __fastcall sub_387070(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rbx
  void *v10; // rdi

  v2 = a1[1];
  if ( (*(_BYTE *)v2 & 2) != 0 )
    goto LABEL_7;
  v3 = *(__int64 **)(v2 + 8);
  if ( (*(_BYTE *)v3 & 2) != 0 )
  {
    v4 = *(__int64 **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
    {
LABEL_4:
      sub_386EA0(*(_QWORD **)(v2 + 48));
      *(_QWORD *)v2 |= 2uLL;
      goto LABEL_5;
    }
  }
  else
  {
    sub_387070(v3);
    v4 = *(__int64 **)(v2 + 16);
    if ( (*(_BYTE *)v4 & 2) != 0 )
      goto LABEL_24;
  }
  sub_387070(v4);
LABEL_24:
  if ( (*(_BYTE *)v2 & 2) == 0 )
    goto LABEL_4;
LABEL_5:
  if ( v2 )
    qfree(v2);
LABEL_7:
  v5 = a1[2];
  if ( (*(_BYTE *)v5 & 2) != 0 )
    goto LABEL_14;
  v6 = *(__int64 **)(v5 + 8);
  if ( (*(_BYTE *)v6 & 2) == 0 )
  {
    sub_387070(v6);
    v7 = *(__int64 **)(v5 + 16);
    if ( (*(_BYTE *)v7 & 2) != 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v7 = *(__int64 **)(v5 + 16);
  if ( (*(_BYTE *)v7 & 2) == 0 )
  {
LABEL_10:
    sub_387070(v7);
LABEL_11:
    if ( (*(_BYTE *)v5 & 2) != 0 )
      goto LABEL_12;
  }
  sub_386EA0(*(_QWORD **)(v5 + 48));
  *(_QWORD *)v5 |= 2uLL;
LABEL_12:
  if ( v5 )
    qfree(v5);
LABEL_14:
  result = *a1;
  if ( (*a1 & 2) == 0 )
  {
    v9 = a1[6];
    if ( v9 )
    {
      do
      {
        sub_386EA0(*(_QWORD **)(v9 + 24));
        v10 = (void *)v9;
        v9 = *(_QWORD *)(v9 + 16);
        operator delete(v10, 0x28u);
      }
      while ( v9 );
      result = *a1;
    }
    result |= 2uLL;
    *a1 = result;
  }
  if ( a1 )
    return qfree((__int64)a1);
  return result;
}

