// Alternative name is '_ZNSt6vectorIN7ida_mcp3mcp8ResourceESaIS2_EED1Ev'
void __fastcall std::vector<ida_mcp::mcp::Resource>::~vector(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 == *a1 )
    goto LABEL_20;
  do
  {
    if ( !*(_BYTE *)(v3 + 232) )
      goto LABEL_26;
    *(_BYTE *)(v3 + 232) = 0;
    if ( *(_BYTE *)(v3 + 224) )
    {
      v8 = *(void **)(v3 + 192);
      if ( v8 != (void *)(v3 + 208) )
        operator delete(v8, *(_QWORD *)(v3 + 208) + 1LL);
    }
    if ( *(_BYTE *)(v3 + 168) && (v5 = *(void **)(v3 + 144)) != nullptr )
    {
      operator delete(v5, *(_QWORD *)(v3 + 160) - (_QWORD)v5);
      if ( !*(_BYTE *)(v3 + 136) )
        goto LABEL_4;
    }
    else
    {
LABEL_26:
      if ( !*(_BYTE *)(v3 + 136) )
        goto LABEL_4;
    }
    v6 = *(void **)(v3 + 104);
    if ( v6 != (void *)(v3 + 120) )
    {
      operator delete(v6, *(_QWORD *)(v3 + 120) + 1LL);
      if ( !*(_BYTE *)(v3 + 96) )
        goto LABEL_5;
      goto LABEL_17;
    }
LABEL_4:
    if ( !*(_BYTE *)(v3 + 96) )
      goto LABEL_5;
LABEL_17:
    v7 = *(void **)(v3 + 64);
    if ( v7 != (void *)(v3 + 80) )
      operator delete(v7, *(_QWORD *)(v3 + 80) + 1LL);
LABEL_5:
    v4 = *(void **)(v3 + 32);
    if ( v4 != (void *)(v3 + 48) )
      operator delete(v4, *(_QWORD *)(v3 + 48) + 1LL);
    if ( *(_QWORD *)v3 != v3 + 16 )
      operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
    v3 += 240;
  }
  while ( v2 != v3 );
  v3 = *a1;
LABEL_20:
  if ( v3 )
    operator delete((void *)v3, a1[2] - v3);
}

