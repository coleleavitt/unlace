__int64 __fastcall sub_110C0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  const char *i; // r15
  __int64 v5; // rax
  __int64 v6; // rsi
  char *v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+30h] [rbp-48h]

  a2[1] = 0;
  for ( i = (const char *)qstrtok(); i; i = (const char *)qstrtok() )
  {
    v7 = strchr(i, 45);
    if ( v7 )
    {
      *v7 = 0;
      if ( (unsigned int)qsscanf() != 1 )
        return 0;
      if ( (unsigned int)qsscanf() != 1 )
        return 0;
      v8 = v15;
      if ( a3 < v16 - v15 )
        return 0;
      if ( v16 >= v15 )
      {
        v9 = a2[1];
        do
        {
          v10 = *a2;
          if ( a2[2] < (unsigned __int64)(v9 + 1) )
          {
            v11 = qvector_reserve();
            v9 = a2[1];
            *a2 = v11;
            v10 = v11;
          }
          *(_QWORD *)(v10 + 8 * v9) = v8++;
          v9 = a2[1] + 1;
          a2[1] = v9;
        }
        while ( v16 >= v8 );
      }
    }
    else
    {
      if ( (unsigned int)qsscanf() != 1 )
        return 0;
      v5 = a2[1];
      v6 = *a2;
      if ( a2[2] < (unsigned __int64)(v5 + 1) )
      {
        v12 = qvector_reserve();
        *a2 = v12;
        v6 = v12;
        v5 = a2[1];
      }
      *(_QWORD *)(v6 + 8 * v5) = v15;
      ++a2[1];
    }
  }
  return 1;
}

