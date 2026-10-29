void __fastcall sub_199260(__int64 a1, unsigned int a2, double a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  _DWORD *v7; // rdx
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // r13
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD); // r14
  unsigned int v12; // eax
  int v13; // r13d
  __int64 v14; // rdx
  _DWORD *v15; // r12
  __int64 v16; // rdx
  _DWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax

  *(_BYTE *)(a1 + 288) &= ~2u;
  sub_D1010(a1 + 8, a2);
  v4 = *(_QWORD *)(a1 + 280);
  if ( *(_BYTE *)(v4 + 320) )
  {
    v5 = sub_36F3F0(v4);
    if ( v5 != -1 )
    {
      v6 = *(_DWORD **)(a1 + 96);
      v7 = &v6[*(_QWORD *)(a1 + 104)];
      if ( v6 == v7 )
        goto LABEL_9;
      while ( v5 != *v6 )
      {
        if ( v7 == ++v6 )
          goto LABEL_9;
      }
      if ( v7 == v6 )
      {
LABEL_9:
        v8 = *(_DWORD **)(a1 + 120);
        v9 = &v8[*(_QWORD *)(a1 + 128)];
        if ( v8 == v9 )
          goto LABEL_14;
        while ( v5 != *v8 )
        {
          if ( v9 == ++v8 )
            goto LABEL_14;
        }
        if ( v9 == v8 )
        {
LABEL_14:
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL);
          v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 176LL);
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, v5);
          v13 = v11(v10, v5, v12);
          if ( v13 == -1 )
          {
            if ( !under_debugger )
              sub_383060(0xCBA0u, a3);
            BUG();
          }
          sub_D1010(a1 + 144, a2);
          v14 = *(_QWORD *)(a1 + 160);
          v15 = *(_DWORD **)(a1 + 152);
          if ( *(_QWORD *)(a1 + 168) < (unsigned __int64)(v14 + 1) )
          {
            v18 = qvector_reserve(a1 + 152, *(_QWORD *)(a1 + 152), v14 + 1, 4);
            v14 = *(_QWORD *)(a1 + 160);
            *(_QWORD *)(a1 + 152) = v18;
            v15 = (_DWORD *)v18;
          }
          memmove(v15 + 1, v15, 4 * v14);
          *v15 = v13;
          v16 = *(_QWORD *)(a1 + 240);
          ++*(_QWORD *)(a1 + 160);
          v17 = *(_DWORD **)(a1 + 232);
          if ( *(_QWORD *)(a1 + 248) < (unsigned __int64)(v16 + 1) )
          {
            v19 = qvector_reserve(a1 + 232, *(_QWORD *)(a1 + 232), v16 + 1, 4);
            v16 = *(_QWORD *)(a1 + 240);
            *(_QWORD *)(a1 + 232) = v19;
            v17 = (_DWORD *)v19;
          }
          memmove(v17 + 1, v17, 4 * v16);
          *v17 = v5;
          ++*(_QWORD *)(a1 + 240);
          *(_BYTE *)(a1 + 288) |= 2u;
        }
      }
    }
  }
}

