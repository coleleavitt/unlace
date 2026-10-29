__int64 __fastcall sub_58A50(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a3 + 4) & 1) == 0 && *(_QWORD *)(a3 + 16) != -1 )
    sel2para();
  get_dword();
  getinf_flag();
  getinf_flag();
  put_dword();
  return 1;
}

