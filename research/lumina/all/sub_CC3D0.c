__int64 __fastcall sub_CC3D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 63) )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v2 + 112LL))(v2, 0, 1, 9);
  *(_BYTE *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 67) = 0;
  return result;
}
