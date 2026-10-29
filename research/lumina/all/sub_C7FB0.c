unsigned __int64 __fastcall sub_C7FB0(__int64 a1, int a2)
{
  _DWORD *v2; // rbx
  unsigned int v3; // eax
  unsigned __int64 result; // rax

  v2 = **(_DWORD ***)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 104);
  ++*(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 108) = a2;
  *(_DWORD *)(a1 + 104) = _byteswap_ulong(_byteswap_ulong(v3) + 1);
  result = sub_C6BA0(a1);
  v2[24] = 0;
  v2[32] = 0;
  v2[26] = 0;
  v2[27] = -1;
  v2[28] = -1;
  v2[29] = -1;
  return result;
}
