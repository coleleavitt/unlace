__int64 __fastcall sub_3BA0(__int64 *a1)
{
  __int64 v1; // rax
  char *v2; // rbp
  char v3; // al
  __int64 i; // rcx
  _BYTE v6[2]; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v1 = *((unsigned __int16 *)a1 + 124);
  v7 = __readfsqword(0x28u);
  v2 = *((char **)&off_65E0 + 2 * v1);
  v3 = *v2;
  for ( i = *a1; *v2; v3 = *v2 )
  {
    while ( v3 != 36 )
    {
      v6[0] = v3;
      v6[1] = 0;
      (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(i + 56))(a1, v6, 5);
      i = *a1;
      v3 = *++v2;
      if ( !*v2 )
        goto LABEL_8;
    }
    if ( *((_BYTE *)&a1[5 * v2[1] - 206] - 7) )
    {
      (*(void (__fastcall **)(__int64 *))(i + 304))(a1);
      i = *a1;
    }
    v2 += 2;
  }
LABEL_8:
  (*(void (__fastcall **)(__int64 *))(i + 320))(a1);
  if ( (*((_BYTE *)a1 + 252) & 0xF) != 0 )
  {
    (*(void (__fastcall **)(__int64 *, const char *, _QWORD))(*a1 + 56))(a1, ", ", 0);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 104))(a1, (*((_DWORD *)a1 + 63) & 0xF) + 1LL, 10);
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

