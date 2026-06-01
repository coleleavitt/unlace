__int64 __fastcall sub_52400(__int64 **a1, __int64 a2, const char *a3, const char *a4)
{
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // r15d
  __int64 v12; // r14
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rax
  const char *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // r13
  __int64 v20; // rax
  char v22[136]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp-40h]

  v6 = *a1;
  v23 = __readfsqword(0x28u);
  v7 = *v6;
  if ( a3 )
    v8 = (*(__int64 (**)(void))(v7 + 32))();
  else
    v8 = (*(__int64 (**)(void))(v7 + 40))();
  if ( !v8 )
    return 0;
  v9 = ((__int64 (*)(void))(*a1)[18])();
  v10 = v9;
  if ( !v9 )
    return 0;
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 48))(*a1, v9, 1459617792);
  if ( ((unsigned int (__fastcall *)(__int64, const char *))(*a1)[19])(
         v10,
         "DEFAULT:!MEDIUM:!SSLv2:!SSLv3:!TLSv1.0:!DSS:!PSK:!kRSA:!kDHr:!kDHd:!kDH:!kECDHr:!kECDHe:!kECDH:@STRENGTH") != 1 )
  {
LABEL_21:
    ((void (__fastcall *)(__int64))(*a1)[15])(v10);
    return 0;
  }
  if ( (*(_DWORD *)debug & 0x100000) != 0 )
  {
    v11 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64))(**a1 + 72))(*a1, v10);
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64))(**a1 + 80))(*a1, v12);
    sub_DBE0((__int64)"TLS: num ciphers: %d\n", v13);
    if ( v13 > 0 )
    {
      do
      {
        v14 = v11++;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 88))(*a1, v12, v14);
        v16 = (const char *)((__int64 (__fastcall *)(__int64, char *, __int64))(*a1)[12])(v15, v22, 128);
        sub_DBE0((__int64)"TLS:  %s", v16);
      }
      while ( v13 != v11 );
    }
    ((void (__fastcall *)(__int64, unsigned __int64 (__fastcall *)(const void *, int, unsigned int)))(*a1)[20])(
      v10,
      sub_50EF0);
  }
  v17 = *a1;
  if ( a3 )
  {
    if ( *((_DWORD *)v17 + 92) > 0x10001FFu )
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v17 + 64))(*a1, v10, 1);
    }
    else
    {
      v18 = ((__int64 (__fastcall *)(__int64))v17[8])(415);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 56))(*a1, v10, v18);
      ((void (__fastcall *)(__int64))(*a1)[7])(v18);
    }
    if ( (*(_DWORD *)debug & 0x100000) != 0 )
      sub_D8A0((__int64)"TLS: using certificate chain file \"%s\"\n", a3);
    if ( ((unsigned int (__fastcall *)(__int64, const char *))(*a1)[22])(v10, a3) == 1 )
    {
      if ( (*(_DWORD *)debug & 0x100000) != 0 )
        sub_D8A0((__int64)"TLS: using private key file \"%s\"\n", a4);
      if ( ((unsigned int (__fastcall *)(__int64, const char *, __int64))(*a1)[21])(v10, a4, 1) == 1
        && ((unsigned int (__fastcall *)(__int64))(*a1)[13])(v10) == 1 )
      {
        return v10;
      }
    }
    goto LABEL_21;
  }
  v20 = ((__int64 (__fastcall *)(__int64))v17[16])(v10);
  if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[41])(v20, a2) != 1 && (*(_DWORD *)debug & 0x100000) != 0 )
    sub_D8A0((__int64)"TLS: failed to add Root CA certificate to store\n");
  return v10;
}

