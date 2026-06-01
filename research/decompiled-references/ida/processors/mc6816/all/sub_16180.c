__int64 __fastcall sub_16180(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int16 v3; // ax
  int *v4; // rbp
  unsigned __int64 v5; // r12
  int *v6; // r13
  char v7; // al
  __int16 v8; // dx
  __int64 v9; // rax
  void (__fastcall *v10)(_QWORD *, const char *, __int64); // rcx

  v3 = *((_WORD *)a1 + 124);
  if ( v3 == 232 )
  {
    v4 = (int *)&unk_1A790;
    goto LABEL_3;
  }
  a3 = 0;
  v4 = (int *)&unk_1A770;
  if ( v3 == 235 )
  {
LABEL_3:
    v5 = a1[34];
    v6 = v4 + 7;
    v7 = 1;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
        goto LABEL_16;
      if ( v7 )
        goto LABEL_6;
      do
      {
        while ( 1 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, unsigned __int64))(*a1 + 32LL))(a1, 44, a3);
          v8 = *(_WORD *)(a1[79] + 4LL);
          if ( v8 == 1 )
          {
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 32);
LABEL_6:
            v8 = *(_WORD *)(a1[79] + 4LL);
          }
          v9 = *v4;
          v10 = *(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL);
          if ( v8 == 2 && (_DWORD)v9 == 6 )
            v10(a1, "CC", 33);
          else
            v10(a1, *(const char **)(*(_QWORD *)(a1[78] + 56LL) + 8 * v9), 33);
          a3 = v5 >> 1;
          if ( v4 + 1 == v6 )
            goto LABEL_17;
          if ( (v5 & 2) == 0 )
            break;
          v5 >>= 1;
          ++v4;
        }
        v4 += 2;
        v5 >>= 2;
        if ( v4 == v6 )
          goto LABEL_17;
      }
      while ( (v5 & 1) != 0 );
      v7 = 0;
LABEL_16:
      ++v4;
      v5 >>= 1;
      if ( v4 == v6 )
      {
LABEL_17:
        LODWORD(a3) = 1;
        return (unsigned int)a3;
      }
    }
  }
  return (unsigned int)a3;
}

