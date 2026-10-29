__int64 __fastcall sub_8FA0(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, int a5)
{
  _WORD *v8; // rbx
  char v9; // dl
  int v10; // eax
  __int64 v11; // rsi
  void (__fastcall *v13)(__int64, __int64, _QWORD); // rax
  __int64 v14; // rsi

  if ( !*a3 )
    return 0;
  v8 = a3;
  while ( 1 )
  {
    if ( (a5 & *((_DWORD *)v8 + 4)) != 0 )
    {
      v9 = getinf_flag();
      v10 = a4;
      if ( v9 )
      {
        v11 = *((unsigned int *)v8 + 3);
        if ( (_DWORD)v11 )
          v10 = sub_8DC0(a4, v11);
      }
      if ( (*((_DWORD *)v8 + 2) & v10) == *((_DWORD *)v8 + 1) )
        break;
    }
    v8 += 16;
    if ( !*v8 )
      return 0;
  }
  if ( !v8 )
    return 0;
  if ( (unsigned __int8)getinf_flag() )
  {
    v14 = *((unsigned int *)v8 + 3);
    if ( (_DWORD)v14 )
      a4 = sub_8DC0(a4, v14);
  }
  *(_WORD *)(a1 + 24) = *v8;
  v13 = *((void (__fastcall **)(__int64, __int64, _QWORD))v8 + 3);
  if ( v13 )
    v13(a2, a1, a4);
  return 1;
}

