__int64 __fastcall sub_2CA90(__int64 a1, __int64 *a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int tinfo; // r15d
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 tinfo_property; // [rsp+20h] [rbp-B8h]
  _BYTE v12[24]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v13; // [rsp+58h] [rbp-80h] BYREF
  __int128 v14; // [rsp+60h] [rbp-78h]
  __m128i si128; // [rsp+70h] [rbp-68h]
  __int64 v16; // [rsp+80h] [rbp-58h]
  char v17; // [rsp+88h] [rbp-50h]
  unsigned __int64 v18; // [rsp+98h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a3 == 105 )
  {
    v7 = *(__int64 **)(a4 + 32);
    if ( v7[1] == 1 )
    {
      v8 = *v7;
      v9 = *(_DWORD *)(v8 + 8);
      if ( v9 == 52 )
      {
        v8 = *(_QWORD *)(v8 + 24);
        v9 = *(_DWORD *)(v8 + 8);
      }
      if ( v9 == 64 )
      {
        v10 = *(_QWORD *)(v8 + 24);
        if ( v10 != -1 )
        {
          if ( (unsigned __int8)sub_16B60(*(__int64 **)(*(_QWORD *)(a1 + 64) + 1808LL), 0, (__int64)a2, v10) )
          {
            memset(v12, 0, sizeof(v12));
            copy_tinfo_t();
            copy_tinfo_t();
            LODWORD(v13) = 0;
            WORD2(v13) = 0;
            clear_tinfo_t();
            clear_tinfo_t();
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            return 1;
          }
        }
      }
    }
    return 0;
  }
  if ( a3 > 0x69u )
  {
    if ( a3 != 115 )
      return 0;
  }
  else
  {
    if ( a3 == 70 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a4 + 32) + 8LL) == 1 )
      {
        *(_QWORD *)v12 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
      }
      return 0;
    }
    if ( a3 != 71 )
      return 0;
  }
  v6 = *(_QWORD *)(a1 + 64);
  v14 = 0;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  v16 = -1;
  v17 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_31B80);
  if ( !(unsigned __int8)sub_2BFC0(v6, (__int64)v12, a4) )
  {
    clear_tinfo_t();
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
    if ( !*(_QWORD *)v12 )
      return 0;
    goto LABEL_12;
  }
  if ( sub_14B70(&v13, (__int64)v12) && si128.m128i_i8[0] )
  {
    copy_tinfo_t();
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    tinfo = create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    if ( v16 == -1 )
      goto LABEL_29;
    tinfo = get_tinfo();
    if ( !(_BYTE)tinfo )
    {
LABEL_28:
      clear_tinfo_t();
LABEL_29:
      clear_tinfo_t();
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree();
      }
      if ( !*(_QWORD *)v12 )
        return 0;
LABEL_12:
      *(_QWORD *)&v12[8] = 0;
      qfree();
      return 0;
    }
    tinfo_property = get_tinfo_property();
    if ( (unsigned int)verify_tinfo() )
    {
      clear_tinfo_t();
      goto LABEL_28;
    }
    *a2 = tinfo_property;
    clear_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( *(_QWORD *)v12 )
  {
    *(_QWORD *)&v12[8] = 0;
    qfree();
  }
  return tinfo;
}
