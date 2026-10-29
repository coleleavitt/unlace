unsigned __int64 __fastcall sub_2B2520(__int64 *a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r12
  __int64 *v4; // rbx
  const char *v5; // rsi
  __int64 *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  result = sub_332160(a1);
  v3 = *a2;
  if ( *a2 )
  {
    if ( a2[1] )
    {
      v4 = *(__int64 **)(v3 + 8);
      if ( (__int64 *)v3 != v4 )
      {
        while ( 1 )
        {
LABEL_4:
          sub_332160(a1);
          v5 = s1;
          if ( v4[5] )
            v5 = (const char *)v4[4];
          sub_3322E0(a1, v5);
          result = *v4;
          if ( (*v4 & 2) != 0 )
            goto LABEL_9;
          v6 = (__int64 *)v4[2];
          if ( (*(_BYTE *)v6 & 2) != 0 )
          {
            result &= 0xFFFFFFFFFFFFFFFCLL;
            v7 = *(_QWORD *)result;
            if ( (*(_QWORD *)result & 2) == 0 )
            {
              while ( *(__int64 **)(result + 16) == v4 )
              {
                v4 = (__int64 *)result;
                v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
                v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v7 & 2) != 0 )
                {
                  v4 = (__int64 *)v8;
                  if ( v3 != v8 )
                    goto LABEL_4;
                  return result;
                }
                result = v8;
              }
            }
            v4 = (__int64 *)result;
            if ( v3 == result )
              return result;
          }
          else
          {
            do
            {
              v4 = v6;
              v6 = (__int64 *)v6[1];
            }
            while ( (*(_BYTE *)v6 & 2) == 0 );
LABEL_9:
            if ( (__int64 *)v3 == v4 )
              return result;
          }
        }
      }
    }
  }
  return result;
}

