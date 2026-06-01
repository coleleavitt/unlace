_BOOL8 __fastcall sub_9C9E0(__int128 a1, double a2)
{
  __int64 v2; // r12
  int v3; // eax
  int v5; // ebp
  __int64 v6; // rdx
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  int v9; // r8d
  int v10; // ecx
  bool v11; // al

  v2 = a1;
  *(_QWORD *)&a1 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v3 = *(_DWORD *)(a1 + 88);
  if ( *(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL) >= v3
    && (*(_DWORD *)(*((_QWORD *)&a1 + 1) + 68LL) != v3 || !sub_11CBB0(a1, 0xEu)) )
  {
    return 0;
  }
  v5 = 2 * (**((_DWORD **)&a1 + 1) != 13) - 1;
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 4 )
  {
    v8 = *(_DWORD **)(*((_QWORD *)&a1 + 1) + 40LL);
    if ( (unsigned int)(*v8 - 12) <= 1 )
    {
      *(_QWORD *)&a1 = v2;
      if ( sub_9C2E0(
             a1,
             (__int64)(v8 + 8),
             (__int64)(v8 + 12),
             2 * (unsigned int)(*v8 == 12) - 1,
             *((_QWORD *)&a1 + 1) + 48LL,
             a2,
             2 * (unsigned int)(**((_DWORD **)&a1 + 1) != 13) - 1) )
      {
        return 1;
      }
    }
  }
  v6 = *((_QWORD *)&a1 + 1) + 32LL;
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 48LL) == 4 )
  {
    v7 = *(_DWORD **)(*((_QWORD *)&a1 + 1) + 56LL);
    v6 = *((_QWORD *)&a1 + 1) + 32LL;
    if ( (unsigned int)(*v7 - 12) <= 1 )
    {
      v9 = 1;
      v10 = 2 * (*v7 == 12) - 1;
      if ( v5 == -1 )
      {
        v10 = 1 - 2 * (*v7 == 12);
        v9 = -1;
      }
      *(_QWORD *)&a1 = v2;
      v11 = sub_9C2E0(a1, *((_QWORD *)&a1 + 1) + 32LL, (__int64)(v7 + 8), v9, (__int64)(v7 + 12), a2, v10);
      v6 = *((_QWORD *)&a1 + 1) + 32LL;
      if ( v11 )
        return 1;
    }
  }
  *(_QWORD *)&a1 = v2;
  return sub_9C2E0(a1, v6, *((_QWORD *)&a1 + 1) + 48LL, v5, 0, a2, 0);
}

