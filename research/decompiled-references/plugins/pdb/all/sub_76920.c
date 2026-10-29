__int64 __fastcall sub_76920(_QWORD *a1, char *a2, signed __int64 a3, char a4)
{
  __int64 v5; // r14
  char *v6; // rbp
  void *v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v11)(_QWORD *, signed __int64); // rdx
  __int64 (__fastcall *v12)(__int64); // rax
  signed __int64 v13; // rbx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(_QWORD *, __int64); // rbx
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // rax
  __int64 (__fastcall *n)(_QWORD *, signed __int64); // [rsp+8h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v7 = (void *)a1[6];
  v8 = a1[7];
  if ( v8 < (unsigned __int64)v7 + a3 )
  {
    if ( a3 <= 0 )
      return 1;
    while ( 1 )
    {
      v13 = v8 - (_QWORD)v7;
      if ( v13 > v5 )
        v13 = v5;
      if ( a4 )
      {
        memcpy(v6, v7, v13);
        v11 = *(__int64 (__fastcall **)(_QWORD *, signed __int64))(*a1 + 40LL);
        v12 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
        if ( v12 == sub_75F00 )
          goto LABEL_6;
      }
      else
      {
        memcpy(v7, v6, v13);
        v11 = *(__int64 (__fastcall **)(_QWORD *, signed __int64))(*a1 + 40LL);
        v12 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
        if ( v12 == sub_75F00 )
        {
LABEL_6:
          result = v11(a1, v13 + a1[8]);
          goto LABEL_7;
        }
      }
      n = v11;
      v14 = v12((__int64)a1);
      result = n(a1, v13 + v14);
LABEL_7:
      if ( !(_BYTE)result )
        return result;
      v5 -= v13;
      v6 += v13;
      if ( v5 <= 0 )
        return 1;
      v8 = a1[7];
      v7 = (void *)a1[6];
    }
  }
  if ( a4 )
    memcpy(a2, v7, a3);
  else
    memcpy(v7, a2, a3);
  v15 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL);
  v16 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
  if ( v16 == sub_75F00 )
    v17 = a1[8];
  else
    v17 = v16((__int64)a1);
  return v15(a1, v5 + v17);
}
