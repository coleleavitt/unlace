__int64 __fastcall sub_1C59F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // r12d
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rax
  __int64 *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r15
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rsi
  _DWORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rbp
  __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // rbx
  int v34; // edi
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // r15
  _DWORD *v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 (__fastcall *v41)(__int64, unsigned int); // rax
  int v43; // [rsp+10h] [rbp-A8h]
  _QWORD *v44; // [rsp+18h] [rbp-A0h]
  __int64 v45; // [rsp+20h] [rbp-98h] BYREF
  __int128 v46; // [rsp+28h] [rbp-90h]
  int v47; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int16 v48; // [rsp+48h] [rbp-70h]
  int v49; // [rsp+50h] [rbp-68h]
  _DWORD v50[4]; // [rsp+60h] [rbp-58h] BYREF
  int v51; // [rsp+70h] [rbp-48h]
  unsigned __int64 v52; // [rsp+78h] [rbp-40h]

  v44 = (_QWORD *)a2;
  v52 = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v8 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( v8 <= 2 )
    {
      if ( v8 == 1 )
      {
        v14 = *(_QWORD *)(a3 + 8) + a5;
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v14;
        return a1;
      }
    }
    else if ( (unsigned int)(v8 - 3) <= 1 )
    {
      v9 = a4;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, *(unsigned __int16 *)(a3 + 8));
      v11 = v10;
      if ( v10 == -1 )
      {
        if ( !under_debugger )
          sub_383060(0xC427u, a6);
      }
      else
      {
        v12 = *(unsigned __int16 *)(a3 + 10);
        if ( *(_DWORD *)a3 == 3 )
        {
          if ( (int)sub_1338F0((_DWORD *)a2, nullptr, v10, 0x7FFFFFFFu) <= v12 )
          {
            if ( !under_debugger )
              sub_383060(0xCADEu, a6);
          }
          else
          {
            v40 = (unsigned int)(v11 + v12);
            v41 = *(__int64 (__fastcall **)(__int64, unsigned int))(*v44 + 320LL);
            if ( v41 != sub_1C1D00 )
              LODWORD(v40) = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))v41)(v44, v40, (unsigned int)v9);
            if ( (_DWORD)v40 != -1 )
            {
              *(_DWORD *)a1 = 3;
              *(_DWORD *)(a1 + 8) = v40;
              return a1;
            }
            if ( !under_debugger )
              sub_383060(0xCA5Fu, a6);
          }
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, *(unsigned __int16 *)(a3 + 10));
          if ( v13 != -1 )
          {
            if ( v9 > 0 && v11 + (v9 >> 1) == v13 )
            {
              *(_DWORD *)a1 = 3;
              *(_DWORD *)(a1 + 8) = v11;
            }
            else
            {
              *(_DWORD *)a1 = 4;
              *(_DWORD *)(a1 + 8) = v11 | (v13 << 16);
            }
            return a1;
          }
          if ( !under_debugger )
            sub_383060(0xC74Eu, a6);
        }
      }
LABEL_55:
      BUG();
    }
    if ( !under_debugger )
      sub_383060(0xC7A7u, a6);
    goto LABEL_55;
  }
  v16 = *(__int64 **)(a3 + 8);
  v45 = 0;
  v46 = 0;
  v17 = *v16;
  v18 = *v16 + 24 * v16[1];
  if ( v18 != *v16 )
  {
    while ( 1 )
    {
      v47 = 0;
      copy_argloc();
      v19 = _mm_cvtsi32_si128(*(_DWORD *)(v17 + 16));
      v49 = _mm_cvtsi128_si32(v19);
      v20 = sub_339CA0();
      sub_1C59F0((__int64)v50, v20, (__int64)&v47, (unsigned int)_mm_extract_epi16(v19, 1), a5);
      copy_argloc();
      cleanup_argloc();
      if ( !(_QWORD)v46 )
        break;
      v21 = v45 + 24 * v46 - 24;
      if ( *(_DWORD *)v21 != 3 )
        break;
      if ( v47 != 3 )
        break;
      v22 = *(unsigned __int16 *)(v21 + 18);
      if ( (unsigned __int16)v49 != v22 + *(unsigned __int16 *)(v21 + 16) )
        break;
      v34 = *(unsigned __int16 *)(v21 + 8);
      a2 = v44[12];
      if ( *(_BYTE *)(a2 + 145) )
      {
        if ( v34 != v48 + HIWORD(v49) )
          break;
        a2 = v22 + (unsigned int)HIWORD(v49);
        v43 = v48;
        *(_WORD *)(v21 + 18) = v22 + HIWORD(v49);
        cleanup_argloc();
        *(_DWORD *)v21 = 3;
        *(_DWORD *)(v21 + 8) = v43;
      }
      else
      {
        if ( v48 != v34 + v22 )
          break;
        *(_WORD *)(v21 + 18) = HIWORD(v49) + v22;
      }
LABEL_22:
      v17 += 24;
      cleanup_argloc();
      if ( v17 == v18 )
        goto LABEL_23;
    }
    v50[0] = 0;
    copy_argloc();
    v23 = v46;
    v24 = v45;
    v51 = v49;
    if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
    {
      v45 = qvector_reserve((__int64)&v45, v45, v46 + 1, 24);
      v23 = v46;
      v24 = v45;
    }
    v25 = (_DWORD *)(v24 + 24 * v23);
    a2 = (__int64)v50;
    *v25 = 0;
    copy_argloc();
    *(_QWORD *)&v46 = v46 + 1;
    v25[4] = v51;
    cleanup_argloc();
    goto LABEL_22;
  }
LABEL_23:
  v26 = qalloc_or_throw(24, a2, a3, a4);
  *(_QWORD *)v26 = 0;
  v29 = (__int64 *)v26;
  *(_OWORD *)(v26 + 8) = 0;
  v30 = v46;
  if ( (_QWORD)v46 )
  {
    v35 = qalloc_or_throw(24 * v46, a2, v27, v28);
    *v29 = v35;
    v36 = v35;
    v37 = 0;
    v29[2] = v30;
    while ( 1 )
    {
      v38 = (_DWORD *)(24 * v37 + v36);
      v39 = v45 + 24 * v37;
      *v38 = 0;
      copy_argloc();
      ++v37;
      v38[4] = *(_DWORD *)(v39 + 16);
      if ( v30 == v37 )
        break;
      v36 = *v29;
    }
    v29[1] = v30;
  }
  if ( v29 )
  {
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v29;
  }
  v31 = v45;
  if ( v45 )
  {
    v32 = v46;
    if ( (_QWORD)v46 )
    {
      v33 = 0;
      do
      {
        ++v33;
        cleanup_argloc();
        v31 = v45;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v46 = 0;
    qfree(v31);
  }
  return a1;
}

