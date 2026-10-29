__int64 __fastcall sub_E0CE0(__int64 a1, __int64 a2)
{
  int *v2; // rbp
  __int64 *v4; // r12
  __int64 v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  int *v11; // rsi
  __int64 v12; // rcx
  int v13; // edi

  v2 = *(int **)(a2 + 40);
  if ( !*v2 )
    return 0;
  v4 = *(__int64 **)(a1 + 40);
  v5 = v4[2];
  v6 = (_QWORD *)v4[3];
  v7 = *v4;
  v8 = v5 + *v2;
  v4[2] = v8;
  v9 = sub_DFAD0(v7, v6, 4 * v8);
  if ( v9 )
  {
    v4[3] = (__int64)v9;
    if ( *v2 > 0 )
    {
      v10 = 4 * v5;
      v11 = v2 + 18;
      v12 = 0;
      while ( 1 )
      {
        v13 = *v11;
        ++v12;
        v11 += 26;
        *(_DWORD *)((char *)v9 + v10) = v13;
        v10 += 4;
        if ( *v2 <= v12 )
          break;
        v9 = (__int64 *)v4[3];
      }
    }
    return 0;
  }
  v4[2] = 0;
  return 2;
}
