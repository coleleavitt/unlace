unsigned __int64 __fastcall sub_E3CE0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax

  memset(a1 + 1, 0, 0xD0u);
  memset(a1 + 34, 0, 0x88u);
  result = *(_QWORD *)(a2 + 344);
  a1[31] = result;
  *(_QWORD *)(a2 + 344) = a1;
  *a1 = a2;
  if ( *(_BYTE *)(a2 + 103) )
    return sub_DBD10((__int64)a1, "out of memory");
  return result;
}
