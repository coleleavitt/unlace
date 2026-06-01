bool __fastcall sub_46860(__int64 a1, _DWORD *a2, __int64 *a3, unsigned int a4)
{
  __int64 v7; // rdi
  bool result; // al
  char v10; // dl
  unsigned __int64 v11; // rbp
  int tinfo_size; // eax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __m128i si128; // xmm0
  __int64 ph; // r12
  __int64 v17; // rax
  unsigned int v18; // ebp
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  bool v23; // [rsp+Fh] [rbp-A9h]
  bool v24; // [rsp+Fh] [rbp-A9h]
  _BYTE v25[4]; // [rsp+18h] [rbp-A0h] BYREF
  int v26; // [rsp+1Ch] [rbp-9Ch]
  __int64 v27; // [rsp+20h] [rbp-98h] BYREF
  int *v28; // [rsp+28h] [rbp-90h]
  __int128 v29; // [rsp+30h] [rbp-88h]
  int *v30; // [rsp+40h] [rbp-78h]
  __int128 v31; // [rsp+48h] [rbp-70h]
  __int64 v32; // [rsp+58h] [rbp-60h]
  __m128i v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  int v35; // [rsp+78h] [rbp-40h]
  char v36; // [rsp+7Ch] [rbp-3Ch]
  unsigned __int64 v37; // [rsp+88h] [rbp-30h]

  v7 = *a3;
  v37 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v7, 2) & 0x3F) == 1 )
    return 1;
  if ( a4 <= 0x10 )
    a4 = getinf(99);
  if ( a4 == 176
    && ((unsigned __int64)getinf(88) > 0x397
     || (unsigned __int8)getinf_flag(3, 4)
     && (netnode_check(&v27, "$ golang", 0, 0), v18 = netnode_altval(v27, 0, 65), v18 > 0x74)
     && ((v19 = *(_DWORD *)(get_ph() + 4)) == 0
      || (v20 = (unsigned int)(v19 - 13), (unsigned int)v20 <= 0x3B)
      && (v21 = 0x800000000000005LL, _bittest64(&v21, v20))
      && v18 != 117)) )
  {
    tinfo_size = get_tinfo_size(0, *a3, 0);
    if ( !tinfo_size || tinfo_size == -1 )
    {
      return 0;
    }
    else
    {
      v13 = &v27;
      v27 = 0;
      v28 = nullptr;
      v30 = nullptr;
      v29 = 0;
      v31 = 0;
      sub_338A0(0x7D4u, &v27, 176);
      si128 = _mm_load_si128((const __m128i *)&xmmword_77D90);
      v32 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v33 = si128;
      if ( (_QWORD)v29 && (v14 = v31) != 0 )
      {
        BYTE4(v34) = v29;
        BYTE5(v34) = v31;
        ph = get_ph();
        parse_reg_name(v25, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * *v28));
        v17 = v26;
        v33.m128i_i64[0] = v26;
        if ( !*(_DWORD *)(ph + 4) )
          v17 = 8;
        v33.m128i_i64[0] = v17;
        parse_reg_name(v25, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * *v30));
        v13 = a3;
        v36 = 1;
        v33.m128i_i64[1] = v26;
        result = (unsigned int)sub_439A0((__int64)&v27, a3, a2, nullptr, 0, *(double *)si128.m128i_i64) == 1;
      }
      else
      {
        result = 0;
      }
      if ( v30 )
      {
        v23 = result;
        *(_QWORD *)&v31 = 0;
        qfree(v30, v13, v14, *(double *)si128.m128i_i64);
        result = v23;
      }
      if ( v28 )
      {
        v24 = result;
        *(_QWORD *)&v29 = 0;
        qfree(v28, v13, v14, *(double *)si128.m128i_i64);
        return v24;
      }
    }
  }
  else
  {
    v10 = sub_46510(a1, a3);
    result = 0;
    if ( !v10 )
    {
      if ( (unsigned int)sub_4E2D0(a1) == 9 )
      {
        v27 = 0;
        v28 = nullptr;
        v22 = sub_44FF0(a1, a3, (__int64)&v27);
        if ( v22 != -1 )
        {
          if ( v22 )
          {
            cleanup_argloc(a2);
            *a2 = 3;
            a2[2] = 3;
          }
          else
          {
            copy_argloc(a2, &v27);
          }
          cleanup_argloc(&v27);
          return 1;
        }
        cleanup_argloc(&v27);
      }
      v11 = get_tinfo_size(0, *a3, 0);
      if ( (unsigned __int8)getinf_flag(67, 32) )
      {
        if ( (unsigned __int8)sub_42C50(a3) )
        {
          sub_31B00((__int64)a2, 36, (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v11 + 7)) >> 3, v11, 0);
          return 1;
        }
        if ( (get_tinfo_property(*a3, 2) & 0xF) == 9 )
        {
          if ( v11 > 8 )
          {
            if ( (unsigned __int8)getinf_flag(3, 32) )
            {
              cleanup_argloc(a2);
              *a2 = 4;
              a2[2] = 2359333;
            }
            else
            {
              cleanup_argloc(a2);
              *a2 = 4;
              a2[2] = 2424868;
            }
          }
          else
          {
            cleanup_argloc(a2);
            *a2 = 3;
            a2[2] = 36;
          }
          return 1;
        }
      }
      if ( ((unsigned __int8)getinf_flag(3, 4) == 1 ? 16LL : 8LL) == v11 )
      {
        if ( (unsigned __int8)getinf_flag(3, 32) )
        {
          cleanup_argloc(a2);
          *a2 = 4;
          a2[2] = 196612;
        }
        else
        {
          cleanup_argloc(a2);
          *a2 = 4;
          a2[2] = 262147;
        }
      }
      else
      {
        cleanup_argloc(a2);
        *a2 = 3;
        a2[2] = 3;
      }
      return 1;
    }
  }
  return result;
}
