__int64 __fastcall sub_C830(int a1, void (__fastcall ***a2)(__int64, __int64, __int16 *))
{
  void (__fastcall **v3)(__int64, __int64, __int16 *); // rax
  _BOOL8 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  const char *v10; // rsi
  const char *v11; // rdx
  char v12; // al
  __int16 v13; // [rsp+Eh] [rbp-102Ah] BYREF
  char v14[4104]; // [rsp+10h] [rbp-1028h] BYREF
  unsigned __int64 v15; // [rsp+1018h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( a1 == 1 )
  {
    ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int16 *), __int64, char *, __int64))(*a2)[10])(
      a2,
      2,
      v14,
      4096);
    if ( !(unsigned __int8)sub_BE70(v14) )
    {
      ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int16 *), __int64, char *, __int64))(*a2)[10])(
        a2,
        1,
        v14,
        4096);
      if ( (unsigned __int8)sub_C700(v14) )
      {
        v11 = s;
        if ( (_QWORD)xmmword_3C418 )
          v11 = (const char *)dest;
        (*a2)[1]((__int64)a2, 2, (__int16 *)v11);
      }
    }
    return 1;
  }
  if ( a1 == -1 || a1 == 4 )
  {
    v3 = *a2;
    v13 = 0;
    (*v3)((__int64)a2, 4, &v13);
    v4 = v13 != 0;
    (*a2)[2]((__int64)a2, 1, (__int16 *)v4);
    (*a2)[2]((__int64)a2, 2, (__int16 *)v4);
    (*a2)[2]((__int64)a2, 6, (__int16 *)v4);
    (*a2)[2]((__int64)a2, 7, (__int16 *)v4);
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(1004, 7, &callui, v5, v6, v7);
    (*a2)[2]((__int64)a2, 3, (__int16 *)(v8 == 0));
    return 1;
  }
  if ( a1 != -2 )
    return 1;
  v13 = 0;
  (**a2)((__int64)a2, 4, &v13);
  if ( !v13 )
    return 1;
  ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int16 *), __int64, char *, __int64))(*a2)[10])(
    a2,
    1,
    v14,
    4096);
  if ( !v14[0] )
    goto LABEL_9;
  v12 = qfileexist();
  if ( (debug & 0x10000) != 0 )
  {
    if ( v12 )
    {
      sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", v14, "FOUND!");
      goto LABEL_9;
    }
    sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", v14, "not found");
LABEL_23:
    sub_BCD0((__int64)"The specified PIN path '%s' does not exist, please check!", v14);
    ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int16 *), __int64))(*a2)[6])(a2, 1);
    return 0;
  }
  if ( !v12 )
    goto LABEL_23;
LABEL_9:
  ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int16 *), __int64, char *, __int64))(*a2)[10])(
    a2,
    2,
    v14,
    4096);
  if ( !v14[0] || (unsigned __int8)sub_BF40(v14) )
    return 1;
  v10 = "idadbg.so";
  if ( (unsigned __int8)getinf_flag() )
    v10 = "idadbg64.so";
  sub_BCD0((__int64)"No IDA tool '%s' in PINTOOL path '%s', please check!", v10, v14);
  ((void (__fastcall *)(void (__fastcall ***)(__int64, __int64, __int16 *), __int64))(*a2)[6])(a2, 2);
  return 0;
}

