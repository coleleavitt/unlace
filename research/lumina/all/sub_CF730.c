void __fastcall sub_CF730(__int64 a1)
{
  int v1; // edx
  char v2; // r8
  __int64 v3; // rax
  int v4; // esi
  char v5; // cl
  __int64 v6; // rax
  __int64 v7; // rax

  if ( a1 )
  {
    if ( *(int *)a1 > 1 )
    {
      v1 = *(_DWORD *)a1 - 1;
      v2 = 0;
      v3 = v1;
      do
      {
        v4 = v3 - 1;
        v5 = *(_BYTE *)(a1 + 104LL * ((int)v3 - 1) + 68);
        *(_BYTE *)(a1 + 104 * v3 + 68) = v5;
        v3 = (int)v3 - 1;
        v2 |= v5;
      }
      while ( v4 );
      *(_BYTE *)(a1 + 68) = 0;
      if ( (v2 & 0x10) != 0 )
      {
        while ( 1 )
        {
          v6 = v1--;
          if ( (*(_BYTE *)(a1 + 104 * v6 + 68) & 0x10) != 0 )
            break;
          if ( !v1 )
          {
            *(_BYTE *)(a1 - 36) |= 0x40u;
            return;
          }
        }
        do
        {
          v7 = v1--;
          *(_BYTE *)(a1 + 104 * v7 + 68) |= 0x40u;
        }
        while ( v1 != -1 );
      }
    }
  }
}
