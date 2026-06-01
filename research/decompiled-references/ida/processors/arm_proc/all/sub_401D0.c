__int64 sub_401D0()
{
  __int64 v0; // rax
  __m128i v1; // xmm0
  __int64 v2; // rbx
  __int64 v3; // rax
  void (__fastcall ***v4)(void *); // r15
  __int64 v5; // r12
  __int64 v6; // rdx
  size_t v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __m128i si128; // xmm1
  __m128i v13; // xmm2
  __m128i *v14; // rax
  bool v15; // zf
  void (__fastcall *v16)(void *); // rdx
  void (__fastcall *v17)(void *); // rax
  int v18; // eax
  int v19; // eax
  void (__fastcall *v20)(void *); // rdx
  void (__fastcall *v21)(void *); // rax
  int v22; // eax
  void (__fastcall *v23)(void *); // rdx
  void (__fastcall *v24)(void *); // rax
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v31; // rsi
  char *v32; // rsi
  size_t v33; // rax
  size_t v34; // rbp
  void (__fastcall *v35)(void *); // rax
  void *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r12
  const __m128i *v42; // rbx
  __m128i *v43; // rbp
  _QWORD *v44; // rcx
  __int64 v45; // rcx
  __m128i v46; // xmm0
  __int64 v47; // rsi
  _QWORD *v48; // r15
  __int64 v49; // rsi
  void (__fastcall *v50)(void *); // r8
  void (__fastcall *v51)(_QWORD *); // rsi
  bool v52; // cf
  void *v53; // rdi
  size_t v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rax
  __m128i v58; // xmm2
  __m128i v59; // xmm1
  __int64 v60; // r9
  __int64 v61; // r12
  const __m128i *v62; // rbx
  __m128i *v63; // rbp
  _QWORD *v64; // rcx
  __int64 v65; // rcx
  __m128i v66; // xmm0
  __int64 v67; // rsi
  _QWORD *v68; // r15
  __int64 v69; // rsi
  void (__fastcall *v70)(void *); // r8
  void (__fastcall *v71)(_QWORD *); // rsi
  __int64 v72; // [rsp+0h] [rbp-5A8h]
  const void **v73; // [rsp+8h] [rbp-5A0h]
  __int64 v74; // [rsp+8h] [rbp-5A0h]
  __int64 v75; // [rsp+8h] [rbp-5A0h]
  __m128i v76; // [rsp+10h] [rbp-598h] BYREF
  __m128i v77; // [rsp+20h] [rbp-588h] BYREF
  __m128i v78; // [rsp+30h] [rbp-578h] BYREF
  __m128i v79; // [rsp+40h] [rbp-568h] BYREF
  __m128i v80; // [rsp+50h] [rbp-558h] BYREF
  __int64 *v81; // [rsp+60h] [rbp-548h]
  __int64 *v82; // [rsp+68h] [rbp-540h]
  __int64 v83; // [rsp+70h] [rbp-538h]
  void (__fastcall ****v84)(void *); // [rsp+78h] [rbp-530h]
  void (__fastcall ***v85)(void *); // [rsp+88h] [rbp-520h]
  __int64 v86; // [rsp+90h] [rbp-518h] BYREF
  __int64 *v87; // [rsp+98h] [rbp-510h]
  __int64 v88; // [rsp+A0h] [rbp-508h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-500h]
  void *dest; // [rsp+C0h] [rbp-4E8h]
  __int128 v91; // [rsp+C8h] [rbp-4E0h]
  void (__fastcall ***v92)(void *); // [rsp+E0h] [rbp-4C8h] BYREF
  void *v93; // [rsp+E8h] [rbp-4C0h] BYREF
  __m128i v94[6]; // [rsp+F0h] [rbp-4B8h] BYREF
  __m128i v95; // [rsp+150h] [rbp-458h] BYREF
  char s[1032]; // [rsp+160h] [rbp-448h] BYREF
  unsigned __int64 v97; // [rsp+568h] [rbp-40h]

  v97 = __readfsqword(0x28u);
  v89 = 0;
  v82 = &v88;
  v88 = 0;
  v95 = 0;
  v88 = qvector_reserve();
  v0 = ((_QWORD)v89 << 6) + v88;
  *(_OWORD *)(v0 + 8) = 0;
  v1 = _mm_load_si128(&v95);
  *(_QWORD *)v0 = 0;
  *(_WORD *)(v0 + 24) = 123;
  *(_QWORD *)(v0 + 32) = 0;
  *(_BYTE *)(v0 + 40) = 0;
  *(__m128i *)(v0 + 48) = v1;
  *(_QWORD *)&v89 = v89 + 1;
  v86 = 0;
  v87 = nullptr;
  v81 = &v86;
  if ( (unsigned int)parse_json() )
  {
    v25 = qerrstr();
  }
  else if ( (_DWORD)v86 == 3 )
  {
    v2 = *v87;
    v72 = *v87 + 40 * v87[1];
    if ( v72 == *v87 )
    {
LABEL_29:
      v25 = 0;
    }
    else
    {
      while ( 1 )
      {
        dest = nullptr;
        v91 = 0;
        if ( *(_QWORD *)(v2 + 8) <= 1u )
          break;
        v3 = operator new(0x30u);
        *(_DWORD *)(v3 + 8) = 1;
        v4 = (void (__fastcall ***)(void *))v3;
        *(_QWORD *)v3 = &off_A0628;
        v5 = v3 + 16;
        *(_OWORD *)(v3 + 16) = 0;
        *(_OWORD *)(v3 + 32) = 0;
        if ( (unsigned int)qregcomp() )
        {
          v32 = (char *)v5;
          qregerror();
          v33 = strlen(s);
          v34 = v33;
          if ( v33 )
          {
            v53 = dest;
            v54 = v33 + 1;
            if ( *((_QWORD *)&v91 + 1) < v33 + 1 )
            {
              dest = (void *)qvector_reserve();
              v53 = dest;
            }
            v32 = s;
            *(_QWORD *)&v91 = v54;
            memmove(v53, s, v34);
            *((_BYTE *)dest + v34) = 0;
          }
          else
          {
            *(_QWORD *)&v91 = 0;
          }
          if ( v4 )
          {
            v35 = (*v4)[2];
            if ( (char *)v35 == (char *)sub_38540 )
            {
              *v4 = (void (__fastcall **)(void *))&off_A0628;
              qregfree();
              operator delete(v4, 0x30u);
              v36 = dest;
              goto LABEL_46;
            }
            ((void (__fastcall *)(void (__fastcall ***)(void *), char *))v35)(v4, v32);
          }
LABEL_84:
          v36 = dest;
LABEL_46:
          if ( v36 )
          {
            *(_QWORD *)&v91 = 0;
            qfree();
          }
          break;
        }
        v85 = v4;
        if ( !v4 )
          goto LABEL_84;
        if ( *(_DWORD *)(v2 + 24) != 2 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        v6 = *(_QWORD *)(v2 + 32);
        ++*((_DWORD *)v4 + 2);
        v92 = v4;
        v7 = *(_QWORD *)(v6 + 8);
        v94[0] = 0;
        v93 = nullptr;
        if ( v7 )
        {
          v73 = (const void **)v6;
          v93 = (void *)qalloc_or_throw();
          v94[0].m128i_i64[1] = v7;
          memcpy(v93, *v73, v7);
          v94[0].m128i_i64[0] = v7;
        }
        v8 = xmmword_AA528;
        v9 = qword_AA520;
        v10 = *((_QWORD *)&xmmword_AA528 + 1);
        v11 = xmmword_AA528 + 1;
        if ( (unsigned __int64)&v92 < qword_AA520
          || (unsigned __int64)&v92 >= qword_AA520 + 32LL * *((_QWORD *)&xmmword_AA528 + 1) )
        {
          if ( *((_QWORD *)&xmmword_AA528 + 1) < v11 )
          {
            v76.m128i_i64[0] = *((_QWORD *)&xmmword_AA528 + 1);
            v38 = qvector_reserve();
            v39 = *((_QWORD *)&xmmword_AA528 + 1);
            *((_QWORD *)&xmmword_AA528 + 1) = v76.m128i_i64[0];
            v74 = v39;
            v40 = xmmword_AA528 - 1;
            if ( (__int64)xmmword_AA528 - 1 >= 0 )
            {
              v76.m128i_i64[0] = (__int64)v4;
              v78.m128i_i64[0] = v38;
              v77.m128i_i64[0] = v5;
              v41 = xmmword_AA528 - 1;
              v79.m128i_i64[0] = v2;
              v42 = (const __m128i *)qword_AA520;
              v80.m128i_i64[0] = (__int64)&v92;
              v43 = (__m128i *)v38;
              do
              {
                v44 = (_QWORD *)v42->m128i_i64[0];
                v43->m128i_i64[0] = v42->m128i_i64[0];
                if ( v44 )
                  ++*((_DWORD *)v44 + 2);
                v45 = v42->m128i_i64[1];
                v46 = _mm_loadu_si128(v42 + 1);
                v42->m128i_i64[1] = 0;
                v42[1].m128i_i64[1] = 0;
                v43->m128i_i64[1] = v45;
                v43[1] = v46;
                v47 = v42->m128i_i64[0];
                if ( v42->m128i_i64[0] )
                {
                  v15 = (*(_DWORD *)(v47 + 8))-- == 1;
                  if ( v15 )
                  {
                    v48 = (_QWORD *)v42->m128i_i64[0];
                    v49 = *(_QWORD *)v42->m128i_i64[0];
                    v50 = *(void (__fastcall **)(void *))v49;
                    if ( *(void (__fastcall **)(void *))v49 == sub_387B0 )
                    {
                      if ( v48 )
                      {
                        v51 = *(void (__fastcall **)(_QWORD *))(v49 + 16);
                        if ( v51 == sub_38540 )
                        {
                          *v48 = &off_A0628;
                          qregfree();
                          operator delete(v48, 0x30u);
                        }
                        else
                        {
                          ((void (__fastcall *)(__int64, void (__fastcall *)(_QWORD *), __int64, __int64, void (__fastcall *)(void *), __int64))v51)(
                            v42->m128i_i64[0],
                            v51,
                            v37,
                            v45,
                            v50,
                            v40);
                        }
                      }
                    }
                    else
                    {
                      ((void (__fastcall *)(__int64, __int64, __int64, __int64, void (__fastcall *)(void *), __int64))v50)(
                        v42->m128i_i64[0],
                        v49,
                        v37,
                        v45,
                        v50,
                        v40);
                    }
                  }
                }
                v42 += 2;
                v43 += 2;
                v52 = v41-- == 0;
              }
              while ( !v52 );
              v4 = (void (__fastcall ***)(void *))v76.m128i_i64[0];
              v38 = v78.m128i_i64[0];
              v2 = v79.m128i_i64[0];
            }
            v76.m128i_i64[0] = v38;
            qfree();
            v9 = v76.m128i_i64[0];
            *((_QWORD *)&xmmword_AA528 + 1) = v74;
            v8 = xmmword_AA528;
            qword_AA520 = v76.m128i_i64[0];
          }
          ++*((_DWORD *)v4 + 2);
          v31 = 32 * v8 + v9;
          *(__m128 *)v31 = _mm_loadh_ps((const double *)&v93);
          *(__m128i *)(v31 + 16) = _mm_load_si128(v94);
        }
        else
        {
          ++*((_DWORD *)v4 + 2);
          si128 = _mm_load_si128(v94);
          v13 = (__m128i)_mm_loadh_ps((const double *)&v93);
          v94[0] = 0;
          v93 = nullptr;
          v94[1] = v13;
          v94[2] = si128;
          if ( v10 < v11 )
          {
            v78.m128i_i64[0] = v10;
            v77 = si128;
            v76 = v13;
            v56 = qvector_reserve();
            v57 = *((_QWORD *)&xmmword_AA528 + 1);
            v58 = _mm_load_si128(&v76);
            v59 = _mm_load_si128(&v77);
            *((_QWORD *)&xmmword_AA528 + 1) = v78.m128i_i64[0];
            v75 = v57;
            v60 = xmmword_AA528 - 1;
            if ( (__int64)xmmword_AA528 - 1 >= 0 )
            {
              v76.m128i_i64[0] = (__int64)v4;
              v78.m128i_i64[0] = v56;
              v77.m128i_i64[0] = v5;
              v61 = xmmword_AA528 - 1;
              v83 = v2;
              v62 = (const __m128i *)qword_AA520;
              v84 = &v92;
              v63 = (__m128i *)v56;
              v79 = v58;
              v80 = v59;
              do
              {
                v64 = (_QWORD *)v62->m128i_i64[0];
                v63->m128i_i64[0] = v62->m128i_i64[0];
                if ( v64 )
                  ++*((_DWORD *)v64 + 2);
                v65 = v62->m128i_i64[1];
                v66 = _mm_loadu_si128(v62 + 1);
                v62->m128i_i64[1] = 0;
                v62[1].m128i_i64[1] = 0;
                v63->m128i_i64[1] = v65;
                v63[1] = v66;
                v67 = v62->m128i_i64[0];
                if ( v62->m128i_i64[0] )
                {
                  v15 = (*(_DWORD *)(v67 + 8))-- == 1;
                  if ( v15 )
                  {
                    v68 = (_QWORD *)v62->m128i_i64[0];
                    v69 = *(_QWORD *)v62->m128i_i64[0];
                    v70 = *(void (__fastcall **)(void *))v69;
                    if ( *(void (__fastcall **)(void *))v69 == sub_387B0 )
                    {
                      if ( v68 )
                      {
                        v71 = *(void (__fastcall **)(_QWORD *))(v69 + 16);
                        if ( v71 == sub_38540 )
                        {
                          *v68 = &off_A0628;
                          qregfree();
                          operator delete(v68, 0x30u);
                        }
                        else
                        {
                          ((void (__fastcall *)(__int64, void (__fastcall *)(_QWORD *), __int64, __int64, void (__fastcall *)(void *), __int64))v71)(
                            v62->m128i_i64[0],
                            v71,
                            v55,
                            v65,
                            v70,
                            v60);
                        }
                      }
                    }
                    else
                    {
                      ((void (__fastcall *)(__int64, __int64, __int64, __int64, void (__fastcall *)(void *), __int64))v70)(
                        v62->m128i_i64[0],
                        v69,
                        v55,
                        v65,
                        v70,
                        v60);
                    }
                  }
                }
                v62 += 2;
                v63 += 2;
                v52 = v61-- == 0;
              }
              while ( !v52 );
              v4 = (void (__fastcall ***)(void *))v76.m128i_i64[0];
              v56 = v78.m128i_i64[0];
              v58 = _mm_load_si128(&v79);
              v59 = _mm_load_si128(&v80);
              v2 = v83;
            }
            v76.m128i_i64[0] = v56;
            v78 = v59;
            v77 = v58;
            qfree();
            v9 = v76.m128i_i64[0];
            si128 = _mm_load_si128(&v78);
            v13 = _mm_load_si128(&v77);
            *((_QWORD *)&xmmword_AA528 + 1) = v75;
            v8 = xmmword_AA528;
            qword_AA520 = v76.m128i_i64[0];
          }
          ++*((_DWORD *)v4 + 2);
          v14 = (__m128i *)(v9 + 32 * v8);
          *v14 = v13;
          v14[1] = si128;
          v15 = (*((_DWORD *)v4 + 2))-- == 1;
          if ( v15 )
          {
            v16 = **v4;
            if ( v16 == sub_387B0 )
            {
              v17 = (*v4)[2];
              if ( (char *)v17 == (char *)sub_38540 )
              {
                *v4 = (void (__fastcall **)(void *))&off_A0628;
                qregfree();
                operator delete(v4, 0x30u);
              }
              else
              {
                v17(v4);
              }
            }
            else
            {
              v16(v4);
            }
          }
        }
        v18 = *((_DWORD *)v4 + 2);
        *(_QWORD *)&xmmword_AA528 = xmmword_AA528 + 1;
        v19 = v18 - 1;
        *((_DWORD *)v4 + 2) = v19;
        if ( !v19 )
        {
          v20 = **v4;
          if ( v20 == sub_387B0 )
          {
            v21 = (*v4)[2];
            if ( (char *)v21 == (char *)sub_38540 )
            {
              *v4 = (void (__fastcall **)(void *))&off_A0628;
              qregfree();
              operator delete(v4, 0x30u);
            }
            else
            {
              v21(v4);
            }
            v19 = *((_DWORD *)v4 + 2);
          }
          else
          {
            v20(v4);
            v19 = *((_DWORD *)v4 + 2);
          }
        }
        v22 = v19 - 1;
        *((_DWORD *)v4 + 2) = v22;
        if ( !v22 )
        {
          v23 = **v4;
          if ( v23 == sub_387B0 )
          {
            v24 = (*v4)[2];
            if ( (char *)v24 == (char *)sub_38540 )
            {
              *v4 = (void (__fastcall **)(void *))&off_A0628;
              qregfree();
              operator delete(v4, 0x30u);
            }
            else
            {
              v24(v4);
            }
          }
          else
          {
            v23(v4);
          }
        }
        if ( dest )
        {
          *(_QWORD *)&v91 = 0;
          qfree();
        }
        v2 += 40;
        if ( v72 == v2 )
          goto LABEL_29;
      }
      v25 = 3;
    }
  }
  else
  {
    v25 = 2;
  }
  jvalue_t_clear();
  v26 = v88;
  if ( v88 )
  {
    v27 = v89;
    if ( (_QWORD)v89 )
    {
      v28 = 0;
      do
      {
        v29 = (_QWORD *)(v26 + (v28 << 6));
        if ( *v29 )
        {
          v29[1] = 0;
          qfree();
          v26 = v88;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v89 = 0;
    qfree();
  }
  return v25;
}

