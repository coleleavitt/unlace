__int64 __fastcall sub_3C700(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // r12d
  unsigned int v4; // r15d
  int v5; // ecx
  int v6; // r9d
  char v7; // r13
  int v8; // r9d
  int v9; // r14d
  __int64 result; // rax
  int v12; // [rsp+Ch] [rbp-3Ch]
  unsigned int v13; // [rsp+Ch] [rbp-3Ch]

  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 123);
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(char *)(a2 + 34);
  v4 = *(unsigned __int8 *)(a2 + 6);
  v5 = *(char *)(a2 + 32);
  v12 = v2 - 1;
  if ( (unsigned int)(v3 + 1) <= 1 )
  {
    v7 = *(_BYTE *)(a2 + 5);
    sub_3C660(a1, *(unsigned __int8 *)(a2 + 6), v7, v5, -1);
    v6 = v2 - 1;
    if ( v12 <= 0 )
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 125);
  }
  else
  {
    sub_3C660(a1, *(unsigned __int8 *)(a2 + 6), 10, v5, -1);
    v6 = v2 - 1;
    v7 = 10;
    if ( v12 <= 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 125);
LABEL_8:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, v3 - 1, 10);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
    }
  }
  v8 = v4 + v6;
  v9 = v2 - 2;
  if ( v8 <= 194 )
  {
    v13 = v8;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
    sub_3C660(a1, v13, v7, *(char *)(a2 + 32), -1);
  }
  else
  {
    do
    {
      if ( (int)++v4 >= 195 )
        v4 = 163;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      sub_3C660(a1, v4, v7, *(char *)(a2 + 32), -1);
    }
    while ( v9-- != 0 );
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 125);
  if ( (unsigned int)(v3 + 1) > 1 )
    goto LABEL_8;
  return result;
}

