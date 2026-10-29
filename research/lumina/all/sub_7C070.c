__int64 __fastcall sub_7C070(unsigned int *src, unsigned int *a2, unsigned int *a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int *v5; // r9
  unsigned int *v9; // rsi
  unsigned int *v10; // rdi
  unsigned int *v11; // rsi
  signed __int64 v12; // r10
  signed __int64 v13; // r12
  signed __int64 v14; // rbp
  unsigned int *v15; // r8

  v5 = src;
  if ( a2 != src )
  {
    while ( a4 != a3 )
    {
      v10 = a5;
      if ( a3[1] + ((unsigned __int64)*a3 << 32) < v5[1] + ((unsigned __int64)*v5 << 32) )
      {
        v9 = a3;
        a5 += 548;
        a3 += 548;
        qmemcpy(v10, v9, 0x890u);
        if ( a2 == v5 )
          break;
      }
      else
      {
        v11 = v5;
        v5 += 548;
        a5 += 548;
        qmemcpy(v10, v11, 0x890u);
        if ( a2 == v5 )
          break;
      }
    }
  }
  v12 = (char *)a2 - (char *)v5;
  v13 = v12;
  if ( v12 <= 2192 )
  {
    if ( v12 == 2192 )
      qmemcpy(a5, v5, 0x890u);
  }
  else
  {
    a5 = (unsigned int *)memmove(a5, v5, v12);
  }
  v14 = (char *)a4 - (char *)a3;
  v15 = (unsigned int *)((char *)a5 + v13);
  if ( v14 <= 2192 )
  {
    if ( v14 == 2192 )
      qmemcpy(v15, a3, 0x890u);
  }
  else
  {
    v15 = (unsigned int *)memmove(v15, a3, v14);
  }
  return (__int64)v15 + v14;
}
