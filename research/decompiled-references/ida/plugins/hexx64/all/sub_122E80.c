__int64 __fastcall sub_122E80(unsigned __int64 *a1, unsigned int *a2)
{
  unsigned int v2; // eax
  int v4; // r12d
  char v5; // cl
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  bool v8; // zf
  __m128i v9; // xmm1
  char *v10; // r13
  int v11; // esi
  unsigned int v12; // r14d
  unsigned int v14; // r13d
  int v15; // eax
  __m128i *v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // cl
  __int64 *v23; // rax
  __int64 v24; // r12
  __int64 v25; // r14
  unsigned __int64 v26; // r14
  int v27; // eax
  int v28; // ecx
  int v29; // r12d
  bool v30; // cf
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // r8
  unsigned int v38; // eax
  __int64 v39; // rdi
  char v40; // [rsp+7h] [rbp-1F1h]
  __int64 v41; // [rsp+8h] [rbp-1F0h]
  __m128i v42; // [rsp+10h] [rbp-1E8h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-1D0h] BYREF
  __m128i v44; // [rsp+30h] [rbp-1C8h] BYREF
  __m128i v45; // [rsp+40h] [rbp-1B8h] BYREF
  __m128i v46; // [rsp+50h] [rbp-1A8h] BYREF
  __m128i v47; // [rsp+60h] [rbp-198h] BYREF
  __m128i v48; // [rsp+70h] [rbp-188h] BYREF
  __m128i v49; // [rsp+80h] [rbp-178h] BYREF
  __m128i v50; // [rsp+90h] [rbp-168h] BYREF
  __m128i v51; // [rsp+A0h] [rbp-158h] BYREF
  __m128i v52; // [rsp+B0h] [rbp-148h] BYREF
  __m128i v53; // [rsp+C0h] [rbp-138h] BYREF
  __m128i v54; // [rsp+D0h] [rbp-128h] BYREF
  __m128i v55; // [rsp+E0h] [rbp-118h] BYREF
  __m128i v56; // [rsp+F0h] [rbp-108h] BYREF
  __m128i v57; // [rsp+100h] [rbp-F8h] BYREF
  __m128i v58; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v59; // [rsp+120h] [rbp-D8h] BYREF
  __m128i v60; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+148h] [rbp-B0h]
  __int64 *v63; // [rsp+160h] [rbp-98h] BYREF
  __int128 v64; // [rsp+168h] [rbp-90h]
  __int64 *v65; // [rsp+180h] [rbp-78h] BYREF
  __int128 v66; // [rsp+188h] [rbp-70h]
  __int64 v67; // [rsp+1A0h] [rbp-58h] BYREF
  __int128 v68; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+1B8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 )
    return 0;
  v2 = *a2;
  if ( *a2 > 0x29 )
  {
    v40 = 0;
    if ( v2 - 45 > 7 )
      return 0;
    goto LABEL_4;
  }
  if ( v2 > 0x21 )
  {
    v40 = 1;
LABEL_4:
    if ( (unsigned __int8)sub_11FD80((char *)a2 + 48, (__int64 *)&v43, 0) )
      goto LABEL_5;
    return 0;
  }
  if ( v2 != 29 )
    return 0;
  v43 = 0;
  v40 = 1;
LABEL_5:
  v4 = 8 * a2[9];
  v5 = v4 - 1;
  if ( (unsigned __int64)(v4 - 1) <= 0x3F )
  {
    v7 = 1LL << v5;
    v6 = 2 * (1LL << v5);
  }
  else
  {
    v6 = 0;
    v7 = 0;
  }
  v8 = *((_BYTE *)a2 + 32) == 4;
  v9 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  v42 = v9;
  if ( v8 )
  {
    v10 = *((char **)a2 + 5);
    v11 = *(_DWORD *)v10;
    switch ( *(_DWORD *)v10 )
    {
      case 6:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
        v61 = 0;
        v62 = 0;
        v44.m128i_i64[0] = 0;
        v44.m128i_i64[1] = 2;
        sub_316BB0(&v61, &v44, 0.0, (__m128)v9);
        v41 = 2;
        goto LABEL_19;
      case 8:
      case 9:
        v29 = *((_DWORD *)v10 + 9);
        v61 = 0;
        v62 = 0;
        v4 = 8 * v29;
        v20 = v4;
        if ( v11 == 8 )
          goto LABEL_71;
        goto LABEL_36;
      case 0x13:
      case 0x14:
        if ( !(unsigned __int8)sub_11FD80(v10 + 48, &v67, 0) )
          goto LABEL_15;
        v27 = log2floor();
        v8 = *(_DWORD *)v10 == 19;
        v61 = 0;
        v28 = v27 + 1;
        v62 = 0;
        if ( !v8 )
        {
          if ( (unsigned __int64)v28 > 0x3F )
            goto LABEL_18;
          v41 = 1LL << v28;
          goto LABEL_38;
        }
        if ( (unsigned __int64)v28 > 0x3F )
        {
          v41 = 0;
          v23 = nullptr;
          v24 = 0;
          goto LABEL_44;
        }
        v41 = 1LL << v28;
        v24 = 1LL << v28;
        goto LABEL_75;
      case 0x17:
      case 0x18:
        if ( !(unsigned __int8)sub_152630(*((_QWORD *)a2 + 5), &v67) || (int)v67 <= 0 )
        {
LABEL_15:
          v4 = 8 * a2[9];
          goto LABEL_16;
        }
        v4 = 8 * *((_DWORD *)v10 + 9) - v67;
        v8 = *(_DWORD *)v10 == 24;
        v62 = 0;
        v61 = 0;
        v20 = v4;
        if ( v8 )
        {
LABEL_71:
          v30 = v20 < 0x40;
          v31 = 0;
          if ( v30 )
            v31 = 1LL << v4;
          v41 = v31;
          goto LABEL_42;
        }
LABEL_36:
        if ( v20 > 0x3F )
          goto LABEL_18;
        break;
      default:
        goto LABEL_16;
    }
LABEL_37:
    v41 = 1LL << v4;
LABEL_38:
    v44.m128i_i64[0] = 0;
    v44.m128i_i64[1] = v41;
    sub_316BB0(&v61, &v44, 0.0, (__m128)v9);
    goto LABEL_19;
  }
LABEL_16:
  v14 = *a2;
  v15 = sub_32EA20(*a2);
  v61 = 0;
  v62 = 0;
  if ( v14 == v15 )
  {
    v21 = 0;
    if ( (unsigned __int64)v4 < 0x40 )
      v21 = 1LL << v4;
    v41 = v21;
LABEL_42:
    v22 = v4 - 1;
    if ( (unsigned __int64)(v4 - 1) <= 0x3F )
    {
      v44.m128i_i64[0] = 0;
      v24 = 1LL << ((unsigned __int8)v4 - 1);
      v44.m128i_i64[1] = 1LL << v22;
      sub_316BB0(&v61, &v44, 0.0, (__m128)v9);
LABEL_75:
      v23 = (__int64 *)(-v24 & (v6 - 1));
    }
    else
    {
      v44 = 0;
      sub_316BB0(&v61, &v44, 0.0, (__m128)v9);
      v23 = nullptr;
      v24 = 0;
    }
LABEL_44:
    *(_QWORD *)&v64 = v24;
    v63 = v23;
    sub_316BB0(&v61, (__m128i *)&v63, 0.0, (__m128)v9);
    goto LABEL_19;
  }
  if ( (unsigned __int64)v4 <= 0x3F )
    goto LABEL_37;
LABEL_18:
  v44 = 0;
  sub_316BB0(&v61, &v44, 0.0, (__m128)v9);
  v41 = 0;
LABEL_19:
  v18 = *a2;
  v63 = nullptr;
  v64 = 0;
  switch ( v18 )
  {
    case 0x1Du:
    case 0x28u:
    case 0x33u:
      v25 = v43;
      if ( v43 == v7 )
        goto LABEL_78;
      if ( v7 >= v43 )
      {
        v56 = _mm_load_si128(&v42);
        sub_316BB0((__int64 *)&v63, &v56, 0.0, (__m128)v9);
        if ( v25 )
        {
          v57.m128i_i64[0] = 0;
          v57.m128i_i64[1] = v25;
          sub_316BB0((__int64 *)&v63, &v57, 0.0, (__m128)v9);
        }
      }
      else
      {
        v55.m128i_i64[0] = v7;
        v55.m128i_i64[1] = v43 - v7;
        sub_316BB0((__int64 *)&v63, &v55, 0.0, (__m128)v9);
      }
      goto LABEL_20;
    case 0x22u:
    case 0x2Du:
      v45 = _mm_unpacklo_epi64((__m128i)v43, (__m128i)(v6 - v43));
      sub_316BB0((__int64 *)&v63, &v45, *(double *)v45.m128i_i64, (__m128)v9);
      goto LABEL_20;
    case 0x23u:
    case 0x2Eu:
      v12 = 2;
      if ( !v43 )
        goto LABEL_30;
      v46.m128i_i64[1] = v43;
      v46.m128i_i64[0] = 0;
      sub_316BB0((__int64 *)&v63, &v46, 0.0, (__m128)v9);
      goto LABEL_20;
    case 0x24u:
    case 0x2Fu:
      if ( v6 - 1 == v43 )
        goto LABEL_78;
      v47.m128i_i64[0] = v43 + 1;
      v47.m128i_i64[1] = v6 - v43 - 1;
      sub_316BB0((__int64 *)&v63, &v47, 0.0, (__m128)v9);
      goto LABEL_20;
    case 0x25u:
    case 0x30u:
      v48.m128i_i64[0] = 0;
      v48.m128i_i64[1] = v43 + 1;
      sub_316BB0((__int64 *)&v63, &v48, 0.0, (__m128)v9);
      goto LABEL_20;
    case 0x26u:
    case 0x31u:
      if ( v7 - 1 == v43 )
      {
LABEL_78:
        v12 = 2;
        goto LABEL_30;
      }
      if ( v43 >= v7 - 1 )
      {
        v42.m128i_i64[0] = v43;
        v50.m128i_i64[1] = v7;
        v50.m128i_i64[0] = 0;
        sub_316BB0((__int64 *)&v63, &v50, 0.0, (__m128)v9);
        v16 = (__m128i *)v42.m128i_i64[0];
        if ( v42.m128i_i64[0] < (unsigned __int64)(v6 - 1) )
        {
          v51.m128i_i64[0] = v42.m128i_i64[0] + 1;
          v51.m128i_i64[1] = v6 - v42.m128i_i64[0] - 1;
          sub_316BB0((__int64 *)&v63, &v51, 0.0, (__m128)v9);
        }
      }
      else
      {
        v49.m128i_i64[0] = v43 + 1;
        v49.m128i_i64[1] = v7 - v43 - 1;
        sub_316BB0((__int64 *)&v63, &v49, 0.0, (__m128)v9);
      }
LABEL_20:
      sub_3180C0((__int64 *)&v63, (__int64)&v61, v16, v17);
      v12 = 2;
      if ( !(_QWORD)v64 )
        goto LABEL_28;
      if ( !(unsigned int)sub_316F80((__int64 *)&v63, &v61) )
      {
        v12 = 3;
        goto LABEL_28;
      }
      if ( (_QWORD)v64 == 1 && v63[1] == 1 )
      {
        v33 = a2[9];
        v34 = *((_QWORD *)a2 + 3);
        v43 = *v63;
        v32 = v43;
        *a2 = v40 == 0 ? 44 : 33;
        sub_120A10((__int64)(a2 + 12), a1, v32, v33, v34, 0);
        v12 = 1;
        goto LABEL_28;
      }
      v65 = nullptr;
      v67 = 0;
      *(_QWORD *)&v68 = v41;
      v66 = 0;
      sub_316BB0((__int64 *)&v65, (__m128i *)&v67, 0.0, (__m128)v9);
      sub_317C60((__int64 *)&v65, (__int64)&v63);
      if ( (_QWORD)v66 == 1 && v65[1] == 1 )
      {
        v36 = a2[9];
        v37 = *((_QWORD *)a2 + 3);
        v43 = *v65;
        v35 = v43;
        *a2 = v40 == 0 ? 43 : 32;
        sub_120A10((__int64)(a2 + 12), a1, v35, v36, v37, 0);
        goto LABEL_81;
      }
      v19 = *a2;
      if ( v19 == (unsigned int)sub_32EAF0(*a2) )
        goto LABEL_25;
      v67 = 0;
      v60.m128i_i64[0] = 0;
      v60.m128i_i64[1] = v7;
      v68 = 0;
      sub_316BB0(&v67, &v60, 0.0, (__m128)v9);
      if ( !(unsigned __int8)sub_317F40(&v67, (__int64)&v61) )
      {
        if ( v67 )
        {
          *(_QWORD *)&v68 = 0;
          qfree(v67);
        }
LABEL_25:
        v12 = 0;
        goto LABEL_26;
      }
      v38 = sub_32EAF0(*a2);
      v39 = v67;
      *a2 = v38;
      if ( v39 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v39);
      }
LABEL_81:
      v12 = 1;
LABEL_26:
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree((__int64)v65);
      }
LABEL_28:
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree((__int64)v63);
      }
LABEL_30:
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v61);
      }
      return v12;
    case 0x27u:
    case 0x32u:
      if ( v43 >= v7 )
      {
        v42.m128i_i64[0] = v43;
        v53.m128i_i64[1] = v7;
        v53.m128i_i64[0] = 0;
        sub_316BB0((__int64 *)&v63, &v53, 0.0, (__m128)v9);
        v54 = _mm_unpacklo_epi64((__m128i)v42.m128i_u64[0], (__m128i)(unsigned __int64)(v6 - v42.m128i_i64[0]));
        sub_316BB0((__int64 *)&v63, &v54, *(double *)v54.m128i_i64, (__m128)v9);
      }
      else
      {
        v52 = _mm_unpacklo_epi64((__m128i)v43, (__m128i)(v7 - v43));
        sub_316BB0((__int64 *)&v63, &v52, *(double *)v52.m128i_i64, (__m128)v9);
      }
      goto LABEL_20;
    case 0x29u:
    case 0x34u:
      v26 = v43;
      if ( v43 < v7 )
      {
        v59 = _mm_load_si128(&v42);
        sub_316BB0((__int64 *)&v63, &v59, 0.0, (__m128)v9);
        v65 = nullptr;
        *(_QWORD *)&v66 = v26 + 1;
        sub_316BB0((__int64 *)&v63, (__m128i *)&v65, 0.0, (__m128)v9);
      }
      else
      {
        v58.m128i_i64[0] = v7;
        v58.m128i_i64[1] = v43 + 1 - v7;
        sub_316BB0((__int64 *)&v63, &v58, 0.0, (__m128)v9);
      }
      goto LABEL_20;
    default:
      goto LABEL_20;
  }
}

