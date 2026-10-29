__int64 __fastcall sub_D5B40(__int64 a1)
{
  unsigned __int32 v1; // eax
  __int64 result; // rax

  v1 = _byteswap_ulong(_byteswap_ulong(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 136LL)) + 1);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = v1;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 92LL) = v1;
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 96) = 408890880;
  return result;
}
