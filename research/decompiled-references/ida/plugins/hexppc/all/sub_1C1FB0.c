__int64 __fastcall sub_1C1FB0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v7; // eax
  int v9; // eax
  int v10; // r12d
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rax
  __int64 *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // edx
  __int16 v22; // cx
  __int64 v23; // rdx
  __int64 v24; // rsi
  _DWORD *v25; // r14
  __int64 v26; // rax
  __int64 *v27; // rbp
  __int64 v28; // rbx
  int v29; // edi
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // r15
  _DWORD *v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 (__fastcall *v36)(__int64, unsigned int); // rax
  int v38; // [rsp+10h] [rbp-A8h]
  __int64 v40; // [rsp+20h] [rbp-98h]
  __int128 v41; // [rsp+28h] [rbp-90h]
  int v42; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int16 v43; // [rsp+48h] [rbp-70h]
  int v44; // [rsp+50h] [rbp-68h]
  int v45[4]; // [rsp+60h] [rbp-58h] BYREF
  int v46; // [rsp+70h] [rbp-48h]
  unsigned __int64 v47; // [rsp+78h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 2 )
  {
    if ( v7 <= 2 )
    {
      if ( v7 == 1 )
      {
        v13 = *(_QWORD *)(a3 + 8) + a5;
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v13;
        return a1;
      }
    }
    else if ( (unsigned int)(v7 - 3) <= 1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, *(unsigned __int16 *)(a3 + 8));
      v10 = v9;
      if ( v9 == -1 )
      {
        if ( !under_debugger )
          sub_37EEE0(50215);
      }
      else
      {
        v11 = *(unsigned __int16 *)(a3 + 10);
        if ( *(_DWORD *)a3 == 3 )
        {
          if ( (int)sub_12FEB0((_DWORD *)a2, nullptr, v9, 0x7FFFFFFFu) <= v11 )
          {
            if ( !under_debugger )
              sub_37EEE0(51934);
          }
          else
          {
            v35 = (unsigned int)(v10 + v11);
            v36 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a2 + 320LL);
            if ( v36 != sub_1BE2C0 )
              LODWORD(v35) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))v36)(a2, v35, (unsigned int)a4);
            if ( (_DWORD)v35 != -1 )
            {
              *(_DWORD *)a1 = 3;
              *(_DWORD *)(a1 + 8) = v35;
              return a1;
            }
            if ( !under_debugger )
              sub_37EEE0(51807);
          }
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, *(unsigned __int16 *)(a3 + 10));
          if ( v12 != -1 )
          {
            if ( a4 > 0 && v10 + (a4 >> 1) == v12 )
            {
              *(_DWORD *)a1 = 3;
              *(_DWORD *)(a1 + 8) = v10;
            }
            else
            {
              *(_DWORD *)a1 = 4;
              *(_DWORD *)(a1 + 8) = v10 | (v12 << 16);
            }
            return a1;
          }
          if ( !under_debugger )
            sub_37EEE0(51022);
        }
      }
LABEL_55:
      BUG();
    }
    if ( !under_debugger )
      sub_37EEE0(51111);
    goto LABEL_55;
  }
  v15 = *(__int64 **)(a3 + 8);
  v40 = 0;
  v41 = 0;
  v16 = *v15;
  v17 = *v15 + 24 * v15[1];
  if ( v17 != *v15 )
  {
    while ( 1 )
    {
      v42 = 0;
      copy_argloc();
      v18 = _mm_cvtsi32_si128(*(_DWORD *)(v16 + 16));
      v44 = _mm_cvtsi128_si32(v18);
      v19 = sub_3356F0(&v42);
      sub_1C1FB0(v45, v19, &v42, (unsigned int)_mm_extract_epi16(v18, 1), a5);
      copy_argloc();
      cleanup_argloc();
      if ( !(_QWORD)v41 )
        break;
      v20 = v40 + 24 * v41 - 24;
      if ( *(_DWORD *)v20 != 3 )
        break;
      if ( v42 != 3 )
        break;
      v21 = *(unsigned __int16 *)(v20 + 18);
      v22 = *(_WORD *)(v20 + 18);
      if ( (unsigned __int16)v44 != v21 + *(unsigned __int16 *)(v20 + 16) )
        break;
      v29 = *(unsigned __int16 *)(v20 + 8);
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
      {
        if ( v29 != v43 + HIWORD(v44) )
          break;
        v38 = v43;
        *(_WORD *)(v20 + 18) = v22 + HIWORD(v44);
        cleanup_argloc();
        *(_DWORD *)v20 = 3;
        *(_DWORD *)(v20 + 8) = v38;
      }
      else
      {
        if ( v43 != v29 + v21 )
          break;
        *(_WORD *)(v20 + 18) = HIWORD(v44) + v22;
      }
LABEL_22:
      v16 += 24;
      cleanup_argloc();
      if ( v16 == v17 )
        goto LABEL_23;
    }
    v45[0] = 0;
    copy_argloc();
    v23 = v41;
    v24 = v40;
    v46 = v44;
    if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
    {
      v40 = qvector_reserve();
      v23 = v41;
      v24 = v40;
    }
    v25 = (_DWORD *)(v24 + 24 * v23);
    *v25 = 0;
    copy_argloc();
    *(_QWORD *)&v41 = v41 + 1;
    v25[4] = v46;
    cleanup_argloc();
    goto LABEL_22;
  }
LABEL_23:
  v26 = qalloc_or_throw();
  *(_QWORD *)v26 = 0;
  v27 = (__int64 *)v26;
  *(_OWORD *)(v26 + 8) = 0;
  if ( (_QWORD)v41 )
  {
    v30 = qalloc_or_throw();
    *v27 = v30;
    v31 = v30;
    v32 = 0;
    v27[2] = v41;
    while ( 1 )
    {
      v33 = (_DWORD *)(24 * v32 + v31);
      v34 = v40 + 24 * v32;
      *v33 = 0;
      copy_argloc();
      ++v32;
      v33[4] = *(_DWORD *)(v34 + 16);
      if ( (_QWORD)v41 == v32 )
        break;
      v31 = *v27;
    }
    v27[1] = v41;
  }
  if ( v27 )
  {
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v27;
  }
  if ( v40 )
  {
    if ( (_QWORD)v41 )
    {
      v28 = 0;
      do
      {
        ++v28;
        cleanup_argloc();
      }
      while ( (_QWORD)v41 != v28 );
    }
    qfree();
  }
  return a1;
}

