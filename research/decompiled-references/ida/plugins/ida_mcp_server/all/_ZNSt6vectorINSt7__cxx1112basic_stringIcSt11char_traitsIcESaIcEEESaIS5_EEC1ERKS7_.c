// Alternative name is '_ZNSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS5_EEC2ERKS7_'
unsigned __int64 __fastcall std::vector<std::string>::vector(__m128i *a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rbp
  size_t v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _BYTE *v13; // rdi
  _BYTE *v14; // r15
  __int64 v15; // rax
  unsigned __int64 v17; // [rsp+10h] [rbp-48h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v3 = a2[1] - *a2;
  v18 = __readfsqword(0x28u);
  v4 = v3;
  if ( v3 )
    v5 = operator new(v3);
  else
    v5 = 0;
  v6 = v5 + v4;
  v7 = (_QWORD *)v5;
  a1[1].m128i_i64[0] = v6;
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
  v8 = a2[1];
  v9 = *a2;
  if ( *a2 != v8 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v9 + 8);
      v13 = v7 + 2;
      *v7 = v7 + 2;
      v14 = *(_BYTE **)v9;
      v17 = v12;
      if ( v12 <= 0xF )
        break;
      v15 = std::string::_M_create();
      *v7 = v15;
      v13 = (_BYTE *)v15;
      v7[2] = v17;
      v10 = v17 + 1;
      if ( !v17 )
      {
LABEL_12:
        *v13 = *v14;
        v11 = v17;
        goto LABEL_7;
      }
      v11 = -1;
      if ( v17 != -1 )
        goto LABEL_6;
LABEL_7:
      v9 += 32;
      v7[1] = v11;
      v7 += 4;
      if ( v8 == v9 )
        goto LABEL_13;
    }
    v10 = v12 + 1;
    if ( !v12 )
      goto LABEL_12;
LABEL_6:
    memcpy(v13, v14, v10);
    v11 = v17;
    goto LABEL_7;
  }
LABEL_13:
  a1->m128i_i64[1] = (__int64)v7;
  return v18 - __readfsqword(0x28u);
}

