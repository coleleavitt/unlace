__int64 __fastcall sub_27D1E0(unsigned __int64 **a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  int v7; // ebp
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rcx

  v4 = (__int64)*a1;
  LODWORD(v5) = 0;
  if ( !*a1 )
    return 0;
  if ( a1[1] )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v4 != v6 )
    {
      v7 = 0;
      while ( 1 )
      {
LABEL_5:
        while ( 1 )
        {
          v7 += (unsigned __int8)sub_27BC20(a2, *(char **)(v6 + 24), v6 + 32, a3, a4);
          if ( (*(_QWORD *)v6 & 2) == 0 )
            break;
LABEL_8:
          if ( *a1 == (unsigned __int64 *)v6 )
            goto LABEL_9;
        }
        v5 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)v5 & 2) == 0 )
        {
          do
          {
            v6 = v5;
            v5 = *(_QWORD *)(v5 + 8);
          }
          while ( (*(_BYTE *)v5 & 2) == 0 );
          goto LABEL_8;
        }
        v9 = (unsigned __int64 *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL);
        v5 = *v9;
        if ( (*v9 & 2) == 0 )
        {
          while ( v9[2] == v6 )
          {
            v6 = (unsigned __int64)v9;
            v10 = (unsigned __int64 *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
            v5 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v5 & 2) != 0 )
            {
              v6 = (unsigned __int64)v10;
              if ( *a1 != v10 )
                goto LABEL_5;
              goto LABEL_9;
            }
            v9 = v10;
          }
        }
        v6 = (unsigned __int64)v9;
        if ( *a1 == v9 )
        {
LABEL_9:
          LOBYTE(v5) = v7 != 0;
          return (unsigned int)v5;
        }
      }
    }
  }
  return (unsigned int)v5;
}

