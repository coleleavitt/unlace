__int64 __fastcall sub_3A1780(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 *v6; // r15
  _QWORD *v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v3 != 2 )
    return sub_3A1520(a1, (_DWORD *)a2, (_DWORD *)v3, *(_WORD *)(v3 + 88), a3);
  v5 = qalloc_or_throw();
  *(_OWORD *)(v5 + 8) = 0;
  v6 = (__int64 *)v5;
  *(_QWORD *)v5 = 0;
  v7 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL);
  if ( v7[1] )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v9 < v10 + 1 )
      {
        v17 = v12;
        v16 = qvector_reserve();
        v10 = v6[1];
        v12 = v17;
        *v6 = v16;
        v8 = v16;
      }
      v13 = v8 + 24 * v10;
      ++v11;
      *(_DWORD *)(v13 + 16) = 0xFFFF;
      *(_QWORD *)v13 = 0;
      *(_QWORD *)(v13 + 8) = 0;
      ++v6[1];
      v14 = *v7 + 24 * v12;
      *(_WORD *)(v13 + 16) = *(_WORD *)(v14 + 16);
      v15 = *(_WORD *)(v14 + 18);
      *(_WORD *)(v13 + 18) = v15;
      sub_3A1520(a1, (_DWORD *)v13, (_DWORD *)v14, v15, 0.0);
      v12 = v11;
      if ( (unsigned __int64)v11 >= v7[1] )
        break;
      v10 = v6[1];
      v9 = v6[2];
      v8 = *v6;
    }
  }
  cleanup_argloc();
  if ( v6 )
  {
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v6;
  }
  return 1;
}

