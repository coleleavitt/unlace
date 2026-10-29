// Alternative name is '_ZNSt6vectorIN7ida_mcp3mcp6PromptESaIS2_EED2Ev'
void __fastcall std::vector<ida_mcp::mcp::Prompt>::~vector(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 == *a1 )
    goto LABEL_22;
  do
  {
    if ( !*(_BYTE *)(v3 + 96) )
      goto LABEL_26;
    v4 = *(_QWORD *)(v3 + 80);
    v5 = *(_QWORD *)(v3 + 72);
    *(_BYTE *)(v3 + 96) = 0;
    if ( v4 != v5 )
    {
      do
      {
        if ( *(_BYTE *)(v5 + 64) )
        {
          v6 = *(void **)(v5 + 32);
          if ( v6 != (void *)(v5 + 48) )
            operator delete(v6, *(_QWORD *)(v5 + 48) + 1LL);
        }
        if ( *(_QWORD *)v5 != v5 + 16 )
          operator delete(*(void **)v5, *(_QWORD *)(v5 + 16) + 1LL);
        v5 += 80;
      }
      while ( v4 != v5 );
      v5 = *(_QWORD *)(v3 + 72);
    }
    if ( v5 )
    {
      operator delete((void *)v5, *(_QWORD *)(v3 + 88) - v5);
      if ( !*(_BYTE *)(v3 + 64) )
        goto LABEL_4;
    }
    else
    {
LABEL_26:
      if ( !*(_BYTE *)(v3 + 64) )
        goto LABEL_4;
    }
    v7 = *(void **)(v3 + 32);
    if ( v7 != (void *)(v3 + 48) )
      operator delete(v7, *(_QWORD *)(v3 + 48) + 1LL);
LABEL_4:
    if ( *(_QWORD *)v3 != v3 + 16 )
      operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
    v3 += 104;
  }
  while ( v2 != v3 );
  v3 = *a1;
LABEL_22:
  if ( v3 )
    operator delete((void *)v3, a1[2] - v3);
}

