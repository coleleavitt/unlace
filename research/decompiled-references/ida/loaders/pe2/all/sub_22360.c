_BOOL8 __fastcall sub_22360(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  __int64 v5; // rcx
  unsigned int v7; // esi
  __int64 v8; // r11
  _DWORD *v9; // rdx
  _DWORD *v10; // r8
  __int64 v11; // rax

  v5 = *(unsigned int *)(a1 + 32);
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 - v5 < (unsigned __int64)a3 )
    v7 = v8 - v5;
  if ( v7 )
  {
    v9 = a2 + 1;
    ++*(_DWORD *)(a1 + 32);
    *a2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v5);
    if ( v7 != 1 )
    {
      v10 = &a2[v7];
      do
      {
        v11 = *(unsigned int *)(a1 + 32);
        ++v9;
        *(_DWORD *)(a1 + 32) = v11 + 1;
        *(v9 - 1) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v11);
      }
      while ( v9 != v10 );
    }
  }
  *a4 = v7;
  return v7 == 0;
}

