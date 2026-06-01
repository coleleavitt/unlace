__int64 __fastcall sub_5D880(__int64 a1, __int64 *a2, __int64 a3, __m128i *a4, __int64 *a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // rdx
  _QWORD *v20; // r13
  _QWORD *v21; // r12
  int v22; // eax
  unsigned __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rbx
  _DWORD *v34; // rax
  int v35; // eax
  _QWORD *v36; // r12
  void (__fastcall *v38)(_QWORD *); // rcx
  void (__fastcall *v39)(_QWORD *); // rdx
  _QWORD *v40; // rax
  __int64 v41; // r15
  void *v42; // rdi
  __int64 v43; // r15
  _QWORD *v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rdi
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rax
  __int64 v53; // r12
  const __m128i *v54; // rdx
  const __m128i *v55; // rax
  const __m128i *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __m128i v59; // xmm0
  __int64 v61; // rax
  __int64 *v62; // [rsp+10h] [rbp-78h]
  void *v63; // [rsp+10h] [rbp-78h]
  _QWORD *v64; // [rsp+10h] [rbp-78h]
  const __m128i **v65; // [rsp+10h] [rbp-78h]
  const __m128i *v66; // [rsp+10h] [rbp-78h]
  const __m128i *v67; // [rsp+18h] [rbp-70h]
  __int64 *v68; // [rsp+18h] [rbp-70h]
  __int64 v69; // [rsp+20h] [rbp-68h] BYREF
  __int64 v70; // [rsp+28h] [rbp-60h] BYREF
  void *v71; // [rsp+30h] [rbp-58h] BYREF
  __int64 v72; // [rsp+38h] [rbp-50h]
  unsigned __int64 v73; // [rsp+48h] [rbp-40h]

  v6 = a1;
  v7 = *(_DWORD *)(a1 + 448);
  v73 = __readfsqword(0x28u);
  if ( (v7 & 1) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 232);
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (v26 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v26 != -1 )
    {
LABEL_29:
      v27 = sub_5C620(a4, (__int64)a2, 1u, 0, a1 + 232);
      LOBYTE(v5) = (v5 & v27) != 0;
      LOBYTE(v27) = v27 != -1;
      LODWORD(v5) = v27 & v5;
      return (unsigned int)v5;
    }
LABEL_27:
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
    goto LABEL_29;
  }
  if ( (v7 & 2) != 0 )
    goto LABEL_3;
  if ( (*(_QWORD *)(a1 + 232) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a1 + 232) == -1 )
    goto LABEL_27;
  v19 = a5[1];
  v20 = (_QWORD *)*a5;
  v21 = (_QWORD *)(*a5 + 16 * v19);
  if ( (_QWORD *)*a5 == v21 )
    goto LABEL_23;
  do
  {
    v62 = a5;
    v22 = sub_849A0(a1 + 232, v20);
    a5 = v62;
    if ( !v22 )
      break;
    v20 += 2;
  }
  while ( v21 != v20 );
  v19 = v62[1];
  LODWORD(v5) = 0;
  v21 = (_QWORD *)(*v62 + 16 * v19);
  if ( v20 == v21 )
  {
LABEL_23:
    v23 = v19 + 1;
    v24 = *(_QWORD *)(a1 + 232);
    v25 = *(_QWORD *)(a1 + 240);
    if ( a5[2] < v23 )
    {
      v67 = (const __m128i *)a5[2];
      v65 = (const __m128i **)a5;
      v53 = qvector_reserve(a5, 0, v23, 16);
      v54 = v65[1];
      v55 = v65[2];
      v65[2] = v67;
      v56 = *v65;
      v57 = (__int64)&v54[-1].m128i_i64[1] + 7;
      if ( v57 >= 0 )
      {
        v58 = v53;
        do
        {
          v59 = _mm_loadu_si128(v56);
          v58 += 16;
          ++v56;
          *(__m128i *)(v58 - 16) = v59;
        }
        while ( v57-- != 0 );
        v56 = *v65;
      }
      v68 = (__int64 *)v65;
      v66 = v55;
      qfree(v56);
      a5 = v68;
      v68[2] = (__int64)v66;
      v61 = v68[1];
      *v68 = v53;
      v21 = (_QWORD *)(16 * v61 + v53);
    }
    *v21 = v24;
    v21[1] = v25;
    ++a5[1];
LABEL_3:
    if ( *(_DWORD *)(v6 + 384) != 6 )
    {
      v69 = 0;
      LODWORD(v5) = sub_5D750((int *)(v6 + 392), &v69, a3, a4, (__int64)a5, 0);
      if ( (_BYTE)v5 )
      {
        v10 = *(_DWORD *)(v6 + 384);
        if ( v10 > 4 )
        {
          if ( (v10 & 0xFFFFFFFD) == 5 )
          {
            copy_tinfo_t(a2, &v69);
            goto LABEL_14;
          }
        }
        else
        {
          if ( v10 > 2 )
          {
            copy_tinfo_t(a2, &v69);
            v52 = *a2;
            if ( *(_DWORD *)(v6 + 384) == 3 )
            {
              if ( (_BYTE)v52 )
                *a2 = v52 | 0x40;
            }
            else if ( (_BYTE)v52 )
            {
              LOBYTE(v52) = v52 | 0x80;
              *a2 = v52;
            }
            goto LABEL_14;
          }
          if ( v10 - 1 <= 1 )
          {
            v11 = *(_QWORD *)(v6 + 8);
            v71 = nullptr;
            LODWORD(v70) = 0;
            if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, void **))(*(_QWORD *)(v6 + 264) + 112LL))(
                   *(_QWORD *)(v11 + 24),
                   11,
                   &v70,
                   &v71)
              || !(_DWORD)v70 )
            {
              v12 = -1;
            }
            else
            {
              v12 = *(_QWORD *)(v6 + 368);
            }
            if ( !(unsigned __int8)sub_55270(a2, (__int64)&v69, v12) )
            {
              if ( (debug & 0x400000) != 0 )
              {
                v13 = sub_81C40(v6 + 8);
                sub_88B80(
                  (unsigned int)"Couldn't make pointer for DIE @ %s. Turning into dummy.\n",
                  v13,
                  v14,
                  v15,
                  v16,
                  v17);
              }
              v70 = 0;
              create_tinfo(&v70, 2, 7, 0);
              LODWORD(v72) = 0;
              v71 = nullptr;
              HIDWORD(v72) = v12;
              copy_tinfo_t(&v71, &v70);
              LODWORD(v5) = create_tinfo(a2, 11, 11, &v71);
              clear_tinfo_t(&v71);
              clear_tinfo_t(&v70);
            }
            goto LABEL_14;
          }
        }
        LODWORD(v5) = 0;
      }
LABEL_14:
      clear_tinfo_t(&v69);
      return (unsigned int)v5;
    }
    v70 = 0;
    if ( (unsigned __int8)sub_5D750((int *)(v6 + 392), &v70, a3, a4, (__int64)a5, 0) )
    {
      v5 = v6 + 416;
      v33 = v6 + 8;
      v34 = *(_DWORD **)(sub_87DA0(v33) + 216);
      v71 = v34;
      if ( v34 )
        ++v34[2];
      v35 = sub_88CF0(a2, &v71, &v70, v5);
      v36 = v71;
      LODWORD(v5) = v35;
      if ( v71 )
      {
        if ( (*((_DWORD *)v71 + 2))-- == 1 )
        {
          v38 = *(void (__fastcall **)(_QWORD *))*v36;
          if ( v38 == sub_15E30 )
          {
            v39 = *(void (__fastcall **)(_QWORD *))(*v36 + 16LL);
            if ( v39 == sub_15D70 )
            {
              *v36 = &off_C71D8;
              v40 = (_QWORD *)v36[16];
              v63 = v40;
              if ( v40 )
              {
                v41 = v40[2];
                while ( v41 )
                {
                  sub_546C0(*(_QWORD **)(v41 + 24));
                  v42 = (void *)v41;
                  v41 = *(_QWORD *)(v41 + 16);
                  operator delete(v42, 0x30u);
                }
                operator delete(v63, 0x30u);
              }
              v43 = v36[19];
              while ( v43 )
              {
                sub_54400(*(_QWORD **)(v43 + 24));
                v44 = (_QWORD *)v43;
                v43 = *(_QWORD *)(v43 + 16);
                v45 = v44[4];
                if ( v45 )
                {
                  v44[5] = 0;
                  v64 = v44;
                  qfree(v45);
                  v44 = v64;
                }
                operator delete(v44, 0x48u);
              }
              v46 = v36[12];
              if ( v46 )
              {
                v36[13] = 0;
                qfree(v46);
              }
              operator delete(v36, 0xC0u);
            }
            else
            {
              v39(v36);
            }
          }
          else
          {
            v38(v36);
          }
        }
      }
      if ( (_BYTE)v5 )
        goto LABEL_38;
      if ( (debug & 0x400000) != 0 )
      {
        v47 = sub_81C40(v33);
        sub_88B80(
          (unsigned int)"Couldn't create array with desired size for DIE @ %s. Turning into 1-element array.\n",
          v47,
          v48,
          v49,
          v50,
          v51);
      }
    }
    else
    {
      if ( (debug & 0x400000) != 0 )
      {
        v28 = sub_81C40(v6 + 8);
        sub_88B80((unsigned int)"Couldn't create array for DIE @ %s. Turning into dummy.\n", v28, v29, v30, v31, v32);
      }
      create_tinfo(&v70, 2, 7, 0);
    }
    v71 = nullptr;
    v72 = 0x100000000LL;
    copy_tinfo_t(&v71, &v70);
    LODWORD(v5) = create_tinfo(a2, 11, 11, &v71);
    clear_tinfo_t(&v71);
LABEL_38:
    clear_tinfo_t(&v70);
  }
  return (unsigned int)v5;
}
