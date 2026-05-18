__int64 __fastcall sub_EBF40(__int64 a1)
{
  unsigned int v1; // esi
  __int64 result; // rax
  __int64 v3; // rax
  __int16 v4; // dx

  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 136);
    v4 = *(_WORD *)(v3 + 24);
    if ( *(_BYTE *)(v3 + 8) )
      break;
    v1 = *(_DWORD *)(*(_QWORD *)(v3 + 80) + *(unsigned __int8 *)(v3 + 9) + 8LL);
    *(_WORD *)(a1 + 86) = v4;
    result = sub_EBEA0(a1, _byteswap_ulong(v1));
    if ( (_DWORD)result )
      return result;
  }
  *(_WORD *)(a1 + 86) = v4 - 1;
  return 0;
}
