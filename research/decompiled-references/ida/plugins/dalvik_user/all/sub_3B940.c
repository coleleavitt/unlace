__int64 __fastcall sub_3B940(const __m128i *a1, char *a2)
{
  __int64 v3; // rax
  const char *v4; // rdx
  const char *v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v9; // r12
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
  {
    v3 = a1[2].m128i_i64[0];
    v4 = nptr;
    if ( *(_QWORD *)(v3 + 40) )
    {
      v4 = *(const char **)(v3 + 32);
      v5 = nptr;
      if ( !*(_QWORD *)(v3 + 16) )
        goto LABEL_4;
    }
    else
    {
      v5 = nptr;
      if ( !*(_QWORD *)(v3 + 16) )
      {
LABEL_4:
        sub_111A0(
          (__int64)"DEXSIP: java_var_source_item_t::get_expr_tinfo %s`%s vis=%d\n",
          v5,
          v4,
          *(unsigned __int8 *)(v3 + 88));
        goto LABEL_5;
      }
    }
    v5 = *(const char **)(v3 + 8);
    goto LABEL_4;
  }
LABEL_5:
  v6 = a1[2].m128i_i64[0];
  if ( *(_QWORD *)(v6 + 40) <= 1u )
  {
    return 0;
  }
  else
  {
    v7 = *(unsigned __int8 *)(v6 + 88);
    if ( (_BYTE)v7 )
    {
      v12 = 0;
      v13 = 0;
      v9 = operator new(0x38u);
      v10 = a1[2].m128i_i64[0];
      v11 = _mm_loadu_si128(a1 + 1);
      *(_OWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 48) = v10;
      LODWORD(v10) = dword_7FC30;
      *(_QWORD *)v9 = &off_7D510;
      *(_QWORD *)(v9 + 8) = 0;
      *(__m128i *)(v9 + 32) = v11;
      LODWORD(v12) = v10;
      v13 = v9;
      v7 = sub_3A500(a2, (const char *)&v12);
      if ( (_BYTE)v7 )
        *(_BYTE *)(*(_QWORD *)(v9 + 48) + 88LL) = 1;
      cleanup_argloc();
    }
  }
  return v7;
}

