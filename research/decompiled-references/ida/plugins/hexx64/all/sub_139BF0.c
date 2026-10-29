__int64 __fastcall sub_139BF0(
        __int64 a1,
        __m128i a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  bool v8; // zf
  __int64 v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // rax
  int v13; // eax
  _QWORD *v14; // r12
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  const __m128i *v18; // r13
  _DWORD *v19; // rax
  int v20; // eax
  unsigned int v21; // esi
  int v22; // esi
  __m128i *v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rdi
  unsigned __int64 v32; // rsi
  unsigned __int64 **v33; // rax
  __int64 v34; // [rsp+10h] [rbp-138h]
  int v35; // [rsp+20h] [rbp-128h]
  int v36; // [rsp+24h] [rbp-124h]
  _QWORD *v37; // [rsp+28h] [rbp-120h]
  char v38; // [rsp+30h] [rbp-118h]
  int v39; // [rsp+34h] [rbp-114h]
  unsigned __int64 *v40; // [rsp+38h] [rbp-110h]
  unsigned int v41; // [rsp+40h] [rbp-108h]
  int v42; // [rsp+44h] [rbp-104h]
  int v43; // [rsp+48h] [rbp-100h]
  int v44; // [rsp+4Ch] [rbp-FCh]
  __m128i v45; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v46; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 *v47[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v49; // [rsp+88h] [rbp-C0h]
  __int64 v50[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-90h]
  __int64 v53; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-70h] BYREF
  __m128i v55; // [rsp+E8h] [rbp-60h]
  unsigned __int64 v56; // [rsp+F8h] [rbp-50h]
  char v57; // [rsp+100h] [rbp-48h]
  unsigned __int64 v58; // [rsp+108h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 440) == 0;
  v58 = __readfsqword(0x28u);
  if ( !v8 )
  {
    v42 = 0;
    v40 = nullptr;
    v41 = 0;
    v44 = 2 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 1496) + 130LL);
    v10 = 0;
    while ( 1 )
    {
      v11 = 13 * v10;
      v12 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v10);
      v34 = (__int64)v12;
      if ( !v12[23] && v12[22] == v44 && ((*v12 - 2) & 0xFFFFFFFD) != 0 )
        break;
LABEL_36:
      v10 = ++v42;
      if ( (unsigned __int64)v42 >= *(_QWORD *)(a1 + 440) )
        return v41;
    }
    if ( !v40 )
    {
      v33 = (unsigned __int64 **)sub_1108E0(*(_QWORD *)(a1 + 784), 0, v11, a6, a7, a8, *(double *)a2.m128i_i64, a3);
      if ( !v33 )
      {
        if ( !under_debugger )
          sub_383060(0xC501u, *(double *)a2.m128i_i64);
LABEL_80:
        BUG();
      }
      v40 = *v33;
    }
    v13 = *(_DWORD *)(a1 + 440);
    a2 = 0;
    v47[0] = nullptr;
    v39 = v13;
    v47[1] = nullptr;
    v48 = 0;
    v49 = 0;
    sub_1C3380(v34, a1, (__int64)v47, 0);
    v45 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    sub_1C3110(v34, (__int64)&v45, 1);
    v43 = *(_DWORD *)(v34 + 88);
    v36 = v43 >> 1;
    if ( v43 <= 0 )
    {
LABEL_33:
      v24 = v48;
      if ( !v48 )
        goto LABEL_35;
      goto LABEL_34;
    }
    v35 = 0;
    v37 = nullptr;
    v38 = 2;
    while ( !v35 )
    {
      a2 = _mm_load_si128(&v45);
      v53 = 0;
      v56 = 0xFFFFFFFF00000001LL;
      v57 = 1;
      v54 = 0;
      v55 = a2;
      v37 = sub_1041A0(v40, (__int64)&v53);
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(v53);
      }
      if ( v37 == (_QWORD *)*v40 )
        goto LABEL_33;
      v14 = v37 + 3;
LABEL_14:
      if ( v14[1] )
      {
        v15 = 0;
        v16 = 0;
        do
        {
          while ( 1 )
          {
            v17 = *(unsigned int *)(*v14 + 4 * v16);
            if ( (unsigned int)v17 >= *(_DWORD *)(a1 + 64) )
            {
              if ( !under_debugger )
                sub_383060(0xCDEFu, *(double *)a2.m128i_i64);
              goto LABEL_80;
            }
            v18 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + 8 * v17);
            if ( !sub_A9AA0((__int64)v18, v47, v18[3].m128i_i64[0], 0, 0) )
            {
              v19 = (_DWORD *)v18[3].m128i_i64[1];
              if ( v19 )
              {
                if ( (unsigned int)(*v19 - 42) <= 0xA )
                  break;
              }
            }
LABEL_16:
            v16 = ++v15;
            if ( (unsigned __int64)v15 >= v14[1] )
              goto LABEL_32;
          }
          a3 = 0;
          v50[0] = 0;
          v50[1] = 0;
          v51 = 0;
          v52 = 0;
          v20 = *(_DWORD *)v34;
          if ( (unsigned int)(*(_DWORD *)v34 - 3) > 1 )
          {
            v46.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL)
                             & (*(_QWORD *)(a1 + 1440) + *(_QWORD *)(v34 + 8) + v35);
            v46.m128i_i64[1] = v36;
            sub_316BB0(&v51, &v46, *(double *)a2.m128i_i64, (__m128)0LL);
            goto LABEL_26;
          }
          v21 = *(_DWORD *)(v34 + 8);
          if ( v35 )
          {
            if ( v20 == 4 )
            {
              v22 = HIWORD(v21);
              goto LABEL_25;
            }
          }
          else if ( v20 == 4 )
          {
            v21 = (unsigned __int16)v21;
          }
          v22 = v35 + v21;
LABEL_25:
          sub_63E80(v50, v22, v36, *(double *)a2.m128i_i64);
LABEL_26:
          sub_124680((__int64)&v53, (__int64)v18, v18[3].m128i_i64[1], 0, *(double *)a2.m128i_i64, (__m128)0LL);
          sub_64700(&v53, (__int64 *)v47);
          sub_3180C0((__int64 *)&v54 + 1, (__int64)&v48, v23, (__int64)&v54 + 8);
          if ( (unsigned __int8)sub_64820(&v53, v50) && (unsigned __int8)sub_317F40(&v51, (__int64)&v54 + 8) )
          {
            v41 += (unsigned __int8)sub_113B10(v18, v18[3].m128i_i64[1], v38, a2);
            if ( v39 != *(_QWORD *)(a1 + 440) )
            {
              if ( *((_QWORD *)&v54 + 1) )
              {
                v55.m128i_i64[0] = 0;
                qfree(*((__int64 *)&v54 + 1));
              }
              qfree(v53);
              if ( v51 )
              {
                *(_QWORD *)&v52 = 0;
                qfree(v51);
              }
              qfree(v50[0]);
              v24 = v48;
              if ( !v48 )
              {
LABEL_35:
                qfree((__int64)v47[0]);
                goto LABEL_36;
              }
LABEL_34:
              *(_QWORD *)&v49 = 0;
              qfree(v24);
              goto LABEL_35;
            }
            if ( *((_QWORD *)&v54 + 1) )
            {
              v55.m128i_i64[0] = 0;
              qfree(*((__int64 *)&v54 + 1));
            }
            qfree(v53);
            if ( v51 )
            {
              *(_QWORD *)&v52 = 0;
              qfree(v51);
            }
            qfree(v50[0]);
            goto LABEL_16;
          }
          if ( *((_QWORD *)&v54 + 1) )
          {
            v55.m128i_i64[0] = 0;
            qfree(*((__int64 *)&v54 + 1));
          }
          qfree(v53);
          if ( v51 )
          {
            *(_QWORD *)&v52 = 0;
            qfree(v51);
          }
          ++v15;
          qfree(v50[0]);
          v16 = v15;
        }
        while ( (unsigned __int64)v15 < v14[1] );
      }
LABEL_32:
      v38 = 3;
      v35 += v36;
      if ( v43 <= v35 )
        goto LABEL_33;
    }
    v26 = *v40;
    if ( (*v37 & 2) != 0 )
    {
      v29 = v37;
      if ( (_QWORD *)v26 == v37 )
      {
        v24 = v48;
        if ( !v48 )
          goto LABEL_35;
        goto LABEL_34;
      }
      goto LABEL_54;
    }
    v27 = (_QWORD *)v37[2];
    if ( (*(_BYTE *)v27 & 2) != 0 )
    {
      v28 = (_QWORD *)(*v37 & 0xFFFFFFFFFFFFFFFCLL);
      v30 = *v28;
      if ( (*v28 & 2) == 0 && (_QWORD *)v28[2] == v37 )
      {
        while ( 1 )
        {
          v31 = v28;
          v32 = v30 & 0xFFFFFFFFFFFFFFFCLL;
          v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v30 & 2) != 0 )
            break;
          v28 = (_QWORD *)v32;
          if ( *(_QWORD **)(v32 + 16) != v31 )
            goto LABEL_52;
        }
        v37 = (_QWORD *)v32;
LABEL_53:
        v29 = v37;
        if ( v37 == (_QWORD *)v26 )
          goto LABEL_33;
LABEL_54:
        v14 = v29 + 3;
        if ( v45.m128i_i8[8] != *((_BYTE *)v29 + 56) || v45.m128i_i64[0] + v35 != v29[6] )
          goto LABEL_32;
        goto LABEL_14;
      }
    }
    else
    {
      do
      {
        v28 = v27;
        v27 = (_QWORD *)v27[1];
      }
      while ( (*(_BYTE *)v27 & 2) == 0 );
    }
LABEL_52:
    v37 = v28;
    goto LABEL_53;
  }
  return 0;
}

