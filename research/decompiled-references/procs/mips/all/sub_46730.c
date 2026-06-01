__int64 __fastcall sub_46730(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v4; // rbx
  int dword; // eax

  v4 = *(_QWORD *)(a3 + 32) + *(_QWORD *)(a3 + 24);
  dword = get_dword(a2);
  put_dword(a2, dword & 0xFC000000 | (v4 >> 2) & 0x3FFFFFF);
  if ( (*(_BYTE *)(a1 + 16) & 4) != 0 )
    create_insn(a2, 0);
  LOBYTE(v3) = (((unsigned int)v4 ^ ((_DWORD)a2 + 4)) & 0xF0000000) == 0;
  return v3;
}
