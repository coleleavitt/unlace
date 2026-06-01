__int64 __fastcall sub_AA30(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r12d
  __int64 v6; // rax
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // rax
  char v10; // dl
  unsigned int v11; // ebp
  __int64 v12; // rax
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v16; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 32);
    while ( 1 )
    {
      v11 = *(_DWORD *)(v4 + 64);
      if ( v5 < v11 )
      {
LABEL_7:
        v9 = *(_QWORD *)(v4 + 16);
        v10 = 1;
        if ( !v9 )
          goto LABEL_13;
        goto LABEL_8;
      }
      if ( v11 < v5 )
        goto LABEL_11;
      v6 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(v4 + 40) )
        break;
      v7 = s1;
      if ( v6 )
        goto LABEL_5;
      v9 = *(_QWORD *)(v4 + 24);
      v10 = 0;
LABEL_12:
      if ( !v9 )
      {
LABEL_13:
        if ( !v10 )
          goto LABEL_14;
        goto LABEL_24;
      }
LABEL_8:
      v4 = v9;
    }
    v7 = *(const char **)(v4 + 32);
    v8 = s1;
    if ( v6 )
LABEL_5:
      v8 = *(const char **)a2;
    if ( strcmp(v8, v7) < 0 )
      goto LABEL_7;
LABEL_11:
    v9 = *(_QWORD *)(v4 + 24);
    v10 = 0;
    goto LABEL_12;
  }
  v4 = a1 + 8;
LABEL_24:
  if ( v4 != *(_QWORD *)(a1 + 24) )
  {
    v16 = std::_Rb_tree_decrement(v4);
    v5 = *(_DWORD *)(a2 + 32);
    v11 = *(_DWORD *)(v16 + 64);
    v4 = v16;
LABEL_14:
    if ( v11 >= v5 )
    {
      if ( v5 < v11 )
        return v4;
      v12 = *(_QWORD *)(v4 + 40);
      if ( *(_QWORD *)(a2 + 8) )
      {
        v13 = *(const char **)a2;
        v14 = s1;
        if ( !v12 )
          goto LABEL_19;
      }
      else
      {
        v13 = s1;
        if ( !v12 )
          return v4;
      }
      v14 = *(const char **)(v4 + 32);
LABEL_19:
      if ( strcmp(v14, v13) >= 0 )
        return v4;
    }
  }
  return 0;
}
