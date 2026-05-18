__int64 __fastcall sub_109F90(__int64 a1, int a2, __int64 *a3, int a4, int a5, int a6, double a7)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // edi
  char *v18; // rax

  result = sub_105410(a1, a3, a1, a4, a5, a6, a7);
  if ( result )
  {
    v14 = result;
    if ( a2 == 2 )
    {
      v18 = (char *)sub_D9DB0(a3[1], 1u, a7, v10, v11, v12, v13);
      result = sub_109A50(v14, v18, nullptr, a1);
    }
    else
    {
      result = *(_QWORD *)(result + 8);
    }
    if ( result )
    {
      v15 = 0;
      if ( *(_BYTE *)result == 6 && (v12 = *(unsigned int *)(result + 4), (_DWORD)v12) )
      {
        LODWORD(v11) = 1;
        do
        {
          v17 = 1;
          v10 = result + 16LL * (unsigned int)v11;
          if ( *(_BYTE *)v10 > 5u )
            v17 = *(_DWORD *)(v10 + 4) + 1;
          v11 = (unsigned int)(v17 + v11);
          ++v15;
        }
        while ( (unsigned int)v11 <= (unsigned int)v12 );
        v16 = *(_QWORD *)a1;
        if ( (*(_WORD *)(*(_QWORD *)a1 + 20LL) & 0x9000) != 0 )
          return sub_C9430(v16, v15, v10, v11, v12, v13);
      }
      else
      {
        v16 = *(_QWORD *)a1;
        if ( (*(_WORD *)(*(_QWORD *)a1 + 20LL) & 0x9000) != 0 )
          return sub_C9430(v16, v15, v10, v11, v12, v13);
      }
      result = 4;
      *(_QWORD *)v16 = v15;
      *(_WORD *)(v16 + 20) = 4;
    }
  }
  return result;
}
