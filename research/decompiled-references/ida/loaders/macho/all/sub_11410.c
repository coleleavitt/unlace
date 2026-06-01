__int64 __fastcall sub_11410(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 16) )
    sub_112F0((__int64)"Warning: LC_ROUTINES command in 64-bit file; ignored.\n");
  else
    *(_QWORD *)(a1 + 8) = *(unsigned int *)(a2 + 8);
  return 0;
}

