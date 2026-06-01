__int64 __fastcall sub_28DD90(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  const char *v10; // rax
  bool v11; // r13
  __int64 v12; // rax
  __int64 *v13; // r13
  unsigned __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  char v18; // al
  __int64 v19; // r12
  __int64 *v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r15
  char v25; // r14
  char *v26; // r15
  __int64 v27; // rax
  __int64 v28; // r13
  int v29; // edx
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  const char *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned int v42; // eax
  __int64 v43; // rdi
  unsigned int v44; // edi
  unsigned int v45; // eax
  __int64 v46; // rcx
  unsigned int v47; // eax
  char v48; // al
  __int64 v49; // rax
  bool v50; // zf
  __int64 v51; // rax
  __int64 v52; // r14
  char *v53; // rdi
  char v54; // al
  unsigned __int8 v55; // [rsp+0h] [rbp-138h]
  __int64 v56; // [rsp+8h] [rbp-130h]
  __int64 v57; // [rsp+8h] [rbp-130h]
  bool v58; // [rsp+8h] [rbp-130h]
  const char *v59; // [rsp+10h] [rbp-128h]
  int v60; // [rsp+1Ch] [rbp-11Ch]
  __int64 v61; // [rsp+20h] [rbp-118h]
  __int64 v62; // [rsp+30h] [rbp-108h] BYREF
  __int128 v63; // [rsp+38h] [rbp-100h]
  int v64; // [rsp+48h] [rbp-F0h]
  unsigned int v65; // [rsp+4Ch] [rbp-ECh]
  int v66; // [rsp+50h] [rbp-E8h]
  _QWORD v67[3]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v68; // [rsp+78h] [rbp-C0h]
  __int64 v69; // [rsp+88h] [rbp-B0h]
  __int64 v70; // [rsp+90h] [rbp-A8h]
  __int64 v71; // [rsp+98h] [rbp-A0h]
  __int64 v72; // [rsp+A0h] [rbp-98h]
  __int64 tinfo_property; // [rsp+B0h] [rbp-88h] BYREF
  int v74; // [rsp+B8h] [rbp-80h]
  __int64 v75; // [rsp+BCh] [rbp-7Ch]
  __int64 v76; // [rsp+E0h] [rbp-58h]
  int v77; // [rsp+E8h] [rbp-50h]
  char v78; // [rsp+ECh] [rbp-4Ch]
  __int64 v79; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v80; // [rsp+F8h] [rbp-40h]

  v2 = 0;
  v3 = (__int64)a1;
  v80 = __readfsqword(0x28u);
  v4 = a2;
  if ( (get_tinfo_property() & 0xF) != 0xB )
  {
    v6 = a1[3];
    v7 = a1[2];
    v63 = 0;
    v2 = sub_2876D0((__int64)a1, a2, (__int64)&v62, *(_QWORD *)(v7 + 8 * v6 - 8));
    if ( (_BYTE)v2 )
    {
      v8 = (unsigned int)(*(_DWORD *)(v62 + 8) - 51);
      if ( (unsigned int)v8 <= 0xE && (v9 = 25473, _bittest64(&v9, v8)) || (*(_BYTE *)(v62 + 56) & 2) != 0 )
      {
        v60 = v66;
        if ( v66 != 8 )
        {
          switch ( v66 )
          {
            case 1:
              v59 = "%sBYTE%d";
              break;
            case 2:
              v59 = "%sWORD%d";
              break;
            case 4:
              v59 = "%sDWORD%d";
              break;
            default:
              if ( !under_debugger )
                sub_37B760(51607);
              BUG();
          }
          if ( v64 > 16 )
            goto LABEL_19;
          if ( *(_BYTE *)(a1[9] + 145LL) )
          {
            if ( v64 == v66 * (v65 + 1) )
              goto LABEL_14;
            if ( v65 )
              goto LABEL_19;
          }
          else
          {
            if ( !v65 )
            {
LABEL_14:
              v59 = "%sLOBYTE";
              if ( v66 != 1 )
              {
                v10 = "%sLOWORD";
                if ( v66 != 2 )
                  v10 = "%sLODWORD";
                v59 = v10;
              }
              v11 = sub_1163C0(v64);
              if ( !v11 || (get_tinfo_property() & 0xF) == 9 )
                goto LABEL_19;
              v40 = a1[3];
              v41 = *(_QWORD *)(a1[2] + 8 * v40 - 8);
              v42 = *(_DWORD *)(v41 + 8);
              if ( v42 != 57 )
              {
                if ( v42 > 0x39 )
                {
                  if ( v42 != 80 || v60 < (int)sub_27D0B0((__int64)a1, a2, 0x7FFFFFFFu, 0) )
                    goto LABEL_19;
LABEL_67:
                  sub_287C90(v3, a2, &v62);
                  goto LABEL_46;
                }
                if ( v42 != 2 )
                {
                  if ( v42 == 21 )
                  {
                    v43 = *(_QWORD *)(v41 + 24);
                    if ( a2 == v43 )
                      v43 = *(_QWORD *)(v41 + 32);
                    if ( (__int16)sub_27E5F0(v43, *(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL)) <= 8 * v60 )
                      goto LABEL_67;
                  }
LABEL_19:
                  v12 = qalloc_or_throw();
                  *(_QWORD *)v12 = 0;
                  v13 = (__int64 *)v12;
                  *(_QWORD *)(v12 + 24) = 0;
                  *(_DWORD *)(v12 + 32) = 0;
                  *(_OWORD *)(v12 + 8) = 0;
                  v67[1] = 0xFFFFFFFF00000000LL;
                  v67[0] = -1;
                  v67[2] = 0xFFFFFFFFLL;
                  v69 = 0;
                  v70 = 0;
                  v71 = 0;
                  v72 = 0;
                  v68 = 0;
                  v14 = *(_QWORD *)(v12 + 8);
                  if ( v14 > 1 )
                  {
                    v55 = v2;
                    v56 = v3;
                    v19 = 1;
                    v20 = (__int64 *)v12;
                    v21 = *(_QWORD *)(v12 + 8);
                    do
                    {
                      v22 = 9 * v19++;
                      v23 = *v20 + 8 * v22;
                      clear_tinfo_t();
                      sub_24E2B0(v23);
                      clear_tinfo_t();
                    }
                    while ( v21 != v19 );
                    v2 = v55;
                    v4 = a2;
                    v13 = v20;
                    v3 = v56;
                    v13[1] = 1;
                  }
                  else if ( !v14 )
                  {
                    v15 = *(_QWORD *)v12;
                    v16 = *(_QWORD *)(v12 + 16);
                    if ( (unsigned __int64)v67 < *v13 || (unsigned __int64)v67 >= v15 + 72 * v16 )
                    {
                      if ( v16 || (v49 = qvector_reserve(), v50 = v13[1] == 0, *v13 = v49, v15 = v49, v50) )
                      {
                        *(_QWORD *)v15 = -1;
                        *(_DWORD *)(v15 + 8) = 0;
                        *(_QWORD *)(v15 + 12) = -1;
                        *(_QWORD *)(v15 + 48) = 0;
                        *(_DWORD *)(v15 + 56) = 0;
                        sub_253C70(v15, (__int64)v67);
                        v48 = BYTE4(v71);
                        *(_QWORD *)(v15 + 64) = 0;
                        *(_BYTE *)(v15 + 60) = v48;
                        copy_tinfo_t();
                      }
                      v13[1] = 1;
                    }
                    else
                    {
                      tinfo_property = -1;
                      v74 = 0;
                      v75 = -1;
                      v76 = 0;
                      v77 = 0;
                      sub_253C70((__int64)&tinfo_property, (__int64)v67);
                      v79 = 0;
                      v78 = BYTE4(v71);
                      copy_tinfo_t();
                      if ( !v13[2] )
                        *v13 = qvector_reserve();
                      if ( !v13[1] )
                      {
                        v17 = *v13;
                        *(_QWORD *)v17 = -1;
                        *(_DWORD *)(v17 + 8) = 0;
                        *(_QWORD *)(v17 + 12) = -1;
                        *(_QWORD *)(v17 + 48) = 0;
                        *(_DWORD *)(v17 + 56) = 0;
                        sub_253C70(v17, (__int64)&tinfo_property);
                        v18 = v78;
                        *(_QWORD *)(v17 + 64) = 0;
                        *(_BYTE *)(v17 + 60) = v18;
                        copy_tinfo_t();
                      }
                      v13[1] = 1;
                      clear_tinfo_t();
                      sub_24E2B0((__int64)&tinfo_property);
                      clear_tinfo_t();
                    }
                  }
                  clear_tinfo_t();
                  sub_24E2B0((__int64)v67);
                  clear_tinfo_t();
                  sub_287C90(v3, *v13, &v62);
                  v24 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL * *(_QWORD *)(v3 + 24) - 8);
                  if ( (_BYTE)v63
                    && ((v63 & 0xE) != 0 || (v63 & 0x30) == 0)
                    && (tinfo_property = 0,
                        tinfo_property = get_tinfo_property(),
                        v25 = get_tinfo_property(),
                        clear_tinfo_t(),
                        (v25 & 0x3F) != 0x30)
                    || (v44 = *(_DWORD *)(v24 + 8), v44 <= 0x45)
                    && (*((_BYTE *)&off_4ACB20 + 16 * (int)v44 + 11) & 8) != 0
                    && v4 != *(_QWORD *)(v24 + 24)
                    || (v45 = sub_24DC80(v44), (v46 = v45) == 0) )
                  {
                    if ( (get_tinfo_property() & 0xF) != 0xB )
                    {
                      v67[0] = 0;
                      copy_tinfo_t();
LABEL_37:
                      v26 = (char *)&unk_3EF793;
                      if ( (unsigned int)get_tinfo_property() == 1 )
                        v26 = "S";
                      if ( (get_tinfo_property() & 0xF) == 0xA )
                      {
                        sub_324D40(
                          &tinfo_property,
                          *(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL),
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL) + 84LL));
                      }
                      else
                      {
                        tinfo_property = 0;
                        copy_tinfo_t();
                      }
                      v27 = sub_EAF80((__int64)&tinfo_property, (__int64)v13, (__int64)v59, v26, v65);
                      *(_DWORD *)(v27 + 56) |= 2u;
                      v28 = v27;
                      v29 = *(_DWORD *)(v27 + 8);
                      *(_QWORD *)v27 = *(_QWORD *)v4;
                      LODWORD(v27) = *(_DWORD *)(v4 + 8);
                      *(_DWORD *)(v4 + 8) = v29;
                      v30 = *(_DWORD *)(v28 + 12);
                      *(_DWORD *)(v28 + 8) = v27;
                      LODWORD(v27) = *(_DWORD *)(v4 + 12);
                      *(_DWORD *)(v4 + 12) = v30;
                      v31 = *(_QWORD *)(v28 + 24);
                      *(_DWORD *)(v28 + 12) = v27;
                      v32 = *(_QWORD *)(v4 + 24);
                      *(_QWORD *)(v4 + 24) = v31;
                      v33 = *(_QWORD *)(v28 + 32);
                      *(_QWORD *)(v28 + 24) = v32;
                      v34 = *(_QWORD *)(v4 + 32);
                      *(_QWORD *)(v4 + 32) = v33;
                      v35 = *(_QWORD *)(v28 + 40);
                      *(_QWORD *)(v28 + 32) = v34;
                      v36 = *(_QWORD *)(v4 + 40);
                      *(_QWORD *)(v4 + 40) = v35;
                      v37 = *(_QWORD *)(v28 + 48);
                      *(_QWORD *)(v28 + 40) = v36;
                      v38 = *(_QWORD *)(v4 + 48);
                      *(_QWORD *)(v4 + 48) = v37;
                      LODWORD(v37) = *(_DWORD *)(v28 + 56);
                      *(_QWORD *)(v28 + 48) = v38;
                      LODWORD(v38) = *(_DWORD *)(v4 + 56);
                      *(_DWORD *)(v4 + 56) = v37;
                      *(_DWORD *)(v28 + 56) = v38;
                      sub_23F7C0(v4, *(_QWORD *)(v3 + 72), v67);
                      if ( v28 )
                      {
                        sub_24E2B0(v28);
                        clear_tinfo_t();
                        j__qfree();
                      }
                      if ( (unsigned __int8)sub_27C780(v3, *(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL)) )
                        *(_DWORD *)(v3 + 8) |= 8u;
                      clear_tinfo_t();
                      clear_tinfo_t();
                      goto LABEL_46;
                    }
                    v47 = sub_24DC80(*(_DWORD *)(v24 + 8));
                    v46 = v47;
                    if ( !v47 )
                      v46 = 2;
                  }
                  sub_324F00(v67, *(_QWORD *)(*(_QWORD *)(v3 + 72) + 112LL), (unsigned int)v60, v46);
                  goto LABEL_37;
                }
                if ( *(_QWORD *)(v41 + 32) != a2 || sub_277CE0() )
                  goto LABEL_19;
LABEL_88:
                if ( v60 < (unsigned __int64)get_tinfo_size() )
                  goto LABEL_19;
                goto LABEL_67;
              }
              if ( *(_QWORD *)(v41 + 24) == a2 )
                goto LABEL_19;
              v57 = *(_QWORD *)(a1[2] + 8 * v40 - 8);
              if ( *(_BYTE *)(sub_27CFE0(v41, a2, nullptr) + 60) )
                goto LABEL_19;
              v61 = v57;
              v58 = sub_277CE0();
              if ( v58 )
                goto LABEL_19;
              if ( *(_DWORD *)(v61 + 8) != 57 )
                goto LABEL_88;
              v51 = *(_QWORD *)(v61 + 24);
              if ( *(_DWORD *)(v51 + 8) != 68 )
                goto LABEL_88;
              v52 = *(_QWORD *)(v51 + 24);
              if ( *(_BYTE *)v52 == 83 )
                ++v52;
              if ( *(_BYTE *)v52 == 72 )
              {
                if ( *(_BYTE *)(v52 + 1) == 73 )
                {
LABEL_109:
                  v58 = v11;
                  v52 += 2;
                }
              }
              else if ( *(_BYTE *)v52 == 76 && *(_BYTE *)(v52 + 1) == 79 )
              {
                goto LABEL_109;
              }
              v53 = (char *)(v52 + 5);
              if ( strncmp((const char *)v52, "DWORD", 5u) )
              {
                if ( strncmp((const char *)v52, "WORD", 4u) && strncmp((const char *)v52, "BYTE", 4u) )
                  goto LABEL_88;
                v53 = (char *)(v52 + 4);
              }
              v54 = *v53;
              if ( v58 )
              {
                if ( !v54 )
                  goto LABEL_19;
              }
              else if ( (unsigned __int8)(v54 - 48) <= 9u && !v53[1] )
              {
                goto LABEL_19;
              }
              goto LABEL_88;
            }
            if ( v64 != v66 * (v65 + 1) )
              goto LABEL_19;
          }
          v59 = "%sHIBYTE";
          if ( v66 != 1 )
          {
            v39 = "%sHIWORD";
            if ( v66 != 2 )
              v39 = "%sHIDWORD";
            v59 = v39;
          }
          goto LABEL_19;
        }
      }
      v2 = 0;
    }
LABEL_46:
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return v2;
}

