__int64 sub_109C0()
{
  _QWORD *module_data; // r15
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // r13
  int *v5; // rax
  const char *v6; // rsi
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __m128i *v11; // rbp
  __int64 v12; // rdi
  struct _Unwind_Exception *v14; // rbp
  __int64 v15; // [rsp+0h] [rbp-138h]
  __int64 v16; // [rsp+0h] [rbp-138h]
  unsigned __int64 v17; // [rsp+18h] [rbp-120h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+20h] [rbp-118h] BYREF
  __int64 v19; // [rsp+28h] [rbp-110h]
  __int128 v20; // [rsp+30h] [rbp-108h]
  __int64 v21; // [rsp+40h] [rbp-F8h]
  const char *v22; // [rsp+48h] [rbp-F0h]
  int v23; // [rsp+50h] [rbp-E8h]
  __m128i v24; // [rsp+58h] [rbp-E0h] BYREF
  int v25; // [rsp+68h] [rbp-D0h]
  char v26; // [rsp+70h] [rbp-C8h] BYREF
  char v27; // [rsp+B8h] [rbp-80h] BYREF
  int v28; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD *v29; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v30; // [rsp+E0h] [rbp-58h]
  __int64 v31[10]; // [rsp+E8h] [rbp-50h] BYREF

  v31[2] = __readfsqword(0x28u);
  module_data = (_QWORD *)get_module_data((unsigned int)dword_1A374);
  ((void (__fastcall *)(__int64, unsigned __int64 *, __int64, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64))callui)(
    11,
    &v17,
    v1,
    &callui,
    v2,
    v3);
  v18 = (__int64 (__fastcall **)())&unk_19C30;
  v4 = v17;
  v20 = -1;
  v19 = 0x3FF000004LL;
  v22 = "Follow Exception (where can we end up from here)";
  v5 = (int *)&v26;
  v21 = 0;
  v23 = 1;
  v25 = -1;
  v24 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_19A30), (__m128i)(unsigned __int64)&off_19A18);
  do
  {
    *(_QWORD *)v5 = 0;
    v5 += 6;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( &v28 != v5 );
  v28 = 0;
  if ( ((HIDWORD(v19) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v19) != 0xFF )
    {
      if ( !under_debugger )
      {
        v14 = (struct _Unwind_Exception *)interr(3449);
        sub_10240(&v18, (const char *)&v17);
        _Unwind_Resume(v14);
      }
      BUG();
    }
    BYTE3(v19) = ((HIDWORD(v19) >> 19) & 0x3F) - 1;
    HIDWORD(v19) &= 0xFE07FFFF;
  }
  v6 = (const char *)v4;
  v18 = off_196E0;
  v29 = module_data;
  v30 = 0;
  v31[0] = 0;
  v31[1] = v4;
  v7 = sub_F0E0(module_data, v4, v31);
  if ( v7 <= 0 )
  {
    if ( get_func(v4) )
    {
      v6 = (const char *)v4;
      sub_10580((__int64)"No exception handlers reached from %a", 0.0);
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
    v30 = v7;
  }
  v6 = nullptr;
  v17 = 0;
  v9 = callui(16, 0, &v18, &v17, &callui, v8, v15);
  if ( v9 >= 0 && v9 < v30 )
  {
    v6 = (const char *)*(unsigned int *)(v31[0] + 8 * v9 + 4);
    callui(115, v6, 0xFFFFFFFFLL, 1, v10, &callui, v16);
  }
LABEL_11:
  v18 = off_196E0;
  v11 = (__m128i *)&v27;
  qfree(v31[0], v6, 0.0);
  v18 = (__int64 (__fastcall **)())&unk_19C30;
  do
  {
    v12 = v11->m128i_i64[0];
    if ( v11->m128i_i64[0] )
    {
      v11->m128i_i64[1] = 0;
      qfree(v12, v6);
    }
    v11 = (__m128i *)((char *)v11 - 24);
  }
  while ( &v24 != v11 );
  return 1;
}

