__int64 __fastcall sub_57AB0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rcx
  unsigned __int64 v10; // r13
  unsigned int dword; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // dl
  unsigned __int32 v17; // eax
  __int64 v18; // [rsp-8h] [rbp-38h]
  __int64 v20; // [rsp+0h] [rbp-30h]
  __int64 v21; // [rsp+8h] [rbp-28h]

  v6 = *a4;
  if ( *a4 == -1 )
    return 0;
  v21 = v5;
  v8 = a4[1];
  if ( v8 == -1 || (a4[3] & 0x1310) != 0 )
    return 0;
  v10 = a4[2] + v6 - v8;
  dword = get_dword(a3);
  v16 = getinf_flag(3, 32, v12, v13, v14, v15, v18, a5, v21);
  v17 = _byteswap_ulong(dword);
  if ( v16 )
    dword = v17;
  if ( (unsigned __int16)(v10 >> ((dword >> 17) & 0x30)) != v20 )
    return 0;
  *a1 = *a4;
  *a2 = a4[1];
  return 1;
}
