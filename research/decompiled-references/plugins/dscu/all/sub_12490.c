__int64 __fastcall sub_12490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v9; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // [rsp+Ch] [rbp-11Ch] BYREF
  _BYTE v43[4]; // [rsp+10h] [rbp-118h] BYREF
  unsigned int v44; // [rsp+14h] [rbp-114h]
  unsigned int v45; // [rsp+18h] [rbp-110h]
  unsigned int v46; // [rsp+1Ch] [rbp-10Ch]
  __int64 v47; // [rsp+20h] [rbp-108h]
  __m128i v48; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v49[4]; // [rsp+40h] [rbp-E8h] BYREF
  int v50; // [rsp+60h] [rbp-C8h]
  __int64 v51; // [rsp+68h] [rbp-C0h] BYREF
  __int128 v52; // [rsp+70h] [rbp-B8h]
  int v53; // [rsp+80h] [rbp-A8h]
  __int64 v54; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v55; // [rsp+90h] [rbp-98h]
  __int64 v56; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v57; // [rsp+A8h] [rbp-80h]
  __int64 v58; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-68h]
  unsigned int v60; // [rsp+D0h] [rbp-58h]
  __m128i v61; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+E8h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v5 = a3;
  LOBYTE(a3) = a2 == 0;
  v6 = a3;
  LOBYTE(v6) = v5 == 0 || a2 == 0;
  if ( !(_BYTE)v6
    && (v9 = *(_QWORD *)(a1 + 8), v42 = 0, qlseek(v9, a2, 0) == a2)
    && qlread(*(_QWORD *)(a1 + 8), &v42, 4) == 4
    && qlseek(*(_QWORD *)(a1 + 8), a2, 0) == a2 )
  {
    v49[0] = a4;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v56 = 0;
    v58 = 0;
    v60 = 0;
    v49[1] = a5 + a4;
    v50 = v42;
    v49[2] = a2;
    v49[3] = v5;
    v52 = 0;
    v55 = 0;
    v57 = 0;
    v59 = 0;
    v61 = 0;
    switch ( v42 )
    {
      case 1:
        if ( qlread(*(_QWORD *)(a1 + 8), v43, 24) == 24 )
        {
          v32 = v45;
          v33 = v52;
          if ( (unsigned __int64)v52 < v45 )
          {
            if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)v45 )
            {
              v51 = qvector_reserve(&v51, v51, v45, 2, v30, v31);
              v33 = v52;
            }
            memset((void *)(v51 + 2 * v33), 0, 2 * (v32 - v33));
            *(_QWORD *)&v52 = v32;
          }
          else if ( v45 != (_QWORD)v52 )
          {
            *(_QWORD *)&v52 = v45;
          }
          v34 = qlseek(*(_QWORD *)(a1 + 8), a2 + v44, 0);
          if ( v34 == a2 + v44 )
          {
            sub_12020(*(_QWORD *)(a1 + 8), v45, 2u, "Slide info TOC entries count", -1, -1);
            v35 = qlread(*(_QWORD *)(a1 + 8), v51, 2LL * v45);
            if ( v35 == 2LL * v45 )
            {
              v38 = v55;
              v53 = HIDWORD(v47);
              v39 = (unsigned int)(v47 * HIDWORD(v47));
              if ( (unsigned __int64)v55 < v39 )
              {
                if ( *((_QWORD *)&v55 + 1) < v39 )
                {
                  v54 = qvector_reserve(&v54, v54, (unsigned int)(v47 * HIDWORD(v47)), 1, v36, v37);
                  v38 = v55;
                }
                memset((void *)(v54 + v38), 0, v39 - v38);
                *(_QWORD *)&v55 = v39;
              }
              else if ( v39 != (_QWORD)v55 )
              {
                *(_QWORD *)&v55 = (unsigned int)(v47 * HIDWORD(v47));
              }
              v40 = qlseek(*(_QWORD *)(a1 + 8), a2 + v46, 0);
              if ( v40 == a2 + v46 )
              {
                v41 = qlread(*(_QWORD *)(a1 + 8), v54, v55);
                if ( v41 == (_QWORD)v55 )
                  goto LABEL_14;
              }
            }
          }
        }
        break;
      case 2:
      case 4:
        if ( qlread(*(_QWORD *)(a1 + 8), v43, 40) == 40 && v44 )
        {
          v60 = v44;
          v21 = v46;
          v22 = v57;
          v61 = _mm_loadu_si128(&v48);
          if ( (unsigned __int64)v57 < v46 )
          {
            if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)v46 )
            {
              v56 = qvector_reserve(&v56, v56, v46, 2, v19, v20);
              v22 = v57;
            }
            memset((void *)(v56 + 2 * v22), 0, 2 * (v21 - v22));
            *(_QWORD *)&v57 = v21;
          }
          else if ( v46 != (_QWORD)v57 )
          {
            *(_QWORD *)&v57 = v46;
          }
          v23 = qlseek(*(_QWORD *)(a1 + 8), a2 + v45, 0);
          if ( v23 == a2 + v45 )
          {
            sub_12020(*(_QWORD *)(a1 + 8), v46, 2u, "Slide info page starts count", -1, -1);
            v24 = qlread(*(_QWORD *)(a1 + 8), v56, 2LL * v46);
            if ( v24 == 2LL * v46 )
            {
              v27 = HIDWORD(v47);
              v28 = v59;
              if ( (unsigned __int64)v59 < HIDWORD(v47) )
              {
                if ( *((_QWORD *)&v59 + 1) < (unsigned __int64)HIDWORD(v47) )
                {
                  v58 = qvector_reserve(&v58, v58, HIDWORD(v47), 2, v25, v26);
                  v28 = v59;
                }
                memset((void *)(v58 + 2 * v28), 0, 2 * (v27 - v28));
                *(_QWORD *)&v59 = v27;
              }
              else if ( HIDWORD(v47) != (_QWORD)v59 )
              {
                *(_QWORD *)&v59 = HIDWORD(v47);
              }
              v29 = qlseek(*(_QWORD *)(a1 + 8), a2 + (unsigned int)v47, 0);
              if ( v29 == a2 + (unsigned int)v47 )
              {
                sub_12020(*(_QWORD *)(a1 + 8), HIDWORD(v47), 2u, "Slide info page extras count", -1, -1);
                v12 = qlread(*(_QWORD *)(a1 + 8), v58, 2LL * HIDWORD(v47));
                if ( v12 == 2LL * HIDWORD(v47) )
                  goto LABEL_14;
              }
            }
          }
        }
        break;
      case 3:
      case 5:
        if ( qlread(*(_QWORD *)(a1 + 8), v43, 24) == 24 && v44 )
        {
          v60 = v44;
          v17 = v45;
          v61.m128i_i64[0] = 0x3FF8000000000000LL;
          v61.m128i_i64[1] = v47;
          v18 = v57;
          if ( (unsigned __int64)v57 < v45 )
          {
            if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)v45 )
            {
              v56 = qvector_reserve(&v56, v56, v45, 2, v15, v16);
              v18 = v57;
            }
            memset((void *)(v56 + 2 * v18), 0, 2 * (v17 - v18));
            *(_QWORD *)&v57 = v17;
          }
          else if ( v45 != (_QWORD)v57 )
          {
            *(_QWORD *)&v57 = v45;
          }
          sub_12020(*(_QWORD *)(a1 + 8), v45, 2u, "Slide info page starts count", -1, -1);
          v12 = qlread(*(_QWORD *)(a1 + 8), v56, 2LL * v45);
          if ( v12 == 2LL * v45 )
            goto LABEL_14;
        }
        break;
      default:
LABEL_14:
        sub_120E0((__int64 *)(a1 + 648), (__int64)v49, v12, v13, v14);
        v6 = 1;
        break;
    }
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58);
    }
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56);
    }
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
