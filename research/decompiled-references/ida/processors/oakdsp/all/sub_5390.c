__int64 __fastcall sub_5390(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 v7; // r13
  int i; // r15d
  _QWORD *v13; // rdi
  char *v14; // r9
  __int64 result; // rax
  __int64 v16; // rax

  v6 = a5;
  v7 = a3 + 32LL * a5;
  if ( a5 <= a6 )
  {
    for ( i = a5; ; v6 = i )
    {
      v16 = a3 + 32 * v6;
      v14 = *(char **)(v16 + 16);
      if ( !v14 )
        break;
      v13 = (_QWORD *)(a1 + *(_QWORD *)(v7 + 24));
      if ( ((unsigned __int8)v14 & 1) != 0 )
        v14 = *(char **)&v14[*v13 - 1];
      result = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, _QWORD))v14)(
                 v13,
                 a2,
                 (a4 & *(_DWORD *)(v16 + 32)) >> *(_DWORD *)(v16 + 40),
                 *(unsigned int *)(v16 + 36));
      if ( !(_BYTE)result )
        return result;
      ++i;
      v7 += 32;
      if ( a6 < i )
        return 1;
    }
  }
  return 1;
}

