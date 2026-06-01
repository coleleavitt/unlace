__int64 __fastcall sub_33BF80(__int64 a1)
{
  __int64 (*v2)(); // rax
  unsigned int v3; // r15d
  __int64 v5; // rax
  int v6; // r12d
  const char *v7; // r13
  const char *v8; // r14
  const char *v9; // rsi
  char *v10; // rax
  const char *v11; // rdi
  const char *v12; // [rsp+0h] [rbp-80h] BYREF
  __int128 v13; // [rsp+8h] [rbp-78h]
  const char *v14; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+42h] [rbp-3Eh]
  __int16 v17; // [rsp+46h] [rbp-3Ah]
  unsigned __int64 v18; // [rsp+48h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  sub_324C10(a1, 1);
  sub_33B6B0(a1);
  v2 = ***(__int64 (****)())(a1 + 112);
  if ( v2 == sub_333CA0 )
    return 0;
  v3 = v2();
  if ( !(_BYTE)v3 )
  {
    return 0;
  }
  else
  {
    sub_1CA2D0((unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 96LL) + 1408LL));
    sub_325F60(a1);
    sub_370640(a1);
    sub_3D03F0(a1);
    hook_event_listener();
    if ( (unsigned __int8)is_cvt64() )
    {
      sub_3C8E70(a1, a1 + 504);
      *(_BYTE *)(*(_QWORD *)(a1 + 840) + 286LL) |= 1u;
      sub_3365E0(a1);
      sub_384880(a1);
    }
    else
    {
      hook_event_listener();
      hook_event_listener();
      hook_event_listener();
      register_post_event_visitor();
      sub_3A0860(a1, a1 + 552);
      sub_3BFAD0(1, a1 + 552);
      sub_3BBC30(a1);
      sub_3BBC70(a1);
      if ( !(unsigned __int8)register_cfgopts() )
        sub_334D80(&off_4B8480, 27);
      v12 = nullptr;
      v13 = 0;
      sub_674F0((__int64 *)&v12);
      sub_68D20((__int64)"%s plugin has been loaded (v%s)\n", "Hex-Rays Decompiler", a930260327);
      v5 = *(_QWORD *)(a1 + 840);
      v16 = 0;
      v17 = 0;
      if ( *(_DWORD *)(v5 + 84) || *(_WORD *)(v5 + 88) )
      {
        v6 = *(unsigned __int16 *)(v5 + 62);
        v7 = (const char *)&unk_3F3793;
        v15 = 0;
        v8 = (const char *)(v5 + 90);
        v14 = nullptr;
        if ( (unsigned __int16)v6 >= 2u )
          v7 = (const char *)&unk_3F40D2;
        sub_674F0((__int64 *)&v14);
        v9 = s1;
        if ( (_QWORD)v15 )
          v9 = v14;
        sub_68D20((__int64)"  License: %s %s (%d user%s)\n", v9, v8, v6, v7);
        if ( v14 )
        {
          *(_QWORD *)&v15 = 0;
          qfree();
        }
      }
      sub_68D20((__int64)"  %s\n  Please check the Edit/Plugins menu for more information.\n", v12);
      v10 = (char *)sub_336180(*(_QWORD *)(a1 + 112), 1u);
      if ( v10 )
        *(_DWORD *)(a1 + 1336) = sub_3369F0(a1, v10, a1 + 1312, nullptr);
      if ( under_debugger )
        *(_DWORD *)(a1 + 1336) |= 0x8000u;
      sub_384880(a1);
      v11 = v12;
      *(_BYTE *)(*(_QWORD *)(a1 + 840) + 286LL) |= 2u;
      if ( v11 )
      {
        *(_QWORD *)&v13 = 0;
        qfree();
      }
    }
  }
  return v3;
}

