__int64 __fastcall sub_2C900(_WORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  char *v8; // rax
  char v9; // dl
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned int v12; // r13d
  unsigned int *v13; // rax
  unsigned int *v14; // r14
  const void *v15; // rsi
  void *v16; // rcx
  unsigned __int64 v17; // rax

  v6 = unpack_dw(a2, a3);
  *a1 = v6;
  if ( (v6 & 0x6000) != 0 )
    return 0;
  switch ( v6 )
  {
    case 2LL:
    case 18LL:
      a1[4] = unpack_dw(a2, a3);
      return 1;
    case 3LL:
    case 4LL:
    case 19LL:
    case 22LL:
    case 23LL:
    case 25LL:
      *((_DWORD *)a1 + 2) = unpack_dd(a2, a3);
      return 1;
    case 5LL:
    case 20LL:
    case 21LL:
      *((_QWORD *)a1 + 1) = unpack_dq(a2, a3);
      return 1;
    case 8LL:
      v12 = unpack_dd(a2, a3);
      if ( v12 >= v12 + 6 )
      {
        if ( under_debugger )
          BUG();
        interr(30472);
        return sub_2CAB0();
      }
      v13 = (unsigned int *)qalloc();
      v14 = v13;
      if ( !v13 )
        return 0;
      *v13 = v12;
      v15 = (const void *)*a2;
      v16 = v13 + 1;
      v17 = v12 + *a2;
      if ( !__CFADD__(v12, *a2) && a3 >= v17 )
      {
        *a2 = v17;
        v16 = memcpy(v16, v15, v12);
      }
      *((_BYTE *)v14 + v12 + 4) = 0;
      *((_BYTE *)v14 + v12 + 5) = 0;
      *((_QWORD *)a1 + 1) = v16;
      return 1;
    case 9LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 14LL:
    case 16LL:
    case 17LL:
      v8 = (char *)*a2;
      v9 = 0;
      if ( *a2 < a3 )
        v9 = *v8++;
      *a2 = (unsigned __int64)v8;
      *((_BYTE *)a1 + 8) = v9;
      return 1;
    case 30LL:
    case 31LL:
      v10 = *a2;
      v11 = *a2;
      break;
    default:
      return 0;
  }
  do
  {
    if ( v11 >= a3 )
    {
      v10 = 0;
      goto LABEL_15;
    }
    ++v11;
  }
  while ( *(_BYTE *)(v11 - 1) );
  *a2 = v11;
LABEL_15:
  *((_QWORD *)a1 + 1) = qstrdup(v10);
  return 1;
}
