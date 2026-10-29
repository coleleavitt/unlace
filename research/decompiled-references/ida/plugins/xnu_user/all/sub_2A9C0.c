__int64 __fastcall sub_2A9C0(_QWORD *a1, void *a2, int a3)
{
  int v3; // ebp
  size_t v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r12
  char *v11; // rsi

  v3 = 0;
  if ( a3 >= 0 )
  {
    v6 = a3;
    v7 = a1[4];
    v8 = a3 + v7;
    if ( !__CFADD__(a3, v7) )
    {
      v9 = a1[2];
      if ( v9 )
      {
        if ( v9 - 1 >= v8 )
        {
          v10 = a3;
          v3 = a3;
          if ( !a3 )
          {
LABEL_8:
            a1[4] = v7;
            return (unsigned int)v3;
          }
          goto LABEL_6;
        }
        v3 = v9 - 1 - v7;
        v10 = v3;
        v6 = (unsigned int)v3;
        if ( v3 <= 0 )
        {
LABEL_15:
          v7 += v10;
          goto LABEL_8;
        }
      }
      else if ( v8 )
      {
        v3 = -(int)v7;
        v10 = -(int)v7;
        v6 = (unsigned int)-(int)v7;
        if ( -(int)v7 < 0 || (_DWORD)v7 == 0 )
          goto LABEL_15;
      }
      else
      {
        if ( !a3 )
          goto LABEL_8;
        v10 = a3;
        v3 = a3;
        if ( !v7 )
        {
          v11 = &byte_9AD48;
          goto LABEL_7;
        }
      }
LABEL_6:
      v11 = (char *)(a1[1] + v7);
LABEL_7:
      memcpy(a2, v11, v6);
      v7 = v10 + a1[4];
      goto LABEL_8;
    }
  }
  return (unsigned int)v3;
}

