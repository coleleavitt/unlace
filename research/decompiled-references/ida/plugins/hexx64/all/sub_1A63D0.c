__int64 __fastcall sub_1A63D0(__int64 a1, __int64 *a2, double a3)
{
  bool (__fastcall *v4)(__int64); // rax
  __int64 v5; // r12
  int v6; // r14d
  int v7; // r13d
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx

  v4 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v4 == sub_194B60 )
  {
    if ( *(_DWORD *)(a1 + 128) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
      goto LABEL_4;
    }
LABEL_25:
    if ( !under_debugger )
      sub_383060(0xCB57u, a3);
    BUG();
  }
  if ( !((unsigned __int8 (*)(void))v4)() )
    goto LABEL_25;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  if ( *(_QWORD *)(a1 + 128) )
  {
LABEL_4:
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = sub_1A1640((_QWORD *)v5, *(_QWORD *)(a1 + 120) + (v8 << 7), -1, a3);
      if ( v9 != -1 )
      {
        v10 = a2[1];
        v11 = (_DWORD *)(*a2 + 4 * v10);
        if ( (_DWORD *)*a2 == v11 )
          goto LABEL_15;
        v12 = (_DWORD *)*a2;
        while ( v9 != *v12 )
        {
          if ( v11 == ++v12 )
            goto LABEL_15;
        }
        if ( v12 == v11 )
        {
LABEL_15:
          v14 = v10 + 1;
          if ( a2[2] < v14 )
          {
            v15 = qvector_reserve((__int64)a2, *a2, v14, 4);
            v16 = a2[1];
            *a2 = v15;
            v11 = (_DWORD *)(v15 + 4 * v16);
          }
          *v11 = v9;
          ++a2[1];
        }
        ++v7;
      }
      v8 = ++v6;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 128) );
    if ( *(_BYTE *)(v5 + 320) )
      return sub_19C460(a1, *(_DWORD *)(a1 + 224), a3);
    if ( v7 )
    {
      if ( !(unsigned __int8)sub_1A56C0(*(_QWORD *)(a1 + 16), 1, 0) )
        sub_1A5590(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 184), *(_DWORD *)(a1 + 208), a3);
    }
    return 0xFFFFFFFFLL;
  }
  if ( *(_BYTE *)(v5 + 320) )
    return sub_19C460(a1, *(_DWORD *)(a1 + 224), a3);
  return 0xFFFFFFFFLL;
}

