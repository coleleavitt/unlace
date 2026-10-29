__int64 __fastcall sub_1C28A0(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  int v6; // ebp
  __int64 *v8; // r14
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  _WORD *v14; // r13
  _WORD *v15; // rbp
  _WORD *v16; // r15
  size_t v17; // rdx

  if ( a3 <= a4 )
    return 0;
  if ( *(_DWORD *)a1 > 6u )
  {
LABEL_29:
    if ( !under_debugger )
      sub_383060(0xC7BDu, a5);
    BUG();
  }
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      goto LABEL_29;
    case 1:
    case 5:
    case 6:
      return 1;
    case 2:
      v8 = *(__int64 **)(a1 + 8);
      v9 = v8[1];
      v10 = v9 - 1;
      if ( v9 - 1 < 0 )
        return v10 >= 0;
      v11 = *v8;
      v12 = 24 * v10;
      break;
    case 3:
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 216LL))(a2, *(unsigned int *)(a1 + 8));
    case 4:
      if ( 2 * a4 > a3 )
        return 0;
      v6 = *(unsigned __int16 *)(a1 + 8);
      if ( 2 * a4 != a3
        && !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 216LL))(
              a2,
              *(unsigned __int16 *)(a1 + 8)) )
      {
        return 0;
      }
      *(_DWORD *)a1 = 3;
      *(_DWORD *)(a1 + 8) = v6;
      return 1;
  }
  while ( 1 )
  {
    v13 = *(unsigned __int16 *)(v11 + v12 + 16);
    if ( v13 <= a4 )
      break;
    --v10;
    v12 -= 24;
    if ( v10 == -1 )
      return v10 >= 0;
  }
  v14 = (_WORD *)(v11 + v12);
  if ( v13 < a4 )
  {
    if ( (unsigned __int16)v14[9] == a4 - v13 )
    {
LABEL_17:
      ++v10;
      v12 = 24 * v10;
      v14 = (_WORD *)(v11 + 24 * v10);
      goto LABEL_22;
    }
    if ( (unsigned __int8)sub_1C28A0((__int64)v14, a2, (unsigned __int16)v14[9], a4 - v13) )
    {
      v14[9] = a4 - v14[8];
      v11 = *v8;
      v9 = v8[1];
      goto LABEL_17;
    }
    return 0;
  }
  if ( !v10 )
    return 0;
LABEL_22:
  v15 = (_WORD *)(v11 + 24 * v9);
  if ( 24 * v9 == v12 )
  {
    v17 = 0;
  }
  else
  {
    v16 = v14;
    do
    {
      v16 += 12;
      cleanup_argloc();
    }
    while ( v15 != v16 );
    v17 = *v8 + 24 * v8[1] - (_QWORD)v15;
  }
  memmove(v14, v15, v17);
  v8[1] -= 0xAAAAAAAAAAAAAAABLL * ((24 * (v9 - v10)) >> 3);
  return v10 >= 0;
}

