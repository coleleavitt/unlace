unsigned __int64 __fastcall sub_3D3E0(__int64 a1, char a2)
{
  const char *v3; // rsi
  __int64 v4; // rax
  __m128i v5; // xmm0
  const char *v6; // r12
  __int64 v7; // rbx
  __m128i v8; // xmm0
  const char *v9; // rdx
  unsigned __int8 v10; // al
  unsigned int v11; // esi
  __m128i v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  const char *v15; // [rsp+20h] [rbp-58h] BYREF
  __m128i v16; // [rsp+28h] [rbp-50h]
  _BYTE v17[24]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v16 = 0;
  v15 = nullptr;
  get_abi_name(&v15);
  v3 = byte_51ACD;
  if ( v16.m128i_i64[0] )
    v3 = v15;
  if ( !(unsigned __int8)sub_3C160(a1, v3) )
  {
    if ( *(_BYTE *)(a1 + 312)
      && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8
       || ((__int64)(&off_73540)[4 * *(unsigned int *)(a1 + 120) + 1] & 1) == 0) )
    {
      sub_3D2C0((__int64)v17, a1);
      v5 = _mm_loadu_si128((const __m128i *)&v17[8]);
      v6 = *(const char **)v17;
      memset(v17, 0, sizeof(v17));
      v7 = v5.m128i_i64[0];
      if ( v15 )
      {
        v13 = v5;
        v16.m128i_i64[0] = 0;
        qfree(v15);
        v8 = _mm_load_si128(&v13);
        v15 = v6;
        v16 = v8;
        if ( *(_QWORD *)v17 )
        {
          *(_QWORD *)&v17[8] = 0;
          qfree(*(_QWORD *)v17);
          v7 = v16.m128i_i64[0];
        }
      }
      else
      {
        v15 = v6;
        v16 = v5;
      }
      v9 = byte_51ACD;
      if ( v7 )
        v9 = v15;
    }
    else
    {
      if ( netnode_supval(*(_QWORD *)(a1 + 152), -2, v17, 8, 65) <= 0
        || *(_QWORD *)v17 > 5u
        || (v4 = *(unsigned int *)v17, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8)
        && ((__int64)(&off_73540)[4 * *(unsigned int *)v17 + 1] & 1) != 0 )
      {
        sub_3BFE0(a1);
        v4 = *(unsigned int *)(a1 + 120);
      }
      else
      {
        *(_DWORD *)(a1 + 120) = *(_DWORD *)v17;
      }
      v9 = (&off_73540)[4 * v4];
    }
    *(_OWORD *)v17 = 0;
    set_compiler(v17, 4, v9);
    if ( v15 )
    {
      v16.m128i_i64[0] = 0;
      qfree(v15);
    }
    return v18 - __readfsqword(0x28u);
  }
  *(_BYTE *)(a1 + 312) = 1;
  v10 = getinf(8);
  sub_3B640(a1, v10, 0);
  if ( a2 )
  {
    v11 = *(_DWORD *)(a1 + 120);
    if ( v11 != 2 )
    {
      if ( v11 > 2 )
      {
        if ( v11 - 3 > 2 )
        {
          sub_29CC0((__int64)"Unexpected ABI value %d!", v11);
          goto LABEL_23;
        }
      }
      else if ( v11 )
      {
        setinf(64, 4);
LABEL_22:
        setinf(65, 8);
        setinf(66, 16);
LABEL_23:
        setinf_flag(67, 4, 1);
        if ( (getinf(57) & 0xF) == 6 && !(unsigned __int8)getinf_flag(3, 4) )
        {
          v14 = 0;
          if ( *(_DWORD *)(a1 + 120) == 3 )
          {
            *(_WORD *)&v17[16] = 0;
            *(_QWORD *)&v17[8] = "__va_list_tag";
            *(_QWORD *)v17 = get_idati();
            create_tinfo(&v14, 61, 61, v17);
            lower_type(0, &v14, 0, 0);
          }
          else
          {
            get_stock_tinfo(&v14, 7);
          }
          save_tinfo(&v14, 0, 0, "__builtin_va_list", 5);
          clear_tinfo_t(&v14);
        }
        goto LABEL_24;
      }
      setinf(64, 4);
      setinf(65, 8);
      setinf(66, 8);
      goto LABEL_23;
    }
    setinf(64, 8);
    goto LABEL_22;
  }
LABEL_24:
  if ( v15 )
  {
    v16.m128i_i64[0] = 0;
    qfree(v15);
  }
  return v18 - __readfsqword(0x28u);
}

