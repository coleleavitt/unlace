__int64 __fastcall sub_13230(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // rax
  __int64 v3; // rax
  int v4; // edx

  result = 0;
  if ( *(unsigned __int16 *)(a1 + 40) == *(_DWORD *)(a1 + 888)
    && *(_BYTE *)(a1 + 57) == 1
    && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 384) - *(unsigned __int8 *)(a1 + 892) )
  {
    v2 = *(_DWORD **)(a1 + 376);
    *(_DWORD *)(a1 + 528) = 0;
    *v2 &= 0xFFFFFBFB;
    v3 = *(_QWORD *)(a1 + 376);
    v4 = *(unsigned __int16 *)(a1 + 62);
    *(_BYTE *)(v3 + 68) = 0;
    *(_DWORD *)(v3 + 64) = v4;
    LOWORD(v4) = *(_WORD *)(a1 + 62);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v4;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 0;
    return 1;
  }
  return result;
}

