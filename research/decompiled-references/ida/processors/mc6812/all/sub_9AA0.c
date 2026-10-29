__int64 __fastcall sub_9AA0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  __int64 sreg; // rax

  v3 = a3;
  if ( *(_WORD *)(a2 + 24) == 45 && *(_BYTE *)(a2 + 81) == 5 )
  {
    if ( (unsigned __int64)a3 - 0x8000 <= 0x3FFF )
      return (*(_QWORD *)(a2 + 88) << 16) + a3;
    return v3;
  }
  if ( *(_DWORD *)(a1 + 248) != 2 )
    goto LABEL_3;
  if ( (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    if ( !*(_QWORD *)a2 )
      return *(_QWORD *)(a2 + 16) & 0xFF0000LL | v3;
    v6 = v3 + 16LL * *(_QWORD *)a2;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v6 != v3 )
    {
      v3 &= v6;
      if ( v6 == -1 )
        return -1;
    }
    return v3;
  }
  v8 = *(_BYTE *)(a2 + 72);
  if ( (v8 & 0x40) == 0 )
  {
    if ( (v8 & 0x20) != 0 && (a3 & 0xFF00) == 0 )
    {
      sreg = get_sreg();
      if ( sreg != -1 )
        v3 += sreg << 8;
    }
    if ( (unsigned __int64)(v3 - 2048) > 0x3FF && (unsigned __int64)(v3 - 4096) > 0xFFF )
    {
LABEL_3:
      if ( (unsigned __int64)(v3 - 0x8000) > 0x3FFF )
        return v3;
    }
  }
  v7 = get_sreg();
  if ( v7 != -1 )
    v3 += v7 << 16;
  return v3;
}

