__int64 __fastcall sub_D2F80(__int64 a1, __int64 a2, int a3, double a4)
{
  char *v5; // rdi
  __int64 v7; // r14
  char *v8; // rdx
  int v9; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int tinfo_size; // eax
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r13d
  _DWORD *v19; // rcx
  _DWORD *v20; // rdx
  _DWORD *v21; // rax
  int v22; // r15d
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // r14d
  signed int v27; // eax
  signed int v28; // r15d
  _DWORD *v29; // rdi
  signed int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rdx
  signed int *v33; // rcx
  signed int *v34; // rax
  unsigned __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // eax
  _DWORD *v39; // rcx
  _DWORD *v40; // rdx
  _DWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // edx
  __int64 v45; // [rsp-10h] [rbp-140h]
  int v46; // [rsp+Ch] [rbp-124h]
  __m128i *v47; // [rsp+18h] [rbp-118h]
  __int64 v48; // [rsp+20h] [rbp-110h]
  unsigned __int64 v49; // [rsp+28h] [rbp-108h]
  __int64 v50; // [rsp+30h] [rbp-100h]
  __int64 v51; // [rsp+40h] [rbp-F0h]
  unsigned int v52; // [rsp+50h] [rbp-E0h]
  int v53; // [rsp+50h] [rbp-E0h]
  int v54; // [rsp+54h] [rbp-DCh]
  int v56; // [rsp+60h] [rbp-D0h] BYREF
  int v57; // [rsp+64h] [rbp-CCh] BYREF
  __int64 v58; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+70h] [rbp-C0h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-B8h]
  __int64 v61; // [rsp+80h] [rbp-B0h]
  int v62[8]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-80h]
  __int64 v64; // [rsp+B8h] [rbp-78h]
  __int64 v65; // [rsp+C8h] [rbp-68h]
  __int64 v66; // [rsp+D0h] [rbp-60h]
  unsigned __int64 v67; // [rsp+F8h] [rbp-38h]

  v5 = *(char **)(a2 + 456);
  v67 = __readfsqword(0x28u);
  if ( *(_DWORD *)v5 != a3 )
    goto LABEL_2;
  if ( !(unsigned __int8)sub_36E1B0(a2) )
  {
LABEL_59:
    v5 = *(char **)(a2 + 456);
LABEL_2:
    v48 = 104LL * a3;
    v7 = v48 + *(_QWORD *)(a2 + 432);
    v8 = &v5[4 * *(_QWORD *)(a2 + 464)];
    if ( v8 != v5 )
    {
      while ( *(_DWORD *)v5 != a3 )
      {
        v5 += 4;
        if ( v8 == v5 )
          goto LABEL_8;
      }
      if ( v8 != v5 )
      {
        memmove(v5, v5 + 4, v8 - v5 - 4);
        --*(_QWORD *)(a2 + 464);
      }
    }
LABEL_8:
    v9 = *(_DWORD *)(v7 + 24);
    BYTE1(v9) &= 0x7Eu;
    *(_DWORD *)(v7 + 24) = v9 | 0x100000;
    if ( *(_DWORD *)v7 == 2 )
    {
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_DWORD **)v11;
      v13 = *(_QWORD *)v11 + 24LL * *(_QWORD *)(v11 + 8);
      if ( *(_QWORD *)v11 == v13 )
        return 1;
      while ( (unsigned int)(*v12 - 3) > 1 )
      {
        v12 += 6;
        if ( (_DWORD *)v13 == v12 )
          return 1;
      }
    }
    else if ( (unsigned int)(*(_DWORD *)v7 - 3) > 1 )
    {
      return 1;
    }
    v51 = *(_QWORD *)(a2 + 1504);
    if ( sub_36F620(v51, *(_DWORD *)(a1 + 72)) )
      return 1;
    v61 = 0;
    tinfo_size = get_tinfo_size();
    v59 = 0;
    v60 = 0;
    v15 = sub_D2BA0(a1, (__int64)&v59, (_DWORD *)v7, tinfo_size, 0);
    v50 = v59;
    if ( !v15 || (v49 = v60, v60 <= 1) )
    {
LABEL_53:
      if ( v50 )
        qfree(v50);
      return 1;
    }
    v47 = sub_D21A0(a2, (__int64)&v59, v16, v59, a4);
    v17 = 0;
    v54 = 0;
    while ( 1 )
    {
      v18 = *(_DWORD *)(v50 + 4 * v17);
      v19 = *(_DWORD **)(a1 + 88);
      v20 = &v19[*(_QWORD *)(a1 + 96)];
      if ( v19 == v20 )
        goto LABEL_60;
      v21 = *(_DWORD **)(a1 + 88);
      while ( v18 != *v21 )
      {
        if ( v20 == ++v21 )
          goto LABEL_60;
      }
      if ( v21 == v20 || (v22 = v21 - v19, v22 == -1) )
      {
LABEL_60:
        v39 = *(_DWORD **)(a1 + 112);
        v40 = &v39[*(_QWORD *)(a1 + 120)];
        if ( v39 == v40 )
          goto LABEL_52;
        v41 = *(_DWORD **)(a1 + 112);
        while ( v18 != *v41 )
        {
          if ( v40 == ++v41 )
            goto LABEL_52;
        }
        if ( v40 == v41 )
          goto LABEL_52;
        v22 = v41 - v39;
        if ( v22 == -1 )
          goto LABEL_52;
        if ( *(_DWORD *)a1 != 3 )
          v22 = -1;
      }
      v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 32LL))(v51, v18);
      v52 = sub_1C55C0(v7, *(_QWORD *)(a2 + 1496), v18, v46, *(_DWORD *)(v7 + 88), &v56, &v57);
      if ( !v52 || v56 < 0 || (v24 = v57, v57 > 0) )
      {
        if ( !under_debugger )
          sub_383060(0xCC99u, a4);
LABEL_89:
        BUG();
      }
      v25 = (unsigned int)-v57;
      v57 = -v57;
      if ( v22 == -1 )
      {
        if ( *(_QWORD *)(a1 + 120) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                 **(unsigned int **)(a1 + 112),
                 v25,
                 v23,
                 (unsigned int)v56,
                 v45) )
          {
            v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                    **(unsigned int **)(a1 + 112));
          }
          else
          {
            v26 = 8;
          }
          if ( *(_QWORD *)(a1 + 120) > 1u && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) < v26 )
            v26 = round_down_power2();
        }
        else
        {
          v26 = 8;
        }
        sub_32C150(&v58, v51, v26);
      }
      else
      {
        v26 = sub_11CA90(v52 - v24);
        sub_32C270(&v58, v51, v26);
      }
      sub_1EF690((__int64)v62, v51, v18, v26, &v58, 0, -2);
      if ( !v57 )
        goto LABEL_33;
      v27 = sub_1F06C0((__int64 *)(a2 + 432), v62, 1, 0);
      v28 = v27;
      if ( v27 == -1 )
        goto LABEL_33;
      v29 = (_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * v27);
      if ( (unsigned int)(*v29 - 3) > 1 )
        goto LABEL_33;
      v44 = v29[2];
      if ( *v29 == 4 )
        v44 = (unsigned __int16)v44;
      if ( v18 == v44 )
      {
        if ( v29[22] > v57 )
        {
          if ( !under_debugger )
            sub_383060(0xCD31u, a4);
          goto LABEL_89;
        }
        sub_1EF530((__int64)v29);
      }
      else
      {
LABEL_33:
        v30 = sub_1F6560(a2, (__int64)v62, 0);
        v31 = *(_QWORD *)(a2 + 456);
        v32 = *(_QWORD *)(a2 + 464);
        v28 = v30;
        v33 = (signed int *)(v31 + 4 * v32);
        if ( (signed int *)v31 != v33 )
        {
          v34 = *(signed int **)(a2 + 456);
          while ( v28 != *v34 )
          {
            if ( v33 == ++v34 )
              goto LABEL_40;
          }
          if ( v34 != v33 )
          {
            if ( !under_debugger )
              sub_383060(0xC993u, a4);
            goto LABEL_89;
          }
        }
LABEL_40:
        v35 = v32 + 1;
        if ( *(_QWORD *)(a2 + 472) < v35 )
        {
          v42 = qvector_reserve(a2 + 456, v31, v35, 4);
          v43 = *(_QWORD *)(a2 + 464);
          *(_QWORD *)(a2 + 456) = v42;
          v33 = (signed int *)(v42 + 4 * v43);
        }
        *v33 = v28;
        ++*(_QWORD *)(a2 + 464);
        *(_DWORD *)(*(_QWORD *)(a2 + 432) + 104LL * v28 + 24) |= 0x100u;
      }
      v7 = *(_QWORD *)(a2 + 432) + v48;
      sub_D20B0((__int64)v47, a3, v56, v28, v57, v52, a4);
      if ( v57 )
      {
        v36 = sub_1F06C0((__int64 *)(a2 + 432), v62, v57, 0);
        if ( v36 != -1 && v28 != v36 )
        {
          v53 = v36;
          v37 = *(_QWORD *)(a2 + 432) + 104LL * v36;
          v38 = sub_1C55C0(v37, *(_QWORD *)(a2 + 1496), v18, v46, *(_DWORD *)(v37 + 88), &v56, &v57);
          sub_D20B0((__int64)v47, v53, v56, v28, v57, v38, a4);
        }
      }
      clear_tinfo_t();
      if ( v65 )
      {
        v66 = 0;
        qfree(v65);
      }
      if ( v63 )
      {
        v64 = 0;
        qfree(v63);
      }
      cleanup_argloc();
      clear_tinfo_t();
LABEL_52:
      v17 = ++v54;
      if ( v54 >= v49 )
        goto LABEL_53;
    }
  }
  if ( *(_DWORD *)(a1 + 72) != 128 )
  {
    *(_DWORD *)(a2 + 4) &= 0xFFFFFFCF;
    goto LABEL_59;
  }
  return 0;
}

