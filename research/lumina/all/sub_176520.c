void __fastcall sub_176520(__int64 a1)
{
  void *v2; // rdi

  if ( !a1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(2656);
    BUG();
  }
  if ( *(_BYTE *)a1 == 5 )
  {
    sub_176300(*(_DWORD **)(a1 + 8), a1);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else if ( *(_BYTE *)a1 == 7 && (v2 = *(void **)(a1 + 8)) != nullptr )
  {
    *(_QWORD *)(a1 + 16) = 0;
    j__free(v2);
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
  }
}
