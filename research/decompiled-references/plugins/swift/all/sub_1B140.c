__int64 __fastcall sub_1B140(__int64 a1, __int64 a2, const char *a3, double a4, double a5, double a6, __m128 a7)
{
  unsigned int v10; // ebx
  __m128i si128; // xmm0
  char v13; // r15
  char v14; // al
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  const char *v19; // rsi
  const char *v20; // rdx
  __int64 v21; // rax
  const char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edx
  char *v26; // rax
  __int64 v27; // rax
  char *v28; // rax
  char *v29; // rax
  const char *v30; // rsi
  char *v31; // rdi
  int v32; // eax
  char *v33; // rdi
  char *v34; // rdx
  __int64 *v35; // rbp
  __int64 v36; // rax
  struct _Unwind_Exception *v37; // rbx
  unsigned int v38; // [rsp+8h] [rbp-E0h]
  char *v39; // [rsp+8h] [rbp-E0h]
  int v40; // [rsp+8h] [rbp-E0h]
  __int64 item_end; // [rsp+8h] [rbp-E0h]
  unsigned __int64 i; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v43; // [rsp+18h] [rbp-D0h]
  __int64 v44; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-C0h] BYREF
  char *s1; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v47; // [rsp+38h] [rbp-B0h]
  const char *v48; // [rsp+50h] [rbp-98h] BYREF
  __int128 v49; // [rsp+58h] [rbp-90h]
  unsigned __int64 v50; // [rsp+70h] [rbp-78h] BYREF
  __m128i v51; // [rsp+78h] [rbp-70h]
  char *v52; // [rsp+90h] [rbp-58h] BYREF
  __m128i v53; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v54; // [rsp+A8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v10 = sub_FA00(a1, 6, (__int64)a3, 0, a4, a5);
  if ( (_BYTE)v10 )
  {
    v44 = 0;
    v10 = sub_7980(&v44, (__int64)a3);
    if ( !(_BYTE)v10 )
    {
LABEL_31:
      clear_tinfo_t();
      return v10;
    }
    v47 = 0;
    s1 = nullptr;
    sub_1AF50(a1, (__int64 *)&s1, (__int64)a3, &v44, "MangledTypeName", 0.0, a5, a6, a7);
    si128.m128i_i64[0] = 0;
    v49 = 0;
    v48 = nullptr;
    sub_1AF50(a1, (__int64 *)&v48, (__int64)a3, &v44, "Superclass", 0.0, a5, a6, a7);
    v13 = *(_BYTE *)(a2 + 116);
    if ( !v13 )
      goto LABEL_25;
    v14 = sub_BCA0((__int64)&v45, (__int64)a3, v44, "Kind");
    v15 = *(_DWORD *)a2;
    v13 = v14;
    if ( v14 )
    {
      if ( !v15 )
      {
        v16 = (unsigned __int16)v45;
        v13 = (_WORD)v45 == 1 || (_WORD)v45 == 7;
        if ( v13 )
        {
          if ( (unsigned __int64)v47 <= 1 )
          {
            v13 = 0;
LABEL_10:
            v17 = v49;
            v18 = *(_QWORD *)(a2 + 48);
            if ( (_QWORD)v49 )
            {
              v19 = v48;
              if ( !v18 )
              {
                if ( !*v48 )
                  goto LABEL_25;
                goto LABEL_14;
              }
            }
            else
            {
              v19 = ::s1;
              if ( !v18 )
                goto LABEL_25;
            }
            v43 = v49;
            if ( strcmp(*(const char **)(a2 + 40), v19) )
            {
              v17 = v43;
LABEL_14:
              v20 = "<null>";
              if ( v17 > 1 )
                v20 = v48;
              sub_CB10(
                (__int64)"bad field descriptor at %a: superclass %s (must be %s)\n",
                *(double *)si128.m128i_i64,
                a3,
                v20);
              goto LABEL_46;
            }
LABEL_25:
            if ( (unsigned __int8)sub_BCA0((__int64)&v50, (__int64)a3, v44, "NumFields") && v50 )
            {
              v23 = *(_QWORD *)(a1 + 360);
              if ( v23 == -1 )
                goto LABEL_40;
              if ( !v23 )
              {
                LODWORD(v52) = 0;
                v24 = sub_EF80((const char **)&qword_288C8, &v52);
                v25 = (int)v52;
                *(_QWORD *)(a1 + 360) = v24;
                *(_DWORD *)(a1 + 368) = v25;
                if ( v24 == -1 )
                  goto LABEL_40;
              }
              if ( qword_288D8 == -1 )
              {
                v37 = (struct _Unwind_Exception *)sub_7880();
                if ( s1 )
                {
                  *(_QWORD *)&v47 = 0;
                  qfree(s1);
                }
                clear_tinfo_t();
                _Unwind_Resume(v37);
              }
              v38 = qword_288D8;
              if ( !(unsigned __int8)sub_BCA0((__int64)&v52, (__int64)a3, v44, "FieldRecordSize") || (char *)v38 != v52 )
              {
                sub_CB10(
                  (__int64)"bad field record size %u (not %u) in field descriptor at %a\n",
                  (_DWORD)v52,
                  v38,
                  *(double *)si128.m128i_i64);
LABEL_40:
                v10 = 0;
                goto LABEL_27;
              }
              item_end = get_item_end(a3);
              if ( !(unsigned __int8)sub_FA00(a1, 7, item_end, (_QWORD)v52 * v50, *(double *)si128.m128i_i64, a5)
                || !(unsigned __int8)sub_7980(&v44, item_end) )
              {
                goto LABEL_40;
              }
              sub_18AC0((size_t *)(a2 + 72), v50);
              if ( v50 )
              {
                for ( i = 0; i < v50; ++i )
                {
                  v35 = (__int64 *)(*(_QWORD *)(a2 + 72) + 56 * i);
                  v36 = sub_BF20(item_end, v44, "FieldName");
                  if ( v36 != -1 )
                    sub_DF90(a1, v35, v36, *(double *)si128.m128i_i64, a5);
                  if ( (unsigned __int64)v35[1] <= 1 )
                    sub_10D20(v35, (__int64)"field%a", *(double *)si128.m128i_i64);
                  sub_1AF50(a1, v35 + 3, item_end, &v44, "MangledTypeName", *(double *)si128.m128i_i64, a5, a6, a7);
                  if ( (unsigned __int64)v35[1] <= 1 )
                  {
                    v13 = 0;
                  }
                  else if ( *(_DWORD *)a2 != 2 )
                  {
                    v13 &= (unsigned __int64)v35[4] > 1;
                  }
                  item_end += (__int64)v52;
                }
              }
            }
            *(_BYTE *)(a2 + 116) = v13;
LABEL_27:
            if ( v48 )
            {
              *(_QWORD *)&v49 = 0;
              qfree(v48);
            }
            if ( s1 )
            {
              *(_QWORD *)&v47 = 0;
              qfree(s1);
            }
            goto LABEL_31;
          }
          goto LABEL_58;
        }
        goto LABEL_42;
      }
      if ( v15 == 1 )
      {
        v16 = (unsigned __int16)v45;
        if ( !(_WORD)v45 )
          goto LABEL_45;
      }
      else if ( v15 != 2 || (v16 = (unsigned __int16)v45, (unsigned __int16)(v45 - 2) <= 1u) )
      {
LABEL_45:
        if ( (unsigned __int64)v47 <= 1 )
        {
LABEL_46:
          v13 = 0;
          goto LABEL_25;
        }
        goto LABEL_58;
      }
    }
    else
    {
      v16 = (unsigned __int16)v45;
    }
LABEL_42:
    si128.m128i_i64[0] = 0;
    v50 = 0;
    v51 = 0;
    switch ( v16 )
    {
      case 0LL:
        v27 = qvector_reserve(&v50, 0, 7, 1);
        v50 = v27;
        v51.m128i_i64[0] = 7;
        *(_DWORD *)v27 = 1970435155;
        *(_WORD *)(v27 + 4) = 29795;
        *(_BYTE *)(v50 + 6) = 0;
        v21 = v51.m128i_i64[0];
        break;
      case 1LL:
        v26 = (char *)qvector_reserve(&v50, 0, 6, 1);
        v50 = (unsigned __int64)v26;
        v51.m128i_i64[0] = 6;
        *(_DWORD *)v26 = 1935764547;
        v26[4] = 115;
        *(_BYTE *)(v50 + 5) = 0;
        v21 = v51.m128i_i64[0];
        break;
      case 2LL:
        v50 = qvector_reserve(&v50, 0, 5, 1);
        v51.m128i_i64[0] = 5;
        strcpy((char *)v50, "Enum");
        v21 = v51.m128i_i64[0];
        break;
      case 3LL:
        v29 = (char *)qvector_reserve(&v50, 0, 17, 1);
        si128 = _mm_load_si128((const __m128i *)&xmmword_21850);
        v50 = (unsigned __int64)v29;
        v51.m128i_i64[0] = 17;
        *(__m128i *)v29 = si128;
        *(_BYTE *)(v50 + 16) = 0;
        v21 = v51.m128i_i64[0];
        break;
      case 4LL:
        v50 = qvector_reserve(&v50, 0, 9, 1);
        v51.m128i_i64[0] = 9;
        strcpy((char *)v50, "Protocol");
        v21 = v51.m128i_i64[0];
        break;
      case 5LL:
        v50 = qvector_reserve(&v50, 0, 14, 1);
        v51.m128i_i64[0] = 14;
        strcpy((char *)v50, "ClassProtocol");
        v21 = v51.m128i_i64[0];
        break;
      case 6LL:
        v50 = qvector_reserve(&v50, 0, 13, 1);
        v51.m128i_i64[0] = 13;
        strcpy((char *)v50, "ObjCProtocol");
        v21 = v51.m128i_i64[0];
        break;
      case 7LL:
        v28 = (char *)qvector_reserve(&v50, 0, 10, 1);
        v50 = (unsigned __int64)v28;
        v51.m128i_i64[0] = 10;
        *(_QWORD *)v28 = 0x73616C43436A624FLL;
        v28[8] = 115;
        *(_BYTE *)(v50 + 9) = 0;
        v21 = v51.m128i_i64[0];
        break;
      default:
        v52 = nullptr;
        v53 = 0;
        sub_10D20((__int64 *)&v52, (__int64)"%u", (unsigned __int16)v16);
        si128 = _mm_loadu_si128(&v53);
        v50 = (unsigned __int64)v52;
        v21 = v53.m128i_i64[0];
        v51 = si128;
        break;
    }
    v22 = ::s1;
    if ( v21 )
      v22 = (const char *)v50;
    sub_CB10((__int64)"bad field descriptor at %a: kind %s (must be %s)\n", *(double *)si128.m128i_i64, a3, v22);
    if ( v50 )
    {
      v51.m128i_i64[0] = 0;
      *(double *)si128.m128i_i64 = qfree(v50);
    }
    if ( (unsigned __int64)v47 <= 1 )
      goto LABEL_23;
    v13 = 0;
LABEL_58:
    sub_A400((__int64 *)&v52, a2, ".");
    v30 = v52;
    if ( !v53.m128i_i64[0] )
      v30 = ::s1;
    v31 = (char *)::s1;
    if ( (_QWORD)v47 )
      v31 = s1;
    v39 = v52;
    v32 = strcmp(v31, v30);
    if ( v39 )
    {
      v33 = v39;
      v40 = v32;
      v53.m128i_i64[0] = 0;
      *(double *)si128.m128i_i64 = qfree(v33);
      v32 = v40;
    }
    if ( !v32 )
    {
LABEL_24:
      if ( *(_DWORD *)a2 )
        goto LABEL_25;
      goto LABEL_10;
    }
    sub_A400((__int64 *)&v52, a2, ".");
    v34 = (char *)::s1;
    if ( (_QWORD)v47 )
      v34 = s1;
    sub_CB10((__int64)"bad field descriptor at %a: type %s (must be %s)\n", *(double *)si128.m128i_i64, a3, v34);
    if ( v52 )
    {
      v53.m128i_i64[0] = 0;
      *(double *)si128.m128i_i64 = qfree(v52);
    }
LABEL_23:
    v13 = 0;
    goto LABEL_24;
  }
  return v10;
}
