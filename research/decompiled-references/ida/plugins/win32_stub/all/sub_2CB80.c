__int64 __fastcall sub_2CB80(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 *v16; // rax
  __int64 v17; // r13
  __int64 v19; // rax
  char v21[136]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v22; // [rsp+A8h] [rbp-40h]

  v6 = *a1;
  v22 = __readfsqword(0x28u);
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
    sub_B690();
    if ( v13 > 0 )
    {
      do
      {
        v14 = v11++;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 88))(*a1, v12, v14);
        ((void (__fastcall *)(__int64, char *, __int64))(*a1)[12])(v15, v21, 128);
        sub_B690();
      }
      while ( v13 != v11 );
    }
    ((void (__fastcall *)(__int64, unsigned __int64 (__fastcall *)(__int64, __int16, unsigned int)))(*a1)[20])(
      v10,
      sub_2B670);
  }
  v16 = *a1;
  if ( a3 )
  {
    if ( *((_DWORD *)v16 + 92) > 0x10001FFu )
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v16 + 64))(*a1, v10, 1);
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(__int64))v16[8])(415);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(**a1 + 56))(*a1, v10, v17);
      ((void (__fastcall *)(__int64))(*a1)[7])(v17);
    }
    if ( (*(_DWORD *)debug & 0x100000) != 0 )
      sub_B4F0();
    if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[22])(v10, a3) == 1 )
    {
      if ( (*(_DWORD *)debug & 0x100000) != 0 )
        sub_B4F0();
      if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64))(*a1)[21])(v10, a4, 1) == 1
        && ((unsigned int (__fastcall *)(__int64))(*a1)[13])(v10) == 1 )
      {
        return v10;
      }
    }
    goto LABEL_21;
  }
  v19 = ((__int64 (__fastcall *)(__int64))v16[16])(v10);
  if ( ((unsigned int (__fastcall *)(__int64, __int64))(*a1)[41])(v19, a2) != 1 && (*(_DWORD *)debug & 0x100000) != 0 )
    sub_B4F0();
  return v10;
}

