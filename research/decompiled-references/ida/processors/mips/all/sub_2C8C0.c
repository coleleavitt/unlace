__int64 __fastcall sub_2C8C0(__int64 a1, __int64 a2)
{
  char *v2; // r14
  unsigned int dword; // eax
  unsigned int v4; // edx
  int v5; // ecx
  int word; // r12d
  unsigned __int16 v8; // ax
  __int64 v9; // rax

  v2 = (char *)&unk_5988C - 12;
  do
  {
    dword = get_dword(&v2[a2 - ((_QWORD)&unk_5988C - 12)]);
    v4 = *(_DWORD *)v2;
    v5 = 0;
    while ( (_BYTE)dword == (_BYTE)v4 || (_BYTE)v4 == 0xFF )
    {
      dword >>= 8;
      ++v5;
      v4 >>= 8;
      if ( v5 == 4 )
        goto LABEL_10;
    }
    if ( v5 != 3 || (_BYTE)v4 != 36 || (_BYTE)dword != 52 )
      return 0;
LABEL_10:
    v2 += 4;
  }
  while ( v2 != (char *)&unk_5988C );
  word = get_word(a2);
  v8 = get_word(a2 + 8);
  v9 = sub_2A800(a1, v8 | (unsigned int)(word << 16));
  return sub_3B330(a1, v9, 1);
}

