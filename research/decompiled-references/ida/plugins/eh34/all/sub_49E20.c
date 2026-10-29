__int64 __fastcall sub_49E20(__int64 a1, int *a2)
{
  _QWORD *exception; // rdi
  __int64 v3; // rbp
  unsigned __int8 *v4; // rbx
  unsigned __int8 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __m128i si128; // xmm1
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // r12d
  unsigned __int64 v13; // r14
  void (__fastcall *hexdsp)(__int64, __int64, unsigned __int64, _QWORD, __int64, _QWORD); // rax
  unsigned __int8 *v15; // rax
  const char *v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  void (__fastcall *v26)(__int64, __int64, _QWORD, __int64, __int64, _QWORD); // rax
  __int64 v27; // rax
  unsigned __int8 *v28; // [rsp+0h] [rbp-E8h]
  __int64 v29; // [rsp+38h] [rbp-B0h]
  __int64 v32; // [rsp+50h] [rbp-98h] BYREF
  __int64 v33; // [rsp+58h] [rbp-90h] BYREF
  __int64 v34; // [rsp+60h] [rbp-88h] BYREF
  __int64 v35; // [rsp+68h] [rbp-80h] BYREF
  char v36[8]; // [rsp+70h] [rbp-78h] BYREF
  char v37; // [rsp+78h] [rbp-70h]
  __int128 v38; // [rsp+80h] [rbp-68h] BYREF
  __int64 v39; // [rsp+90h] [rbp-58h] BYREF
  int v40; // [rsp+98h] [rbp-50h]
  __int16 v41; // [rsp+9Ch] [rbp-4Ch]
  unsigned __int64 v42; // [rsp+A8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v29 = sub_6DF40(a1, off_8C340[*a2]);
  v3 = sub_6DD90(*((unsigned __int8 *)a2 + 4));
  v4 = *((unsigned __int8 **)a2 + 1);
  v28 = &v4[56 * *((_QWORD *)a2 + 2)];
  if ( v28 != v4 )
  {
    v5 = v4 + 8;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3 + 32);
      ++*(_DWORD *)(v3 + 8);
      v7 = *(_QWORD *)(v3 + 24);
      if ( *(_QWORD *)(v3 + 40) < (unsigned __int64)(v6 + 1) )
      {
        v23 = qvector_reserve(v3 + 24, v7, v6 + 1, 80);
        v6 = *(_QWORD *)(v3 + 32);
        *(_QWORD *)(v3 + 24) = v23;
        v7 = v23;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_78740);
      v9 = v7 + 80 * v6;
      *(_QWORD *)(v9 + 56) = 0;
      *(_QWORD *)v9 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 32) = 0;
      *(_QWORD *)(v9 + 64) = 0;
      *(_DWORD *)(v9 + 72) = 0;
      *(__m128i *)(v9 + 16) = si128;
      *(_OWORD *)(v9 + 40) = 0;
      ++*(_QWORD *)(v3 + 32);
      *(_DWORD *)(v9 + 56) = 0;
      v10 = *((unsigned int *)v5 - 2);
      if ( (_DWORD)v10 != 7 )
      {
        sub_49BB0(&v38, v10);
        goto LABEL_7;
      }
      sub_6E9D0(v36, *((_QWORD *)v5 + 4));
      if ( !v37 )
      {
        *(_QWORD *)&v38 = 0;
        get_stock_tinfo(&v38, 7);
        goto LABEL_28;
      }
      v32 = 0;
      copy_tinfo_t(&v32, v36);
      v24 = *((_DWORD *)v5 + 10);
      if ( (v24 & 1) != 0 )
      {
        if ( !(_BYTE)v32 )
          goto LABEL_32;
        v32 |= 0x40uLL;
      }
      if ( (v24 & 2) == 0 || (v25 = v32, !(_BYTE)v32) )
      {
LABEL_32:
        if ( (v24 & 8) != 0 )
          goto LABEL_38;
        goto LABEL_33;
      }
      LOBYTE(v25) = v32 | 0x80;
      v32 = v25;
      if ( (v24 & 8) != 0 )
      {
LABEL_38:
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v38 = 0;
        copy_tinfo_t((char *)&v38 + 8, &v35);
        v39 = 0;
        copy_tinfo_t(&v39, &v34);
        v40 = 0;
        v41 = 0;
        clear_tinfo_t(&v35);
        clear_tinfo_t(&v34);
        copy_tinfo_t(&v38, &v32);
        create_tinfo(&v33, 10, 10, &v38);
        clear_tinfo_t(&v39);
        clear_tinfo_t((char *)&v38 + 8);
        clear_tinfo_t(&v38);
        copy_tinfo_t(&v32, &v33);
        clear_tinfo_t(&v33);
      }
LABEL_33:
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v38 = 0;
      copy_tinfo_t((char *)&v38 + 8, &v35);
      v39 = 0;
      copy_tinfo_t(&v39, &v34);
      v40 = 0;
      v41 = 0;
      clear_tinfo_t(&v35);
      clear_tinfo_t(&v34);
      copy_tinfo_t(&v38, &v32);
      create_tinfo(&v33, 10, 10, &v38);
      clear_tinfo_t(&v39);
      clear_tinfo_t((char *)&v38 + 8);
      clear_tinfo_t(&v38);
      *(_QWORD *)&v38 = 0;
      copy_tinfo_t(&v38, &v33);
      clear_tinfo_t(&v33);
      clear_tinfo_t(&v32);
LABEL_28:
      if ( v37 )
      {
        v37 = 0;
        clear_tinfo_t(v36);
      }
LABEL_7:
      copy_tinfo_t(v9 + 24, &v38);
      clear_tinfo_t(&v38);
      v11 = *((unsigned int *)v5 - 2);
      if ( (unsigned int)v11 > 7 )
        v12 = -1;
      else
        v12 = dword_78B40[v11];
      *(_DWORD *)(v9 + 4) = v12;
      switch ( *((_DWORD *)v5 - 2) )
      {
        case 0:
          v13 = *v5;
          goto LABEL_11;
        case 1:
          v13 = *(int *)v5;
          goto LABEL_11;
        case 2:
          v13 = *(unsigned int *)v5;
          goto LABEL_11;
        case 3:
        case 4:
          v13 = *(_QWORD *)v5;
LABEL_11:
          hexdsp = (void (__fastcall *)(__int64, __int64, unsigned __int64, _QWORD, __int64, _QWORD))get_hexdsp(&v38, &v38);
          hexdsp(284, v9, v13, v12, -1, 0);
          goto LABEL_12;
        case 5:
          v21 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(&v38, &v38);
          v22 = (_QWORD *)v21(129, 24);
          *v22 = -4294967290LL;
          v22[1] = 0;
          v22[2] = -1;
          v22[1] = *(_QWORD *)v5;
          *(_BYTE *)v9 = 10;
          *(_QWORD *)(v9 + 8) = v22;
          goto LABEL_12;
        case 6:
          v16 = s1;
          if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) )
            v16 = **(const char ***)v5;
          *(_BYTE *)v9 = 3;
          v17 = qstrdup(v16);
          *(_DWORD *)(v9 + 4) = 8;
          *(_QWORD *)(v9 + 8) = v17;
          v15 = v5 + 56;
          if ( v28 == v5 + 48 )
            goto LABEL_17;
          goto LABEL_13;
        case 7:
          if ( v5[24] )
          {
            v20 = sub_49CF0(a1, (__int64 *)v5);
            *(_DWORD *)(v20 + 68) = 8;
            *(_BYTE *)v9 = 4;
            *(_QWORD *)(v9 + 8) = v20;
          }
          else
          {
            v26 = (void (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))get_hexdsp(&v38, &v38);
            v26(284, v9, 0, 8, -1, 0);
          }
          *(_DWORD *)(v9 + 4) = 8;
          goto LABEL_12;
        default:
LABEL_12:
          v15 = v5 + 56;
          if ( v28 == v5 + 48 )
            goto LABEL_17;
LABEL_13:
          v5 = v15;
          break;
      }
    }
  }
LABEL_17:
  v18 = 0;
  if ( *((_BYTE *)a2 + 36) )
  {
    sub_49BB0(&v38, (unsigned int)a2[8]);
    copy_tinfo_t(v3 + 72, &v38);
    clear_tinfo_t(&v38);
    if ( !*((_BYTE *)a2 + 36) )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = &off_8BF10;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_optional_access, (void (*)(void *))sub_20F70);
    }
    v27 = (unsigned int)a2[8];
    if ( (unsigned int)v27 > 7 )
      v18 = -1;
    else
      v18 = dword_78B40[v27];
  }
  *(_BYTE *)(v29 + 64) = 8;
  *(_QWORD *)(v29 + 72) = v3;
  *(_DWORD *)(v29 + 68) = v18;
  return v29;
}

