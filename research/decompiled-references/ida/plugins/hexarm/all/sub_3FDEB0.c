// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_3FDEB0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax

  if ( !*(_BYTE *)(a2 + 745) )
  {
    sub_CF9B0();
    *(_BYTE *)(a2 + 745) = 1;
  }
  qvsnprintf();
  v2 = 0;
  if ( sub_CF9B0() > 0 )
  {
    v3 = *a1;
    v2 = 1;
    *a1 = 0;
    *(_QWORD *)&byte_8 = v3;
  }
  clear_tinfo_t();
  return v2;
}

