__int64 __fastcall sub_3BA1A0(__int64 a1, const __m128i *a2)
{
  char v2; // al
  __int64 result; // rax
  __int64 *v4; // r13
  int v5; // r12d
  const char *v6; // rdx
  const char *v7; // rdx
  unsigned int v8; // [rsp+Ch] [rbp-4Ch]
  const char *v9; // [rsp+10h] [rbp-48h] BYREF
  __int128 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v2 = sub_38B690((__int64)a2, a2[2].m128i_i32[3], 31);
  if ( (v2 & 8) != 0 )
  {
    v5 = 2;
    v4 = (__int64 *)sub_38D720((__int64)&a2[3].m128i_i64[1]);
  }
  else if ( (v2 & 0x10) != 0 )
  {
    v4 = nullptr;
    v5 = 1;
  }
  else
  {
    result = v2 & 6;
    if ( !(_DWORD)result )
      return result;
    v4 = nullptr;
    v5 = 0;
  }
  v9 = nullptr;
  v10 = 0;
  if ( (unsigned __int8)sub_3E5B60((__int64 *)&v9, v5) )
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
        if ( v4 )
        {
          v6 = s1;
          if ( (_QWORD)v10 )
            v6 = v9;
          result = (unsigned __int8)sub_38F6B0((__int64)a2, v4, v6);
          goto LABEL_17;
        }
        goto LABEL_21;
      }
      v7 = s1;
      if ( (_QWORD)v10 )
        v7 = v9;
      sub_25C730(a2[2].m128i_i64[0], a2 + 4, v7);
      sub_2B6650(
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL),
        *(_QWORD *)a2[2].m128i_i64[0],
        *(_QWORD *)(a2[2].m128i_i64[0] + 72));
LABEL_16:
      sub_390160((__m128i *)a2[2].m128i_i64[0]);
      result = 1;
      goto LABEL_17;
    }
    if ( sub_1CE9E0(*(_QWORD *)(a2[2].m128i_i64[0] + 8)) )
    {
      set_func_cmt();
      goto LABEL_16;
    }
  }
LABEL_21:
  result = 0;
LABEL_17:
  if ( v9 )
  {
    v8 = result;
    *(_QWORD *)&v10 = 0;
    qfree((__int64)v9);
    return v8;
  }
  return result;
}

