__int64 __fastcall sub_33C300(__int64 a1)
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
  sub_324F90(a1, 1);
  sub_33BA30(a1);
  v2 = ***(__int64 (****)())(a1 + 112);
  if ( v2 == sub_334020 )
    return 0;
  v3 = v2();
  if ( !(_BYTE)v3 )
  {
    return 0;
  }
  else
  {
    sub_1CA590((unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 96LL) + 1408LL));
    sub_3262E0(a1);
    sub_3709C0(a1);
    sub_3D0770(a1);
    hook_event_listener();
    if ( (unsigned __int8)is_cvt64() )
    {
      sub_3C91F0(a1, a1 + 504);
      *(_BYTE *)(*(_QWORD *)(a1 + 840) + 286LL) |= 1u;
      sub_336960(a1);
      sub_384C00(a1);
    }
    else
    {
      hook_event_listener();
      hook_event_listener();
      hook_event_listener();
      register_post_event_visitor();
      sub_3A0BE0(a1, a1 + 552);
      sub_3BFE50(1, a1 + 552);
      sub_3BBFB0(a1);
      sub_3BBFF0(a1);
      if ( !(unsigned __int8)register_cfgopts() )
        sub_335100(&off_4C6180, 27);
      v12 = nullptr;
      v13 = 0;
      sub_67670((__int64 *)&v12);
      sub_68EA0((__int64)"%s plugin has been loaded (v%s)\n", "Hex-Rays Decompiler", a930260327);
      v5 = *(_QWORD *)(a1 + 840);
      v16 = 0;
      v17 = 0;
      if ( *(_DWORD *)(v5 + 84) || *(_WORD *)(v5 + 88) )
      {
        v6 = *(unsigned __int16 *)(v5 + 62);
        v7 = (const char *)&unk_3FC793;
        v15 = 0;
        v8 = (const char *)(v5 + 90);
        v14 = nullptr;
        if ( (unsigned __int16)v6 >= 2u )
          v7 = (const char *)&unk_3FD0D3;
        sub_67670((__int64 *)&v14);
        v9 = s1;
        if ( (_QWORD)v15 )
          v9 = v14;
        sub_68EA0((__int64)"  License: %s %s (%d user%s)\n", v9, v8, v6, v7);
        if ( v14 )
        {
          *(_QWORD *)&v15 = 0;
          qfree();
        }
      }
      sub_68EA0((__int64)"  %s\n  Please check the Edit/Plugins menu for more information.\n", v12);
      v10 = (char *)sub_336500(*(_QWORD *)(a1 + 112), 1u);
      if ( v10 )
        *(_DWORD *)(a1 + 1336) = sub_336D70(a1, v10, a1 + 1312, nullptr);
      if ( under_debugger )
        *(_DWORD *)(a1 + 1336) |= 0x8000u;
      sub_384C00(a1);
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

