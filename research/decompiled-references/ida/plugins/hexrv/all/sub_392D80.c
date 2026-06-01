__int64 __fastcall sub_392D80(__int64 a1, double a2)
{
  int v2; // eax
  __int64 v4; // rdx
  _DWORD *v5; // r12
  int v6; // r13d
  int v7; // eax
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdx
  const char *v11; // rsi
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 *v15; // r12
  int v16; // r13d
  char op_tinfo; // r14
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  _DWORD *v25; // rdi
  _DWORD *v26; // rsi
  int v27; // ecx
  _DWORD *v28; // rax
  const char *v29; // rsi
  __int64 v30; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v31[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  v31[1] = __readfsqword(0x28u);
  v30 = 0;
  if ( (unsigned int)(v2 - 2) <= 1 )
  {
    if ( v2 != 2 )
    {
      v4 = *(_QWORD *)(a1 + 24);
      v5 = nullptr;
      v6 = -1;
LABEL_4:
      if ( (unsigned __int8)sub_37CA80(
                              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL),
                              *(_QWORD *)(v4 + 40),
                              (__int64)&v30,
                              2)
        && (unsigned __int8)sub_3840B0(&v30, *(_QWORD *)(a1 + 128), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), v6) )
      {
        if ( v6 != -1 )
        {
          v7 = v5[6];
          BYTE1(v7) &= 0x7Eu;
          v5[6] = v7 | 0x100000;
          v8 = *(_QWORD *)(a1 + 24);
          v9 = *(_QWORD *)(v8 + 456) + 4LL * v6;
          memmove((void *)v9, (const void *)(v9 + 4), 4 * (*(_QWORD *)(v8 + 464) - v6) - 4LL);
          --*(_QWORD *)(v8 + 464);
        }
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
        goto LABEL_9;
      }
      if ( v6 == -1 )
      {
        v11 = "return value";
        goto LABEL_12;
      }
LABEL_11:
      v11 = "this argument";
LABEL_12:
      sub_2B0270((__int64)"AUTOHIDE NONE\nSorry, cannot remove %s.\nPlease edit the function prototype instead", v11);
      goto LABEL_13;
    }
    v23 = *(_QWORD *)(a1 + 88);
    if ( !v23 || (*(_BYTE *)(v23 + 25) & 1) == 0 )
      goto LABEL_13;
    v24 = sub_1EB8A0((__int64 *)(*(_QWORD *)(a1 + 24) + 432LL), v23);
    v5 = (_DWORD *)v24;
    if ( v24 && (*(_BYTE *)(v24 + 25) & 1) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 24);
      v25 = *(_DWORD **)(v4 + 456);
      v26 = &v25[*(_QWORD *)(v4 + 464)];
      v27 = -991146299 * ((v24 - *(_QWORD *)(v4 + 432)) >> 3);
      if ( v25 != v26 )
      {
        v28 = *(_DWORD **)(v4 + 456);
        while ( v27 != *v28 )
        {
          if ( v26 == ++v28 )
            goto LABEL_49;
        }
        v6 = v28 - v25;
        if ( v6 != -1 )
        {
          if ( *(int *)(v4 + 68) > 0 && *v5 == 1 )
            goto LABEL_11;
          goto LABEL_4;
        }
      }
LABEL_49:
      if ( !under_debugger )
        sub_37DDE0(0xCCB8u, a2);
    }
    else if ( !under_debugger )
    {
      sub_37DDE0(0xCCB7u, a2);
    }
    BUG();
  }
  v14 = sub_388A40(*(_QWORD *)(a1 + 32), a1 + 80, a2);
  v15 = (__int64 *)v14;
  if ( v14 && *(_DWORD *)(*(_QWORD *)(v14 + 24) + 8LL) != 68 )
  {
    v16 = sub_386540(a1, *(_QWORD **)(v14 + 32));
    op_tinfo = get_op_tinfo();
    if ( !op_tinfo )
      copy_tinfo_t();
    v31[0] = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    v18 = get_tinfo_property() & 0xFFFFFFF0;
    if ( (v18 == 64 || v18 == 208) && v16 >= (int)get_tinfo_property() )
    {
      sub_2B0270(
        (__int64)"AUTOHIDE NONE\nSorry, cannot remove variadic arguments\nPlease use 'Delete variadic argument' instead",
        23);
    }
    else
    {
      if ( (unsigned __int8)sub_3840B0(&v30, *(_QWORD *)(a1 + 128), *v15, v16) )
      {
        if ( op_tinfo || (v19 = v15[3], *(_DWORD *)(v19 + 8) != 64) )
        {
          set_op_tinfo();
          sub_390810(a1, 0, a2, v20, v21, v22);
          sub_1CA360(*(_QWORD *)(a1 + 24));
          reanalyze_function();
          goto LABEL_25;
        }
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
        {
          sub_327290(v31, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), &v30);
          copy_tinfo_t();
          clear_tinfo_t();
        }
        v10 = *(_QWORD *)(v19 + 24);
LABEL_9:
        sub_392480(a1, (const char *)&v30, v10, 0, 0, a2);
LABEL_25:
        v12 = 1;
        goto LABEL_14;
      }
      v29 = "remove this argument";
      if ( v16 == -1 )
        v29 = "convert function to 'void'";
      sub_2B0270((__int64)"AUTOHIDE NONE\nSorry, cannot %s.\n", v29);
    }
  }
LABEL_13:
  v12 = 0;
LABEL_14:
  clear_tinfo_t();
  return v12;
}

