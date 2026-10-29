__int64 __fastcall sub_2CBF0(__int64 a1, __int64 a2)
{
  char *v2; // r14
  unsigned int dword; // eax
  unsigned int v4; // edx
  int v5; // ecx

  if ( *(_DWORD *)(a1 + 384) == -1 )
    return -1;
  if ( *(_QWORD *)(a1 + 352) == -1 )
    return -1;
  v2 = (char *)&unk_59860 - 16;
  while ( 2 )
  {
    dword = get_dword(&v2[a2 - ((_QWORD)&unk_59860 - 16)]);
    v4 = *(_DWORD *)v2;
    v5 = 0;
    while ( (_BYTE)dword == (_BYTE)v4 || (_BYTE)v4 == 0xFF )
    {
      dword >>= 8;
      ++v5;
      v4 >>= 8;
      if ( v5 == 4 )
        goto LABEL_12;
    }
    if ( v5 != 3 || (_BYTE)v4 != 36 || (_BYTE)dword != 52 )
      return -1;
LABEL_12:
    v2 += 4;
    if ( v2 != (char *)&unk_59860 )
      continue;
    return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
         & (*(_QWORD *)(a1 + 352)
          + *(_QWORD *)(a1 + 376)
          + (unsigned int)(4 * ((__int16)get_dword(a2 + 12) - *(_DWORD *)(a1 + 384)))
          - 32752LL);
  }
}

