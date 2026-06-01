char __fastcall sub_58BE0(__int64 a1, __int64 a2)
{
  unsigned int dword; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // dl
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int32 v10; // eax
  __int64 v11; // rdx
  char result; // al
  __int64 v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-18h]
  __int64 v15; // [rsp+0h] [rbp-18h]
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+8h] [rbp-10h]
  __int64 v18; // [rsp+10h] [rbp-8h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  dword = get_dword(a2);
  v7 = getinf_flag(3, 32, v3, v4, v5, v6, v14, v16, v18);
  v10 = _byteswap_ulong(dword);
  if ( v7 )
    dword = v10;
  if ( (dword & 0x3F000000) == 0x39000000 )
  {
    v11 = dword >> 23;
    v13 = dword >> 30;
    result = v11 & (dword >> 30 == 0);
    if ( result )
    {
      v13 = 4;
LABEL_6:
      getinf_flag(3, 32, v11, v13, v8, v9, v15, v17, v19);
      put_dword();
      return 1;
    }
    v11 = ~dword & 0xC00000;
    if ( (~dword & 0xC00000) != 0 || (unsigned int)v13 <= 1 )
      goto LABEL_6;
  }
  else
  {
    v11 = dword & 0x1FC00000;
    result = 0;
    if ( (_DWORD)v11 == 285212672 )
    {
      v13 = 0;
      if ( (dword & 0xC00000) == 0 )
        goto LABEL_6;
    }
  }
  return result;
}
