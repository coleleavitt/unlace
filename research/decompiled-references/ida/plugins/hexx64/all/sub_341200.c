__int64 __fastcall sub_341200(__m128i *a1, __m128 a2)
{
  __int64 (*v3)(); // rax
  unsigned int v4; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // r12d
  const char *v12; // r13
  const char *v13; // r14
  const char *v14; // rsi
  char *v15; // rax
  const char *v16; // rdi
  const char *v17; // [rsp+0h] [rbp-80h] BYREF
  __int128 v18; // [rsp+8h] [rbp-78h]
  const char *v19; // [rsp+20h] [rbp-60h] BYREF
  __int128 v20; // [rsp+28h] [rbp-58h]
  int v21; // [rsp+42h] [rbp-3Eh]
  __int16 v22; // [rsp+46h] [rbp-3Ah]
  unsigned __int64 v23; // [rsp+48h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  sub_329DA0(a1, 1);
  sub_340930((__int64)a1, a2);
  v3 = **(__int64 (***)())a1[7].m128i_i64[0];
  if ( v3 == sub_339260 )
    return 0;
  v4 = v3();
  if ( !(_BYTE)v4 )
  {
    return 0;
  }
  else
  {
    sub_1CE950((unsigned __int64 *)(*(_QWORD *)(a1[7].m128i_i64[0] + 96) + 1408LL));
    sub_32B210((__int64)a1, *(double *)a2.m128_u64);
    sub_3758C0((__int64)a1, *(double *)a2.m128_u64);
    sub_3D5670((__int64)a1, *(double *)a2.m128_u64);
    hook_event_listener();
    if ( (unsigned __int8)is_cvt64() )
    {
      sub_3CE0F0((__int64)a1);
      *(_BYTE *)(a1[52].m128i_i64[1] + 286) |= 1u;
      sub_33B870((__int64)a1);
      sub_389B00();
    }
    else
    {
      hook_event_listener();
      hook_event_listener();
      hook_event_listener();
      register_post_event_visitor();
      sub_3A5AE0(a1, &a1[34].m128i_u64[1]);
      sub_3C4D50(1, *(double *)a2.m128_u64);
      sub_3C0EB0(a1);
      sub_3C0EF0((__int64)a1, (__int64)&a1[34].m128i_i64[1], v6, v7, v8, v9);
      if ( !(unsigned __int8)register_cfgopts() )
        sub_33A010(*(double *)a2.m128_u64);
      v17 = nullptr;
      v18 = 0;
      sub_6B870((__int64 *)&v17);
      sub_6D0A0((__int64)"%s plugin has been loaded (v%s)\n", "Hex-Rays Decompiler", a930260327);
      v10 = a1[52].m128i_i64[1];
      v21 = 0;
      v22 = 0;
      if ( *(_DWORD *)(v10 + 84) || *(_WORD *)(v10 + 88) )
      {
        v11 = *(unsigned __int16 *)(v10 + 62);
        v12 = (const char *)&unk_418793;
        v20 = 0;
        v13 = (const char *)(v10 + 90);
        v19 = nullptr;
        if ( (unsigned __int16)v11 >= 2u )
          v12 = (const char *)&unk_4190BE;
        sub_6B870((__int64 *)&v19);
        v14 = s1;
        if ( (_QWORD)v20 )
          v14 = v19;
        sub_6D0A0((__int64)"  License: %s %s (%d user%s)\n", v14, v13, v11, v12);
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree((__int64)v19);
        }
      }
      sub_6D0A0((__int64)"  %s\n  Please check the Edit/Plugins menu for more information.\n", v17);
      v15 = (char *)sub_33B410(a1[7].m128i_i64[0], 1u);
      if ( v15 )
        a1[83].m128i_i32[2] = sub_33BC80((__int64)a1, v15, a1[82].m128i_i64, nullptr);
      if ( under_debugger )
        a1[83].m128i_i32[2] |= 0x8000u;
      sub_389B00();
      v16 = v17;
      *(_BYTE *)(a1[52].m128i_i64[1] + 286) |= 2u;
      if ( v16 )
      {
        *(_QWORD *)&v18 = 0;
        qfree((__int64)v16);
      }
    }
  }
  return v4;
}

