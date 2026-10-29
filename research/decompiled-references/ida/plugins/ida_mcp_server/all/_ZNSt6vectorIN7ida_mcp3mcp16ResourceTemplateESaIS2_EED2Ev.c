// Alternative name is '_ZNSt6vectorIN7ida_mcp3mcp16ResourceTemplateESaIS2_EED1Ev'
void __fastcall std::vector<ida_mcp::mcp::ResourceTemplate>::~vector(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 == *a1 )
    goto LABEL_15;
  do
  {
    if ( !*(_BYTE *)(v3 + 136) || (v5 = *(void **)(v3 + 104), v5 == (void *)(v3 + 120)) )
    {
      if ( !*(_BYTE *)(v3 + 96) )
        goto LABEL_4;
    }
    else
    {
      operator delete(v5, *(_QWORD *)(v3 + 120) + 1LL);
      if ( !*(_BYTE *)(v3 + 96) )
        goto LABEL_4;
    }
    v6 = *(void **)(v3 + 64);
    if ( v6 != (void *)(v3 + 80) )
      operator delete(v6, *(_QWORD *)(v3 + 80) + 1LL);
LABEL_4:
    v4 = *(void **)(v3 + 32);
    if ( v4 != (void *)(v3 + 48) )
      operator delete(v4, *(_QWORD *)(v3 + 48) + 1LL);
    if ( *(_QWORD *)v3 != v3 + 16 )
      operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
    v3 += 144;
  }
  while ( v2 != v3 );
  v3 = *a1;
LABEL_15:
  if ( v3 )
    operator delete((void *)v3, a1[2] - v3);
}

