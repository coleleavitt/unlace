__int64 __fastcall sub_13100(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  if ( *(_WORD *)(a1 + 40) == 69 || *(_BYTE *)(a1 + 57) == 4 || (result = 0, *(_BYTE *)(a1 + 61) == 1) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    v2 = *(_QWORD *)(a1 + 376);
    v3 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)v2 |= 0x200u;
    *(_QWORD *)(v2 + 56) = v3;
    **(_DWORD **)(a1 + 376) |= 0x2000u;
    v4 = *(_QWORD *)(a1 + 376);
    LODWORD(v3) = *(unsigned __int16 *)(a1 + 62);
    *(_BYTE *)(v4 + 68) = 1;
    *(_DWORD *)(v4 + 64) = v3;
    LOWORD(v3) = *(_WORD *)(a1 + 62);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v3;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 1;
    return 1;
  }
  return result;
}

