__int64 __fastcall sub_1694E0(__int64 a1)
{
  __int64 result; // rax

  result = _byteswap_ulong(*(_QWORD *)(a1 + 8) - 5);
  **(_DWORD **)a1 = result;
  return result;
}
