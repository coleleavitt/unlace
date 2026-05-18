__int64 __fastcall sub_C5320(signed int a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 1;
  if ( (unsigned int)a1 <= 0x92 )
  {
    *a2 = &aReindexedescap[word_1BAFC0[a1]];
    *a3 = byte_1BB100[a1];
    return 0;
  }
  return result;
}
