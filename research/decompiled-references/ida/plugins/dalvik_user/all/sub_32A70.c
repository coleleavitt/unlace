__int64 __fastcall sub_32A70(const char *a1, const char *a2, __int64 a3)
{
  char *v3; // r12
  const __m128i *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  int v14; // ecx

  v3 = (char *)a2;
  v5 = (const __m128i *)a1;
  if ( (debug & 0x40000) != 0 )
  {
    v6 = *((_QWORD *)a1 + 4);
    v7 = nptr;
    if ( *(_QWORD *)(v6 + 40) )
    {
      v7 = *(const char **)(v6 + 32);
      a2 = nptr;
      if ( !*(_QWORD *)(v6 + 16) )
        goto LABEL_4;
    }
    else
    {
      a2 = nptr;
      if ( !*(_QWORD *)(v6 + 16) )
      {
LABEL_4:
        a1 = "DEXSIP: java_var_source_item_t::get_location %s`%s vis=%d\n";
        sub_111A0(
          (__int64)"DEXSIP: java_var_source_item_t::get_location %s`%s vis=%d\n",
          a2,
          v7,
          *(unsigned __int8 *)(v6 + 88));
        goto LABEL_5;
      }
    }
    a2 = *(const char **)(v6 + 8);
    goto LABEL_4;
  }
LABEL_5:
  v8 = sub_135E0(a1, a2);
  LOBYTE(v9) = sub_2F580(v8, v5[2].m128i_i64[0], *(_QWORD *)(a3 + 8));
  v10 = v9;
  if ( (_BYTE)v9 )
  {
    v11 = operator new(0x38u);
    v12 = v5[2].m128i_i64[0];
    v13 = _mm_loadu_si128(v5 + 1);
    *(_QWORD *)v11 = &off_7D510;
    v14 = dword_7FC30;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 48) = v12;
    *(_DWORD *)v3 = v14;
    *((_QWORD *)v3 + 1) = v11;
    *(_OWORD *)(v11 + 16) = 0;
    *(__m128i *)(v11 + 32) = v13;
    *(_BYTE *)(v12 + 88) = 1;
  }
  return v10;
}

