__int64 __fastcall sub_4BFD0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r12d
  __int64 v3; // rbp
  __int16 v4; // ax
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // al
  bool v10; // r15
  unsigned __int8 v11; // al
  bool v12; // dl
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax

  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    if ( under_debugger )
      BUG();
    interr();
    goto LABEL_36;
  }
  v4 = *(_WORD *)(a1 + 40);
  v1 = a1;
  if ( v4 == 85 )
  {
    sub_4BDC0(a1);
    return 0;
  }
  if ( v4 != 7 )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 104);
  if ( (v6 & 0xFFFFFFFFFFFFFFF7LL) != 7 && (v6 & 0xFFFFFFFFFFFFFFDFLL) != 0x1F && v6 != 127 )
    return 0;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v2 )
    return 0;
  v8 = *(_BYTE *)(v3 + 5);
  v9 = *(_BYTE *)(a1 + 61);
  v10 = v8 <= 0xF9u;
  if ( v9 <= 0xF9u )
  {
    if ( v8 <= 0xF9u && v9 < v8 && (!*(_BYTE *)(a1 + 8) || v9 != 2) )
    {
LABEL_14:
      LOBYTE(v7) = v9 < v8;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v7);
      v12 = v10 || v11 < v8;
      if ( v11 <= 0xF9u )
        v12 = v10 && v11 < v8;
      if ( !v12 )
        goto LABEL_17;
      return 0;
    }
  }
  else if ( v8 <= 0xF9u || v9 < v8 )
  {
    goto LABEL_14;
  }
LABEL_17:
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v6 + 1;
  v13 = *(_QWORD *)(a1 + 864);
  if ( *(_BYTE *)(v13 + 81) )
  {
    if ( *(_QWORD *)(v13 + 104) != get_jtable_target() )
    {
      v14 = *(_QWORD *)(a1 + 376);
      *(_QWORD *)(a1 + 944) = -1;
      *(_QWORD *)(v14 + 16) = 1;
      --*(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(v13 + 104);
      v15 = *(_QWORD *)(a1 + 864);
      if ( *(_BYTE *)(v15 + 41) )
      {
        if ( *(_QWORD *)(v15 + 48) == 1 )
        {
          v16 = *(_QWORD *)(a1 + 840);
          v17 = *(_QWORD *)(a1 + 848);
          v3 = *(_QWORD *)(v13 + 96);
          v18 = (_QWORD *)(v16 + 8 * v17);
          if ( (_QWORD *)v16 == v18 )
            goto LABEL_26;
          v19 = *(_QWORD **)(a1 + 840);
          while ( v3 != *v19 )
          {
            if ( v18 == ++v19 )
              goto LABEL_26;
          }
          if ( v19 == v18 )
          {
LABEL_26:
            if ( *(_QWORD *)(a1 + 856) >= (unsigned __int64)(v17 + 1) )
            {
LABEL_27:
              *(_QWORD *)(v16 + 8LL * (*(_QWORD *)(v1 + 848))++) = v3;
              return v2;
            }
LABEL_36:
            v20 = qvector_reserve();
            *(_QWORD *)(v1 + 840) = v20;
            v16 = v20;
            goto LABEL_27;
          }
        }
      }
    }
  }
  return v2;
}

