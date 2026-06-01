__int64 sub_10650()
{
  _QWORD *module_data; // r13
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rsi
  int *v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __m128i *v10; // rbp
  __int64 v11; // rdi
  struct _Unwind_Exception *v13; // rbp
  __int64 v14; // [rsp+0h] [rbp-128h]
  __int64 v15; // [rsp+0h] [rbp-128h]
  unsigned __int64 v16; // [rsp+8h] [rbp-120h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+10h] [rbp-118h] BYREF
  __int64 v18; // [rsp+18h] [rbp-110h]
  __int128 v19; // [rsp+20h] [rbp-108h]
  __int64 v20; // [rsp+30h] [rbp-F8h]
  const char *v21; // [rsp+38h] [rbp-F0h]
  int v22; // [rsp+40h] [rbp-E8h]
  __m128i v23; // [rsp+48h] [rbp-E0h] BYREF
  int v24; // [rsp+58h] [rbp-D0h]
  char v25; // [rsp+60h] [rbp-C8h] BYREF
  char v26; // [rsp+A8h] [rbp-80h] BYREF
  int v27; // [rsp+C0h] [rbp-68h] BYREF
  _QWORD *v28; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v29; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v30; // [rsp+D8h] [rbp-50h]
  _QWORD v31[9]; // [rsp+E0h] [rbp-48h] BYREF

  v31[1] = __readfsqword(0x28u);
  module_data = (_QWORD *)get_module_data((unsigned int)dword_1A374);
  ((void (__fastcall *)(__int64, unsigned __int64 *, __int64, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64))callui)(
    11,
    &v16,
    v1,
    &callui,
    v2,
    v3);
  v17 = (__int64 (__fastcall **)())&unk_19C30;
  v4 = v16;
  v19 = -1;
  v18 = 0x3FF000004LL;
  v21 = "Reverse Follow Exception (how did we get here)";
  v22 = 3;
  v5 = (int *)&v25;
  v20 = 0;
  v24 = -1;
  v23 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_19A28), (__m128i)(unsigned __int64)off_19A00);
  do
  {
    *(_QWORD *)v5 = 0;
    v5 += 6;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( &v27 != v5 );
  v27 = 0;
  if ( ((HIDWORD(v18) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v18) != 0xFF )
    {
      if ( !under_debugger )
      {
        v13 = (struct _Unwind_Exception *)interr(3449);
        sub_101E0(&v17, (const char *)v4);
        _Unwind_Resume(v13);
      }
      BUG();
    }
    BYTE3(v18) = ((HIDWORD(v18) >> 19) & 0x3F) - 1;
    HIDWORD(v18) &= 0xFE07FFFF;
  }
  v28 = module_data;
  v17 = off_197D0;
  v29 = v4;
  v30 = 0;
  v31[0] = 0;
  v6 = sub_F4C0(module_data, v4, v31);
  if ( v6 <= 0 )
  {
    if ( get_func(v29) )
    {
      v4 = v29;
      sub_10580((__int64)"No exception paths end at %a", 0.0);
    }
    else
    {
      sub_10580((__int64)"This command is only available inside a function", 0.0);
    }
    if ( !v30 )
      goto LABEL_11;
  }
  else
  {
    v30 = v6;
  }
  v4 = 0;
  v16 = 0;
  v8 = callui(16, 0, &v17, &v16, &callui, v7, v14);
  if ( v8 >= 0 && v8 < v30 )
  {
    v4 = *(unsigned int *)(v31[0] + 8 * v8);
    callui(115, v4, 0xFFFFFFFFLL, 1, v9, &callui, v15);
  }
LABEL_11:
  v17 = off_197D0;
  v10 = (__m128i *)&v26;
  qfree(v31[0], (const char *)v4, 0.0);
  v17 = (__int64 (__fastcall **)())&unk_19C30;
  do
  {
    v11 = v10->m128i_i64[0];
    if ( v10->m128i_i64[0] )
    {
      v10->m128i_i64[1] = 0;
      qfree(v11, (const char *)v4);
    }
    v10 = (__m128i *)((char *)v10 - 24);
  }
  while ( &v23 != v10 );
  return 1;
}
