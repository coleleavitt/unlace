__int64 __fastcall sub_DA90(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v26; // r12
  __int64 v27; // rbp
  unsigned __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // esi
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rbp
  __int64 range; // rax
  const char *v43; // rsi
  __int64 v45; // [rsp+8h] [rbp-130h]
  unsigned __int64 v46; // [rsp+8h] [rbp-130h]
  __int64 v47; // [rsp+30h] [rbp-108h] BYREF
  __int64 v48; // [rsp+38h] [rbp-100h] BYREF
  __int64 v49; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v50; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v51[24]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v52; // [rsp+68h] [rbp-D0h]
  __int64 v53; // [rsp+78h] [rbp-C0h]
  __int128 v54; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+90h] [rbp-A8h]
  __int128 v56; // [rsp+98h] [rbp-A0h]
  __int64 v57; // [rsp+A8h] [rbp-90h]
  __int128 v58; // [rsp+B0h] [rbp-88h]
  int v59; // [rsp+C0h] [rbp-78h]
  __int64 v60; // [rsp+C8h] [rbp-70h]
  __int128 v61; // [rsp+D0h] [rbp-68h]
  __int64 v62; // [rsp+E0h] [rbp-58h]
  __int128 v63; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v64; // [rsp+F8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  a1[11] = 0;
  v8 = getseg();
  if ( !v8 )
    goto LABEL_30;
  v9 = v8;
  v10 = *(_QWORD *)(a1[5] + 368);
  v11 = 2 * v10;
  v12 = 3 * v10;
  if ( a5 )
    v11 = v12;
  if ( (a4 & 1) == 0 || (unsigned __int8)is_loaded() )
  {
    v13 = *(_QWORD *)(v9 + 8) - a3;
    if ( v13 >= v11
      && (unsigned __int8)sub_4AA0((unsigned __int64 *)a1, a3, v11 + a3, 0)
      && (unsigned __int8)sub_4D90(a1, v11 - 2 * *(_QWORD *)(a1[5] + 368), a1 + 7, 0, 0)
      && (!a5 || (unsigned __int8)sub_4D90(a1, 0, a1 + 6, 0, 0))
      && !a1[7]
      && (unsigned __int8)sub_4D90(a1, (int)v11 - *(_DWORD *)(a1[5] + 368), a1 + 8, 0, 0)
      && (unsigned __int8)is_mapped() )
    {
      v14 = a1[5];
      v15 = a1[8];
      v55 = 0;
      v57 = v14;
      v59 = 0;
      v60 = 0;
      v62 = 0;
      v54 = 0;
      v56 = 0;
      v58 = -1;
      v61 = 0;
      v63 = 0;
      if ( (unsigned __int8)sub_CC60(&v54, a2, v15, a4) && a5 == ((v59 & 0xA) != 0) )
      {
        v16 = v13 - v11;
        v17 = a1[5];
        v18 = a1[1];
        a1[9] = v18;
        if ( v16 >= *(_QWORD *)(v17 + 368) )
        {
          do
          {
            if ( !(unsigned __int8)is_mapped()
              || !(unsigned __int8)sub_BB70(a1[5], (__int64 *)v51, v18)
              || !*(_QWORD *)v51
              || !(unsigned __int8)sub_B650() )
            {
              break;
            }
            v21 = a1[11];
            v22 = *(_QWORD *)v51;
            v23 = a1[10];
            if ( a1[12] < (unsigned __int64)(v21 + 1) )
            {
              v45 = *(_QWORD *)v51;
              v24 = qvector_reserve();
              a1[10] = v24;
              v23 = v24;
              v22 = v45;
              v21 = a1[11];
            }
            *(_QWORD *)(v23 + 8 * v21) = v22;
            v19 = a1[5];
            ++a1[11];
            v20 = *(_QWORD *)(v19 + 368);
            v16 -= v20;
            v18 += v20;
          }
          while ( v16 >= v20 );
        }
        if ( (unsigned __int8)sub_4AA0((unsigned __int64 *)a1, *a1, v18, 0) )
        {
          if ( !sub_4ED0(a2, 6u, *a1) )
          {
            sub_5060(a2, 6, a1);
            if ( (a4 & 0x10) != 0 )
            {
              v26 = *a1;
              if ( a5 )
                v26 += sub_10380(a1[5], *a1, 6, "offset vbase", 0);
              v27 = v26 + sub_10380(a1[5], v26, 6, "offset to this", 0);
              v28 = sub_10380(a1[5], v27, 4, "", 0) + v27;
              v29 = a1[11];
              v30 = v29 - 1;
              if ( v29 > 0 )
              {
                do
                  v28 += sub_10380(a1[5], v28, 20, "", 0);
                while ( v30-- != 0 );
              }
              v32 = a1[5];
              v33 = getseg();
              if ( v33 )
              {
                v34 = *(_QWORD *)(v32 + 368);
                v35 = *(_QWORD *)(v33 + 8);
                v36 = 2 * v34;
                v37 = 3 * v34;
                if ( (v59 & 0xA) == 0 )
                  v37 = v36;
                v38 = v59 & 0xA;
                v39 = v35 - v28;
                v46 = v37;
                while ( v39 >= v46 )
                {
                  v40 = v28 + v46;
                  if ( *(_QWORD *)(v32 + 128) )
                  {
                    if ( rangeset_t_find_range() )
                      break;
                    v40 = v28 + v46;
                    if ( *(_QWORD *)(v32 + 128) )
                    {
                      range = rangeset_t_find_range();
                      v40 = v28 + v46;
                      if ( range )
                        break;
                    }
                  }
                  v53 = v32;
                  memset(v51, 0, sizeof(v51));
                  v52 = 0;
                  if ( !(unsigned __int8)sub_4AA0((unsigned __int64 *)v51, v28, v40, 0)
                    || !(unsigned __int8)sub_4D90(v51, 0, &v47, 0, 0)
                    || v38 && !(unsigned __int8)sub_4D90(v51, *(_DWORD *)(v32 + 368), &v48, 0, 0)
                    || !(unsigned __int8)sub_4D90(v51, (int)v46 - *(_DWORD *)(v32 + 368), &v49, 0, 0)
                    || !v47
                    || (_QWORD)v54 != v49 )
                  {
                    if ( *(_QWORD *)&v51[16] )
                    {
                      *(_QWORD *)&v52 = 0;
                      qfree();
                    }
                    break;
                  }
                  if ( v38 )
                    v28 += sub_10380(v32, v28, 6, "offset vbase", 0);
                  v41 = sub_10380(v32, v28, 6, "offset to this", 0) + v28;
                  v28 = sub_10380(v32, v41, 4, "", 0) + v41;
                  for ( v39 -= v46; v39 >= *(_QWORD *)(v32 + 368); v28 += sub_10380(v32, v28, 20, "", 0) )
                  {
                    if ( !(unsigned __int8)is_mapped() )
                      break;
                    if ( !(unsigned __int8)sub_BB70(v32, &v50, v28) )
                      break;
                    if ( !v50 )
                      break;
                    if ( !(unsigned __int8)sub_B650() )
                      break;
                    v39 -= *(_QWORD *)(v32 + 368);
                  }
                  if ( *(_QWORD *)&v51[16] )
                  {
                    *(_QWORD *)&v52 = 0;
                    qfree();
                  }
                }
              }
            }
            if ( (a4 & 0x20) != 0 )
            {
              memset(v51, 0, sizeof(v51));
              if ( (unsigned __int8)sub_D890(a1, (const void **)v51) )
              {
                v43 = &haystack;
                if ( *(_QWORD *)&v51[8] )
                  v43 = *(const char **)v51;
                sub_10260(*a1, v43);
              }
              if ( *(_QWORD *)v51 )
              {
                *(_QWORD *)&v51[8] = 0;
                qfree();
              }
            }
          }
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree();
          }
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            qfree();
          }
          if ( v55 )
          {
            *(_QWORD *)&v56 = 0;
            qfree();
          }
          return 1;
        }
        a1[11] = 0;
      }
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree();
      }
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
      if ( v55 )
      {
        *(_QWORD *)&v56 = 0;
        qfree();
      }
    }
LABEL_30:
    a1[3] = 0;
    *(_OWORD *)a1 = -1;
    return 0;
  }
  if ( a5 || !(unsigned __int8)sub_4AA0((unsigned __int64 *)a1, a3, a3 + 2LL * *(_QWORD *)(a1[5] + 368), 1) )
    goto LABEL_30;
  *(__m128i *)(a1 + 7) = _mm_load_si128((const __m128i *)&xmmword_11030);
  return 1;
}
