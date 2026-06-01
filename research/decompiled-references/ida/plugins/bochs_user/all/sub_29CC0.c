__int64 __fastcall sub_29CC0(const char **a1, _QWORD *a2, unsigned int a3)
{
  _BYTE *v3; // r14
  const char *v5; // rax
  unsigned __int64 v6; // rbx
  const char *v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // edx
  const char *v11; // r13
  char v12; // r15
  char v13; // bl
  _BYTE *v14; // rsi
  char v15; // bp
  unsigned __int64 v17; // rsi
  unsigned int v18; // edi
  __int64 v19; // r9
  unsigned int v21; // [rsp+4h] [rbp-44h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  v3 = a2;
  v5 = *a1;
  if ( **a1 == 48 && v5[1] == 120 )
    *a1 = v5 + 2;
  if ( a3 >= 8 )
  {
    *a2 = 0;
    *(_QWORD *)((char *)a2 + a3 - 8) = 0;
    v17 = (unsigned __int64)(a2 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    if ( ((a3 + (_DWORD)v3 - (_DWORD)v17) & 0xFFFFFFF8) >= 8 )
    {
      v18 = 0;
      do
      {
        v19 = v18;
        v18 += 8;
        *(_QWORD *)(v17 + v19) = 0;
      }
      while ( v18 < ((a3 + (_DWORD)v3 - (_DWORD)v17) & 0xFFFFFFF8) );
    }
  }
  else if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)((char *)a2 + a3 - 4) = 0;
  }
  else if ( a3 )
  {
    *(_BYTE *)a2 = 0;
    if ( (a3 & 2) != 0 )
      *(_WORD *)((char *)a2 + a3 - 2) = 0;
  }
  v6 = (unsigned __int64)*a1;
  v22 = (int)strspn(*a1, "0123456789abcdefABCDEF_:");
  v7 = (const char *)(v6 + v22);
  v8 = *(unsigned __int8 *)(v6 + v22);
  if ( (unsigned __int8)v8 > 0x20u )
    return 0;
  v9 = 0x100002400LL;
  v10 = a3;
  if ( !_bittest64(&v9, v8) )
  {
    if ( (_BYTE)v8 )
      return 0;
  }
  v11 = v7 - 1;
  if ( (unsigned __int64)(v7 - 1) >= v6 )
  {
    v12 = 0;
    while ( 1 )
    {
      v15 = *v11;
      if ( *v11 == 95 || v15 == 58 )
        v15 = *--v11;
      v21 = v10;
      if ( (unsigned int)v15 > 0x7F || !isxdigit(v15) )
        return 0;
      v10 = v21;
      if ( (unsigned __int8)(v15 - 48) <= 9u )
      {
        v13 = v15 - 48;
      }
      else if ( (unsigned __int8)(v15 - 97) > 5u )
      {
        if ( (unsigned __int8)(v15 - 65) > 5u )
        {
          if ( under_debugger )
            BUG();
          interr();
          return sub_29F20(1352);
        }
        v13 = v15 - 55;
      }
      else
      {
        v13 = v15 - 87;
      }
      if ( v12 )
      {
        v10 = v21 - 1;
        if ( (int)(v21 - 1) < 0 )
          return 0;
        v14 = v3 + 1;
        v13 = *v3 | (16 * v13);
      }
      else
      {
        v14 = v3;
      }
      *v3 = v13;
      --v11;
      v12 ^= 1u;
      if ( v11 < *a1 )
      {
        v7 = &(*a1)[v22];
        break;
      }
      v3 = v14;
    }
  }
  *a1 = v7;
  return 1;
}

