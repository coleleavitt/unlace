__int64 *__fastcall sub_1CF50(__int64 *a1, unsigned int a2, unsigned __int8 a3)
{
  char *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r15

  v6 = "./()";
  do
  {
    v7 = (unsigned int)*v6++;
    set_cp_validity(2, v7, 0xFFFFFFFFLL, 1);
  }
  while ( &algn_264CF != v6 );
  v9 = a1[3];
  v10 = a1[4];
  v11 = a1[3];
  if ( !v10 )
  {
    v12 = -19;
    v13 = -18;
    goto LABEL_5;
  }
  v12 = v10 - 20;
  if ( v10 != 20 )
  {
    v13 = v10 - 19;
    if ( v10 >= 0x13 )
    {
LABEL_8:
      a1[4] = v13;
      *(_BYTE *)(v9 + v12) = 0;
      return sub_1CE90(a1 + 3, (__int64)off_2C9E0[a3], a2);
    }
LABEL_5:
    if ( a1[5] < v13 )
    {
      v11 = qvector_reserve(a1 + 3, a1[3], v13, 1);
      v10 = a1[4];
      a1[3] = v11;
    }
    memset((void *)(v11 + v10), 0, v13 - v10);
    v9 = a1[3];
    goto LABEL_8;
  }
  if ( v9 )
  {
    a1[4] = 0;
    qfree(v9, v7, 20, v8);
    a1[3] = 0;
    a1[5] = 0;
  }
  return sub_1CE90(a1 + 3, (__int64)off_2C9E0[a3], a2);
}
