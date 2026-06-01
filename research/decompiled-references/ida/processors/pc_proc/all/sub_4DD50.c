__int64 __fastcall sub_4DD50(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // eax
  __int64 v5; // r13
  char v6; // r15
  __int64 v7; // rax
  int v8; // eax
  unsigned __int64 head; // r13
  __int64 v10; // r15
  __int64 v11; // r14
  _BOOL4 v12; // r14d
  unsigned int v13; // r14d
  unsigned __int64 v14; // r12
  int v15; // [rsp+0h] [rbp-F0h]
  char v16; // [rsp+4h] [rbp-ECh]
  __int64 v17; // [rsp+8h] [rbp-E8h]
  __int64 v18; // [rsp+10h] [rbp-E0h]
  char v19; // [rsp+2Fh] [rbp-C1h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-B8h]
  __int64 v22; // [rsp+40h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+48h] [rbp-A8h]
  __int128 v24; // [rsp+58h] [rbp-98h]
  __int64 v25; // [rsp+68h] [rbp-88h]
  __int64 v26; // [rsp+70h] [rbp-80h]
  __int64 v27; // [rsp+78h] [rbp-78h]
  __int64 v28; // [rsp+80h] [rbp-70h]
  __int64 v29; // [rsp+88h] [rbp-68h]
  __int64 v30; // [rsp+90h] [rbp-60h]
  __int64 v31; // [rsp+98h] [rbp-58h]
  __int64 v32; // [rsp+A0h] [rbp-50h]
  __int128 v33; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v34; // [rsp+B8h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  v2 = getinf_flag();
  if ( !(_BYTE)v2 )
    return v2;
  v22 = 0x800000;
  si128 = _mm_load_si128((const __m128i *)&xmmword_960E0);
  v24 = -1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0xFFFFFFFFLL;
  v29 = 0;
  v30 = 2;
  v31 = -1;
  v32 = 0;
  v33 = 0;
  v4 = get_flags_ex() & 0x80000000;
  v5 = v4;
  if ( !v4 )
  {
    if ( *(_BYTE *)(a1 + 5433) )
    {
LABEL_5:
      v2 = 0;
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if ( get_switch_info() <= 0 )
  {
    if ( *(_BYTE *)(a1 + 5433) )
      goto LABEL_5;
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  if ( (unsigned int)get_auto_state() != 40 )
    goto LABEL_6;
  delete_switch_table();
  if ( *(_BYTE *)(a1 + 5433) )
    goto LABEL_22;
  v6 = v2;
LABEL_10:
  *(_BYTE *)(a1 + 5433) = 1;
  v7 = sub_23600();
  if ( v7 == -1 )
  {
    *(_BYTE *)(a1 + 5433) = 0;
    if ( !v6 )
      goto LABEL_5;
    goto LABEL_22;
  }
  if ( v7 == 1 )
  {
    *(_BYTE *)(a1 + 5433) = 0;
    goto LABEL_24;
  }
  v8 = sub_4CC60(a1, (__int64)&v22, (_BYTE *)a2);
  if ( v8 )
  {
    *(_BYTE *)(a1 + 5433) = 0;
    if ( v8 != 1 )
    {
      if ( v8 == 2 )
      {
        create_func_table();
        goto LABEL_6;
      }
      if ( !v6 )
        goto LABEL_5;
LABEL_22:
      del_switch_info();
      goto LABEL_5;
    }
LABEL_24:
    set_switch_info();
    create_switch_table();
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 5433) = 0;
  if ( v6 )
    del_switch_info();
  if ( (*(_BYTE *)(a2 + 28) & 0x18) != 0 )
    goto LABEL_5;
  if ( v5 && get_jumptable_info() > 0 )
  {
    if ( (unsigned __int8)sub_4DCA0(a1, a2, &v20) )
    {
      if ( !v21 )
      {
        del_jumptable_info();
        goto LABEL_5;
      }
      set_jumptable_info();
    }
    head = v20;
    v10 = v21;
    v18 = *(_QWORD *)(a2 + 16);
    v11 = sub_23600();
    v16 = v11 == 1;
    v17 = 16LL * *(_QWORD *)a2;
    v15 = (1 << (*(_BYTE *)(getseg() + 43) + 4)) / 8;
    v12 = v11 != 1;
    if ( (unsigned __int8)is_call_insn() )
      v13 = v12 + 16;
    else
      v13 = v12 + 18;
    v14 = head + v10;
    v19 = 0;
    while ( head < v14 )
    {
      sub_483C0(a1, v18, head, v17, v15, v13, v16, &v19);
      head = next_head();
    }
    goto LABEL_6;
  }
  v2 = sub_4D8F0(a1, a2);
LABEL_6:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  return v2;
}

