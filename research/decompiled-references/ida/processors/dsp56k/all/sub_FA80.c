__int64 __fastcall sub_FA80(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6, int a7)
{
  __int64 v7; // r13
  __int64 v8; // rax
  int v11; // r15d
  __int64 i; // rbp
  _QWORD *v13; // rdi
  char *v14; // rax
  __int64 result; // rax
  __int64 v16; // rcx

  v7 = a3 + 152LL * a5;
  if ( a6 <= a7 )
  {
    v8 = a6;
    v11 = a6;
    for ( i = v7 + 24LL * a6; ; i += 24 )
    {
      v16 = v7 + 24 * v8;
      v14 = *(char **)(v16 + 24);
      if ( !v14 )
        break;
      v13 = (_QWORD *)(a1 + *(_QWORD *)(i + 32));
      if ( ((unsigned __int8)v14 & 1) != 0 )
        v14 = *(char **)&v14[*v13 - 1];
      result = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))v14)(
                 v13,
                 a2,
                 (a4 & *(_DWORD *)(v16 + 40)) >> *(_DWORD *)(v16 + 44));
      if ( !(_BYTE)result )
        return result;
      if ( a7 < ++v11 )
        return 1;
      v8 = v11;
    }
  }
  return 1;
}

