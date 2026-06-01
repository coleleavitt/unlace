__int64 __fastcall sub_4A760(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 v4; // rbx
  void (__fastcall *hexdsp)(__int64, __int64); // rax

  v2 = sub_49CF0(a1, (__int64 *)a2);
  v3 = *(_DWORD *)(a2 + 24);
  v4 = v2;
  hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2);
  hexdsp(276, v4 + 64);
  *(_BYTE *)(v4 + 64) = 1;
  *(_DWORD *)(v4 + 72) = v3;
  *(_DWORD *)(v4 + 68) = 8;
  return v4;
}

