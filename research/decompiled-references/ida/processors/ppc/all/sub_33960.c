unsigned __int64 __fastcall sub_33960(__int64 a1)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // [rsp+0h] [rbp-98h] BYREF
  __m128i si128; // [rsp+8h] [rbp-90h]
  __int128 v7; // [rsp+18h] [rbp-80h]
  __int64 v8; // [rsp+28h] [rbp-70h]
  __int64 v9; // [rsp+30h] [rbp-68h]
  __int64 v10; // [rsp+38h] [rbp-60h]
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  __int64 v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int128 v16; // [rsp+68h] [rbp-30h]
  unsigned __int64 v17; // [rsp+78h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( !(unsigned __int8)getinf_flag(10, 4) )
    return v17 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 16);
  v5 = 0x800000;
  si128 = _mm_load_si128((const __m128i *)&xmmword_77D80);
  v7 = -1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0xFFFFFFFFLL;
  v12 = 0;
  v13 = 2;
  v14 = -1;
  v15 = 0;
  v16 = 0;
  if ( (int)get_flags_ex(v3, 4) < 0
    && get_switch_info(&v5, *(_QWORD *)(a1 + 16)) > 0
    && ((v5 & 0x800000) != 0 && (int)v13 > 1 && (v5 & 0x10) != 0 || (unsigned int)get_auto_state() != 40) )
  {
    if ( !v15 )
      return v17 - __readfsqword(0x28u);
    goto LABEL_9;
  }
  v4 = sub_338A0(0x28u, &v5, a1);
  if ( v4 != -1 && (v4 == 1 || (unsigned __int8)check_for_table_jump(&v5, a1, off_84F80, 8, 0, 0)) )
  {
    set_switch_info(*(_QWORD *)(a1 + 16), &v5);
    create_switch_table(*(_QWORD *)(a1 + 16), &v5);
  }
  if ( v15 )
  {
LABEL_9:
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v17 - __readfsqword(0x28u);
}

