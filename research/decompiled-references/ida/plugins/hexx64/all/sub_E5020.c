__int64 __fastcall sub_E5020(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6, double a7)
{
  __int64 v11; // rdi
  unsigned __int64 v12; // r13
  int v13; // r14d
  int tinfo_size; // eax
  int v15; // eax
  const char *v16; // rdx
  unsigned int v17; // ebx
  const void *v19; // r8
  void *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rsi
  bool v24; // zf
  int v25; // ecx
  int v26; // edx
  __int64 *v27; // rsi
  int v28; // r13d
  int v29; // ebp
  int v30; // r13d
  int v31; // eax
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbp
  _QWORD *v36; // rax
  int v37; // eax
  int v38; // r8d
  char v39; // al
  int v40; // ebp
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // edi
  int i; // r13d
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdx
  _QWORD *v52; // rax
  char v53; // al
  int v54; // eax
  _QWORD *v55; // [rsp+0h] [rbp-88h]
  const void *v56; // [rsp+0h] [rbp-88h]
  int v58; // [rsp+8h] [rbp-80h]
  int v60; // [rsp+14h] [rbp-74h]
  int v61; // [rsp+14h] [rbp-74h]
  int v62; // [rsp+14h] [rbp-74h]
  int v63; // [rsp+14h] [rbp-74h]
  int v64; // [rsp+14h] [rbp-74h]
  int v65; // [rsp+14h] [rbp-74h]
  __int64 v66; // [rsp+18h] [rbp-70h]
  int v67; // [rsp+20h] [rbp-68h] BYREF
  __int64 v68; // [rsp+28h] [rbp-60h]
  __int64 v69; // [rsp+30h] [rbp-58h] BYREF
  __int64 v70; // [rsp+38h] [rbp-50h]
  unsigned __int64 v71; // [rsp+48h] [rbp-40h]

  v11 = a1 + 32;
  v71 = __readfsqword(0x28u);
  if ( v11 != a3 + 16 )
  {
    v12 = *(_QWORD *)(a3 + 24);
    if ( v12 > 1 )
    {
      v19 = *(const void **)(a3 + 16);
      v20 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v12 )
      {
        v56 = *(const void **)(a3 + 16);
        v20 = (void *)qvector_reserve(v11, *(_QWORD *)(a1 + 32), *(_QWORD *)(a3 + 24), 1);
        v19 = v56;
        *(_QWORD *)(a1 + 32) = v20;
      }
      *(_QWORD *)(a1 + 40) = v12;
      memmove(v20, v19, v12 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v12 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  copy_argloc();
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a3 + 72);
  v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 1504LL) + 80LL);
  tinfo_size = v13;
  if ( *(_BYTE *)(a3 + 64) )
  {
    copy_tinfo_t();
    tinfo_size = get_tinfo_size();
  }
  *(_DWORD *)(a1 + 4) = tinfo_size;
  v55 = *(_QWORD **)(a2 + 64);
  if ( (*(_BYTE *)(a3 + 72) & 0x10) != 0 )
  {
    *(_BYTE *)a1 = 4;
    v22 = sub_335B10((__int64)v55, *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL), (__int64)"UNUSED_ARG", a3 + 64, 0, 0, 1);
    *(_DWORD *)(a1 + 72) &= ~0x10u;
    *(_QWORD *)(a1 + 8) = v22;
    return 1;
  }
  v15 = sub_DB470(a2, a4);
  sub_1C5FB0((__int64)&v67, a1 + 56, *(_DWORD *)(a1 + 4), v15);
  if ( (unsigned int)(v67 - 3) <= 1 )
  {
    v21 = v68;
    if ( v67 == 4 )
    {
      v23 = (unsigned __int16)v68;
      v24 = *(_BYTE *)(a1 + 24) == 0;
      v25 = *(_DWORD *)(a1 + 4);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = (unsigned __int16)v21;
      if ( v24 )
      {
        v25 *= 2;
        *(_DWORD *)(a1 + 4) = v25;
      }
      v26 = HIWORD(v21);
      if ( (_DWORD)v23 + v25 / 2 != v26 )
        sub_1252A0(a1, v23, v26, v25 >> 1);
    }
    else
    {
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v21;
    }
    goto LABEL_13;
  }
  if ( v67 == 1 )
  {
    v27 = *(__int64 **)(a3 + 64);
    v66 = v68;
    if ( (_BYTE)v27 )
    {
      LODWORD(v69) = 0;
      get_tinfo_size();
      v29 = v69;
      if ( ((unsigned int)v69 & ((_DWORD)v69 - 1)) != 0 )
        sub_E3A00();
      v30 = 2 * v13;
      if ( (int)v69 > 2 * v13 )
        goto LABEL_50;
    }
    else
    {
      v28 = *(_DWORD *)(a1 + 4);
      v29 = round_down_power2();
      if ( v29 > 1 )
      {
        while ( v28 % v29 )
        {
          v29 >>= 1;
          if ( v29 == 1 )
            goto LABEL_49;
        }
      }
      if ( (v29 & (v29 - 1)) != 0 )
        sub_E3A00();
LABEL_49:
      v30 = 2 * v13;
      if ( 2 * v13 < v29 )
      {
LABEL_50:
        if ( a5 <= 0x10 )
        {
          v37 = getinf();
          if ( v37 == 176 || v37 == 256 )
          {
            if ( v13 > v30 )
            {
LABEL_56:
              v29 = v30;
LABEL_57:
              v31 = getinf();
LABEL_59:
              if ( v31 == 176 || v31 == 256 )
                goto LABEL_42;
              goto LABEL_61;
            }
LABEL_68:
            v29 = v30;
LABEL_69:
            v31 = getinf();
LABEL_37:
            if ( v31 == 176 || v31 == 256 )
              goto LABEL_41;
            goto LABEL_39;
          }
        }
        else if ( a5 == 176 || a5 == 256 )
        {
          v29 = v30;
          if ( v13 <= v30 )
            v29 = v13;
          goto LABEL_42;
        }
        v27 = (_QWORD *)&dword_200;
        if ( (unsigned __int8)getinf_flag() )
          goto LABEL_42;
        if ( v13 > v30 )
        {
          v29 = v30;
          if ( a5 > 0x10 )
          {
LABEL_61:
            v27 = (_QWORD *)&word_2;
            v32 = getinf_flag();
LABEL_40:
            if ( !v32 )
LABEL_41:
              v29 = v13;
LABEL_42:
            v33 = *(unsigned int *)(a1 + 4);
            v34 = (__int64)v55;
            if ( v55[17] >= v66 + (int)((v33 + v29 - 1) & -v29) || !v55[1] )
            {
LABEL_47:
              if ( !*(_BYTE *)a1 )
              {
                *(_BYTE *)a1 = 5;
                v36 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v27, v34, v33);
                *v36 = v55;
                v36[1] = v66;
                *(_QWORD *)(a1 + 8) = v36;
              }
              goto LABEL_13;
            }
            if ( (*(_BYTE *)(a2 + 24) & 8) == 0 )
            {
LABEL_70:
              v17 = 0;
              goto LABEL_14;
            }
            v35 = v55[18];
            if ( v35 > v66 || !a6 )
              goto LABEL_47;
            v60 = *(_DWORD *)(a1 + 4);
            v38 = round_down_power2();
            if ( v38 > 1 )
            {
              while ( v60 % v38 )
              {
                v38 >>= 1;
                if ( v38 == 1 )
                  goto LABEL_76;
              }
            }
            if ( (v38 & (v38 - 1)) != 0 )
              sub_E3A00();
LABEL_76:
            if ( v30 >= v38 )
            {
              if ( v13 > v38 )
              {
                if ( a5 > 0x10 )
                {
LABEL_79:
                  if ( a5 == 176 || a5 == 256 )
                    goto LABEL_84;
                  goto LABEL_81;
                }
LABEL_109:
                v63 = v38;
                a5 = getinf();
                v38 = v63;
                goto LABEL_79;
              }
              if ( a5 > 0x10 )
                goto LABEL_105;
              goto LABEL_112;
            }
            if ( a5 <= 0x10 )
            {
              v65 = v38;
              v54 = getinf();
              if ( v54 == 176 || v54 == 256 )
              {
                if ( v13 > v30 )
                {
LABEL_108:
                  v38 = v30;
                  goto LABEL_109;
                }
LABEL_111:
                v38 = v30;
LABEL_112:
                v64 = v38;
                a5 = getinf();
                v38 = v64;
LABEL_105:
                if ( a5 == 176 || a5 == 256 )
                  goto LABEL_83;
                goto LABEL_107;
              }
              v38 = v65;
            }
            else if ( a5 == 256 || a5 == 176 )
            {
              v38 = v30;
              if ( v13 <= v30 )
                v38 = v13;
              goto LABEL_84;
            }
            v27 = (_QWORD *)&dword_200;
            v62 = v38;
            v53 = getinf_flag();
            v38 = v62;
            if ( v53 )
              goto LABEL_84;
            if ( v13 > v30 )
            {
              if ( a5 > 0x10 )
              {
                v38 = v30;
LABEL_81:
                v27 = (_QWORD *)&word_2;
                v58 = v38;
                v39 = getinf_flag();
                goto LABEL_82;
              }
              goto LABEL_108;
            }
            if ( a5 > 0x10 )
            {
              v38 = v30;
LABEL_107:
              v27 = (_QWORD *)&byte_4;
              v58 = v38;
              v39 = getinf_flag();
LABEL_82:
              v38 = v58;
              if ( v39 )
              {
LABEL_84:
                v33 = v66 - v35;
                v34 = v66 - v35 + v38 - 1;
                if ( v66 - v35 == (v34 & -v38) )
                  goto LABEL_47;
                v40 = *(_DWORD *)(a1 + 4);
                v69 = 0;
                v70 = 0;
                cleanup_argloc();
                v27 = &v69;
                LODWORD(v69) = 1;
                v70 = v66;
                v41 = sub_1F06C0(v55 + 54, (int *)&v69, v40, 0);
                if ( v41 != -1 )
                {
                  v42 = v55[54] + 104LL * v41;
                  v43 = *(_DWORD *)v42 == 1 ? *(_QWORD *)(v42 + 8) : -1LL;
                  if ( v66 == v43 && v40 <= *(_DWORD *)(v42 + 88) )
                  {
                    cleanup_argloc();
                    goto LABEL_47;
                  }
                }
                cleanup_argloc();
                v44 = *(int *)(a1 + 4);
                v61 = sub_138140(v55, v44, 0);
                if ( v61 != -1 )
                {
                  v47 = *(_DWORD *)(a1 + 4);
                  for ( i = 0; v47 > i; i += v13 )
                  {
                    if ( i + v13 > v47 )
                      v13 = round_down_power2();
                    v49 = j__qalloc_or_throw(80, v44, v45, v46);
                    v50 = v55[5];
                    *(_QWORD *)(v49 + 40) = 0;
                    *(_QWORD *)(v49 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v49 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v49 + 56) = 0;
                    *(_QWORD *)(v49 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v49 + 72) = 0;
                    sub_330970(v49, v50);
                    *(_BYTE *)(v49 + 32) = 5;
                    *(_DWORD *)v49 = 4;
                    v52 = (_QWORD *)j__qalloc_or_throw(16, v50, v51, v66);
                    v44 = v49;
                    *v52 = v55;
                    v52[1] = v66 + i;
                    *(_QWORD *)(v49 + 40) = v52;
                    *(_DWORD *)(v49 + 36) = v13;
                    *(_BYTE *)(v49 + 64) = 1;
                    *(_DWORD *)(v49 + 72) = i + v61;
                    *(_DWORD *)(v49 + 68) = v13;
                    sub_A3160(a2, (_QWORD *)v49, *(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL), a7);
                    v47 = *(_DWORD *)(a1 + 4);
                  }
                  *(_BYTE *)a1 = 1;
                  *(_DWORD *)(a1 + 8) = v61;
                  goto LABEL_13;
                }
                goto LABEL_70;
              }
LABEL_83:
              v38 = v13;
              goto LABEL_84;
            }
            goto LABEL_111;
          }
          goto LABEL_56;
        }
        v29 = v30;
        if ( a5 > 0x10 )
        {
LABEL_39:
          v27 = (_QWORD *)&byte_4;
          v32 = getinf_flag();
          goto LABEL_40;
        }
        goto LABEL_68;
      }
    }
    v31 = a5;
    if ( v13 > v29 )
    {
      if ( a5 > 0x10 )
        goto LABEL_59;
      goto LABEL_57;
    }
    if ( a5 > 0x10 )
      goto LABEL_37;
    goto LABEL_69;
  }
  if ( v67 != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xC740u, a7);
    BUG();
  }
  v69 = 0;
  copy_tinfo_t();
  v16 = s1;
  if ( *(_QWORD *)(a3 + 24) )
    v16 = *(const char **)(a3 + 16);
  sub_11D150(a1, (__int64)v55, v16, &v69, &v67);
  clear_tinfo_t();
LABEL_13:
  v17 = 1;
LABEL_14:
  cleanup_argloc();
  return v17;
}

