unsigned __int64 __fastcall sub_14BF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v3)(__int64, int, int *); // r14
  __int64 (__fastcall **v4)(__int64, int, int *); // r12
  __int64 (__fastcall *v5)(__int64, int, int *); // rsi
  const char *v6; // rdx
  __int64 v7; // rdx
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall *)(__int64, int, int *), _QWORD *); // rcx
  void *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 (__fastcall *v15)(__int64, int, int *); // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  *a1 = off_1EA00;
  v3 = (__int64 (__fastcall **)(__int64, int, int *))(a1 + 58);
  v4 = (__int64 (__fastcall **)(__int64, int, int *))(a1 + 122);
  do
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( (unsigned __int8)callui(128, *v3, a3) )
      {
        v6 = (const char *)v3[1];
        v15 = nullptr;
        v16 = 0;
        sub_13580((__int64 *)&v15, (__int64)"File/Load file/DYLD Shared Cache Utils/%s", v6);
        v5 = (__int64 (__fastcall *)(__int64, int, int *))byte_190C8;
        if ( (_QWORD)v16 )
          v5 = v15;
        callui(130, v5, *v3);
        if ( v15 )
          break;
      }
      v3 += 8;
      if ( v3 == v4 )
        goto LABEL_8;
    }
    *(_QWORD *)&v16 = 0;
    v3 += 8;
    qfree(v15);
  }
  while ( v3 != v4 );
LABEL_8:
  hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, int, int *), _QWORD *))get_hexdsp();
  if ( hexdsp )
  {
    v5 = sub_14970;
    hexdsp(575, sub_14970, a1);
  }
  v9 = (void *)a1[14];
  if ( v9 )
  {
    sub_8270(a1[14]);
    v5 = (__int64 (__fastcall *)(__int64, int, int *))&stru_360;
    operator delete(v9, 0x360u);
  }
  a1[14] = 0;
  a1[22] = &off_1ECF8;
  remove_event_listener(a1 + 22, v5, v7, hexdsp);
  a1[19] = &off_1ECF8;
  remove_event_listener(a1 + 19, v5, v10, v11);
  a1[16] = &off_1ECF8;
  remove_event_listener(a1 + 16, v5, v12, v13);
  return v17 - __readfsqword(0x28u);
}
