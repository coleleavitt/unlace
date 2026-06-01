__int64 __fastcall sub_245920(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        int a18,
        __int64 a19)
{
  int v19; // r8d
  int v20; // r9d
  __int64 v22; // rbx
  __int64 v23; // rbx
  unsigned __int64 tinfo_size; // rbx
  bool v25; // bl
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // [rsp+8h] [rbp-48h]
  __int64 v41; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+18h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v39 = sub_251380(a3, a2);
  if ( *(_DWORD *)(a1 + 8) == 48 )
  {
    v41 = 0;
    copy_tinfo_t();
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 8) != 48 )
      {
        set_tinfo_property();
        sub_242EC0(*(_QWORD *)(a1 + 24), a2, &v41);
        sub_242EC0(*(_QWORD *)(a1 + 32), a2, &v41);
        clear_tinfo_t();
        goto LABEL_2;
      }
      tinfo_size = get_tinfo_size();
      if ( tinfo_size < get_tinfo_size() )
        break;
      v25 = (get_tinfo_property() & 0xF) == 9;
      if ( v25 != ((get_tinfo_property() & 0xF) == 9) )
        break;
      sub_251BD0(a1, *(_QWORD *)(a1 + 24));
      if ( get_tinfo_size() == -1 )
      {
        if ( !under_debugger )
          sub_37EEE0(50402);
        BUG();
      }
    }
    v26 = j__qalloc_or_throw();
    *(_QWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v26 + 24) = 0;
    *(_QWORD *)v26 = -1;
    *(_QWORD *)(v26 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v26 + 48) = 0;
    *(_DWORD *)(v26 + 56) = 0;
    v27 = *(_QWORD *)a1;
    *(_QWORD *)a1 = -1;
    v28 = *(_DWORD *)(v26 + 8);
    *(_QWORD *)v26 = v27;
    LODWORD(v27) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v28;
    v29 = *(_DWORD *)(v26 + 12);
    *(_DWORD *)(v26 + 8) = v27;
    LODWORD(v27) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v29;
    v30 = *(_QWORD *)(v26 + 24);
    *(_DWORD *)(v26 + 12) = v27;
    v31 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v30;
    v32 = *(_QWORD *)(v26 + 32);
    *(_QWORD *)(v26 + 24) = v31;
    v33 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v32;
    v34 = *(_QWORD *)(v26 + 40);
    *(_QWORD *)(v26 + 32) = v33;
    v35 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v34;
    v36 = *(_QWORD *)(v26 + 48);
    *(_QWORD *)(v26 + 40) = v35;
    v37 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v36;
    LODWORD(v36) = *(_DWORD *)(v26 + 56);
    *(_QWORD *)(v26 + 48) = v37;
    LODWORD(v37) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = v36;
    *(_DWORD *)(v26 + 56) = v37;
    *(_QWORD *)(a1 + 24) = v26;
    if ( (get_tinfo_property() & 0xF) == 9 )
    {
      v38 = sub_23AB60(xmmword_41B580);
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    else
    {
      v38 = sub_23D2D0(a2, 0, 0, -1, 0, v39, 0);
    }
    *(_QWORD *)(a1 + 32) = v38;
    *(_DWORD *)(a1 + 8) = a3;
    sub_240540(a1, *(_QWORD *)(a2 + 112), 0);
    clear_tinfo_t();
    return v42 - __readfsqword(0x28u);
  }
  else
  {
LABEL_2:
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 48 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 48 )
    {
      v22 = (int)sub_23BC30();
      if ( v22 == get_tinfo_size() )
      {
        v23 = (int)sub_23BC30();
        if ( v23 == get_tinfo_size()
          && sub_2419D0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), a3) )
        {
          sub_251BD0(*(_QWORD *)(a1 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL));
          sub_251BD0(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
        }
      }
    }
    v41 = 8;
    *(_DWORD *)(a1 + 8) = a3;
    copy_tinfo_t();
    clear_tinfo_t();
    return sub_27E290(a1, a2, 0, 0, v19, v20, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
  }
}

