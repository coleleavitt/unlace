unsigned __int64 __fastcall sub_13520(__int64 a1, __int64 a2)
{
  bool (__fastcall **v3)(__int64, _DWORD *, unsigned int); // rax
  _DWORD *v4; // r13
  bool (__fastcall *v5)(__int64, _DWORD *, unsigned int); // rax
  unsigned int v6; // edi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  unsigned int v10; // edi
  bool (__fastcall *v11)(__int64, _DWORD *, unsigned int); // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  char v20; // bp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rbp
  unsigned __int64 v27; // rdx
  bool (__fastcall *v28)(__int64, _DWORD *, unsigned int); // rcx
  unsigned int v29; // edi
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rbx
  int v33; // r12d
  unsigned __int64 v34; // r14
  size_t v35; // rbp
  size_t v36; // rdx
  size_t v37; // r8
  char *v38; // rsi
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // r8
  __int64 v41; // rsi
  size_t v42; // r10
  size_t v43; // r9
  char *v44; // rbp
  size_t v45; // rax
  size_t v46; // r9
  int *v47; // [rsp+0h] [rbp-218h]
  __int64 v48; // [rsp+10h] [rbp-208h]
  int v49; // [rsp+18h] [rbp-200h]
  int v50; // [rsp+1Ch] [rbp-1FCh]
  __int128 v51; // [rsp+28h] [rbp-1F0h]
  size_t v52; // [rsp+28h] [rbp-1F0h]
  size_t v53; // [rsp+28h] [rbp-1F0h]
  size_t v54; // [rsp+30h] [rbp-1E8h]
  size_t v55; // [rsp+30h] [rbp-1E8h]
  size_t v56; // [rsp+38h] [rbp-1E0h]
  unsigned __int64 v57; // [rsp+38h] [rbp-1E0h]
  unsigned int v58; // [rsp+48h] [rbp-1D0h]
  unsigned __int16 v59; // [rsp+4Ch] [rbp-1CCh]
  char v60; // [rsp+4Eh] [rbp-1CAh]
  void *v61; // [rsp+50h] [rbp-1C8h] BYREF
  size_t n; // [rsp+58h] [rbp-1C0h]
  void *src; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned __int64 v64; // [rsp+78h] [rbp-1A0h]
  __int64 v65; // [rsp+90h] [rbp-188h]
  __int128 v66; // [rsp+98h] [rbp-180h]
  void *v67; // [rsp+B0h] [rbp-168h]
  __int128 v68; // [rsp+B8h] [rbp-160h]
  int v69; // [rsp+D0h] [rbp-148h] BYREF
  unsigned int v70; // [rsp+D8h] [rbp-140h]
  int v71; // [rsp+DCh] [rbp-13Ch]
  unsigned int v72; // [rsp+F8h] [rbp-120h]
  unsigned int v73; // [rsp+FCh] [rbp-11Ch]
  int v74; // [rsp+104h] [rbp-114h]
  int v75; // [rsp+120h] [rbp-F8h]
  unsigned int v76; // [rsp+124h] [rbp-F4h]
  char *v77; // [rsp+140h] [rbp-D8h]
  __int128 v78; // [rsp+148h] [rbp-D0h]
  __int64 v79; // [rsp+158h] [rbp-C0h]
  __int64 v80; // [rsp+160h] [rbp-B8h]
  __int16 v81; // [rsp+168h] [rbp-B0h]
  __int128 v82; // [rsp+170h] [rbp-A8h]
  __int64 v83; // [rsp+180h] [rbp-98h]
  __int64 v84; // [rsp+188h] [rbp-90h]
  int v85; // [rsp+190h] [rbp-88h]
  __int64 v86; // [rsp+198h] [rbp-80h]
  int v87; // [rsp+1A0h] [rbp-78h]
  __int64 v88; // [rsp+1A8h] [rbp-70h]
  int v89; // [rsp+1B0h] [rbp-68h]
  __int64 v90; // [rsp+1B8h] [rbp-60h]
  int v91; // [rsp+1C0h] [rbp-58h]
  __int64 v92; // [rsp+1C8h] [rbp-50h]
  unsigned __int64 v93; // [rsp+1D8h] [rbp-40h]

  v3 = *(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))a1;
  v93 = __readfsqword(0x28u);
  v4 = (_DWORD *)a2;
  qword_379A8 = a2;
  v5 = *v3;
  qword_379B0 = a1;
  v6 = *(_DWORD *)(a1 + 304);
  if ( v5 != sub_DC30 )
  {
    if ( v5(a1, (_DWORD *)a2, v6) )
      goto LABEL_15;
    return sub_12BD0((__int64)"Bad .NET header.", a2);
  }
  if ( !a2 || (a2 = v6, *v4 != 3) )
  {
    v7 = *(_QWORD *)(a1 + 16) - 1LL;
    if ( v7 < 0 )
      goto LABEL_9;
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
    while ( (unsigned __int64)v6 < *v8 || (unsigned __int64)v6 >= v8[1] )
    {
      --v7;
      v8 -= 4;
      if ( v7 == -1 )
        goto LABEL_9;
    }
    a2 = v6 + v8[2] - *v8;
    if ( a2 == -1 )
    {
LABEL_9:
      a2 = v6;
      if ( v6 < (__int64)(*(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156)) )
        goto LABEL_14;
      if ( !*(_BYTE *)(a1 + 985)
        && (int)sub_D140(
                  1u,
                  (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                  v6) <= 0 )
      {
        goto LABEL_55;
      }
      *(_BYTE *)(a1 + 985) = 1;
      a2 = v6;
      qlseek();
      return sub_12BD0((__int64)"Bad .NET header.", a2);
    }
  }
LABEL_14:
  if ( qlseek() == -1 )
    return sub_12BD0((__int64)"Bad .NET header.", a2);
LABEL_15:
  lread();
  v10 = v72;
  if ( !v72 || !v73 )
    goto LABEL_50;
  v11 = **(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))a1;
  if ( v11 == sub_DC30 )
  {
    if ( !v4 || (v12 = v72, *v4 != 3) )
    {
      v13 = *(_QWORD *)(a1 + 16) - 1LL;
      if ( v13 < 0 )
        goto LABEL_25;
      v14 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
      while ( (unsigned __int64)v72 < *v14 || (unsigned __int64)v72 >= v14[1] )
      {
        --v13;
        v14 -= 4;
        if ( v13 == -1 )
          goto LABEL_25;
      }
      v12 = v72 + v14[2] - *v14;
      if ( v12 == -1 )
      {
LABEL_25:
        v12 = v72;
        if ( v72 >= (__int64)(*(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156)) )
        {
          if ( !*(_BYTE *)(a1 + 985)
            && (int)sub_D140(
                      1u,
                      (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                      v72) <= 0 )
          {
            goto LABEL_55;
          }
          *(_BYTE *)(a1 + 985) = 1;
          v12 = v10;
          qlseek();
          goto LABEL_29;
        }
      }
    }
    if ( qlseek() != -1 )
    {
LABEL_32:
      v19 = qalloc();
      if ( !v19 )
        sub_CFB0((__int64)".NET metadata", v12);
      lread();
      netnode_check();
      dword_379A4 = v74;
      add_encoding();
      set_default_encoding_idx();
      add_encoding();
      set_default_encoding_idx();
      v20 = sub_222D0(v19, v73);
      qfree();
      if ( !v20 )
        sub_DB80((__int64)"Corrupted .NET metadata", v73, v21, v22, v23, v24, (char)v47);
      v25 = v75;
      if ( !v75 )
        goto LABEL_50;
      if ( !v76 )
        goto LABEL_50;
      v26 = qword_379B0;
      v27 = (unsigned __int64)v76 >> 3;
      v48 = *(_QWORD *)(qword_379B0 + 584);
      if ( !v27 )
        goto LABEL_50;
      v49 = 0;
      v50 = 8 * v27;
      v47 = &v69;
      while ( 1 )
      {
        v28 = **(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))v26;
        v29 = v49 + v25;
        if ( v28 == sub_DC30 )
        {
          if ( !v4 || *v4 != 3 )
          {
            v30 = *(_QWORD *)(v26 + 16) - 1LL;
            if ( v30 < 0 )
              goto LABEL_46;
            v31 = (_QWORD *)(*(_QWORD *)(v26 + 8) + 32LL * *(_QWORD *)(v26 + 16) - 32);
            while ( (unsigned __int64)v29 < *v31 || (unsigned __int64)v29 >= v31[1] )
            {
              --v30;
              v31 -= 4;
              if ( v30 == -1 )
                goto LABEL_46;
            }
            if ( v29 + v31[2] - *v31 == -1 )
            {
LABEL_46:
              if ( v29 >= (__int64)(*(_QWORD *)(v26 + 592) + *(unsigned int *)(v26 + 156)) )
              {
                if ( *(_BYTE *)(v26 + 985)
                  || (int)sub_D140(
                            1u,
                            (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                            v29) > 0 )
                {
                  *(_BYTE *)(v26 + 985) = 1;
                  qlseek();
LABEL_50:
                  create_filename_cmt();
                  return v93 - __readfsqword(0x28u);
                }
LABEL_55:
                sub_DB80(
                  0,
                  (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                  v15,
                  v16,
                  v17,
                  v18,
                  (char)v47);
              }
            }
          }
          if ( qlseek() == -1 )
            goto LABEL_50;
        }
        else if ( !v28(v26, v4, v29) )
        {
          goto LABEL_50;
        }
        lread();
        v32 = v48 + v58;
        v33 = 0;
        v34 = (-(__int64)((v60 & 2) == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8;
        if ( v59 )
        {
          while ( 1 )
          {
            if ( !(unsigned __int8)is_loaded() )
              goto LABEL_61;
            if ( (v60 & 2) != 0 )
            {
              if ( (get_qword() & 0xFF000000) != 0x6000000 )
                goto LABEL_61;
            }
            else if ( (get_dword() & 0xFF000000) != 0x6000000 )
            {
              goto LABEL_61;
            }
            if ( netnode_supval() <= 0 )
              goto LABEL_61;
            sub_EDC0((__int64)&v61);
            sub_EDC0((__int64)&src);
            v65 = 0;
            v66 = 0;
            if ( n <= 1 )
            {
              v39 = v64;
              if ( !v64 )
                goto LABEL_98;
              v43 = v64 - 1;
              if ( v64 == 1 )
                goto LABEL_98;
              v42 = v64 - 1;
              v41 = 0;
              v40 = 0;
              goto LABEL_80;
            }
            v67 = nullptr;
            v68 = 0;
            v67 = (void *)qvector_reserve();
            *(_QWORD *)&v68 = 3;
            strcpy((char *)v67, "::");
            v35 = n;
            v77 = nullptr;
            v78 = 0;
            if ( n )
              break;
            v36 = v68;
            if ( (_QWORD)v68 )
            {
              v37 = v68 - 1;
              if ( (_QWORD)v68 != 1 )
              {
                v46 = v68 - 1;
                goto LABEL_115;
              }
              v36 = 0;
              v38 = nullptr;
            }
            else
            {
              v37 = 0;
              v38 = nullptr;
            }
LABEL_71:
            v77 = nullptr;
            v78 = 0;
            if ( v65 )
            {
              *((_QWORD *)&v51 + 1) = v37;
              *(_QWORD *)&v51 = v36;
              *(_QWORD *)&v66 = 0;
              qfree();
              v65 = (__int64)v38;
              v66 = v51;
              if ( v77 )
              {
                *(_QWORD *)&v78 = 0;
                qfree();
              }
            }
            else
            {
              v65 = (__int64)v38;
              *(_QWORD *)&v66 = v36;
              *((_QWORD *)&v66 + 1) = v37;
            }
            if ( v67 )
            {
              *(_QWORD *)&v68 = 0;
              qfree();
            }
            v39 = v64;
            v40 = v66;
            v41 = v65;
            if ( !v64 )
              goto LABEL_83;
            v42 = v64 - 1;
            if ( v64 == 1 )
              goto LABEL_83;
            if ( (_QWORD)v66 )
            {
              v40 = v66 - 1;
              v43 = v42 + v66 - 1;
              v39 = v64 + v66 - 1;
            }
            else
            {
              v43 = v64 - 1;
            }
LABEL_80:
            if ( *((_QWORD *)&v66 + 1) < v39 )
            {
              v57 = v40;
              v55 = v43;
              v53 = v42;
              v65 = qvector_reserve();
              v40 = v57;
              v41 = v65;
              v43 = v55;
              v42 = v53;
            }
            *(_QWORD *)&v66 = v39;
            *(_BYTE *)(v41 + v43) = 0;
            memcpy((void *)(v40 + v65), src, v42);
            v40 = v66;
            v41 = v65;
LABEL_83:
            if ( v40 <= 1 )
            {
              if ( v41 )
              {
                *(_QWORD *)&v66 = 0;
                qfree();
              }
LABEL_98:
              if ( src )
              {
                v64 = 0;
                qfree();
              }
              if ( v61 )
              {
                n = 0;
                qfree();
              }
              goto LABEL_61;
            }
            set_cmt();
            if ( (v71 & 3) == 1 )
            {
              if ( v70 )
              {
                v44 = (char *)(v70 + v48);
                if ( (unsigned __int8)is_loaded() )
                {
                  v77 = v44;
                  v81 = 0;
                  *(_QWORD *)&v78 = -1;
                  *((_QWORD *)&v78 + 1) = 512;
                  v79 = -1;
                  v80 = 0;
                  v83 = 0xFFFFFFFFLL;
                  v84 = 0;
                  v85 = 0;
                  v86 = 0;
                  v87 = 0;
                  v88 = 0;
                  v89 = 0;
                  v90 = 0;
                  v91 = 0;
                  v92 = 0;
                  v82 = 0;
                  add_func_ex();
                  set_name();
                }
              }
            }
            if ( v65 )
            {
              *(_QWORD *)&v66 = 0;
              qfree();
            }
            if ( src )
            {
              v64 = 0;
              qfree();
            }
            if ( v61 )
            {
              n = 0;
              ++v33;
              v32 += v34;
              qfree();
              if ( (unsigned __int16)v33 >= v59 )
                goto LABEL_91;
            }
            else
            {
LABEL_61:
              ++v33;
              v32 += v34;
              if ( (unsigned __int16)v33 >= v59 )
                goto LABEL_91;
            }
          }
          v77 = (char *)qalloc_or_throw();
          *((_QWORD *)&v78 + 1) = v35;
          memcpy(v77, v61, v35);
          *(_QWORD *)&v78 = v35;
          v37 = *((_QWORD *)&v78 + 1);
          v38 = v77;
          if ( !(_QWORD)v68 || (v45 = v68 - 1, (_QWORD)v68 == 1) )
          {
            v36 = v35;
            goto LABEL_71;
          }
          --v35;
          v46 = v45 + v35;
          v36 = v68 + v35;
          if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)v68 + v35 )
          {
            v37 = v68 - 1;
LABEL_115:
            v56 = v37;
            v54 = v46;
            v52 = v36;
            v77 = (char *)qvector_reserve();
            v38 = v77;
            v46 = v54;
            v45 = v56;
            v36 = v52;
          }
          *(_QWORD *)&v78 = v36;
          v38[v46] = 0;
          memcpy(&v77[v35], v67, v45);
          v38 = v77;
          v37 = *((_QWORD *)&v78 + 1);
          v36 = v78;
          goto LABEL_71;
        }
LABEL_91:
        v49 += 8;
        if ( v50 == v49 )
          goto LABEL_50;
        v26 = qword_379B0;
        v25 = v75;
      }
    }
  }
  else
  {
    v12 = (unsigned __int64)v4;
    if ( v11(a1, v4, v72) )
      goto LABEL_32;
  }
LABEL_29:
  sub_12BD0((__int64)"Failed to load .NET metadata", v12);
  return v93 - __readfsqword(0x28u);
}

