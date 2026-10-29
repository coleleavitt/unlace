__int64 __fastcall sub_C5DE0(
        __m128i *a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        unsigned __int64 **a5,
        __m128 a6)
{
  _QWORD *exception; // rdi
  unsigned __int64 v7; // rbx
  unsigned int v9; // r15d
  unsigned __int64 *v10; // rsi
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // ebp
  __int64 *v19; // rdx
  __int64 *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  char v24; // cl
  unsigned __int64 v25; // rdx
  _BYTE *v26; // rdx
  char v27; // dl
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i *v34; // [rsp+20h] [rbp-1A8h]
  __int64 v35; // [rsp+40h] [rbp-188h]
  __int64 (__fastcall ***v36)(); // [rsp+58h] [rbp-170h] BYREF
  __int64 v37[2]; // [rsp+60h] [rbp-168h] BYREF
  __int64 v38; // [rsp+70h] [rbp-158h] BYREF
  __int64 v39; // [rsp+78h] [rbp-150h]
  _QWORD v40[6]; // [rsp+90h] [rbp-138h] BYREF
  int v41; // [rsp+C0h] [rbp-108h]
  __int64 (__fastcall **v42)(); // [rsp+D0h] [rbp-F8h]
  char v43[8]; // [rsp+D8h] [rbp-F0h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-E8h]
  _QWORD v45[2]; // [rsp+F8h] [rbp-D0h] BYREF
  _QWORD v46[2]; // [rsp+108h] [rbp-C0h] BYREF
  _QWORD v47[3]; // [rsp+118h] [rbp-B0h] BYREF
  __int64 (__fastcall **v48)(); // [rsp+130h] [rbp-98h] BYREF
  __int64 v49; // [rsp+138h] [rbp-90h] BYREF
  __int128 v50; // [rsp+140h] [rbp-88h] BYREF
  __int64 v51; // [rsp+150h] [rbp-78h]
  unsigned __int64 v52; // [rsp+158h] [rbp-70h] BYREF
  _DWORD *v53; // [rsp+160h] [rbp-68h]
  _QWORD v54[2]; // [rsp+168h] [rbp-60h] BYREF
  _QWORD v55[10]; // [rsp+178h] [rbp-50h] BYREF

  v55[2] = __readfsqword(0x28u);
  memset(&v40[2], 0, 24);
  v40[0] = &off_4DC090;
  v40[1] = *(_QWORD *)(a2 + 64);
  v35 = a1[22].m128i_i64[1];
  v40[5] = a4;
  v41 = 0;
  if ( !a3 )
    return 1;
  v7 = a3;
  v9 = 1;
  while ( 2 )
  {
    if ( a4 == (_DWORD *)v7 )
      goto LABEL_15;
    sub_124680((__int64)v37, a2, v7, 0);
    if ( !(unsigned __int8)sub_64780(a5, v37) && !(unsigned __int8)sub_318470(a5 + 2, (__int64)&v38) )
      goto LABEL_10;
    if ( !(_BYTE)v9 )
    {
      if ( v38 )
      {
        v39 = 0;
        qfree(v38);
      }
      qfree(v37[0]);
      return v9;
    }
    v42 = (__int64 (__fastcall **)())v7;
    v45[0] = 0xFFFFFFFF00000000LL;
    v45[1] = 0;
    v46[0] = 0xFFFFFFFF00000000LL;
    v46[1] = 0;
    v47[0] = 0xFFFFFFFF00000000LL;
    v47[1] = 0;
    v44 = 0;
    sub_1253A0((__int64)v43, v7);
    a6.m128_u64[0] = 0;
    v52 = 0xFFFFFFFF00000000LL;
    v53 = nullptr;
    v48 = v42;
    v54[0] = 0xFFFFFFFF00000000LL;
    v54[1] = 0;
    v55[0] = 0xFFFFFFFF00000000LL;
    v55[1] = 0;
    v50 = 0;
    sub_1253A0((__int64)&v49, (__int64)v43);
    v10 = (unsigned __int64 *)a1[22].m128i_i64[0];
    v34 = a1 + 22;
    v36 = &v48;
    if ( !v10 )
    {
      v29 = qalloc();
      v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
      if ( !v29 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      memset((void *)v29, 0, 0x70u);
      *(__m128i *)(v29 + 8) = v30;
      *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[22].m128i_i64[0] = v29;
      *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
      v31 = a1[22].m128i_i64[0];
      a6 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
      *(__m128 *)(v31 + 8) = a6;
      *(_QWORD *)a1[22].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[22].m128i_i64[0] |= 2uLL;
      v10 = (unsigned __int64 *)a1[22].m128i_i64[0];
      goto LABEL_6;
    }
    if ( !a1[22].m128i_i64[1] )
    {
LABEL_6:
      sub_C5C10(v34, v10, 1, (__int64 **)&v36);
      goto LABEL_7;
    }
    v23 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
      v27 = 1;
LABEL_42:
      sub_C5C10(v34, v10, v27, (__int64 **)&v36);
      goto LABEL_7;
    }
    v24 = v9;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v23 + 24);
      if ( (unsigned __int64)v48 < v25 )
      {
        v26 = *(_BYTE **)(v23 + 8);
        v24 = v9;
        if ( (*v26 & 2) != 0 )
          goto LABEL_34;
        goto LABEL_45;
      }
      if ( v25 >= (unsigned __int64)v48 )
        break;
      v26 = *(_BYTE **)(v23 + 16);
      v24 = 0;
      if ( (*v26 & 2) != 0 )
        goto LABEL_34;
LABEL_45:
      v23 = (unsigned __int64)v26;
    }
    if ( !v23 )
    {
LABEL_34:
      v27 = v24;
      v10 = (unsigned __int64 *)v23;
      goto LABEL_42;
    }
LABEL_7:
    sub_11CDA0((__int64)v55);
    sub_11CDA0((__int64)v54);
    sub_11CDA0((__int64)&v52);
    sub_11CDA0((__int64)v47);
    sub_11CDA0((__int64)v46);
    sub_11CDA0((__int64)v45);
    v41 = 0;
    sub_11F760((_BYTE *)v7, v40);
    if ( (*a4 & 0xFFFFFFFD) == 5 )
    {
      v50 = 0u;
      v48 = &off_4DC0B8;
      v22 = a1[20].m128i_i64[1];
      v51 = 0;
      LOBYTE(v52) = 0;
      v53 = a4;
      LODWORD(v54[0]) = 0;
      v49 = v22;
      sub_11E900((_BYTE *)v7, (__int64)&v48);
      v13 = v41 + LODWORD(v54[0]);
      v41 += LODWORD(v54[0]);
    }
    else
    {
      v13 = v41;
    }
    if ( !v13 )
    {
      v19 = (__int64 *)a1[22].m128i_i64[0];
      if ( v19 )
      {
        v20 = (__int64 *)(*v19 & 0xFFFFFFFFFFFFFFFCLL);
        if ( !v20 )
          goto LABEL_36;
        if ( (*(_BYTE *)(*v19 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        {
          v21 = v20[3];
          if ( v7 < v21 )
          {
            while ( 1 )
            {
              v20 = (__int64 *)v20[1];
LABEL_26:
              if ( (*(_BYTE *)v20 & 2) != 0 )
                break;
              v21 = v20[3];
              if ( v7 >= v21 )
                goto LABEL_24;
            }
          }
          else
          {
LABEL_24:
            if ( v21 < v7 )
            {
              v20 = (__int64 *)v20[2];
              goto LABEL_26;
            }
            if ( v19 != v20 )
LABEL_36:
              sub_C4FC0((unsigned __int64 **)v34, v20);
          }
        }
      }
    }
LABEL_10:
    sub_127A20((__int64)&v48, a2, v7, 257, v11, v12);
    v18 = sub_64640((__int64 *)a5, (__int64 *)&v48, v14, v15, v16, v17);
    v9 &= (sub_317C60((__int64 *)a5 + 2, (__int64)&v50) | v18) ^ 1;
    if ( (_QWORD)v50 )
    {
      *((_QWORD *)&v50 + 1) = 0;
      qfree(v50);
    }
    qfree((__int64)v48);
    if ( v38 )
    {
      v39 = 0;
      qfree(v38);
    }
    qfree(v37[0]);
LABEL_15:
    v7 = *(_QWORD *)(v7 + 8);
    if ( v7 )
      continue;
    break;
  }
  if ( v35 != a1[22].m128i_i64[1] )
    sub_64190(a1[21].m128i_i64, *(_DWORD *)(a2 + 72), *(double *)a6.m128_u64);
  return 1;
}

