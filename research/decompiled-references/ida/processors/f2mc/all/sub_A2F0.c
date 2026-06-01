_BYTE *__fastcall sub_A2F0(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  _BYTE *result; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // r13
  unsigned int v9; // r14d
  __int64 v10; // r13
  unsigned int v11; // r14d
  __int64 v12; // r13

  result = (_BYTE *)sub_C440(a1, *a2);
  if ( !result || !*result )
  {
    v5 = (_BYTE *)sub_C440(a1, *a2 - 1LL);
    if ( v5 && *v5 )
    {
      v7 = 8;
      v8 = *a2 - 1LL;
      while ( 1 )
      {
        result = (_BYTE *)sub_C480(a1, v8, v7);
        if ( result )
        {
          if ( *result )
            break;
        }
        if ( ++v7 == 16 )
          goto LABEL_5;
      }
      --*a2;
      *a3 += 8;
    }
    else
    {
LABEL_5:
      v6 = (_BYTE *)sub_C440(a1, *a2 - 2LL);
      if ( v6 && *v6 )
      {
        v9 = 16;
        v10 = *a2 - 2LL;
        while ( 1 )
        {
          result = (_BYTE *)sub_C480(a1, v10, v9);
          if ( result )
          {
            if ( *result )
              break;
          }
          if ( ++v9 == 32 )
            goto LABEL_7;
        }
        *a2 -= 2LL;
        *a3 += 16;
      }
      else
      {
LABEL_7:
        result = (_BYTE *)sub_C440(a1, *a2 - 3LL);
        if ( result && *result )
        {
          v11 = 16;
          v12 = *a2 - 3LL;
          while ( 1 )
          {
            result = (_BYTE *)sub_C480(a1, v12, v11);
            if ( result )
            {
              if ( *result )
                break;
            }
            if ( ++v11 == 32 )
              return result;
          }
          *a2 -= 3LL;
          *a3 += 24;
        }
      }
    }
  }
  return result;
}

