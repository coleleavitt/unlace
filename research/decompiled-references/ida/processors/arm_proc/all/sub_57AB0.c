__int64 __fastcall sub_57AB0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // rcx
  unsigned __int64 v9; // r13
  unsigned int dword; // r14d
  char v11; // dl
  unsigned __int32 v12; // eax

  v5 = *a4;
  if ( *a4 == -1 )
    return 0;
  v7 = a4[1];
  if ( v7 == -1 || (a4[3] & 0x1310) != 0 )
    return 0;
  v9 = a4[2] + v5 - v7;
  dword = get_dword();
  v11 = getinf_flag();
  v12 = _byteswap_ulong(dword);
  if ( v11 )
    dword = v12;
  if ( (unsigned __int16)(v9 >> ((dword >> 17) & 0x30)) != a5 )
    return 0;
  *a1 = *a4;
  *a2 = a4[1];
  return 1;
}

