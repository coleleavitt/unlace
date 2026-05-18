__int64 __fastcall sub_D8E30(__int64 a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  const char *v4; // rdi

  v2 = 72;
  v3 = *(_DWORD *)(a1 + 4);
  if ( a2 )
  {
    if ( *(_BYTE *)a1 != 0xB2 && (v3 & 0x1000000) == 0 )
    {
      v2 = 44;
      if ( !*(_QWORD *)(a1 + 16) )
        v2 = *(_QWORD *)(a1 + 32) == 0 ? 16 : 44;
    }
  }
  if ( (v3 & 0x400) == 0 )
  {
    v4 = *(const char **)(a1 + 8);
    if ( v4 )
      v2 += (strlen(v4) & 0x3FFFFFFF) + 1;
  }
  return (v2 + 7) & 0xFFFFFFF8;
}
