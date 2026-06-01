void __fastcall sub_8300(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx
  __int64 v3; // rax

  if ( (*(_BYTE *)(a2 + 33) & 0x40) == 0 )
  {
    v2 = *(_WORD *)(a1 + 224);
    v3 = *(_QWORD *)(a2 + 16);
    if ( v2 <= 0xFFFu || (v2 & 0x100) != 0 )
    {
      v3 = (unsigned __int16)v3;
      *(_QWORD *)(a2 + 16) = (unsigned __int16)v3;
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 33) & 0x10) != 0 && *(_BYTE *)(a2 + 1) == 2 && (v3 & 0x8000) != 0 )
      {
        v3 |= 0xFFFF0000uLL;
        *(_QWORD *)(a2 + 16) = v3;
        v2 = *(_WORD *)(a1 + 224);
      }
      if ( (v2 & 6) == 0 )
      {
        v3 &= 0xFFFFFFu;
        *(_QWORD *)(a2 + 16) = (unsigned int)v3;
      }
    }
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v3;
  }
}

