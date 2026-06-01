__int64 __fastcall sub_9F40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  *(_WORD *)(a2 + 24) = *(_WORD *)a4;
  *(_BYTE *)(a2 + 33) = *(_BYTE *)(a4 + 2);
  *(_BYTE *)(a2 + 74) = *(_DWORD *)(a4 + 12);
  *(_BYTE *)(a2 + 114) = *(_DWORD *)(a4 + 16);
  *(_BYTE *)(a2 + 154) = *(_DWORD *)(a4 + 20);
  *(_BYTE *)(a2 + 194) = *(_DWORD *)(a4 + 24);
  *(_BYTE *)(a2 + 234) = *(_DWORD *)(a4 + 28);
  if ( (unsigned __int8)sub_94C0(a1, a2, a2 + 40, a3)
    && (unsigned __int8)sub_94C0(a1, a2, a2 + 80, a3)
    && (unsigned __int8)sub_94C0(a1, a2, a2 + 120, a3)
    && (unsigned __int8)sub_94C0(a1, a2, a2 + 160, a3)
    && (unsigned __int8)sub_94C0(a1, a2, a2 + 200, a3) )
  {
    return *(unsigned __int16 *)(a2 + 26);
  }
  else
  {
    return 0;
  }
}

