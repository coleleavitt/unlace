__int64 __fastcall sub_295110(_QWORD *a1, char *a2)
{
  unsigned int v2; // r12d
  _QWORD *v3; // rbp
  char *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
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
  char *v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // r15
  char v26; // r14
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
  __int64 v39; // r8
  unsigned int v40; // eax
  __int64 v41; // rdi
  __int16 v42; // ax
  unsigned int v43; // edi
  int v44; // ecx
  char v45; // al
  __int64 v46; // rax
  bool v47; // zf
  unsigned __int64 tinfo_size; // rax
  __int64 v49; // rax
  __int64 v50; // r14
  char *v51; // rdi
  char v52; // al
  unsigned __int8 v53; // [rsp+0h] [rbp-138h]
  __int64 v54; // [rsp+0h] [rbp-138h]
  __int64 v55; // [rsp+0h] [rbp-138h]
  _QWORD *v56; // [rsp+8h] [rbp-130h]
  __int64 v57; // [rsp+8h] [rbp-130h]
  bool v58; // [rsp+8h] [rbp-130h]
  signed int v59; // [rsp+1Ch] [rbp-11Ch]
  __int64 v60; // [rsp+20h] [rbp-118h]
  __int64 v61; // [rsp+30h] [rbp-108h] BYREF
  __int128 v62; // [rsp+38h] [rbp-100h]
  int v63; // [rsp+48h] [rbp-F0h]
  unsigned int v64; // [rsp+4Ch] [rbp-ECh]
  unsigned int v65; // [rsp+50h] [rbp-E8h]
  __int64 v66[3]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v67; // [rsp+78h] [rbp-C0h]
  __int64 v68; // [rsp+88h] [rbp-B0h]
  __int64 v69; // [rsp+90h] [rbp-A8h]
  __int64 v70; // [rsp+98h] [rbp-A0h]
  __int64 v71; // [rsp+A0h] [rbp-98h]
  __int64 tinfo_property; // [rsp+B0h] [rbp-88h] BYREF
  int v73; // [rsp+B8h] [rbp-80h]
  __int64 v74; // [rsp+BCh] [rbp-7Ch]
  __int64 v75; // [rsp+E0h] [rbp-58h]
  int v76; // [rsp+E8h] [rbp-50h]
  char v77; // [rsp+ECh] [rbp-4Ch]
  __int64 v78; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v79; // [rsp+F8h] [rbp-40h]

  v2 = 0;
  v3 = a1;
  v79 = __readfsqword(0x28u);
  v4 = a2;
  if ( (get_tinfo_property() & 0xF) != 0xB )
  {
    v6 = a1[3];
    v7 = a1[2];
    v62 = 0;
    v2 = sub_28EA50((__int64)a1, (__int64)a2, (__int64)&v61, *(_QWORD *)(v7 + 8 * v6 - 8), 0.0);
    if ( (_BYTE)v2 )
    {
      v9 = v61;
      v10 = (unsigned int)(*(_DWORD *)(v61 + 8) - 51);
      if ( (unsigned int)v10 <= 0xE && (v8 = 25473, _bittest64(&v8, v10)) || (*(_BYTE *)(v61 + 56) & 2) != 0 )
      {
        v59 = v65;
        if ( v65 != 8 )
        {
          if ( v65 != 1 && v65 != 2 && v65 != 4 )
          {
            if ( !under_debugger )
              sub_383060(0xC997u, 0.0);
            BUG();
          }
          if ( v63 > 16 )
            goto LABEL_14;
          if ( *(_BYTE *)(a1[9] + 145LL) )
          {
            v9 = v64;
            v8 = v65;
            if ( v63 == v65 * (v64 + 1) )
            {
LABEL_13:
              v11 = sub_11CA80(v63);
              if ( !v11 )
                goto LABEL_14;
              a2 = (char *)&word_2;
              if ( (get_tinfo_property() & 0xF) == 9 )
                goto LABEL_14;
              v9 = a1[3];
              v39 = *(_QWORD *)(a1[2] + 8 * v9 - 8);
              v40 = *(_DWORD *)(v39 + 8);
              if ( v40 != 57 )
              {
                if ( v40 > 0x39 )
                {
                  if ( v40 != 80 )
                    goto LABEL_14;
                  a2 = v4;
                  if ( v59 < (int)sub_284430((__int64)a1, (__int64)v4, 0x7FFFFFFFu, 0, 0.0) )
                    goto LABEL_14;
LABEL_58:
                  sub_28F010((__int64)v3, (__int64)v4, &v61);
                  goto LABEL_39;
                }
                if ( v40 != 2 )
                {
                  if ( v40 == 21 )
                  {
                    v41 = *(_QWORD *)(v39 + 24);
                    if ( v4 == (char *)v41 )
                      v41 = *(_QWORD *)(v39 + 32);
                    a2 = *(char **)(v3[9] + 112LL);
                    v42 = sub_285970(v41, (__int64)a2, 0.0);
                    v8 = (unsigned int)v59;
                    v9 = (unsigned int)(8 * v59);
                    if ( v42 <= (int)v9 )
                      goto LABEL_58;
                  }
LABEL_14:
                  v12 = qalloc_or_throw(40, (__int64)a2, v9, v8);
                  *(_QWORD *)v12 = 0;
                  v13 = (__int64 *)v12;
                  *(_QWORD *)(v12 + 24) = 0;
                  *(_DWORD *)(v12 + 32) = 0;
                  *(_OWORD *)(v12 + 8) = 0;
                  v66[1] = 0xFFFFFFFF00000000LL;
                  v66[0] = -1;
                  v66[2] = 0xFFFFFFFFLL;
                  v68 = 0;
                  v69 = 0;
                  v70 = 0;
                  v71 = 0;
                  v67 = 0;
                  v14 = *(_QWORD *)(v12 + 8);
                  if ( v14 > 1 )
                  {
                    v53 = v2;
                    v56 = v3;
                    v19 = 1;
                    v20 = (__int64 *)v12;
                    v21 = v4;
                    v22 = *(_QWORD *)(v12 + 8);
                    do
                    {
                      v23 = 9 * v19++;
                      v24 = *v20 + 8 * v23;
                      clear_tinfo_t();
                      sub_255630(v24, 0.0);
                      clear_tinfo_t();
                    }
                    while ( v22 != v19 );
                    v2 = v53;
                    v4 = v21;
                    v13 = v20;
                    v3 = v56;
                    v13[1] = 1;
                  }
                  else if ( !v14 )
                  {
                    v15 = *(_QWORD *)v12;
                    v16 = *(_QWORD *)(v12 + 16);
                    if ( (unsigned __int64)v66 < *v13 || (unsigned __int64)v66 >= v15 + 72 * v16 )
                    {
                      if ( v16
                        || (v46 = qvector_reserve((__int64)v13, v15, 1, 72),
                            v47 = v13[1] == 0,
                            *v13 = v46,
                            v15 = v46,
                            v47) )
                      {
                        *(_QWORD *)v15 = -1;
                        *(_DWORD *)(v15 + 8) = 0;
                        *(_QWORD *)(v15 + 12) = -1;
                        *(_QWORD *)(v15 + 48) = 0;
                        *(_DWORD *)(v15 + 56) = 0;
                        sub_25AFF0(v15, (__int64)v66, 0.0);
                        v45 = BYTE4(v70);
                        *(_QWORD *)(v15 + 64) = 0;
                        *(_BYTE *)(v15 + 60) = v45;
                        copy_tinfo_t();
                      }
                      v13[1] = 1;
                    }
                    else
                    {
                      tinfo_property = -1;
                      v73 = 0;
                      v74 = -1;
                      v75 = 0;
                      v76 = 0;
                      sub_25AFF0((__int64)&tinfo_property, (__int64)v66, 0.0);
                      v78 = 0;
                      v77 = BYTE4(v70);
                      copy_tinfo_t();
                      if ( !v13[2] )
                        *v13 = qvector_reserve((__int64)v13, *v13, 1, 72);
                      if ( !v13[1] )
                      {
                        v17 = *v13;
                        *(_QWORD *)v17 = -1;
                        *(_DWORD *)(v17 + 8) = 0;
                        *(_QWORD *)(v17 + 12) = -1;
                        *(_QWORD *)(v17 + 48) = 0;
                        *(_DWORD *)(v17 + 56) = 0;
                        sub_25AFF0(v17, (__int64)&tinfo_property, 0.0);
                        v18 = v77;
                        *(_QWORD *)(v17 + 64) = 0;
                        *(_BYTE *)(v17 + 60) = v18;
                        copy_tinfo_t();
                      }
                      v13[1] = 1;
                      clear_tinfo_t();
                      sub_255630((__int64)&tinfo_property, 0.0);
                      clear_tinfo_t();
                    }
                  }
                  clear_tinfo_t();
                  sub_255630((__int64)v66, 0.0);
                  clear_tinfo_t();
                  sub_28F010((__int64)v3, *v13, &v61);
                  v25 = *(_QWORD *)(v3[2] + 8LL * v3[3] - 8);
                  if ( (_BYTE)v62
                    && ((v62 & 0xE) != 0 || (v62 & 0x30) == 0)
                    && (tinfo_property = 0,
                        tinfo_property = get_tinfo_property(),
                        v26 = get_tinfo_property(),
                        clear_tinfo_t(),
                        (v26 & 0x3F) != 0x30)
                    || (v43 = *(_DWORD *)(v25 + 8), v43 <= 0x45)
                    && (*((_BYTE *)&off_4E0320 + 16 * (int)v43 + 11) & 8) != 0
                    && v4 != *(char **)(v25 + 24)
                    || (v44 = sub_255000(v43)) == 0 )
                  {
                    if ( (get_tinfo_property() & 0xF) != 0xB )
                    {
                      v66[0] = 0;
                      copy_tinfo_t();
LABEL_32:
                      get_tinfo_property();
                      if ( (get_tinfo_property() & 0xF) == 0xA )
                      {
                        sub_32C270(
                          &tinfo_property,
                          *(_QWORD *)(v3[9] + 112LL),
                          *(_DWORD *)(*(_QWORD *)(v3[9] + 112LL) + 84LL));
                      }
                      else
                      {
                        tinfo_property = 0;
                        copy_tinfo_t();
                      }
                      v27 = sub_F1640((__int64)&tinfo_property, (__int64)v13);
                      *(_DWORD *)(v27 + 56) |= 2u;
                      v28 = v27;
                      v29 = *(_DWORD *)(v27 + 8);
                      *(_QWORD *)v27 = *(_QWORD *)v4;
                      LODWORD(v27) = *((_DWORD *)v4 + 2);
                      *((_DWORD *)v4 + 2) = v29;
                      v30 = *(_DWORD *)(v28 + 12);
                      *(_DWORD *)(v28 + 8) = v27;
                      LODWORD(v27) = *((_DWORD *)v4 + 3);
                      *((_DWORD *)v4 + 3) = v30;
                      v31 = *(_QWORD *)(v28 + 24);
                      *(_DWORD *)(v28 + 12) = v27;
                      v32 = *((_QWORD *)v4 + 3);
                      *((_QWORD *)v4 + 3) = v31;
                      v33 = *(_QWORD *)(v28 + 32);
                      *(_QWORD *)(v28 + 24) = v32;
                      v34 = *((_QWORD *)v4 + 4);
                      *((_QWORD *)v4 + 4) = v33;
                      v35 = *(_QWORD *)(v28 + 40);
                      *(_QWORD *)(v28 + 32) = v34;
                      v36 = *((_QWORD *)v4 + 5);
                      *((_QWORD *)v4 + 5) = v35;
                      v37 = *(_QWORD *)(v28 + 48);
                      *(_QWORD *)(v28 + 40) = v36;
                      v38 = *((_QWORD *)v4 + 6);
                      *((_QWORD *)v4 + 6) = v37;
                      LODWORD(v37) = *(_DWORD *)(v28 + 56);
                      *(_QWORD *)(v28 + 48) = v38;
                      LODWORD(v38) = *((_DWORD *)v4 + 14);
                      *((_DWORD *)v4 + 14) = v37;
                      *(_DWORD *)(v28 + 56) = v38;
                      sub_246B40((__int64)v4, v3[9], v66, 0.0);
                      if ( v28 )
                      {
                        sub_255630(v28, 0.0);
                        clear_tinfo_t();
                        j__qfree(v28);
                      }
                      if ( (unsigned __int8)sub_283B00((__int64)v3, *(_QWORD *)(v3[9] + 112LL), (__m128)0LL) )
                        *((_DWORD *)v3 + 2) |= 8u;
                      clear_tinfo_t();
                      clear_tinfo_t();
                      goto LABEL_39;
                    }
                    v44 = sub_255000(*(_DWORD *)(v25 + 8));
                    if ( !v44 )
                      v44 = 2;
                  }
                  sub_32C430(v66, *(_QWORD *)(v3[9] + 112LL), v59, v44);
                  goto LABEL_32;
                }
                if ( *(char **)(v39 + 32) != v4 )
                  goto LABEL_14;
                v54 = *(_QWORD *)(a1[2] + 8 * v9 - 8);
                if ( sub_27F060() )
                  goto LABEL_14;
                a2 = *(char **)(*(_QWORD *)(v54 + 24) + 48LL);
                tinfo_size = get_tinfo_size();
LABEL_80:
                v9 = v59;
                if ( v59 < tinfo_size )
                  goto LABEL_14;
                goto LABEL_58;
              }
              if ( *(char **)(v39 + 24) == v4 )
                goto LABEL_14;
              a2 = v4;
              v57 = *(_QWORD *)(a1[2] + 8 * v9 - 8);
              v55 = sub_284360(v39, (__int64)v4, nullptr, 0.0);
              if ( *(_BYTE *)(v55 + 60) )
                goto LABEL_14;
              v60 = v57;
              v58 = sub_27F060();
              if ( v58 )
                goto LABEL_14;
              if ( *(_DWORD *)(v60 + 8) != 57 )
                goto LABEL_86;
              v49 = *(_QWORD *)(v60 + 24);
              if ( *(_DWORD *)(v49 + 8) != 68 )
                goto LABEL_86;
              v50 = *(_QWORD *)(v49 + 24);
              if ( *(_BYTE *)v50 == 83 )
                ++v50;
              if ( *(_BYTE *)v50 == 72 )
              {
                if ( *(_BYTE *)(v50 + 1) != 73 )
                  goto LABEL_92;
              }
              else if ( *(_BYTE *)v50 != 76 || *(_BYTE *)(v50 + 1) != 79 )
              {
                goto LABEL_92;
              }
              v58 = v11;
              v50 += 2;
LABEL_92:
              a2 = "DWORD";
              v51 = (char *)(v50 + 5);
              if ( !strncmp((const char *)v50, "DWORD", 5u) )
                goto LABEL_96;
              a2 = "WORD";
              if ( !strncmp((const char *)v50, "WORD", 4u) || (a2 = "BYTE", !strncmp((const char *)v50, "BYTE", 4u)) )
              {
                v51 = (char *)(v50 + 4);
LABEL_96:
                v52 = *v51;
                if ( v58 )
                {
                  if ( !v52 )
                    goto LABEL_14;
                }
                else if ( (unsigned __int8)(v52 - 48) <= 9u && !v51[1] )
                {
                  goto LABEL_14;
                }
              }
LABEL_86:
              a2 = *(char **)(v55 + 64);
              tinfo_size = get_tinfo_size();
              goto LABEL_80;
            }
            if ( v64 )
              goto LABEL_14;
          }
          else
          {
            if ( !v64 )
              goto LABEL_13;
            v8 = v65;
            if ( v63 != v65 * (v64 + 1) )
              goto LABEL_14;
          }
          if ( v65 != 1 )
            v9 = (__int64)"%sHIDWORD";
          goto LABEL_14;
        }
      }
      v2 = 0;
    }
LABEL_39:
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return v2;
}

