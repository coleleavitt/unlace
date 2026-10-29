__int64 __fastcall sub_73590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v9; // rdi
  __int64 v10; // rax
  char v11; // r12
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-A0h]
  __int128 v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+60h] [rbp-48h]
  __int128 v25; // [rsp+68h] [rbp-40h]
  unsigned __int64 v26; // [rsp+78h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v7 = getinf_flag(10, 4, a3, a4, a5, a6, v14, si128.m128i_i64[0], si128.m128i_i64[1]);
  if ( !(_BYTE)v7 )
    return v7;
  v9 = *(_QWORD *)(a1 + 24);
  v14 = 0x800000;
  si128 = _mm_load_si128((const __m128i *)&xmmword_89610);
  v16 = -1;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0xFFFFFFFFLL;
  v21 = 0;
  v22 = 2;
  v23 = -1;
  v24 = 0;
  v25 = 0;
  if ( (int)get_flags_ex(v9, 4) >= 0 || get_switch_info() <= 0 )
  {
    v10 = *(_QWORD *)a1;
    v11 = *(_BYTE *)(*(_QWORD *)a1 + 728LL);
    if ( v11 )
    {
LABEL_5:
      v7 = 0;
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if ( (unsigned int)get_auto_state() == 40 )
  {
    delete_switch_table();
    v10 = *(_QWORD *)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 728LL) )
    {
LABEL_16:
      del_switch_info();
      goto LABEL_5;
    }
    v11 = v7;
LABEL_9:
    *(_BYTE *)(v10 + 728) = 1;
    v12 = sub_23880();
    if ( v12 == -1 )
    {
      *(_BYTE *)(*(_QWORD *)a1 + 728LL) = 0;
    }
    else
    {
      if ( v12 == 1 )
      {
        *(_BYTE *)(*(_QWORD *)a1 + 728LL) = 0;
LABEL_12:
        set_switch_info();
        create_switch_table();
        *(_BYTE *)(a1 + 368) = 0;
        goto LABEL_6;
      }
      v13 = sub_732C0(a1, (__int64)&v14);
      *(_BYTE *)(*(_QWORD *)a1 + 728LL) = 0;
      if ( v13 )
        goto LABEL_12;
    }
    if ( !v11 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_6:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  return v7;
}
