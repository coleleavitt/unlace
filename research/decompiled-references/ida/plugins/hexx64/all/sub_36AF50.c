__int64 __fastcall sub_36AF50(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  char tinfo_property; // r12
  char v8; // al
  int v9; // r12d
  __int64 v10; // rsi
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx

  if ( *(_DWORD *)(a2 + 8) != 80 )
    return 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( !(unsigned __int8)get_tinfo_property() )
  {
    if ( !under_debugger )
      sub_383060(0xC426u, a3);
    BUG();
  }
  if ( (unsigned __int8)sub_29CC80((_QWORD *)(v4 + 48)) )
  {
    v6 = *(_QWORD *)(v4 + 48);
    if ( (_BYTE)v6 )
    {
      if ( (v6 & 0xE) != 0 || (v6 & 0x30) == 0 )
      {
        get_tinfo_property();
        tinfo_property = get_tinfo_property();
        clear_tinfo_t();
        if ( (tinfo_property & 0x3F) != 0x30 )
        {
          ++*(_DWORD *)(a1 + 88);
          return 0;
        }
      }
    }
  }
  if ( (unsigned __int8)sub_29D090(v4, 2, a3) )
    return 0;
  if ( *(_DWORD *)(v4 + 8) == 65 )
  {
    v8 = get_tinfo_property();
    if ( (v8 & 0x3E) != 0 && (v8 & 0xFu) <= 8 )
    {
      v9 = *(_DWORD *)(v4 + 32);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 432LL) + 104LL * v9 + 88) == *(_DWORD *)(a1 + 92) )
      {
        v10 = *(_QWORD *)(a1 + 64);
        v11 = *(_QWORD *)(a1 + 72);
        v12 = (_DWORD *)(v10 + 4 * v11);
        if ( (_DWORD *)v10 == v12 )
          goto LABEL_22;
        v13 = *(_DWORD **)(a1 + 64);
        while ( v9 != *v13 )
        {
          if ( v12 == ++v13 )
            goto LABEL_22;
        }
        if ( v13 == v12 )
        {
LABEL_22:
          if ( *(_QWORD *)(a1 + 80) < (unsigned __int64)(v11 + 1) )
          {
            v14 = qvector_reserve(a1 + 64, v10, v11 + 1, 4);
            v15 = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 64) = v14;
            v12 = (_DWORD *)(v14 + 4 * v15);
          }
          *v12 = v9;
          ++*(_QWORD *)(a1 + 72);
        }
        return 0;
      }
    }
  }
  return 1;
}

