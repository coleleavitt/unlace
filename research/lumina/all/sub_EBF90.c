__int64 __fastcall sub_EBF90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  while ( 1 )
  {
    v1 = *(_QWORD *)(a1 + 136);
    if ( *(_BYTE *)(v1 + 8) )
      break;
    result = sub_EBEA0(
               a1,
               _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v1 + 80)
                                         + (unsigned __int16)(*(_WORD *)(v1 + 26)
                                                            & __ROL2__(
                                                                *(_WORD *)(*(_QWORD *)(v1 + 96)
                                                                         + 2 * *(unsigned __int16 *)(a1 + 86)),
                                                                8)))));
    if ( (_DWORD)result )
      return result;
  }
  return 0;
}
