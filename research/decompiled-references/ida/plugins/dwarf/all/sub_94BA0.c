__int64 __fastcall sub_94BA0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-F0h] BYREF
  __m128i v8; // [rsp+8h] [rbp-E8h] BYREF
  void (__fastcall __noreturn **v9)(); // [rsp+18h] [rbp-D8h] BYREF
  int v10; // [rsp+20h] [rbp-D0h]
  __int64 v11; // [rsp+28h] [rbp-C8h]
  __int64 v12; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-B8h] BYREF
  int v14; // [rsp+40h] [rbp-B0h]
  _QWORD v15[2]; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-98h]
  __int128 v17; // [rsp+60h] [rbp-90h]
  _OWORD v18[4]; // [rsp+78h] [rbp-78h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-38h]
  unsigned __int64 v20; // [rsp+C0h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v8 = 0;
  sub_945B0(a1, &v8, 70);
  v1 = a1[32];
  v12 = 0;
  v14 = 0;
  v11 = v1;
  v13 = 0;
  *(_QWORD *)&v18[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 *, _OWORD *))(v1 + 120))(
         v8.m128i_i64[0],
         &v12,
         &v13,
         v18) )
  {
    if ( (debug & 0x400000) != 0 )
    {
      sub_88B80((__int64)"Couldn't retrieve location list.\n");
      v2 = -1;
      if ( (_DWORD)v13 != 1 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else
  {
    v14 = 1;
  }
  v2 = -1;
  if ( (_DWORD)v13 != 1 )
    goto LABEL_4;
LABEL_9:
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  if ( sub_85140(v11, (__int64)v18, v12, 0) )
  {
    v4 = *a1;
    v5 = a1[32];
    v15[1] = v18;
    v6 = *(_QWORD *)(v4 + 16);
    v10 = 0;
    v16 = 0;
    v15[0] = v6;
    v9 = &off_C7258;
    v17 = 0;
    if ( (unsigned __int8)sub_89AD0(v15, v5, &v7, (__int64)&v9) )
      v2 = v7;
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
  }
  else
  {
    v2 = -1;
  }
LABEL_4:
  if ( v12 )
    (*(void (**)(void))(v11 + 488))();
  sub_84A10(&v8);
  return v2;
}

