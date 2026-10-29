unsigned __int64 __fastcall sub_B82A0(unsigned __int64 **a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // rdx
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rcx

  v4 = *a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v5 = (unsigned __int64 *)v4[1];
      if ( v4 != v5 )
      {
        do
        {
LABEL_4:
          while ( 1 )
          {
            sub_1253A0(v5[3], (__int64)(v5 + 4));
            if ( (*v5 & 2) == 0 )
              break;
LABEL_7:
            if ( *a1 == v5 )
              return sub_321ED0(a2, 0, a3, a4);
          }
          v6 = (unsigned __int64 *)v5[2];
          if ( (*(_BYTE *)v6 & 2) == 0 )
          {
            do
            {
              v5 = v6;
              v6 = (unsigned __int64 *)v6[1];
            }
            while ( (*(_BYTE *)v6 & 2) == 0 );
            goto LABEL_7;
          }
          v8 = (unsigned __int64 *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
          v9 = *v8;
          if ( (*v8 & 2) == 0 )
          {
            while ( (unsigned __int64 *)v8[2] == v5 )
            {
              v5 = v8;
              v10 = (unsigned __int64 *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
              v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v9 & 2) != 0 )
              {
                v5 = v10;
                if ( *a1 != v10 )
                  goto LABEL_4;
                return sub_321ED0(a2, 0, a3, a4);
              }
              v8 = v10;
            }
          }
          v5 = v8;
        }
        while ( *a1 != v8 );
      }
    }
  }
  return sub_321ED0(a2, 0, a3, a4);
}

