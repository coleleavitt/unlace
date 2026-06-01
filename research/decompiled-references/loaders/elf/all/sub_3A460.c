unsigned __int64 __fastcall sub_3A460(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 617) )
  {
    v3 = *(_QWORD *)(a2 + 8);
    LOBYTE(v3) = 0;
    result = (unsigned __int8)a3 + v3;
LABEL_3:
    *(_QWORD *)(a2 + 8) = result;
    return result;
  }
  if ( !*(_BYTE *)(a1 + 616) && *(_WORD *)(a1 + 522) == 8 )
  {
    result = ((unsigned __int64)_byteswap_ulong(a3) << 32) | *(unsigned int *)(a2 + 8);
    goto LABEL_3;
  }
  *(_QWORD *)(a2 + 8) = a3;
  return a3;
}
