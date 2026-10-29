__int64 __fastcall sub_FE00(__m128i *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  int v5; // r12d
  int v6; // r13d
  unsigned __int16 v7; // cx
  char v8; // r13
  __int64 v10; // rax
  __int64 v11; // [rsp+18h] [rbp-60h] BYREF
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v2 = a1[1].m128i_i64[0];
  v3 = *(unsigned __int16 *)(a2 + 24);
  v14 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(v2 + 104);
  if ( v3 >= v4 && v3 < *(_DWORD *)(v2 + 108) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    a1[37].m128i_i8[8] = ~*(_BYTE *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
    a1[37].m128i_i8[8] &= 1u;
    if ( (v5 & 0x100) != 0 )
      sub_EF30((__int64)a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 40));
    if ( (v5 & 0x200) != 0 )
      sub_EF30((__int64)a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 80));
    v6 = v5 & 0x4000;
    if ( (v5 & 0x400) != 0 )
      sub_EF30((__int64)a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 120));
    if ( (v5 & 0x800) != 0 )
      sub_EF30((__int64)a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 160));
    if ( !sub_11A40((__int64)a1) )
      goto LABEL_14;
    v7 = *(_WORD *)(a2 + 24);
    if ( v7 <= 0x51u )
    {
      if ( v7 <= 0x21u )
        goto LABEL_14;
      goto LABEL_31;
    }
    if ( v7 != 331 && v7 != 334 )
    {
LABEL_14:
      if ( v6 )
      {
        remember_problem();
        v8 = has_insn_feature();
        if ( get_func() )
        {
          if ( sub_F5C0((__int64)a1, &v11, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(a2 + 46)) != -1 )
          {
            insn_add_cref();
            v12 = 0;
            v13 = 0;
            if ( get_cmt() <= 0 )
            {
              if ( get_name_expr() <= 0 )
                sub_FD40(&v12);
              set_cmt();
              if ( a1[37].m128i_i8[8] && v8 )
                a1[37].m128i_i8[8] = func_does_return();
            }
            if ( v12 )
            {
              *(_QWORD *)&v13 = 0;
              qfree();
            }
          }
        }
      }
      goto LABEL_20;
    }
LABEL_40:
    sub_11A50(a1);
    goto LABEL_14;
  }
  a1[37].m128i_i8[8] = 1;
  if ( !sub_11A40((__int64)a1) )
    goto LABEL_24;
  v7 = *(_WORD *)(a2 + 24);
  if ( v7 > 0x51u )
  {
    if ( v7 == 331 )
    {
      sub_11A50(a1);
    }
    else
    {
      v6 = 0;
      LOBYTE(v5) = 0;
      if ( v7 == 334 )
        goto LABEL_40;
    }
  }
  else
  {
    v6 = 0;
    LOBYTE(v5) = 0;
    if ( v7 > 0x21u )
    {
LABEL_31:
      v10 = 1LL << ((unsigned __int8)v7 - 34);
      if ( (v10 & 0x8000000002EELL) == 0 )
      {
        if ( (v10 & 0x400000000011LL) != 0 )
          sub_11A70(a1);
        goto LABEL_14;
      }
      goto LABEL_40;
    }
  }
  LOBYTE(v5) = 0;
LABEL_20:
  if ( (v5 & 4) != 0 )
    sub_EF30((__int64)a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 40));
  if ( (v5 & 8) != 0 )
    sub_EF30((__int64)a1, (_WORD *)a2, (unsigned __int8 *)(a2 + 80));
LABEL_24:
  if ( a1[37].m128i_i8[8] )
    add_cref();
  if ( (unsigned __int8)getinf_flag() && (unsigned int)get_auto_state() == 40 )
  {
    if ( a1[37].m128i_i8[8] )
      sub_F780((__int64)a1, a2);
    else
      recalc_spd();
  }
  return 1;
}

