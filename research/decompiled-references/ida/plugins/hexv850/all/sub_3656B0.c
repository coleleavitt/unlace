__int64 __fastcall sub_3656B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v5; // rbx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  int v11; // ebp
  _DWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v5 = *(__int64 **)(a1 + 48);
  v6 = (_DWORD *)*v5;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 16LL) == *(_DWORD *)*v5 && !a4 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)v7 & 0xFFFFFFF7) == 4 && *(_BYTE *)(v7 + 64) == 9 )
    {
      v8 = v5[1];
      v9 = *(_QWORD *)(v7 + 72);
      v10 = &v6[v8];
      v11 = *(_DWORD *)(v9 + 16);
      if ( v6 == v10 )
        goto LABEL_13;
      v12 = (_DWORD *)*v5;
      while ( v11 != *v12 )
      {
        if ( v10 == ++v12 )
          goto LABEL_13;
      }
      if ( v12 == v10 )
      {
LABEL_13:
        if ( v5[2] < (unsigned __int64)(v8 + 1) )
        {
          v13 = qvector_reserve();
          v14 = v5[1];
          *v5 = v13;
          v10 = (_DWORD *)(v13 + 4 * v14);
        }
        *v10 = v11;
        ++v5[1];
      }
    }
  }
  return 0;
}

