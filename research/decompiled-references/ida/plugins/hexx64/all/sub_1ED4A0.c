__int64 __fastcall sub_1ED4A0(__int64 a1, __int64 a2, double a3)
{
  int *v4; // rcx
  unsigned __int64 v5; // rdx
  int v6; // eax
  int v7; // esi
  __int64 v8; // rcx
  int *v9; // rdx

  if ( *(_BYTE *)a2 == 9 )
  {
    v4 = *(int **)(a2 + 8);
    v5 = v4[4];
    if ( *(_QWORD *)(*(_QWORD *)v4 + 440LL) < v5 )
      sub_1ECB80(a3);
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 432LL) + 104 * v5 + 24) & 0x100000;
    if ( !v6 )
    {
      v7 = *(_DWORD *)(a2 + 4);
      v8 = *((_QWORD *)v4 + 1);
      if ( v7 == -1 )
      {
        if ( v8 )
          v6 = v8 + 1;
      }
      else
      {
        v6 = v7 + v8;
      }
      v9 = (int *)(*(_QWORD *)(a1 + 48) + 4 * v5);
      if ( *v9 < v6 )
        *v9 = v6;
    }
  }
  return 0;
}

