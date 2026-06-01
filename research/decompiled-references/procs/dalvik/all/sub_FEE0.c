_BOOL8 sub_FEE0()
{
  struct _Unwind_Exception *module_data; // r12
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __m128i v10; // xmm0
  unsigned int v11; // edx
  __int64 *v13; // rbp
  __int64 v14; // rdi
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  module_data = (struct _Unwind_Exception *)get_module_data((unsigned int)dword_1A374);
  ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))callui)(11, v15, v1, v2, v3, v4);
  v5 = v15[0];
  v6 = qalloc_or_throw(200);
  *(_QWORD *)v6 = &unk_19C30;
  *(_QWORD *)(v6 + 8) = 0x480FF000004LL;
  *(_QWORD *)(v6 + 40) = "Type Names";
  *(_OWORD *)(v6 + 16) = -1;
  v9 = (_QWORD *)(v6 + 80);
  v10 = _mm_loadl_epi64((const __m128i *)&off_19A20);
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 48) = 4;
  *(_DWORD *)(v6 + 72) = -1;
  *(__m128i *)(v6 + 56) = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)off_199E0);
  do
  {
    *v9 = 0;
    v9 += 3;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( v9 != (_QWORD *)(v6 + 176) );
  *(_DWORD *)(v6 + 176) = 0;
  v11 = *(_DWORD *)(v6 + 12);
  if ( ((v11 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v6 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr(3449);
        v13 = (__int64 *)(v6 + 152);
        while ( 1 )
        {
          v14 = *v13;
          if ( *v13 )
          {
            v13[1] = 0;
            qfree(v14, (const char *)v15, 0.0);
          }
          v13 -= 3;
          if ( v13 == (__int64 *)(v6 + 56) )
          {
            qfree(v6, (const char *)v15, 0.0);
            _Unwind_Resume(module_data);
          }
        }
      }
      BUG();
    }
    *(_BYTE *)(v6 + 11) = ((v11 >> 19) & 0x3F) - 1;
    *(_DWORD *)(v6 + 12) = v11 & 0xFE07FFFF;
  }
  *(_QWORD *)v6 = off_198C0;
  *(_QWORD *)(v6 + 184) = module_data;
  *(_QWORD *)(v6 + 192) = v5;
  v15[0] = -1;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD *, __int64, __int64))callui)(16, 0, v6, v15, v7, v8) == 0;
}
