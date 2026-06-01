void __fastcall sub_1B290(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rsi
  _DWORD *v11; // rax
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-30h]

  v8 = a2;
  v9 = *(_QWORD *)(a1 + 96);
  if ( (unsigned int)a2 <= 0x1F && _bittest64(&v9, a2) )
  {
    *(_DWORD *)(a1 + 104) = a2;
    v13 = (_DWORD *)(a1 + 104);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 80);
    v11 = *(_DWORD **)(a1 + 72);
    v12 = &v11[4 * v10];
    if ( v11 == v12 )
      goto LABEL_11;
    while ( 1 )
    {
      v13 = v11;
      if ( v8 == *v11 )
        break;
      v11 += 4;
      if ( v12 == v11 )
        goto LABEL_11;
    }
    if ( !v11 )
      goto LABEL_11;
  }
  v8 = v13[1];
  if ( v8 == -1 || v8 == 3 && *((_QWORD *)v13 + 1) )
    return;
  v10 = *(_QWORD *)(a1 + 80);
LABEL_11:
  if ( v10 && (v14 = *(_QWORD *)(a1 + 72), *(_DWORD *)v14 == 3) && *(_DWORD *)(v14 + 4) == 3 )
  {
    if ( a3 >= *(_QWORD *)(v14 + 8) && a3 < 0 )
    {
      if ( v8 != 3 )
      {
        if ( v8 <= 0x1F )
          v9 |= 1LL << v8;
        *(_QWORD *)(a1 + 96) = v9;
      }
      v15 = *(_QWORD *)(a1 + 24);
      v16 = *(_QWORD *)(a1 + 16);
      v17 = v15 + 1;
      if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v15 + 1) )
      {
        v21 = a5;
        v20 = qvector_reserve(a1 + 16, v16, v17, 32);
        a5 = v21;
        *(_QWORD *)(a1 + 16) = v20;
        v16 = v20;
        v15 = *(_QWORD *)(a1 + 24);
        v17 = v15 + 1;
      }
      *(_QWORD *)(a1 + 24) = v17;
      v18 = 32 * v15 + v16;
      v19 = *(_QWORD *)(a5 + 16);
      *(_QWORD *)(v18 + 8) = a3;
      *(_QWORD *)v18 = v19;
      *(_QWORD *)(v18 + 16) = a4;
      *(_DWORD *)(v18 + 24) = v8;
    }
  }
  else
  {
    sub_1A5B0(v9);
    sub_1B400();
  }
}
