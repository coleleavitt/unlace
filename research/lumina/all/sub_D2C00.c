__int64 __fastcall sub_D2C00(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v3; // r14
  __int64 result; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  int v8; // r14d
  _DWORD *v9; // rax
  _DWORD *v10; // rax

  v2 = *(_DWORD *)(a1 + 128);
  v3 = sub_D2640(*(_QWORD *)(a1 + 120), 56LL * a2);
  result = 7;
  if ( v3 )
  {
    v5 = (__int64 *)(v3 + 56LL * v2);
    memset(v5, 0, 56LL * (a2 - v2));
    *(_QWORD *)(a1 + 120) = v3;
    if ( v2 >= a2 )
    {
      return 0;
    }
    else
    {
      v6 = v3 + 56 * (v2 + (unsigned __int64)(unsigned int)(a2 - 1 - v2)) + 56;
      while ( 1 )
      {
        *((_DWORD *)v5 + 6) = *(_DWORD *)(a1 + 32);
        if ( !**(_QWORD **)(a1 + 80) || (v7 = *(_QWORD *)(a1 + 96), v7 <= 0) )
          v7 = *(unsigned int *)(a1 + 184);
        *v5 = v7;
        *((_DWORD *)v5 + 7) = *(_DWORD *)(a1 + 60);
        v8 = *(_DWORD *)(a1 + 32);
        v9 = sub_D2260(0x200u, 0);
        if ( !v9 )
          break;
        *v9 = v8;
        v5[2] = (__int64)v9;
        *((_DWORD *)v5 + 8) = 1;
        v10 = *(_DWORD **)(a1 + 296);
        if ( v10 )
        {
          *((_DWORD *)v5 + 9) = v10[22];
          *((_DWORD *)v5 + 10) = v10[24];
          *((_DWORD *)v5 + 11) = v10[25];
          *((_DWORD *)v5 + 12) = v10[34];
        }
        v5 += 7;
        *(_DWORD *)(a1 + 128) = ++v2;
        if ( v5 == (__int64 *)v6 )
          return 0;
      }
      v5[2] = 0;
      *((_DWORD *)v5 + 8) = 1;
      return 7;
    }
  }
  return result;
}
