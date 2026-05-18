__int64 __fastcall sub_CC380(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // rdi

  v2 = sub_CC090(a1, 4);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)v3 )
    {
      if ( !*(_BYTE *)(a1 + 17) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1);
      if ( *(_BYTE *)(a1 + 22) != 5 )
        *(_BYTE *)(a1 + 22) = 1;
    }
    *(_BYTE *)(a1 + 23) = *(_BYTE *)(a1 + 16);
  }
  return v2;
}
