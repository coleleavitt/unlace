__int64 __fastcall sub_CC410(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 64) )
    result = sub_CC3D0(a1);
  if ( *(__int16 *)(a1 + 60) >= 0 )
  {
    v2 = (unsigned int)(*(__int16 *)(a1 + 60) + 3);
    v3 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(a1 + 63) )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v3 + 112LL))(v3, v2, 1, 5);
    *(_WORD *)(a1 + 60) = -1;
    return 0xFFFFFFFFLL;
  }
  return result;
}
