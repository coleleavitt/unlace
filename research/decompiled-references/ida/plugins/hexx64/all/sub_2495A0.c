__int64 __fastcall sub_2495A0(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 tinfo_size; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // bl
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // [rsp+8h] [rbp-48h]
  __int64 v30; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  v28 = sub_255000(a3);
  if ( *(_DWORD *)(a1 + 8) == 48 )
  {
    v30 = 0;
    copy_tinfo_t();
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 8) != 48 )
      {
        set_tinfo_property();
        sub_246B40(*(_QWORD *)(a1 + 24), a2, &v30, a4);
        sub_246B40(*(_QWORD *)(a1 + 32), a2, &v30, a4);
        clear_tinfo_t();
        goto LABEL_2;
      }
      tinfo_size = get_tinfo_size();
      v9 = *(_QWORD *)(a1 + 48);
      if ( tinfo_size < get_tinfo_size() )
        break;
      v9 = 2;
      v12 = (get_tinfo_property() & 0xF) == 9;
      if ( v12 != ((get_tinfo_property() & 0xF) == 9) )
        break;
      sub_255850((__int64 *)a1, *(_QWORD *)(a1 + 24));
      if ( get_tinfo_size() == -1 )
      {
        if ( !under_debugger )
          sub_383060(0xC4E2u, a4);
        BUG();
      }
    }
    v13 = j__qalloc_or_throw(64, v9, v10, v11);
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v13 + 24) = 0;
    *(_QWORD *)v13 = -1;
    *(_QWORD *)(v13 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v13 + 48) = 0;
    *(_DWORD *)(v13 + 56) = 0;
    v14 = *(_QWORD *)a1;
    *(_QWORD *)a1 = -1;
    v15 = *(_DWORD *)(v13 + 8);
    *(_QWORD *)v13 = v14;
    LODWORD(v14) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v15;
    v16 = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 8) = v14;
    LODWORD(v14) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v16;
    v17 = *(_QWORD *)(v13 + 24);
    *(_DWORD *)(v13 + 12) = v14;
    v18 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v17;
    v19 = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v13 + 24) = v18;
    v20 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v19;
    v21 = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v13 + 32) = v20;
    v22 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v21;
    v23 = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v13 + 40) = v22;
    v24 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v23;
    LODWORD(v23) = *(_DWORD *)(v13 + 56);
    *(_QWORD *)(v13 + 48) = v24;
    LODWORD(v24) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = v23;
    *(_DWORD *)(v13 + 56) = v24;
    *(_QWORD *)(a1 + 24) = v13;
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      v27 = sub_23E7E0(xmmword_42E1E0, *(_QWORD *)(a1 + 24) + 48LL, v25, v26);
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    else
    {
      v27 = sub_240F50(a2, 0, 0, -1, 0, v28, 0);
    }
    *(_QWORD *)(a1 + 32) = v27;
    *(_DWORD *)(a1 + 8) = a3;
    sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0, 0.0);
    clear_tinfo_t();
    return v31 - __readfsqword(0x28u);
  }
  else
  {
LABEL_2:
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 48 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 48 )
    {
      v6 = (int)sub_23F8B0();
      if ( v6 == get_tinfo_size() )
      {
        v7 = (int)sub_23F8B0();
        if ( v7 == get_tinfo_size()
          && sub_245650(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), a3) )
        {
          sub_255850(*(__int64 **)(a1 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
          sub_255850(*(__int64 **)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
        }
      }
    }
    v30 = 8;
    *(_DWORD *)(a1 + 8) = a3;
    copy_tinfo_t();
    clear_tinfo_t();
    return sub_281F10(a1, a2, 0, 0);
  }
}

