__int64 __fastcall sub_DE960(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned __int64 v10; // r13
  int v11; // r14d
  int tinfo_size; // eax
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rdx
  unsigned int v17; // ebx
  const void *v19; // r8
  void *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rax
  int v23; // esi
  bool v24; // zf
  int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // r13d
  int v28; // ebp
  int v29; // r13d
  int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rbp
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rdi
  int v36; // r8d
  char v37; // al
  unsigned int v38; // ebp
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // edi
  int i; // r13d
  __int64 v44; // rbp
  __int64 v45; // rsi
  _QWORD *v46; // rax
  char v47; // al
  int v48; // eax
  __int64 v49; // [rsp-8h] [rbp-90h]
  _QWORD *v50; // [rsp+0h] [rbp-88h]
  const void *v51; // [rsp+0h] [rbp-88h]
  int v53; // [rsp+8h] [rbp-80h]
  int v54; // [rsp+10h] [rbp-78h]
  int v56; // [rsp+14h] [rbp-74h]
  int v57; // [rsp+14h] [rbp-74h]
  int v58; // [rsp+14h] [rbp-74h]
  int v59; // [rsp+14h] [rbp-74h]
  int v60; // [rsp+14h] [rbp-74h]
  int v61; // [rsp+14h] [rbp-74h]
  int v62; // [rsp+18h] [rbp-70h]
  __int64 v63; // [rsp+18h] [rbp-70h]
  int v64; // [rsp+20h] [rbp-68h] BYREF
  __int64 v65; // [rsp+28h] [rbp-60h]
  __int64 v66; // [rsp+30h] [rbp-58h] BYREF
  __int64 v67; // [rsp+38h] [rbp-50h]
  unsigned __int64 v68; // [rsp+48h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  if ( a1 + 32 != a3 + 16 )
  {
    v10 = *(_QWORD *)(a3 + 24);
    if ( v10 > 1 )
    {
      v19 = *(const void **)(a3 + 16);
      v20 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v10 )
      {
        v51 = *(const void **)(a3 + 16);
        v20 = (void *)qvector_reserve();
        v19 = v51;
        *(_QWORD *)(a1 + 32) = v20;
      }
      *(_QWORD *)(a1 + 40) = v10;
      memmove(v20, v19, v10 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v10 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  copy_argloc();
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a3 + 72);
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 1504LL) + 80LL);
  tinfo_size = v11;
  if ( *(_BYTE *)(a3 + 64) )
  {
    copy_tinfo_t();
    tinfo_size = get_tinfo_size();
  }
  *(_DWORD *)(a1 + 4) = tinfo_size;
  v50 = *(_QWORD **)(a2 + 64);
  if ( (*(_BYTE *)(a3 + 72) & 0x10) != 0 )
  {
    *(_BYTE *)a1 = 4;
    v22 = sub_32E2F0(
            (_DWORD)v50,
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL),
            (unsigned int)"UNUSED_ARG",
            (int)a3 + 64,
            0,
            0,
            1,
            v49,
            (_DWORD)v50,
            a5,
            v54,
            v62);
    *(_DWORD *)(a1 + 72) &= ~0x10u;
    *(_QWORD *)(a1 + 8) = v22;
    return 1;
  }
  v13 = sub_D4DB0(a2, a4);
  sub_1BF730(&v64, a1 + 56, *(unsigned int *)(a1 + 4), v13);
  if ( (unsigned int)(v64 - 3) <= 1 )
  {
    v21 = v65;
    if ( v64 == 4 )
    {
      v23 = (unsigned __int16)v65;
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
      if ( v23 + v25 / 2 != v26 )
        sub_11EBE0(a1, v23, v26, v25 >> 1, v14, v15, (_DWORD)v50, a5);
    }
    else
    {
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v21;
    }
    goto LABEL_13;
  }
  if ( v64 == 1 )
  {
    v63 = v65;
    if ( (unsigned __int8)*(_QWORD *)(a3 + 64) )
    {
      LODWORD(v66) = 0;
      get_tinfo_size();
      v28 = v66;
      if ( ((unsigned int)v66 & ((_DWORD)v66 - 1)) != 0 )
        sub_DD340(&v66);
      v29 = 2 * v11;
      if ( (int)v66 > 2 * v11 )
        goto LABEL_49;
    }
    else
    {
      v27 = *(_DWORD *)(a1 + 4);
      v28 = round_down_power2();
      if ( v28 > 1 )
      {
        while ( (int)v27 % v28 )
        {
          v28 >>= 1;
          if ( v28 == 1 )
            goto LABEL_48;
        }
      }
      if ( (v28 & (v28 - 1)) != 0 )
        sub_DD340(v27);
LABEL_48:
      v29 = 2 * v11;
      if ( 2 * v11 < v28 )
      {
LABEL_49:
        if ( a5 <= 0x10 )
        {
          v34 = getinf();
          if ( v34 == 176 || v34 == 256 )
          {
            if ( v11 > v29 )
              goto LABEL_55;
LABEL_67:
            v28 = v29;
LABEL_68:
            v30 = getinf();
LABEL_37:
            if ( v30 == 176 || v30 == 256 )
              goto LABEL_40;
            goto LABEL_39;
          }
        }
        else if ( a5 == 176 || a5 == 256 )
        {
          v28 = v29;
          if ( v11 <= v29 )
            v28 = v11;
          goto LABEL_41;
        }
        if ( (unsigned __int8)getinf_flag() )
          goto LABEL_41;
        if ( v11 > v29 )
        {
          v28 = v29;
          if ( a5 <= 0x10 )
          {
LABEL_55:
            v28 = v29;
LABEL_56:
            v30 = getinf();
LABEL_58:
            if ( v30 == 176 || v30 == 256 )
              goto LABEL_41;
          }
LABEL_39:
          if ( !(unsigned __int8)getinf_flag() )
LABEL_40:
            v28 = v11;
LABEL_41:
          v31 = *(_DWORD *)(a1 + 4);
          if ( v50[17] >= v63 + (int)((v31 + v28 - 1) & -v28) || !v50[1] )
          {
LABEL_46:
            if ( !*(_BYTE *)a1 )
            {
              *(_BYTE *)a1 = 5;
              v33 = (_QWORD *)j__qalloc_or_throw();
              *v33 = v50;
              v33[1] = v63;
              *(_QWORD *)(a1 + 8) = v33;
            }
            goto LABEL_13;
          }
          if ( (*(_BYTE *)(a2 + 24) & 8) == 0 )
          {
LABEL_69:
            v17 = 0;
            goto LABEL_14;
          }
          v32 = v50[18];
          if ( v32 > v63 || !a6 )
            goto LABEL_46;
          v35 = v31;
          v56 = *(_DWORD *)(a1 + 4);
          v36 = round_down_power2();
          if ( v36 > 1 )
          {
            while ( v56 % v36 )
            {
              v36 >>= 1;
              if ( v36 == 1 )
                goto LABEL_75;
            }
          }
          if ( (v36 & (v36 - 1)) != 0 )
            sub_DD340(v35);
LABEL_75:
          if ( v29 >= v36 )
          {
            if ( v11 > v36 )
            {
              if ( a5 > 0x10 )
              {
LABEL_78:
                if ( a5 == 176 || a5 == 256 )
                  goto LABEL_82;
LABEL_80:
                v53 = v36;
                v37 = getinf_flag();
                v36 = v53;
                if ( v37 )
                {
LABEL_82:
                  if ( v63 - v32 == ((v63 - v32 + v36 - 1) & -v36) )
                    goto LABEL_46;
                  v38 = *(_DWORD *)(a1 + 4);
                  v66 = 0;
                  v67 = 0;
                  cleanup_argloc();
                  LODWORD(v66) = 1;
                  v67 = v63;
                  v39 = sub_1E9340(v50 + 54, &v66, v38, 0);
                  if ( v39 != -1 )
                  {
                    v40 = v50[54] + 104LL * v39;
                    v41 = *(_DWORD *)v40 == 1 ? *(_QWORD *)(v40 + 8) : -1LL;
                    if ( v63 == v41 && (signed int)v38 <= *(_DWORD *)(v40 + 88) )
                    {
                      cleanup_argloc();
                      goto LABEL_46;
                    }
                  }
                  cleanup_argloc();
                  v57 = sub_131A80(v50, *(int *)(a1 + 4), 0);
                  if ( v57 != -1 )
                  {
                    v42 = *(_DWORD *)(a1 + 4);
                    for ( i = 0; v42 > i; i += v11 )
                    {
                      if ( i + v11 > v42 )
                        v11 = round_down_power2();
                      v44 = j__qalloc_or_throw();
                      v45 = v50[5];
                      *(_QWORD *)(v44 + 40) = 0;
                      *(_QWORD *)(v44 + 32) = 0xFFFFFFFF00000000LL;
                      *(_QWORD *)(v44 + 48) = 0xFFFFFFFF00000000LL;
                      *(_QWORD *)(v44 + 56) = 0;
                      *(_QWORD *)(v44 + 64) = 0xFFFFFFFF00000000LL;
                      *(_QWORD *)(v44 + 72) = 0;
                      sub_329320(v44, v45);
                      *(_BYTE *)(v44 + 32) = 5;
                      *(_DWORD *)v44 = 4;
                      v46 = (_QWORD *)j__qalloc_or_throw();
                      *v46 = v50;
                      v46[1] = v63 + i;
                      *(_QWORD *)(v44 + 40) = v46;
                      *(_DWORD *)(v44 + 36) = v11;
                      *(_BYTE *)(v44 + 64) = 1;
                      *(_DWORD *)(v44 + 72) = i + v57;
                      *(_DWORD *)(v44 + 68) = v11;
                      sub_9CAA0(a2, (_QWORD *)v44, *(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL));
                      v42 = *(_DWORD *)(a1 + 4);
                    }
                    *(_BYTE *)a1 = 1;
                    *(_DWORD *)(a1 + 8) = v57;
                    goto LABEL_13;
                  }
                  goto LABEL_69;
                }
LABEL_81:
                v36 = v11;
                goto LABEL_82;
              }
LABEL_107:
              v59 = v36;
              a5 = getinf();
              v36 = v59;
              goto LABEL_78;
            }
            if ( a5 > 0x10 )
            {
LABEL_103:
              if ( a5 == 176 || a5 == 256 )
                goto LABEL_81;
              goto LABEL_80;
            }
LABEL_110:
            v60 = v36;
            a5 = getinf();
            v36 = v60;
            goto LABEL_103;
          }
          if ( a5 <= 0x10 )
          {
            v61 = v36;
            v48 = getinf();
            if ( v48 == 176 || v48 == 256 )
            {
              if ( v11 > v29 )
              {
LABEL_106:
                v36 = v29;
                goto LABEL_107;
              }
LABEL_109:
              v36 = v29;
              goto LABEL_110;
            }
            v36 = v61;
          }
          else if ( a5 == 256 || a5 == 176 )
          {
            v36 = v29;
            if ( v11 <= v29 )
              v36 = v11;
            goto LABEL_82;
          }
          v58 = v36;
          v47 = getinf_flag();
          v36 = v58;
          if ( v47 )
            goto LABEL_82;
          if ( v11 > v29 )
          {
            if ( a5 > 0x10 )
            {
              v36 = v29;
              goto LABEL_80;
            }
            goto LABEL_106;
          }
          if ( a5 > 0x10 )
          {
            v36 = v29;
            goto LABEL_80;
          }
          goto LABEL_109;
        }
        v28 = v29;
        if ( a5 > 0x10 )
          goto LABEL_39;
        goto LABEL_67;
      }
    }
    v30 = a5;
    if ( v11 > v28 )
    {
      if ( a5 > 0x10 )
        goto LABEL_58;
      goto LABEL_56;
    }
    if ( a5 > 0x10 )
      goto LABEL_37;
    goto LABEL_68;
  }
  if ( v64 != 2 )
  {
    if ( !under_debugger )
      sub_37B760(51008);
    BUG();
  }
  v66 = 0;
  copy_tinfo_t();
  v16 = s1;
  if ( *(_QWORD *)(a3 + 24) )
    v16 = *(const char **)(a3 + 16);
  sub_116A90(a1, v50, v16, &v66, &v64);
  clear_tinfo_t();
LABEL_13:
  v17 = 1;
LABEL_14:
  cleanup_argloc();
  return v17;
}

