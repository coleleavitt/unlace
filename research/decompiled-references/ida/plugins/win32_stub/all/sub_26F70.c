__int64 __fastcall sub_26F70(
        unsigned int a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  if ( a2 && !a2[68] )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a2 + 32LL))(a2, a1, a3);
  else
    return sub_29DF0(a1, a3, a4, a4, a5, a6, a7, a8, a9);
}

