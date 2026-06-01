void __fastcall sub_4BD00(__int64 a1)
{
  __int64 *v2; // rbp
  __int64 v3; // rdi

  v2 = *(__int64 **)(a1 + 8);
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      v2[1] = 0;
      qfree(v3);
    }
    operator delete(v2, 0x18u);
  }
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 0;
}
