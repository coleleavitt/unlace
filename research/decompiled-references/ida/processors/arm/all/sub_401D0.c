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
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v32; // rsi
  char *v33; // rsi
  size_t v34; // rax
  size_t v35; // rbp
  void (__fastcall *v36)(void *); // rax
  void *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r12
  const __m128i *v44; // rbx
  __m128i *v45; // rbp
  _QWORD *v46; // rcx
  __int64 v47; // rcx
  __m128i v48; // xmm0
  __int64 v49; // rsi
  _QWORD *v50; // r15
  __int64 v51; // rsi
  void (__fastcall *v52)(void *); // r8
  void (__fastcall *v53)(_QWORD *); // rsi
  bool v54; // cf
  void *v55; // rdi
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  __m128i v60; // xmm2
  __m128i v61; // xmm1
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // r12
  const __m128i *v65; // rbx
  __m128i *v66; // rbp
  _QWORD *v67; // rcx
  __int64 v68; // rcx
  __m128i v69; // xmm0
  __int64 v70; // rsi
  _QWORD *v71; // r15
  __int64 v72; // rsi
  void (__fastcall *v73)(void *); // r8
  void (__fastcall *v74)(_QWORD *); // rsi
  __int64 v75; // [rsp+0h] [rbp-5A8h]
  const void **v76; // [rsp+8h] [rbp-5A0h]
  __int64 v77; // [rsp+8h] [rbp-5A0h]
  __int64 v78; // [rsp+8h] [rbp-5A0h]
  __m128i v79; // [rsp+10h] [rbp-598h] BYREF
  __m128i v80; // [rsp+20h] [rbp-588h] BYREF
  __m128i v81; // [rsp+30h] [rbp-578h] BYREF
  __m128i v82; // [rsp+40h] [rbp-568h] BYREF
  __m128i v83; // [rsp+50h] [rbp-558h] BYREF
  __int64 *v84; // [rsp+60h] [rbp-548h]
  __int64 *v85; // [rsp+68h] [rbp-540h]
  __int64 v86; // [rsp+70h] [rbp-538h]
  void (__fastcall ****v87)(void *); // [rsp+78h] [rbp-530h]
  void (__fastcall ***v88)(void *); // [rsp+88h] [rbp-520h]
  __int64 v89; // [rsp+90h] [rbp-518h] BYREF
  __int64 *v90; // [rsp+98h] [rbp-510h]
  __int64 v91; // [rsp+A0h] [rbp-508h] BYREF
  __int128 v92; // [rsp+A8h] [rbp-500h]
  void *dest; // [rsp+C0h] [rbp-4E8h] BYREF
  __int128 v94; // [rsp+C8h] [rbp-4E0h]
  void (__fastcall ***v95)(void *); // [rsp+E0h] [rbp-4C8h] BYREF
  void *v96; // [rsp+E8h] [rbp-4C0h] BYREF
  __m128i v97[6]; // [rsp+F0h] [rbp-4B8h] BYREF
  __m128i v98; // [rsp+150h] [rbp-458h] BYREF
  char s[1032]; // [rsp+160h] [rbp-448h] BYREF
  unsigned __int64 v100; // [rsp+568h] [rbp-40h]

  v100 = __readfsqword(0x28u);
  v92 = 0;
  v85 = &v91;
  v91 = 0;
  v98 = 0;
  v91 = qvector_reserve((__int64)&v91, 0, 1, 64);
  v0 = ((_QWORD)v92 << 6) + v91;
  *(_OWORD *)(v0 + 8) = 0;
  v1 = _mm_load_si128(&v98);
  *(_QWORD *)v0 = 0;
  *(_WORD *)(v0 + 24) = 123;
  *(_QWORD *)(v0 + 32) = 0;
  *(_BYTE *)(v0 + 40) = 0;
  *(__m128i *)(v0 + 48) = v1;
  *(_QWORD *)&v92 = v92 + 1;
  v89 = 0;
  v90 = 0;
  v84 = &v89;
  if ( (unsigned int)parse_json() )
  {
    v25 = qerrstr();
  }
  else if ( (_DWORD)v89 == 3 )
  {
    v2 = *v90;
    v75 = *v90 + 40 * v90[1];
    if ( v75 == *v90 )
    {
LABEL_29:
      v25 = 0;
    }
    else
    {
      while ( 1 )
      {
        dest = 0;
        v94 = 0;
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
          v33 = (char *)v5;
          qregerror();
          v34 = strlen(s);
          v35 = v34;
          if ( v34 )
          {
            v55 = dest;
            v56 = v34 + 1;
            if ( *((_QWORD *)&v94 + 1) < v34 + 1 )
            {
              dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v56, 1);
              v55 = dest;
            }
            v33 = s;
            *(_QWORD *)&v94 = v56;
            memmove(v55, s, v35);
            *((_BYTE *)dest + v35) = 0;
          }
          else
          {
            *(_QWORD *)&v94 = 0;
          }
          if ( v4 )
          {
            v36 = (*v4)[2];
            if ( (char *)v36 == (char *)sub_38540 )
            {
              *v4 = (void (__fastcall **)(void *))&off_A0628;
              qregfree();
              operator delete(v4, 0x30u);
              v37 = dest;
              goto LABEL_46;
            }
            ((void (__fastcall *)(void (__fastcall ***)(void *), char *))v36)(v4, v33);
          }
LABEL_84:
          v37 = dest;
LABEL_46:
          if ( v37 )
          {
            *(_QWORD *)&v94 = 0;
            qfree((__int64)v37);
          }
          break;
        }
        v88 = v4;
        if ( !v4 )
          goto LABEL_84;
        if ( *(_DWORD *)(v2 + 24) != 2 )
        {
          if ( !under_debugger )
            interr(1623);
          BUG();
        }
        v6 = *(_QWORD *)(v2 + 32);
        ++*((_DWORD *)v4 + 2);
        v95 = v4;
        v7 = *(_QWORD *)(v6 + 8);
        v97[0] = 0;
        v96 = 0;
        if ( v7 )
        {
          v76 = (const void **)v6;
          v96 = (void *)qalloc_or_throw();
          v97[0].m128i_i64[1] = v7;
          memcpy(v96, *v76, v7);
          v97[0].m128i_i64[0] = v7;
        }
        v8 = xmmword_AA528;
        v9 = qword_AA520;
        v10 = *((_QWORD *)&xmmword_AA528 + 1);
        v11 = xmmword_AA528 + 1;
        if ( (unsigned __int64)&v95 < qword_AA520
          || (unsigned __int64)&v95 >= qword_AA520 + 32LL * *((_QWORD *)&xmmword_AA528 + 1) )
        {
          if ( *((_QWORD *)&xmmword_AA528 + 1) < v11 )
          {
            v79.m128i_i64[0] = *((_QWORD *)&xmmword_AA528 + 1);
            v39 = qvector_reserve((__int64)&qword_AA520, 0, v11, 32);
            v40 = *((_QWORD *)&xmmword_AA528 + 1);
            *((_QWORD *)&xmmword_AA528 + 1) = v79.m128i_i64[0];
            v77 = v40;
            v41 = qword_AA520;
            v42 = xmmword_AA528 - 1;
            if ( (__int64)xmmword_AA528 - 1 >= 0 )
            {
              v79.m128i_i64[0] = (__int64)v4;
              v81.m128i_i64[0] = v39;
              v80.m128i_i64[0] = v5;
              v43 = xmmword_AA528 - 1;
              v82.m128i_i64[0] = v2;
              v44 = (const __m128i *)qword_AA520;
              v83.m128i_i64[0] = (__int64)&v95;
              v45 = (__m128i *)v39;
              do
              {
                v46 = (_QWORD *)v44->m128i_i64[0];
                v45->m128i_i64[0] = v44->m128i_i64[0];
                if ( v46 )
                  ++*((_DWORD *)v46 + 2);
                v47 = v44->m128i_i64[1];
                v48 = _mm_loadu_si128(v44 + 1);
                v44->m128i_i64[1] = 0;
                v44[1].m128i_i64[1] = 0;
                v45->m128i_i64[1] = v47;
                v45[1] = v48;
                v49 = v44->m128i_i64[0];
                if ( v44->m128i_i64[0] )
                {
                  v15 = (*(_DWORD *)(v49 + 8))-- == 1;
                  if ( v15 )
                  {
                    v50 = (_QWORD *)v44->m128i_i64[0];
                    v51 = *(_QWORD *)v44->m128i_i64[0];
                    v52 = *(void (__fastcall **)(void *))v51;
                    if ( *(void (__fastcall **)(void *))v51 == sub_387B0 )
                    {
                      if ( v50 )
                      {
                        v53 = *(void (__fastcall **)(_QWORD *))(v51 + 16);
                        if ( v53 == sub_38540 )
                        {
                          *v50 = &off_A0628;
                          qregfree();
                          operator delete(v50, 0x30u);
                        }
                        else
                        {
                          ((void (__fastcall *)(__int64, void (__fastcall *)(_QWORD *), __int64, __int64, void (__fastcall *)(void *), __int64))v53)(
                            v44->m128i_i64[0],
                            v53,
                            v38,
                            v47,
                            v52,
                            v42);
                        }
                      }
                    }
                    else
                    {
                      ((void (__fastcall *)(__int64, __int64, __int64, __int64, void (__fastcall *)(void *), __int64))v52)(
                        v44->m128i_i64[0],
                        v51,
                        v38,
                        v47,
                        v52,
                        v42);
                    }
                  }
                }
                v44 += 2;
                v45 += 2;
                v54 = v43-- == 0;
              }
              while ( !v54 );
              v4 = (void (__fastcall ***)(void *))v79.m128i_i64[0];
              v39 = v81.m128i_i64[0];
              v2 = v82.m128i_i64[0];
              v41 = qword_AA520;
            }
            v79.m128i_i64[0] = v39;
            qfree(v41);
            v9 = v79.m128i_i64[0];
            *((_QWORD *)&xmmword_AA528 + 1) = v77;
            v8 = xmmword_AA528;
            qword_AA520 = v79.m128i_i64[0];
          }
          ++*((_DWORD *)v4 + 2);
          v32 = 32 * v8 + v9;
          *(__m128 *)v32 = _mm_loadh_ps((const double *)&v96);
          *(__m128i *)(v32 + 16) = _mm_load_si128(v97);
        }
        else
        {
          ++*((_DWORD *)v4 + 2);
          si128 = _mm_load_si128(v97);
          v13 = (__m128i)_mm_loadh_ps((const double *)&v96);
          v97[0] = 0;
          v96 = 0;
          v97[1] = v13;
          v97[2] = si128;
          if ( v10 < v11 )
          {
            v81.m128i_i64[0] = v10;
            v80 = si128;
            v79 = v13;
            v58 = qvector_reserve((__int64)&qword_AA520, 0, v11, 32);
            v59 = *((_QWORD *)&xmmword_AA528 + 1);
            v60 = _mm_load_si128(&v79);
            v61 = _mm_load_si128(&v80);
            *((_QWORD *)&xmmword_AA528 + 1) = v81.m128i_i64[0];
            v78 = v59;
            v62 = qword_AA520;
            v63 = xmmword_AA528 - 1;
            if ( (__int64)xmmword_AA528 - 1 >= 0 )
            {
              v79.m128i_i64[0] = (__int64)v4;
              v81.m128i_i64[0] = v58;
              v80.m128i_i64[0] = v5;
              v64 = xmmword_AA528 - 1;
              v86 = v2;
              v65 = (const __m128i *)qword_AA520;
              v87 = &v95;
              v66 = (__m128i *)v58;
              v82 = v60;
              v83 = v61;
              do
              {
                v67 = (_QWORD *)v65->m128i_i64[0];
                v66->m128i_i64[0] = v65->m128i_i64[0];
                if ( v67 )
                  ++*((_DWORD *)v67 + 2);
                v68 = v65->m128i_i64[1];
                v69 = _mm_loadu_si128(v65 + 1);
                v65->m128i_i64[1] = 0;
                v65[1].m128i_i64[1] = 0;
                v66->m128i_i64[1] = v68;
                v66[1] = v69;
                v70 = v65->m128i_i64[0];
                if ( v65->m128i_i64[0] )
                {
                  v15 = (*(_DWORD *)(v70 + 8))-- == 1;
                  if ( v15 )
                  {
                    v71 = (_QWORD *)v65->m128i_i64[0];
                    v72 = *(_QWORD *)v65->m128i_i64[0];
                    v73 = *(void (__fastcall **)(void *))v72;
                    if ( *(void (__fastcall **)(void *))v72 == sub_387B0 )
                    {
                      if ( v71 )
                      {
                        v74 = *(void (__fastcall **)(_QWORD *))(v72 + 16);
                        if ( v74 == sub_38540 )
                        {
                          *v71 = &off_A0628;
                          qregfree();
                          operator delete(v71, 0x30u);
                        }
                        else
                        {
                          ((void (__fastcall *)(__int64, void (__fastcall *)(_QWORD *), __int64, __int64, void (__fastcall *)(void *), __int64))v74)(
                            v65->m128i_i64[0],
                            v74,
                            v57,
                            v68,
                            v73,
                            v63);
                        }
                      }
                    }
                    else
                    {
                      ((void (__fastcall *)(__int64, __int64, __int64, __int64, void (__fastcall *)(void *), __int64))v73)(
                        v65->m128i_i64[0],
                        v72,
                        v57,
                        v68,
                        v73,
                        v63);
                    }
                  }
                }
                v65 += 2;
                v66 += 2;
                v54 = v64-- == 0;
              }
              while ( !v54 );
              v4 = (void (__fastcall ***)(void *))v79.m128i_i64[0];
              v58 = v81.m128i_i64[0];
              v60 = _mm_load_si128(&v82);
              v61 = _mm_load_si128(&v83);
              v2 = v86;
              v62 = qword_AA520;
            }
            v79.m128i_i64[0] = v58;
            v81 = v61;
            v80 = v60;
            qfree(v62);
            v9 = v79.m128i_i64[0];
            si128 = _mm_load_si128(&v81);
            v13 = _mm_load_si128(&v80);
            *((_QWORD *)&xmmword_AA528 + 1) = v78;
            v8 = xmmword_AA528;
            qword_AA520 = v79.m128i_i64[0];
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
          *(_QWORD *)&v94 = 0;
          qfree((__int64)dest);
        }
        v2 += 40;
        if ( v75 == v2 )
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
  v26 = v91;
  if ( v91 )
  {
    v27 = v92;
    if ( (_QWORD)v92 )
    {
      v28 = 0;
      do
      {
        v29 = (__int64 *)(v26 + (v28 << 6));
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30);
          v26 = v91;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v92 = 0;
    qfree(v26);
  }
  return v25;
}
