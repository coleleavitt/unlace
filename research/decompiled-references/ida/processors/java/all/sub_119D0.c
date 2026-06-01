__int64 __fastcall sub_119D0(_QWORD *a1, const __m128i *a2, double a3)
{
  int v4; // r13d
  __int8 v5; // al
  char v6; // cl
  unsigned __int8 v7; // dl
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 module_data; // rax
  char v22; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 160);
  v22 = 0;
  *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 160) = 251658240;
  switch ( a2->m128i_i8[1] )
  {
    case 0:
      goto LABEL_5;
    case 2:
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
        goto LABEL_34;
      if ( a2[2].m128i_i8[0] )
        goto LABEL_23;
      v20 = a2[1].m128i_i64[0];
      module_data = get_module_data((unsigned int)dword_2D4F4);
      if ( (unsigned __int8)sub_10290(
                              a1,
                              a1[30] + a2->m128i_i8[2],
                              a2->m128i_u8[0],
                              *(_QWORD *)(module_data + 33165),
                              v20,
                              &v22) )
        goto LABEL_7;
      if ( v22 )
        goto LABEL_5;
LABEL_34:
      v6 = 0;
      goto LABEL_24;
    case 5:
      v5 = a2[2].m128i_i8[0];
      if ( v5 == 2 )
      {
        v22 = 1;
        v6 = 1;
        v7 = 9;
      }
      else
      {
        v6 = 0;
        v7 = v5 == 0 ? 12 : 9;
      }
      goto LABEL_4;
    case 7:
      if ( a2[2].m128i_i8[0] )
      {
        v22 = 1;
        v6 = 1;
LABEL_10:
        v7 = -55;
        goto LABEL_4;
      }
      v14 = a2[1].m128i_i64[0];
      v15 = get_module_data((unsigned int)dword_2D4F4);
      if ( (unsigned __int8)sub_10290(
                              a1,
                              a1[30] + a2->m128i_i8[2],
                              a2->m128i_u8[0],
                              *(_QWORD *)(v15 + 33157),
                              v14,
                              &v22) )
      {
LABEL_7:
        *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 160) = v4;
        return 1;
      }
      else
      {
        v6 = 0;
        if ( !v22 )
          goto LABEL_10;
LABEL_5:
        *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 160) = v4;
        return 0;
      }
    case 8:
      if ( !a2[1].m128i_i16[4] )
      {
        v19 = get_module_data((unsigned int)dword_2D4F4);
        *(_QWORD *)(v19 + 176) += 4LL;
        (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "NULL", 32);
        goto LABEL_7;
      }
      if ( a2[2].m128i_i8[0] )
      {
LABEL_23:
        v22 = 1;
        v6 = 1;
LABEL_24:
        v7 = -87;
LABEL_4:
        if ( (unsigned __int8)sub_10360(a1, (__int64)a2, v7, v6) )
          goto LABEL_7;
      }
      else if ( (unsigned __int8)sub_10F40(a1, a2, 0) )
      {
        goto LABEL_7;
      }
      goto LABEL_5;
    case 9:
      if ( !a2[2].m128i_i8[0] )
      {
        v9 = 0;
        if ( (unsigned __int8)(a2[1].m128i_i16[5] - 4) <= 7u )
          v9 = (unsigned __int8)aZcfdbsijbogust[(unsigned __int8)(a2[1].m128i_i8[10] - 4)];
        v10 = sub_1F6F0(v9, 0);
        if ( v10 )
        {
          v11 = *(unsigned __int8 *)(v10 + 8);
          v12 = *(_QWORD *)v10;
          if ( sub_FD50(a1, v11) )
          {
            v13 = get_module_data((unsigned int)dword_2D4F4);
            *(_QWORD *)(v13 + 176) += v11;
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v12, 32);
            goto LABEL_7;
          }
        }
        goto LABEL_5;
      }
      if ( !sub_FD50(a1, 15) )
        goto LABEL_5;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
      v16 = (a1[4] == 0) + a1[4] - 1LL;
      sub_87F0((__int64)a1, (__int64)"%c%s%u", 35, "BOGUST_TYPE-", a2[1].m128i_u8[10]);
      v17 = (a1[4] == 0) + a1[4] - 1LL - v16;
      v18 = get_module_data((unsigned int)dword_2D4F4);
      *(_QWORD *)(v18 + 176) += v17;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
      goto LABEL_7;
    default:
      sub_6E90((__int64)"out: %a: bad optype %d", a3, a1[29]);
      goto LABEL_7;
  }
}

