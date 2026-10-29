__int64 __fastcall sub_1D0E0(__int64 a1, _DWORD *a2, __int64 *a3, unsigned __int8 a4)
{
  _BYTE *v4; // r14
  __int64 v7; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int tinfo_size; // eax
  __int64 ph; // r13
  __int64 v18; // rax
  unsigned int v19; // r14d
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE v23[4]; // [rsp+8h] [rbp-A0h] BYREF
  int v24; // [rsp+Ch] [rbp-9Ch]
  __int64 v25; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v26[24]; // [rsp+18h] [rbp-90h] BYREF
  int *v27; // [rsp+30h] [rbp-78h]
  __int128 v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  __m128i si128; // [rsp+50h] [rbp-58h]
  __int64 v31; // [rsp+60h] [rbp-48h]
  int v32; // [rsp+68h] [rbp-40h]
  char v33; // [rsp+6Ch] [rbp-3Ch]
  unsigned __int64 v34; // [rsp+78h] [rbp-30h]

  LODWORD(v4) = 1;
  v7 = *a3;
  v34 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v7, 2) & 0x3F) != 1 )
  {
    v10 = a4;
    if ( a4 <= 0x10u )
      v10 = getinf(99);
    if ( v10 == 176
      && ((unsigned __int64)getinf(88) > 0x397
       || (unsigned __int8)getinf_flag(3, 4, v12, v13, v14, v15)
       && (netnode_check(&v25, "$ golang", 0, 0), v19 = netnode_altval(v25, 0, 65), v19 > 0x74)
       && ((v20 = *(_DWORD *)(get_ph() + 4)) == 0
        || (v21 = (unsigned int)(v20 - 13), (unsigned int)v21 <= 0x3B)
        && (v22 = 0x800000000000005LL, _bittest64(&v22, v21))
        && v19 != 117)) )
    {
      tinfo_size = get_tinfo_size(0, *a3, 0);
      if ( !tinfo_size || tinfo_size == -1 )
      {
        LODWORD(v4) = 0;
      }
      else
      {
        v25 = 0;
        memset(v26, 0, sizeof(v26));
        v27 = nullptr;
        v28 = 0;
        sub_15C90(0x7D4u, &v25, 176);
        v29 = 0;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2B120);
        if ( *(_QWORD *)&v26[8] && (_QWORD)v28 )
        {
          BYTE4(v31) = v26[8];
          BYTE5(v31) = v28;
          ph = get_ph();
          v4 = v23;
          parse_reg_name(v23, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * (int)**(_DWORD **)v26));
          v18 = v24;
          si128.m128i_i64[0] = v24;
          if ( !*(_DWORD *)(ph + 4) )
            v18 = 8;
          si128.m128i_i64[0] = v18;
          parse_reg_name(v23, *(_QWORD *)(*(_QWORD *)(ph + 56) + 8LL * *v27));
          v33 = 1;
          si128.m128i_i64[1] = v24;
          LOBYTE(v4) = (unsigned int)sub_1AAF0((__int64)&v25, a3, a2, 0) == 1;
        }
        else
        {
          LODWORD(v4) = 0;
        }
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree(v27);
        }
        if ( *(_QWORD *)v26 )
        {
          *(_QWORD *)&v26[8] = 0;
          qfree(*(_QWORD *)v26);
        }
      }
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 120);
      memset(v26, 0, sizeof(v26));
      LODWORD(v25) = v11;
      LODWORD(v4) = sub_1CD50((unsigned int *)&v25, a2, a3, 0);
    }
  }
  return (unsigned int)v4;
}
