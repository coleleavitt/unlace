unsigned __int64 *__fastcall sub_257A40(__int64 a1)
{
  unsigned __int64 *result; // rax
  unsigned __int64 *v2; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 *v7; // rsi

  result = *(unsigned __int64 **)(a1 + 72);
  v2 = (unsigned __int64 *)*result;
  if ( *result )
  {
    if ( result[1] )
    {
      result = (unsigned __int64 *)v2[1];
      if ( v2 != result )
      {
        do
        {
LABEL_4:
          while ( 1 )
          {
            v3 = *result;
            *((_BYTE *)result + 64) = 0;
            if ( (v3 & 2) == 0 )
              break;
LABEL_7:
            if ( **(unsigned __int64 ***)(a1 + 72) == result )
              return result;
          }
          v4 = (unsigned __int64 *)result[2];
          if ( (*(_BYTE *)v4 & 2) == 0 )
          {
            do
            {
              result = v4;
              v4 = (unsigned __int64 *)v4[1];
            }
            while ( (*(_BYTE *)v4 & 2) == 0 );
            goto LABEL_7;
          }
          v5 = v3 & 0xFFFFFFFFFFFFFFFCLL;
          v6 = *(_QWORD *)v5;
          if ( (*(_QWORD *)v5 & 2) == 0 )
          {
            while ( *(unsigned __int64 **)(v5 + 16) == result )
            {
              result = (unsigned __int64 *)v5;
              v7 = (unsigned __int64 *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
              v6 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v6 & 2) != 0 )
              {
                result = v7;
                if ( **(unsigned __int64 ***)(a1 + 72) != v7 )
                  goto LABEL_4;
                return result;
              }
              v5 = (unsigned __int64)v7;
            }
          }
          result = (unsigned __int64 *)v5;
        }
        while ( **(_QWORD **)(a1 + 72) != v5 );
      }
    }
  }
  return result;
}

