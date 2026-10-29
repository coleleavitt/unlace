_BOOL8 __fastcall sub_4560(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  __int64 sreg; // rax
  int v7; // edx
  bool v8; // zf

  if ( *(char *)(a1 + 128) >= 0 )
  {
    *(_BYTE *)(a3 + 1) = 2;
    sreg = get_sreg();
    v7 = *(_DWORD *)(a1 + 128);
    *(_BYTE *)(a3 + 32) = 0;
    v8 = *(_BYTE *)(a3 + 1) == 2;
    *(_QWORD *)(a3 + 16) = (sreg << 7) + (v7 & 0x7F);
    if ( v8 )
      *(_QWORD *)(a3 + 16) = *(_DWORD *)(a1 + 128) & 0x7F;
    return 1;
  }
  else
  {
    *(_BYTE *)(a3 + 1) = 3;
    v4 = *(_DWORD *)(a1 + 128) & 0x70;
    *(_WORD *)(a3 + 6) = *(_WORD *)(a1 + 128) & 0x7F;
    return v4 != 48;
  }
}

