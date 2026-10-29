void __fastcall sub_B200(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx

  if ( *(_WORD *)(a2 + 24) == 1
    && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x3F000000000400LL
    && (*(_BYTE *)(a2 + 28) & 0xE) == 0 )
  {
    v2 = *(_QWORD *)(a2 + 96) + (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCLL);
    if ( v2 != -1 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v2;
      if ( (unsigned __int8)is_mapped(v3) )
      {
        *(_DWORD *)(a2 + 28) |= 0x200u;
        *(_BYTE *)(a2 + 81) = 2;
        *(_QWORD *)(a2 + 96) = v3;
        *(_QWORD *)(a2 + 104) = 0;
      }
    }
  }
}

