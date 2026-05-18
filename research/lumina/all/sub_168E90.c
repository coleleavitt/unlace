__int64 __fastcall sub_168E90(unsigned int a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  if ( a2 && !a2[68] )
    return (*(__int64 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a2 + 32LL))(a2, a1, a3);
  else
    return sub_16B970(a1, a3, a4);
}
