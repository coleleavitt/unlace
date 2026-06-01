__int64 __fastcall sub_1A6580(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // rax
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // ebp
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  _DWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // ebp
  _DWORD *v30; // rdx
  _DWORD *v31; // rax
  __int64 v32; // rdi
  int v33; // eax
  char v34; // al
  __int64 v35; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // [rsp+Ch] [rbp-DCh]
  _DWORD v44[4]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-B8h]
  __int64 v46; // [rsp+40h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-A0h]
  __int64 v48; // [rsp+58h] [rbp-90h]
  __int64 v49; // [rsp+60h] [rbp-88h]
  __int128 v50; // [rsp+68h] [rbp-80h]
  __int64 v51; // [rsp+78h] [rbp-70h]
  __int128 v52; // [rsp+80h] [rbp-68h]
  __int64 v53; // [rsp+90h] [rbp-58h]
  unsigned __int64 v54; // [rsp+98h] [rbp-50h]
  __int64 v55; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v56 = __readfsqword(0x28u);
  v6 = *(unsigned __int8 (**)(void))(v4 + 56);
  if ( (char *)v6 != (char *)sub_194BA0 )
  {
    if ( v6() )
      goto LABEL_3;
LABEL_48:
    if ( !under_debugger )
      sub_383060(0xCB59u, a3);
    goto LABEL_68;
  }
  if ( !*(_QWORD *)(a1 + 72) )
    goto LABEL_48;
LABEL_3:
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  if ( *(_BYTE *)(a1 + 116) )
  {
    if ( *(_QWORD *)(a1 + 72) != 1 )
    {
      v43 = 0;
      v8 = 0;
      do
      {
        v9 = 5 * v8;
        v10 = *(_QWORD *)(a1 + 64);
        a3 = 0.0;
        v50 = 0;
        v11 = 8 * v9;
        v54 = 0xFFFFFFFF00000000LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
        v48 = 1;
        v49 = 0;
        v51 = 0;
        v53 = 0;
        v55 = 0;
        v52 = 0;
        v12 = *(_QWORD *)(v10 + 8 * v9 + 16);
        v46 = 0;
        si128.m128i_i64[1] = v12;
        HIDWORD(v54) = 1;
        copy_tinfo_t();
        LODWORD(v54) = get_tinfo_size();
        v13 = *(_QWORD *)(a1 + 64);
        LODWORD(v46) = 1;
        v14 = *(_QWORD *)(v13 + v11 + 24);
        v44[0] = 0;
        if ( v14 < 0 )
          v14 = 0;
        si128.m128i_i64[0] = v14;
        copy_argloc();
        v45 = si128.m128i_i64[1];
        v15 = sub_1F0540((__int64 *)(v7 + 432), (__int64)v44);
        cleanup_argloc();
        if ( v15 == -1 )
          v15 = (int)sub_1F6560(v7, (__int64)&v46, 0);
        v16 = *(_QWORD *)(v7 + 432);
        v17 = v16 + 104 * v15;
        if ( *(_DWORD *)(v17 + 92) == 1 )
        {
          v19 = v15;
        }
        else
        {
          v18 = *(int *)(v7 + 792);
          if ( v18 <= v15 )
          {
            if ( !under_debugger )
              sub_383060(0xC90Au, 0.0);
            goto LABEL_68;
          }
          v19 = v15;
          if ( (int)v18 > (int)v15 )
          {
            v20 = v15;
            v21 = 104LL * (int)v15;
            while ( 1 )
            {
              v22 = v21 + v16;
              if ( *(_DWORD *)v22 != 1 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + v11 + 24) > *(_QWORD *)(v22 + 8) )
                break;
              *(_DWORD *)(v22 + 92) = 1;
              ++v20;
              v21 += 104;
              if ( *(_DWORD *)(v7 + 792) <= v20 )
                goto LABEL_18;
              v16 = *(_QWORD *)(v7 + 432);
            }
            if ( !under_debugger )
              sub_383060(0xCD40u, 0.0);
LABEL_68:
            BUG();
          }
        }
LABEL_18:
        v23 = *(_DWORD *)(v17 + 24);
        BYTE1(v23) &= 0x7Eu;
        *(_DWORD *)(v17 + 24) = v23 | 0x100000;
        v24 = a2[1];
        v25 = (_DWORD *)(*a2 + 4 * v24);
        if ( (_DWORD *)*a2 == v25 )
          goto LABEL_43;
        v26 = (_DWORD *)*a2;
        while ( v19 != *v26 )
        {
          if ( v25 == ++v26 )
            goto LABEL_43;
        }
        if ( v25 == v26 )
        {
LABEL_43:
          v38 = v24 + 1;
          if ( a2[2] < v38 )
          {
            v39 = qvector_reserve((__int64)a2, *a2, v38, 4);
            v40 = a2[1];
            *a2 = v39;
            v25 = (_DWORD *)(v39 + 4 * v40);
          }
          *v25 = v19;
          ++a2[1];
        }
        clear_tinfo_t();
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          qfree(v51);
        }
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(v49);
        }
        cleanup_argloc();
        v8 = ++v43;
      }
      while ( v43 < (unsigned __int64)(*(_QWORD *)(a1 + 72) - 1LL) );
    }
    v27 = sub_19F000(a1, a3);
    v28 = a2[1];
    v29 = v27;
    v30 = (_DWORD *)(*a2 + 4 * v28);
    v31 = (_DWORD *)*a2;
    if ( (_DWORD *)*a2 == v30 )
      goto LABEL_52;
    while ( v29 != *v31 )
    {
      if ( v30 == ++v31 )
        goto LABEL_52;
    }
    if ( v31 == v30 )
    {
LABEL_52:
      if ( a2[2] < (unsigned __int64)(v28 + 1) )
      {
        v41 = qvector_reserve((__int64)a2, *a2, v28 + 1, 4);
        v42 = a2[1];
        *a2 = v41;
        v30 = (_DWORD *)(v41 + 4 * v42);
      }
      *v30 = v29;
      ++a2[1];
      if ( !*(_BYTE *)(v7 + 320) )
        goto LABEL_34;
LABEL_41:
      v37 = *(_QWORD *)(v7 + 464);
      if ( !v37 )
      {
        if ( !under_debugger )
          sub_383060(0xC93Cu, a3);
        goto LABEL_68;
      }
      return *(unsigned int *)(*(_QWORD *)(v7 + 456) + 4 * v37 - 4);
    }
  }
  if ( *(_BYTE *)(v7 + 320) )
    goto LABEL_41;
LABEL_34:
  v32 = *(_QWORD *)(a1 + 16);
  v33 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(v32 + 8) != 3 )
    v33 += *(_DWORD *)(v32 + 48);
  if ( v33 <= 0 && (unsigned int)(*(_DWORD *)(v7 + 72) - 208) > 0x2F )
  {
    if ( !under_debugger )
      sub_383060(0xC90Cu, a3);
    goto LABEL_68;
  }
  v34 = sub_1A56C0(v32, 1, 0);
  v35 = *(_QWORD *)(a1 + 16);
  if ( v34 )
  {
    sub_1998E0((_QWORD *)v35, (_QWORD *)(a1 + 88));
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 112) < *(_DWORD *)(v35 + 24)
      && ((getinf() & 0xF) != 6 || !(unsigned __int8)getinf_flag() || !(unsigned __int8)getinf_flag()) )
    {
      sub_1A5590(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 112), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL), a3);
    }
    return 0xFFFFFFFFLL;
  }
}

