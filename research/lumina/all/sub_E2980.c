__int64 __fastcall sub_E2980(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // r15d
  int v13; // r9d
  __int64 v14; // rax
  unsigned int *v15; // rbp
  unsigned int v16; // eax
  unsigned __int8 v17; // bp
  int v18; // r14d
  __int64 result; // rax
  unsigned __int8 v20; // bl
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  v10 = a1;
  v11 = *(_QWORD *)(a3 + 16);
  if ( v11 )
  {
    v12 = 0;
    do
    {
      v15 = (unsigned int *)(a7 + 4LL * v12);
      v16 = *v15;
      if ( *v15 )
      {
        if ( *(_QWORD *)(v11 + 72) )
        {
          sub_E1710(a1, 50, v16, *(_DWORD *)(a1 + 144) + 2, 0);
          v16 = *v15;
        }
        v17 = a10 != 0 ? 0x10 : 0;
        if ( (*(_BYTE *)(v11 + 99) & 3) == 2 )
        {
          v17 = (a10 != 0 ? 0x10 : 0) | 1 | a8 & 2;
          if ( *(char *)(a3 + 48) >= 0 )
            v17 = a10 != 0 ? 0x10 : 0;
        }
        if ( (*(_BYTE *)(v11 + 99) & 8) != 0 )
          v13 = *(unsigned __int16 *)(v11 + 94);
        else
          v13 = *(unsigned __int16 *)(v11 + 96);
        sub_E1770((_QWORD *)a1, 138, a5 + v12, v16, v16 + 1, v13);
        v14 = *(int *)(a1 + 144);
        if ( (int)v14 > 0 )
          *(_WORD *)(*(_QWORD *)(a1 + 136) + 24 * v14 - 22) = v17;
      }
      v11 = *(_QWORD *)(v11 + 40);
      ++v12;
    }
    while ( v11 );
    v18 = v12;
    v10 = a1;
  }
  else
  {
    v18 = 0;
  }
  result = a3;
  if ( *(char *)(a3 + 48) >= 0 )
  {
    v20 = 0;
    if ( !*a2 )
    {
      v20 = a8 | 1;
      if ( !a8 )
        v20 = 33;
    }
    if ( a9 )
      v20 |= 8u;
    if ( a10 )
      v20 |= 0x10u;
    sub_E1710(v10, 128, a4, *(_DWORD *)(a7 + 4LL * v18), a6);
    if ( *a2 )
    {
      result = *(int *)(v10 + 144);
      if ( (int)result <= 0 )
        return result;
      goto LABEL_24;
    }
    sub_D04B0(v10, a3, 0xFFFFFFFB, v21, v22, v23);
    result = *(int *)(v10 + 144);
    if ( (int)result > 0 )
    {
LABEL_24:
      result = *(_QWORD *)(v10 + 136) + 24 * result;
      *(_WORD *)(result - 22) = v20;
    }
  }
  return result;
}
