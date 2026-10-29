int __fastcall sub_19120(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  const char *v7; // rsi
  _QWORD *v8; // rax

  v5 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(a4 + 8) )
  {
    v7 = *(const char **)a4;
    if ( !v6 )
    {
      LODWORD(v8) = strcmp(s, v7);
      if ( (_DWORD)v8 )
        return (int)v8;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v7 = s;
  if ( v6 )
  {
LABEL_7:
    LODWORD(v8) = strcmp(*(const char **)v5, v7);
    if ( (_DWORD)v8 )
      return (int)v8;
  }
LABEL_6:
  v8 = *(_QWORD **)(a1 + 88);
  *v8 = a2;
  return (int)v8;
}

