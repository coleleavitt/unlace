void __fastcall sub_345A0(__int64 a1, int a2)
{
  __int64 *v3; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rsi

  if ( *(_DWORD *)(a1 + 136) != a2 )
  {
    *(_DWORD *)(a1 + 136) = a2;
    if ( (debug & 0x400000) != 0 )
    {
      v3 = sub_34340(a1);
      v7 = src;
      if ( v3[1] )
        v7 = (const char *)*v3;
      sub_88B80((unsigned int)"%s byte_size -> %u\n", (_DWORD)v7, a2, v4, v5, v6);
    }
  }
}

