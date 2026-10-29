__int64 __fastcall sub_58CB0(__int64 a1, __int64 a2, __int64 a3)
{
  get_dword();
  getinf_flag();
  get_dword();
  getinf_flag();
  if ( (*(_BYTE *)(a3 + 4) & 1) == 0 && *(_QWORD *)(a3 + 16) != -1 )
    sel2para();
  getinf_flag();
  put_dword();
  return 1;
}

