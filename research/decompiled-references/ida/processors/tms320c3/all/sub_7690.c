__int64 __fastcall sub_7690(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  int i; // r15d
  __int64 v11; // rax
  unsigned __int8 (__fastcall *v12)(__int64, _QWORD); // rdx

  v6 = 120LL * a4;
  v7 = *(_QWORD *)(a1 + 224);
  if ( a5 <= a6 )
  {
    for ( i = a5; a6 >= i; ++i )
    {
      v11 = v7 + v6 + 16LL * i;
      v12 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v11 + 64);
      if ( !v12 )
        break;
      if ( !v12(a2, (a3 & *(_DWORD *)(v11 + 72)) >> *(_DWORD *)(v11 + 76)) )
        return 0;
    }
  }
  return 1;
}

