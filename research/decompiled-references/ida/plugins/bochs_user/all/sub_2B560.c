__int64 __fastcall sub_2B560(__int64 a1, const char *a2, __int64 a3)
{
  char *v5; // rax
  char *i; // rdi
  unsigned __int8 *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // al
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  char *v15; // rdi
  char *v16; // rax
  int v17; // [rsp+10h] [rbp-138h]
  __int64 v18; // [rsp+18h] [rbp-130h]
  char v19; // [rsp+20h] [rbp-128h]

  *(_DWORD *)a3 = 0;
  v5 = strstr(a2, " Breakpoint ");
  if ( v5 )
  {
    for ( i = v5; *i != 40; --i )
      ;
    if ( (unsigned int)qsscanf() != 2 )
      goto LABEL_5;
    *(_DWORD *)a3 = 2;
    *(_DWORD *)(a3 + 584) = -1;
LABEL_33:
    v7 = (unsigned __int8 *)strstr(a2, "Next at t=");
    if ( v7 )
      goto LABEL_8;
    return 2;
  }
  if ( strstr(a2, "quit_sim called with exit code") || strstr(a2, "Shutdown port: shutdown requested") )
  {
    *(_DWORD *)a3 = 6;
    return 0;
  }
  if ( strstr(a2, "Caught mode switch breakpoint switching to") )
  {
    *(_DWORD *)a3 = 4;
    goto LABEL_33;
  }
  v15 = strstr(a2, "watch point at 0x");
  if ( !v15 )
  {
    v16 = strstr(a2, "Next at t=");
    v7 = (unsigned __int8 *)v16;
    if ( v16 )
      goto LABEL_7;
    return 2;
  }
  while ( *v15 != 40 )
    --v15;
  if ( (unsigned int)qsscanf() == 3 )
  {
    *(_DWORD *)a3 = 5;
    *(_BYTE *)(a3 + 584) = v19 == 114;
  }
LABEL_5:
  v7 = (unsigned __int8 *)strstr(a2, "Next at t=");
  if ( v7 )
  {
    if ( *(_DWORD *)a3 )
    {
LABEL_8:
      v8 = *v7;
      if ( (unsigned __int8)v8 > 0xDu || (v9 = -9218, _bittest64(&v9, v8)) )
      {
        v10 = -9218;
        do
        {
          do
            v8 = *++v7;
          while ( (unsigned __int8)v8 > 0xDu );
        }
        while ( _bittest64(&v10, v8) );
      }
      if ( (_BYTE)v8 == 10 || (_BYTE)v8 == 13 )
      {
        do
        {
          do
            v11 = *++v7;
          while ( v11 == 13 );
        }
        while ( v11 == 10 );
      }
      *(_DWORD *)(a3 + 8) = 0;
      sub_2A4A0(a1, v7, a3 + 8, 0);
      v12 = *v7;
      if ( (_BYTE)v12 )
      {
        v13 = -9218;
        while ( (_BYTE)v12 != 40 )
        {
          if ( (unsigned __int8)v12 > 0xDu )
            goto LABEL_21;
          while ( 1 )
          {
            if ( !_bittest64(&v13, v12) )
            {
              while ( (_BYTE)v12 != 10 && (_BYTE)v12 != 13 )
                ;
              goto LABEL_25;
            }
            do
            {
              do
LABEL_21:
                v12 = *++v7;
              while ( (unsigned __int8)v12 > 0xDu );
            }
            while ( _bittest64(&v13, v12) );
            if ( (_BYTE)v12 == 10 || (_BYTE)v12 == 13 )
              break;
            if ( !(_BYTE)v12 )
              return 0;
          }
          do
          {
            do
LABEL_25:
              v12 = *++v7;
            while ( (_BYTE)v12 == 10 );
          }
          while ( (_BYTE)v12 == 13 );
          if ( !(_BYTE)v12 )
            return 0;
        }
        if ( (unsigned int)qsscanf() == 4 )
        {
          *(_DWORD *)(a3 + 8) |= 0x20u;
          *(_DWORD *)(a3 + 172) = v17;
          *(_QWORD *)(a3 + 140) = v18;
        }
      }
      return 0;
    }
LABEL_7:
    *(_DWORD *)a3 = 1;
    goto LABEL_8;
  }
  return 2;
}

