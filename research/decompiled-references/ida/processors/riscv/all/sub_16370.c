__int64 __fastcall sub_16370(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  char v4; // dl
  __int64 v5; // rcx
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // r9
  __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r14
  int v15; // r13d
  __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  int does_return; // eax
  __int64 v22; // [rsp+10h] [rbp-A8h]
  __int64 v23; // [rsp+20h] [rbp-98h] BYREF
  __int64 v24; // [rsp+28h] [rbp-90h] BYREF
  __int64 v25; // [rsp+30h] [rbp-88h] BYREF
  __int128 v26; // [rsp+38h] [rbp-80h]
  _QWORD *v27; // [rsp+50h] [rbp-68h] BYREF
  __int128 v28; // [rsp+58h] [rbp-60h]
  char v29; // [rsp+68h] [rbp-50h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v2 = *(_WORD *)(a2 + 24);
  v30 = __readfsqword(0x28u);
  if ( v2 == 141 )
  {
    v5 = *(unsigned __int16 *)(a2 + 46);
    v6 = 0;
  }
  else
  {
    v4 = *(_BYTE *)(a2 + 81);
    if ( v4 != 1 && v4 != 4 )
    {
      if ( !under_debugger )
        interr(10475);
      BUG();
    }
    v5 = *(unsigned __int16 *)(a2 + 86);
    v6 = 0;
    if ( v2 == 4 )
      LOBYTE(v6) = *(_WORD *)(a2 + 46) != 0;
  }
  v7 = *(_QWORD *)(a2 + 16);
  v27 = nullptr;
  v29 = 0;
  v28 = 0;
  if ( (unsigned __int8)sub_26470(a1, &v27, v7, v5) && (unsigned __int8)(v29 - 10) <= 1u )
  {
    v11 = v27;
    v23 = 0;
    v25 = 0;
    v12 = v27;
    v26 = 0;
    if ( !(24LL * (_QWORD)v28) )
    {
      if ( !(_BYTE)v6 )
      {
LABEL_31:
        clear_tinfo_t(&v23);
        goto LABEL_32;
      }
      goto LABEL_26;
    }
    v8 = 0;
    v13 = 0;
    v14 = *v27;
    v9 = nullptr;
    v15 = 0;
    v22 = -1;
LABEL_16:
    v17 = v8 + 1;
    if ( *((_QWORD *)&v26 + 1) < v17 )
    {
      v25 = qvector_reserve(&v25, v13, v17, 8);
      v9 = (__int64 *)(v25 + 8 * v26);
    }
    *v9 = v14;
    *(_QWORD *)&v26 = v26 + 1;
    if ( *(_WORD *)(a2 + 24) == 4 && *(_BYTE *)(a2 + 81) == 4 )
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v14 + *(_QWORD *)(a2 + 96));
    v18 = *(_QWORD *)(a2 + 16);
    if ( !(_BYTE)v6 )
    {
      add_cref(v18, v14, 19);
      v24 = 0;
      goto LABEL_21;
    }
    add_cref(v18, v14, 17);
    if ( (_BYTE)v15 )
    {
      v24 = 0;
    }
    else
    {
      does_return = func_does_return(v14);
      v24 = 0;
      v15 = does_return;
      if ( !(_BYTE)does_return )
        goto LABEL_38;
    }
    v15 = v6;
LABEL_38:
    if ( (unsigned __int8)get_tinfo(&v24, v14) )
    {
      if ( (_BYTE)v23 )
      {
        if ( v22 == -1 || !(unsigned __int8)compare_tinfo(v23, v24, 0) )
          v22 = -1;
      }
      else
      {
        copy_tinfo_t(&v23, &v24);
        v22 = v14;
      }
    }
LABEL_21:
    clear_tinfo_t(&v24);
    v11 = v27;
    while ( 1 )
    {
      v12 += 3;
      if ( v12 == &v27[3 * (_QWORD)v28] )
        break;
      v13 = v25;
      v8 = v26;
      v14 = *v12;
      v9 = (__int64 *)(v25 + 8 * v26);
      if ( (__int64 *)v25 != v9 )
      {
        v16 = (__int64 *)v25;
        while ( v14 != *v16 )
        {
          if ( v9 == ++v16 )
            goto LABEL_16;
        }
        if ( v16 != v9 )
          continue;
      }
      goto LABEL_16;
    }
    if ( v22 != -1 )
      auto_apply_type(*(_QWORD *)(a2 + 16), v22, v8, v9, v10, v27);
    if ( !(_BYTE)v6 )
      goto LABEL_27;
    if ( (_BYTE)v15 )
    {
LABEL_28:
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      v6 = v15;
      goto LABEL_31;
    }
LABEL_26:
    set_noret_insn(*(_QWORD *)(a2 + 16), 1, v8, v9, v10, v11);
LABEL_27:
    v15 = 0;
    goto LABEL_28;
  }
LABEL_32:
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  return v6;
}

