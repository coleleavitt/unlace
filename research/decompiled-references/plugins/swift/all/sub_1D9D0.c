__int64 __fastcall sub_1D9D0(__int64 (__fastcall ***a1)(_QWORD, __m128 *), _DWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r13
  unsigned int v4; // ebp
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 *v11; // rbx
  _DWORD *v12; // rax
  unsigned int tinfo_size; // eax
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  __int64 *v17; // r14
  __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 i; // r12
  __int64 v28; // rax
  _QWORD *v29; // rbp
  __int64 v30; // rbx
  unsigned int v31; // eax
  struct _Unwind_Exception *v32; // rbp
  _QWORD *v33; // [rsp+8h] [rbp-98h]
  __int64 *v34; // [rsp+10h] [rbp-90h] BYREF
  _DWORD *v35; // [rsp+18h] [rbp-88h]
  _QWORD *v36; // [rsp+20h] [rbp-80h]
  _QWORD *v37; // [rsp+28h] [rbp-78h] BYREF
  __int128 v38; // [rsp+30h] [rbp-70h]
  __m128 v39; // [rsp+48h] [rbp-58h] BYREF
  __int64 v40; // [rsp+58h] [rbp-48h]
  unsigned __int64 v41; // [rsp+60h] [rbp-40h]

  v35 = a2;
  v36 = a3;
  v41 = __readfsqword(0x28u);
  v38 = 0;
  v34 = (__int64 *)&v37;
  v37 = nullptr;
  v40 = 0;
  v39 = _mm_loadh_ps((const double *)&v34);
  if ( (unsigned int)sub_1C4A0((__int64)&v39, a3, 0, 0) == -1 || (unsigned __int64)(v38 - 1) > 3 )
    goto LABEL_3;
  if ( (_QWORD)v38 != 1 || (v3 = v37, v37[1] != 1) )
  {
    v10 = qalloc_or_throw(24);
    *(_QWORD *)v10 = 0;
    v11 = (__int64 *)v10;
    *(_OWORD *)(v10 + 8) = 0;
    if ( !(_QWORD)v38 || (*(_QWORD *)v10 = qvector_reserve(v10, 0, v38, 24), v33 = &v37[4 * v38], v33 == v37) )
    {
LABEL_15:
      cleanup_argloc(v35);
      if ( v11 )
      {
        v12 = v35;
        *v35 = 2;
        *((_QWORD *)v12 + 1) = v11;
      }
      tinfo_size = get_tinfo_size(0, *v36, 0);
      v4 = optimize_argloc(v35, tinfo_size, 0);
      if ( (_BYTE)v4 )
        goto LABEL_18;
    }
    else
    {
      v14 = v37;
      while ( 1 )
      {
        v39 = 0u;
        v15 = (_QWORD *)(*v14 + 16LL * v14[1] - 16);
        v16 = v15[1];
        if ( !*((_WORD *)v14 + 12) )
          v16 += *v15 & 7LL;
        if ( v16 > 8 )
          break;
        v4 = (**a1)(a1, &v39);
        if ( !(_BYTE)v4 )
        {
          cleanup_argloc(&v39);
          if ( v11 )
          {
            v25 = *v11;
            if ( *v11 )
            {
              v26 = v11[1];
              if ( v26 )
              {
                for ( i = 0; i != v26; ++i )
                {
                  v28 = 3 * i;
                  cleanup_argloc(v25 + 8 * v28);
                  v25 = *v11;
                }
              }
              v11[1] = 0;
              qfree(v25);
            }
            qfree(v11);
          }
LABEL_18:
          v3 = v37;
LABEL_4:
          if ( v3 )
          {
            v5 = v38;
            if ( (_QWORD)v38 )
            {
LABEL_6:
              v6 = 0;
              do
              {
                v7 = &v3[4 * v6];
                v8 = *v7;
                if ( *v7 )
                {
                  v7[1] = 0;
                  qfree(v8);
                  v3 = v37;
                }
                ++v6;
              }
              while ( v6 != v5 );
            }
            *(_QWORD *)&v38 = 0;
            qfree(v3);
          }
          return v4;
        }
        v17 = (__int64 *)*v14;
        v18 = *v14 + 16LL * v14[1];
        if ( v18 != *v14 )
        {
          do
          {
            if ( v17[1] )
            {
              v22 = v11[1];
              v23 = *v11;
              if ( v11[2] < (unsigned __int64)(v22 + 1) )
              {
                v24 = qvector_reserve(v11, v23, v22 + 1, 24);
                *v11 = v24;
                v22 = v11[1];
                v23 = v24;
              }
              v19 = v23 + 24 * v22;
              *(_QWORD *)v19 = 0;
              *(_QWORD *)(v19 + 8) = 0;
              *(_DWORD *)(v19 + 16) = 0xFFFF;
              ++v11[1];
              copy_argloc(v19, &v39);
              v20 = *v17;
              if ( !*((_BYTE *)v14 + 24) && !*((_BYTE *)v14 + 25) )
              {
                v21 = *v17 & 7;
                if ( (v20 & 7) != 0 )
                {
                  if ( *(_DWORD *)v19 == 3 )
                  {
                    *(_WORD *)(v19 + 10) = v21;
                  }
                  else
                  {
                    *(_QWORD *)(v19 + 8) += v21;
                    *(_DWORD *)v19 = 1;
                  }
                  v20 = *v17;
                }
              }
              *(_WORD *)(v19 + 16) = v20;
              *(_WORD *)(v19 + 18) = v17[1];
            }
            v17 += 2;
          }
          while ( (__int64 *)v18 != v17 );
        }
        v14 += 4;
        cleanup_argloc(&v39);
        if ( v33 == v14 )
          goto LABEL_15;
      }
      sub_1C480();
    }
    if ( !under_debugger )
      interr(30777);
    BUG();
  }
  v29 = (_QWORD *)*v37;
  if ( !*(_QWORD *)*v37 )
  {
    v30 = v29[1];
    if ( v30 == get_tinfo_size(0, *v36, 0) )
    {
      if ( v29[1] > 8u )
      {
        v32 = (struct _Unwind_Exception *)sub_1C480();
        sub_1D5E0(v34);
        _Unwind_Resume(v32);
      }
      v31 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __m128 *), _DWORD *, _QWORD))**a1)(
              a1,
              v35,
              *((unsigned __int8 *)v3 + 24));
      v3 = v37;
      v4 = v31;
      goto LABEL_4;
    }
LABEL_3:
    v3 = v37;
    v4 = 0;
    goto LABEL_4;
  }
  if ( v37 )
  {
    v5 = 1;
    v4 = 0;
    goto LABEL_6;
  }
  return 0;
}
