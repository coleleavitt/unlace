__int64 __fastcall sub_1F170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  char v10; // r13
  __int64 v11; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-A0h]
  __int128 v17; // [rsp+18h] [rbp-90h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-60h]
  __int64 v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  __int64 v25; // [rsp+60h] [rbp-48h]
  __int128 v26; // [rsp+68h] [rbp-40h]
  unsigned __int64 v27; // [rsp+78h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v7 = getinf_flag(10, 4, a3, a4, a5, a6);
  if ( (_BYTE)v7 )
  {
    if ( *(_WORD *)(a1 + 24) != 72 && *(_WORD *)(a1 + 24) != 44 )
      return 0;
    v8 = *(_QWORD *)(a1 + 16);
    v15 = 0x800000;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23BD0);
    v17 = -1;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0xFFFFFFFFLL;
    v22 = 0;
    v23 = 2;
    v24 = -1;
    v25 = 0;
    v26 = 0;
    if ( (int)get_flags_ex(v8, 4) >= 0 || (v13 = *(_QWORD *)(a1 + 16), get_switch_info(&v15, v13) <= 0) )
    {
      v9 = sub_185F0(0x28u, &v15, a1);
      v10 = 0;
      if ( v9 == -1 )
        goto LABEL_9;
    }
    else
    {
      if ( (v15 & 0x800000) != 0 && (int)v23 > 1 && (v15 & 0x10) != 0
        || (unsigned int)get_auto_state(&v15, v13, v14) != 40 )
      {
        goto LABEL_13;
      }
      delete_switch_table(*(_QWORD *)(a1 + 16), &v15);
      v9 = sub_185F0(0x28u, &v15, a1);
      if ( v9 == -1 )
      {
LABEL_8:
        del_switch_info(*(_QWORD *)(a1 + 16));
LABEL_9:
        v11 = v25;
        v7 = 0;
        if ( !v25 )
          return v7;
LABEL_14:
        *(_QWORD *)&v26 = 0;
        qfree(v11);
        return v7;
      }
      v10 = v7;
    }
    if ( v9 != 1 && !(unsigned __int8)check_for_table_jump(&v15, a1, off_2DB50, 3, 0, 0) )
    {
      if ( !v10 )
        goto LABEL_9;
      goto LABEL_8;
    }
    set_switch_info(*(_QWORD *)(a1 + 16), &v15);
    create_switch_table(*(_QWORD *)(a1 + 16), &v15);
LABEL_13:
    v11 = v25;
    if ( !v25 )
      return v7;
    goto LABEL_14;
  }
  return v7;
}
