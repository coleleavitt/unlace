__int64 __fastcall sub_1310(__int64 a1)
{
  unsigned int *v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rdi
  unsigned int *v5; // rsi
  unsigned int *v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v10; // eax

  v1 = (unsigned int *)a1;
  v2 = *(_QWORD *)(a1 + 68) ^ 0xE08FC00CE04EC00FLL;
  v3 = *(_QWORD *)(a1 + 76) ^ 0xE24CC010E99C000FLL;
  v4 = (_QWORD *)(a1 + 68);
  if ( v3 | v2
    || v4[3] ^ 0x8CC000159CC034LL | v4[2] ^ 0xE3120C01E59C2030LL
    || v4[5] ^ 0xD1A0F00EE3530000LL | v4[4] ^ 0xE3A00000E08CC001LL
    || *(_QWORD *)((char *)v4 + 52) ^ 0xEAFFFFFBE2533004LL | *(_QWORD *)((char *)v4 + 44) ^ 0xE48C0004D1A0F00ELL )
  {
    v5 = v1 + 32;
    v6 = v1;
    do
    {
      v7 = *v6++;
      *(v6 - 1) = _byteswap_ulong(v7);
    }
    while ( v6 != v5 );
    if ( !(v4[1] ^ 0xE24CC010E99C000FLL | *v4 ^ 0xE08FC00CE04EC00FLL)
      && !(v4[3] ^ 0x8CC000159CC034LL | v4[2] ^ 0xE3120C01E59C2030LL)
      && !(v4[5] ^ 0xD1A0F00EE3530000LL | v4[4] ^ 0xE3A00000E08CC001LL)
      && !(*(_QWORD *)((char *)v4 + 52) ^ 0xEAFFFFFBE2533004LL | *(_QWORD *)((char *)v4 + 44) ^ 0xE48C0004D1A0F00ELL)
      || !(v4[1] ^ 0xE24CC010E99C0017LL | *v4 ^ 0xE08FC00CE04EC00FLL)
      && !(v4[3] ^ 0xE3A01000E3A00000LL | v4[2] ^ 0xE08CC001E08CC000LL)
      && !(v4[5] ^ 0xD1A0F00EE3540000LL | v4[4] ^ 0xE3A03000E3A02000LL)
      && !(*(_QWORD *)((char *)v4 + 52) ^ 0xEAFFFFFBE2544010LL | *(_QWORD *)((char *)v4 + 44) ^ 0xE8AC000FD1A0F00ELL) )
    {
      v10 = 1;
      return (unsigned int)(v10 + 1);
    }
    do
    {
      v8 = *v1++;
      *(v1 - 1) = _byteswap_ulong(v8);
    }
    while ( v5 != v1 );
    if ( v4[1] ^ 0xE24CC010E99C0017LL | *v4 ^ 0xE08FC00CE04EC00FLL
      || v4[3] ^ 0xE3A01000E3A00000LL | v4[2] ^ 0xE08CC001E08CC000LL
      || v4[5] ^ 0xD1A0F00EE3540000LL | v4[4] ^ 0xE3A03000E3A02000LL
      || *(_QWORD *)((char *)v4 + 52) ^ 0xEAFFFFFBE2544010LL | *(_QWORD *)((char *)v4 + 44) ^ 0xE8AC000FD1A0F00ELL )
    {
      return 0;
    }
  }
  v10 = 0;
  return (unsigned int)(v10 + 1);
}
