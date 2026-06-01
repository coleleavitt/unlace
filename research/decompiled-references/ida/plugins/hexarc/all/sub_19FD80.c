__int64 __fastcall sub_19FD80(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v5)(void); // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // ebp
  int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  _DWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // ebp
  _DWORD *v32; // rdx
  _DWORD *v33; // rax
  __int64 v34; // rdi
  int v35; // eax
  char v36; // al
  __int64 v37; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // [rsp+0h] [rbp-E8h]
  int v45; // [rsp+8h] [rbp-E0h]
  int v46; // [rsp+Ch] [rbp-DCh]
  __int64 *v47; // [rsp+10h] [rbp-D8h]
  __int64 *v48; // [rsp+18h] [rbp-D0h]
  _DWORD v49[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+30h] [rbp-B8h]
  int v51; // [rsp+38h] [rbp-B0h]
  __int64 v52; // [rsp+40h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-A0h]
  __int64 v54; // [rsp+58h] [rbp-90h]
  __int64 v55; // [rsp+60h] [rbp-88h]
  __int128 v56; // [rsp+68h] [rbp-80h]
  __int64 v57; // [rsp+78h] [rbp-70h]
  __int128 v58; // [rsp+80h] [rbp-68h]
  __int64 v59; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+98h] [rbp-50h]
  __int64 v61; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v62; // [rsp+A8h] [rbp-40h]

  v3 = *(_QWORD *)a1;
  v62 = __readfsqword(0x28u);
  v5 = *(unsigned __int8 (**)(void))(v3 + 56);
  if ( (char *)v5 != (char *)sub_18E4E0 )
  {
    if ( v5() )
      goto LABEL_3;
LABEL_48:
    if ( !under_debugger )
      sub_37B760(52057);
    goto LABEL_68;
  }
  if ( !*(_QWORD *)(a1 + 72) )
    goto LABEL_48;
LABEL_3:
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  if ( *(_BYTE *)(a1 + 116) )
  {
    if ( *(_QWORD *)(a1 + 72) != 1 )
    {
      v46 = 0;
      v7 = 0;
      v48 = &v59;
      v47 = &v52;
      do
      {
        v8 = 5 * v7;
        v9 = *(_QWORD *)(a1 + 64);
        v56 = 0;
        v10 = 8 * v8;
        v60 = 0xFFFFFFFF00000000LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3FA120);
        v54 = 1;
        v55 = 0;
        v57 = 0;
        v59 = 0;
        v61 = 0;
        v58 = 0;
        v11 = *(_QWORD *)(v9 + 8 * v8 + 16);
        v52 = 0;
        si128.m128i_i64[1] = v11;
        HIDWORD(v60) = 1;
        copy_tinfo_t();
        LODWORD(v60) = get_tinfo_size();
        v12 = *(_QWORD *)(a1 + 64);
        LODWORD(v52) = 1;
        v13 = *(_QWORD *)(v12 + v10 + 24);
        v49[0] = 0;
        if ( v13 < 0 )
          v13 = 0;
        si128.m128i_i64[0] = v13;
        copy_argloc();
        v50 = si128.m128i_i64[1];
        v14 = sub_1E91C0(v6 + 432, v49);
        cleanup_argloc();
        if ( v14 == -1 )
          v14 = (int)sub_1EF1E0(
                       v6,
                       (_DWORD)v47,
                       0,
                       v15,
                       v16,
                       v17,
                       v44,
                       v45,
                       (_DWORD)v47,
                       (_DWORD)v48,
                       v49[0],
                       v49[2],
                       v50,
                       v51,
                       v52,
                       si128.m128i_i32[0],
                       si128.m128i_i32[2],
                       v54,
                       v55,
                       v56,
                       *((__int64 *)&v56 + 1));
        v18 = *(_QWORD *)(v6 + 432);
        v19 = v18 + 104 * v14;
        if ( *(_DWORD *)(v19 + 92) == 1 )
        {
          v21 = v14;
        }
        else
        {
          v20 = *(int *)(v6 + 792);
          if ( v20 <= v14 )
          {
            if ( !under_debugger )
              sub_37B760(51466);
            goto LABEL_68;
          }
          v21 = v14;
          if ( (int)v20 > (int)v14 )
          {
            v22 = v14;
            v23 = 104LL * (int)v14;
            while ( 1 )
            {
              v24 = v23 + v18;
              if ( *(_DWORD *)v24 != 1 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + v10 + 24) > *(_QWORD *)(v24 + 8) )
                break;
              *(_DWORD *)(v24 + 92) = 1;
              ++v22;
              v23 += 104;
              if ( *(_DWORD *)(v6 + 792) <= v22 )
                goto LABEL_18;
              v18 = *(_QWORD *)(v6 + 432);
            }
            if ( !under_debugger )
              sub_37B760(52544);
LABEL_68:
            BUG();
          }
        }
LABEL_18:
        v25 = *(_DWORD *)(v19 + 24);
        BYTE1(v25) &= 0x7Eu;
        *(_DWORD *)(v19 + 24) = v25 | 0x100000;
        v26 = a2[1];
        v27 = (_DWORD *)(*a2 + 4 * v26);
        if ( (_DWORD *)*a2 == v27 )
          goto LABEL_43;
        v28 = (_DWORD *)*a2;
        while ( v21 != *v28 )
        {
          if ( v27 == ++v28 )
            goto LABEL_43;
        }
        if ( v27 == v28 )
        {
LABEL_43:
          if ( a2[2] < (unsigned __int64)(v26 + 1) )
          {
            v40 = qvector_reserve();
            v41 = a2[1];
            *a2 = v40;
            v27 = (_DWORD *)(v40 + 4 * v41);
          }
          *v27 = v21;
          ++a2[1];
        }
        clear_tinfo_t();
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree();
        }
        if ( v55 )
        {
          *(_QWORD *)&v56 = 0;
          qfree();
        }
        cleanup_argloc();
        v7 = ++v46;
      }
      while ( v46 < (unsigned __int64)(*(_QWORD *)(a1 + 72) - 1LL) );
    }
    v29 = sub_198800(a1);
    v30 = a2[1];
    v31 = v29;
    v32 = (_DWORD *)(*a2 + 4 * v30);
    v33 = (_DWORD *)*a2;
    if ( (_DWORD *)*a2 == v32 )
      goto LABEL_52;
    while ( v31 != *v33 )
    {
      if ( v32 == ++v33 )
        goto LABEL_52;
    }
    if ( v33 == v32 )
    {
LABEL_52:
      if ( a2[2] < (unsigned __int64)(v30 + 1) )
      {
        v42 = qvector_reserve();
        v43 = a2[1];
        *a2 = v42;
        v32 = (_DWORD *)(v42 + 4 * v43);
      }
      *v32 = v31;
      ++a2[1];
      if ( !*(_BYTE *)(v6 + 320) )
        goto LABEL_34;
LABEL_41:
      v39 = *(_QWORD *)(v6 + 464);
      if ( !v39 )
      {
        if ( !under_debugger )
          sub_37B760(51516);
        goto LABEL_68;
      }
      return *(unsigned int *)(*(_QWORD *)(v6 + 456) + 4 * v39 - 4);
    }
  }
  if ( *(_BYTE *)(v6 + 320) )
    goto LABEL_41;
LABEL_34:
  v34 = *(_QWORD *)(a1 + 16);
  v35 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(v34 + 8) != 3 )
    v35 += *(_DWORD *)(v34 + 48);
  if ( v35 <= 0 && (unsigned int)(*(_DWORD *)(v6 + 72) - 208) > 0x2F )
  {
    if ( !under_debugger )
      sub_37B760(51468);
    goto LABEL_68;
  }
  v36 = sub_19EEC0(v34, 1, 0);
  v37 = *(_QWORD *)(a1 + 16);
  if ( v36 )
  {
    sub_1930B0((_QWORD *)v37, (_QWORD *)(a1 + 88));
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 112) < *(_DWORD *)(v37 + 24)
      && ((getinf() & 0xF) != 6 || !(unsigned __int8)getinf_flag() || !(unsigned __int8)getinf_flag()) )
    {
      sub_19ED90(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 112), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL));
    }
    return 0xFFFFFFFFLL;
  }
}

