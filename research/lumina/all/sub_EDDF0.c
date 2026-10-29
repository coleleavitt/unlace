unsigned __int64 __fastcall sub_EDDF0(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  __int64 v9; // rbx
  unsigned __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  int v14; // edx
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // edx
  int v19; // esi
  unsigned int *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  _BOOL8 v23; // rsi
  __int64 v24; // rcx

  v9 = sub_EDD90(*(_QWORD *)a3, a7, a2, a3, a4, a5, a6);
  result = sub_CD0F0(*(char ***)(a3 + 8));
  v13 = *(_DWORD *)(v9 + 12);
  if ( v13 )
  {
    v14 = result;
    if ( (int)result > 0 )
    {
      v15 = 0;
      do
      {
        v16 = (_DWORD *)(v15 + *(_QWORD *)(v9 + 32));
        v15 += 4;
        ++*v16;
      }
      while ( 4LL * (unsigned int)(result - 1) + 4 != v15 );
    }
    if ( (int)result < *(_DWORD *)(v9 + 20) )
    {
      do
      {
        result = v14++;
        ++*(_DWORD *)(*(_QWORD *)(v9 + 40) + 4 * result);
        *(_DWORD *)(*(_QWORD *)(v9 + 32) + 4 * result) = 1;
      }
      while ( *(_DWORD *)(v9 + 20) > v14 );
    }
  }
  else
  {
    if ( *(int *)(v9 + 20) <= 0 )
      goto LABEL_8;
    LODWORD(result) = 0;
    do
    {
      v24 = (int)result;
      result = (unsigned int)(result + 1);
      *(_DWORD *)(*(_QWORD *)(v9 + 32) + 4 * v24) = 1;
    }
    while ( *(_DWORD *)(v9 + 20) > (int)result );
  }
  v13 = *(_DWORD *)(v9 + 12);
LABEL_8:
  v17 = *(unsigned int *)(v9 + 16);
  v18 = v13 + 1;
  *(_DWORD *)(v9 + 12) = v18;
  if ( (_DWORD)v17 )
  {
    v19 = *(unsigned __int8 *)(v9 + 28);
    result = (unsigned int)(v17 * (v19 + 1));
    if ( v18 > (unsigned int)result )
    {
      v20 = *(unsigned int **)(v9 + 40);
      *(_BYTE *)(v9 + 28) = v19 + 1;
      v21 = *a1;
      v22 = *v20;
      v23 = (_DWORD)v22 != 0;
      if ( (*(_WORD *)(*a1 + 20) & 0x9000) != 0 )
      {
        return sub_C9430(v21, v23, v22, v17, v11, v12);
      }
      else
      {
        result = 4;
        *(_QWORD *)v21 = v23;
        *(_WORD *)(v21 + 20) = 4;
      }
    }
  }
  return result;
}
