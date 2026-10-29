__int64 __fastcall sub_398000(__int64 a1, double a2, __m128 a3, __m128i a4, double a5)
{
  int v5; // eax
  __int64 v7; // rdx
  _DWORD *v8; // r12
  int v9; // r13d
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  const char *v14; // rsi
  unsigned int v15; // ebx
  __int64 v17; // rax
  __int64 *v18; // r12
  int v19; // r13d
  char op_tinfo; // r14
  int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rax
  _DWORD *v28; // rdi
  _DWORD *v29; // rsi
  int v30; // ecx
  _DWORD *v31; // rax
  const char *v32; // rsi
  __int64 v33; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v34[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a1 + 80);
  v34[1] = __readfsqword(0x28u);
  v33 = 0;
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    if ( v5 != 2 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      v8 = nullptr;
      v9 = -1;
LABEL_4:
      if ( (unsigned __int8)sub_381D00(
                              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL),
                              *(_QWORD *)(v7 + 40),
                              (__int64)&v33,
                              2,
                              a2,
                              a3)
        && (unsigned __int8)sub_389330(
                              &v33,
                              *(_QWORD *)(a1 + 128),
                              *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                              v9,
                              a2,
                              a3) )
      {
        if ( v9 != -1 )
        {
          v10 = v8[6];
          BYTE1(v10) &= 0x7Eu;
          v8[6] = v10 | 0x100000;
          v11 = *(_QWORD *)(a1 + 24);
          v12 = *(_QWORD *)(v11 + 456) + 4LL * v9;
          memmove((void *)v12, (const void *)(v12 + 4), 4 * (*(_QWORD *)(v11 + 464) - v9) - 4LL);
          --*(_QWORD *)(v11 + 464);
        }
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
        goto LABEL_9;
      }
      if ( v9 == -1 )
      {
        v14 = "return value";
        goto LABEL_12;
      }
LABEL_11:
      v14 = "this argument";
LABEL_12:
      sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot remove %s.\nPlease edit the function prototype instead", v14);
      goto LABEL_13;
    }
    v26 = *(_QWORD *)(a1 + 88);
    if ( !v26 || (*(_BYTE *)(v26 + 25) & 1) == 0 )
      goto LABEL_13;
    v27 = sub_1F04A0((__int64 *)(*(_QWORD *)(a1 + 24) + 432LL), v26, a2);
    v8 = (_DWORD *)v27;
    if ( v27 && (*(_BYTE *)(v27 + 25) & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      v28 = *(_DWORD **)(v7 + 456);
      v29 = &v28[*(_QWORD *)(v7 + 464)];
      v30 = -991146299 * ((v27 - *(_QWORD *)(v7 + 432)) >> 3);
      if ( v28 != v29 )
      {
        v31 = *(_DWORD **)(v7 + 456);
        while ( v30 != *v31 )
        {
          if ( v29 == ++v31 )
            goto LABEL_49;
        }
        v9 = v31 - v28;
        if ( v9 != -1 )
        {
          if ( *(int *)(v7 + 68) > 0 && *v8 == 1 )
            goto LABEL_11;
          goto LABEL_4;
        }
      }
LABEL_49:
      if ( !under_debugger )
        sub_383060(0xCCB8u, a2);
    }
    else if ( !under_debugger )
    {
      sub_383060(0xCCB7u, a2);
    }
    BUG();
  }
  v17 = sub_38DCC0(*(_QWORD *)(a1 + 32), a1 + 80, a2);
  v18 = (__int64 *)v17;
  if ( v17 && *(_DWORD *)(*(_QWORD *)(v17 + 24) + 8LL) != 68 )
  {
    v19 = sub_38B7C0(a1, *(_QWORD **)(v17 + 32));
    op_tinfo = get_op_tinfo();
    if ( !op_tinfo )
      copy_tinfo_t();
    v34[0] = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    v21 = get_tinfo_property() & 0xFFFFFFF0;
    if ( (v21 == 64 || v21 == 208) && v19 >= (int)get_tinfo_property() )
    {
      sub_2B4E70(
        (__int64)"AUTOHIDE NONE\nSorry, cannot remove variadic arguments\nPlease use 'Delete variadic argument' instead",
        23);
    }
    else
    {
      if ( (unsigned __int8)sub_389330(&v33, *(_QWORD *)(a1 + 128), *v18, v19, a2, a3) )
      {
        if ( op_tinfo || (v22 = v18[3], *(_DWORD *)(v22 + 8) != 64) )
        {
          set_op_tinfo();
          sub_395A90(a1, 0, a2, v23, v24, v25, *(double *)a3.m128_u64, a4, a5);
          sub_1CE9E0(*(_QWORD *)(a1 + 24));
          reanalyze_function();
          goto LABEL_25;
        }
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
        {
          sub_32C540(v34, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), &v33);
          copy_tinfo_t();
          clear_tinfo_t();
        }
        v13 = *(_QWORD *)(v22 + 24);
LABEL_9:
        sub_397700(a1, (char *)&v33, v13, 0, 0, a2, *(double *)a3.m128_u64, a4, a5);
LABEL_25:
        v15 = 1;
        goto LABEL_14;
      }
      v32 = "remove this argument";
      if ( v19 == -1 )
        v32 = "convert function to 'void'";
      sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, cannot %s.\n", v32);
    }
  }
LABEL_13:
  v15 = 0;
LABEL_14:
  clear_tinfo_t();
  return v15;
}

