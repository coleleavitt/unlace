__int64 __fastcall sub_7F7C0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r14d
  int v15; // esi
  char v16; // al
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r15d
  char v24; // al
  unsigned int v25; // ebp
  _BOOL4 v26; // r8d
  unsigned __int64 v27; // rax
  int v28; // r13d
  __int64 v29; // rax
  signed int v30; // r14d
  unsigned __int64 v31; // rax
  signed int v32; // r15d
  int v33; // edx
  __int64 *v34; // rdi
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 tinfo_size; // rbp
  __int64 v46; // r8
  __int64 v47; // r9
  char v48; // al
  unsigned int v49; // r15d
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r15
  unsigned __int64 v54; // r15
  int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  char v58; // al
  char v59; // al
  bool v60; // al
  int v61; // ebp
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  char v67; // al
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // [rsp+0h] [rbp-98h]
  __int64 v71; // [rsp+0h] [rbp-98h]
  __int64 v72; // [rsp+8h] [rbp-90h]
  __int64 v73; // [rsp+10h] [rbp-88h]
  __int64 v74; // [rsp+10h] [rbp-88h]
  __int64 v75; // [rsp+10h] [rbp-88h]
  unsigned __int64 v76; // [rsp+18h] [rbp-80h]
  int v77; // [rsp+18h] [rbp-80h]
  int v79; // [rsp+24h] [rbp-74h]
  unsigned int v80; // [rsp+24h] [rbp-74h]
  int v81; // [rsp+24h] [rbp-74h]
  int v82; // [rsp+24h] [rbp-74h]
  int v83; // [rsp+24h] [rbp-74h]
  unsigned int v84; // [rsp+24h] [rbp-74h]
  int v85; // [rsp+28h] [rbp-70h]
  unsigned int v86; // [rsp+28h] [rbp-70h]
  unsigned int v87; // [rsp+28h] [rbp-70h]
  unsigned int v88; // [rsp+28h] [rbp-70h]
  char v89; // [rsp+2Dh] [rbp-6Bh]
  unsigned __int8 v90; // [rsp+2Fh] [rbp-69h]
  int v91; // [rsp+3Ch] [rbp-5Ch] BYREF
  _QWORD v92[11]; // [rsp+40h] [rbp-58h] BYREF

  v92[3] = __readfsqword(0x28u);
  v7 = *(unsigned __int8 *)(a2 + 88);
  v8 = v7 & 0xF0;
  v9 = v7 & 0xFFFFFFF0;
  if ( (_BYTE)v9 == 0xC0 )
    v8 = *(_DWORD *)(a2 + 28);
  if ( v8 <= 0x10 )
    v8 = getinf(99);
  if ( v8 != 256 && v8 != 176 )
  {
    v13 = getinf_flag(3, 4, v9, a4, a5, a6, v70, a1, v73);
    if ( (_BYTE)v13 || (getinf(3) & 0x1006) == 0x1002 )
      return sub_7A7B0(v72, a2, a3, v10, v11, v12);
    v16 = *(_BYTE *)(a2 + 88);
    v17 = v16 & 0xF0;
    if ( (v16 & 0xF0) == 0xC0 )
      v17 = *(_DWORD *)(a2 + 28);
    if ( v17 <= 0x10 )
      v17 = getinf(99);
    LOBYTE(v18) = sub_7DEC0(v72, a2 + 40, a2 + 32, v17);
    v23 = v18;
    if ( !(_BYTE)v18 )
      return v13;
    v24 = *(_BYTE *)(a2 + 88);
    v25 = v24 & 0xF0;
    if ( (v24 & 0xF0) == 0xC0 )
      v25 = *(_DWORD *)(a2 + 28);
    if ( v25 <= 0x10 )
      v25 = getinf(99);
    v89 = 0;
    if ( v25 != 64 )
      v89 = getinf_flag(67, 32, v19, v20, v21, v22, v71, v72, v74);
    v92[0] = 16;
    v92[1] = 8;
    v92[2] = 4;
    v26 = sub_79970(v72, v25, a2 + 32, 1);
    v27 = *(_QWORD *)(a2 + 8);
    if ( !v27 )
    {
LABEL_99:
      *(_QWORD *)(a2 + 56) = v27;
      return v23;
    }
    v28 = 0;
    v29 = 0;
    v30 = v26;
    v76 = 0;
    v90 = v23;
    while ( 1 )
    {
      v40 = *(_QWORD *)a2 + 80 * v29;
      v41 = *(_QWORD *)(v40 + 64);
      v75 = v40 + 64;
      if ( (_BYTE)v41 || a3 > v28 )
      {
        v42 = (__int64)&v91;
        tinfo_size = get_tinfo_size();
      }
      else
      {
        tinfo_size = *(_QWORD *)(v40 + 8);
        v42 = (unsigned int)tinfo_size;
        v55 = round_down_power2();
        v44 = (unsigned int)v55;
        if ( v55 > 1 )
        {
          do
          {
            v43 = (unsigned int)((int)tinfo_size >> 31);
            LODWORD(v43) = (int)tinfo_size % (int)v44;
            if ( !((int)tinfo_size % (int)v44) )
            {
              v55 = v44;
              goto LABEL_64;
            }
            v44 = (unsigned int)((int)v44 >> 1);
          }
          while ( (_DWORD)v44 != 1 );
          v55 = 1;
        }
LABEL_64:
        v91 = v55;
      }
      if ( tinfo_size == -1 )
        return 0;
      if ( tinfo_size != 8
        || (v41 = 4, v42 = 67, (unsigned __int8)getinf_flag(67, 4, v43, v44, v46, v47, v71, v72, v75)) )
      {
        if ( !v89 )
          goto LABEL_29;
      }
      else
      {
        if ( (unsigned int)v91 > 4 )
          v91 = 4;
        if ( !v89 )
          goto LABEL_32;
      }
      v42 = v75;
      v41 = (unsigned int)tinfo_size;
      if ( !sub_78120(v75, tinfo_size) )
      {
LABEL_29:
        if ( (unsigned int)v91 > 4 )
        {
          if ( v30 > 3 )
            goto LABEL_48;
          v30 = (v30 + 1) & 0xFFFFFFFE;
        }
LABEL_32:
        if ( v30 > 3 )
          goto LABEL_48;
        v31 = (unsigned __int64)(tinfo_size + 3) >> 2;
        v32 = v30 + v31;
        if ( v30 + (int)v31 <= 4 )
        {
          if ( (_DWORD)v31 == 1 )
          {
            v61 = dword_8FEB0[(unsigned __int16)v30];
            cleanup_argloc();
            *(_DWORD *)v40 = 3;
            *(_DWORD *)(v40 + 8) = v61;
          }
          else
          {
            sub_7A2A0(v40, (unsigned __int16)v30, (unsigned __int64)(tinfo_size + 3) >> 2, tinfo_size, 0);
          }
        }
        else
        {
          if ( v76 )
            goto LABEL_48;
          v33 = 4 - (unsigned __int16)v30;
          v77 = 4 * v33;
          sub_7A2A0(v40, (unsigned __int16)v30, v33, 4 * v33, 1u);
          v34 = *(__int64 **)(v40 + 8);
          v35 = v77;
          v36 = v34[1];
          v37 = *v34;
          if ( v34[2] < (unsigned __int64)(v36 + 1) )
          {
            v69 = qvector_reserve((__int64)v34, v37, v36 + 1, 24);
            v35 = v77;
            v37 = v69;
            *v34 = v69;
            v36 = v34[1];
          }
          v38 = v37 + 24 * v36;
          *(_QWORD *)v38 = 0;
          *(_DWORD *)(v38 + 16) = 0xFFFF;
          *(_QWORD *)(v38 + 8) = 0;
          v39 = tinfo_size - v35;
          ++v34[1];
          *(_WORD *)(v38 + 16) = v35;
          *(_WORD *)(v38 + 18) = v39;
          v76 = (v39 + 3) & 0xFFFFFFFFFFFFFFFCLL;
          cleanup_argloc();
          *(_DWORD *)v38 = 1;
          *(_QWORD *)(v38 + 8) = 0;
        }
        v30 = v32;
        goto LABEL_39;
      }
      v41 = (__int64)v92;
      v42 = v40;
      if ( !(unsigned __int8)sub_79CE0((_DWORD *)v40, (int *)v92, v75, tinfo_size) )
      {
LABEL_48:
        v48 = *(_BYTE *)(a2 + 88);
        v49 = v48 & 0xF0;
        if ( (v48 & 0xF0) == 0xC0 )
          v49 = *(_DWORD *)(a2 + 28);
        if ( v49 > 0x10 )
        {
          v50 = (unsigned int)v91;
          v51 = (unsigned int)(v91 - 1);
          if ( (v91 & (unsigned int)v51) != 0 )
            goto LABEL_104;
          if ( v91 <= 8 )
          {
            if ( v91 <= 3 )
              goto LABEL_54;
LABEL_87:
            LOBYTE(v51) = v49 == 256;
            v60 = v49 == 256 || v49 == 176;
LABEL_88:
            if ( !v60 )
            {
LABEL_89:
              v82 = v50;
              if ( (unsigned __int8)getinf_flag(67, 4, v51, v50, v46, v47, v71, v72, v75) )
              {
                v53 = v82 - 1;
                v52 = -v82;
                goto LABEL_58;
              }
            }
LABEL_57:
            v52 = -4;
            v53 = 3;
LABEL_58:
            v54 = v52 & (v53 + v76);
            cleanup_argloc();
            *(_DWORD *)v40 = 1;
            *(_QWORD *)(v40 + 8) = v54;
            v76 = ((tinfo_size + 3) & 0xFFFFFFFFFFFFFFFCLL) + v54;
            goto LABEL_39;
          }
          if ( v49 == 256 || v49 == 176 )
            goto LABEL_57;
          v87 = v91 - 1;
          v81 = v91;
          v58 = getinf_flag(67, 512, v51, (unsigned int)v91, v46, v47, v71, v72, v75);
          LODWORD(v50) = v81;
          v51 = v87;
          if ( !v58 )
          {
            v50 = 8;
            goto LABEL_89;
          }
          goto LABEL_67;
        }
        v42 = 99;
        v56 = getinf(99);
        v50 = (unsigned int)v91;
        v49 = v56;
        v51 = (unsigned int)(v91 - 1);
        if ( (v91 & (unsigned int)v51) != 0 )
        {
LABEL_104:
          sub_78100();
          return sub_80000(v42, v41);
        }
        if ( v91 > 8 )
        {
          v88 = v91 - 1;
          v83 = v91;
          if ( v56 > 0x10 )
          {
            if ( v56 == 256 || v56 == 176 )
              goto LABEL_57;
            v59 = getinf_flag(67, 512, v51, (unsigned int)v91, v46, v47, v71, v72, v75);
            LODWORD(v50) = v83;
            v51 = v88;
            if ( !v59 )
            {
              v50 = 8;
              goto LABEL_87;
            }
            goto LABEL_67;
          }
          v62 = getinf(99);
          if ( v62 != 256 && v62 != 176 )
          {
            v67 = getinf_flag(67, 512, v63, v64, v65, v66, v71, v72, v75);
            LODWORD(v50) = v83;
            LODWORD(v51) = v88;
            if ( v67 )
            {
LABEL_67:
              v53 = (int)v51;
              v52 = -(int)v50;
              goto LABEL_58;
            }
          }
          LODWORD(v50) = 8;
        }
        else
        {
          if ( v91 <= 3 )
          {
            if ( v56 <= 0x10 )
            {
              v86 = v91 - 1;
              v80 = v91;
              v57 = getinf(99);
              v51 = v86;
              v50 = v80;
              v49 = v57;
            }
LABEL_54:
            if ( v49 != 176 && v49 != 256 )
            {
              v85 = v51;
              v79 = v50;
              if ( (unsigned __int8)getinf_flag(67, 2, v51, v50, v46, v47, v71, v72, v75) )
              {
                v53 = v85;
                v52 = -v79;
                goto LABEL_58;
              }
              goto LABEL_57;
            }
            goto LABEL_67;
          }
          if ( v56 > 0x10 )
            goto LABEL_87;
        }
        v84 = v50;
        v68 = getinf(99);
        v50 = v84;
        v51 = v68;
        LOBYTE(v51) = (_DWORD)v68 == 256;
        v60 = (_DWORD)v68 == 256 || (_DWORD)v68 == 176;
        goto LABEL_88;
      }
LABEL_39:
      ++v28;
      sub_7A320(v72, (int *)v40, v75, -1);
      v29 = v28;
      if ( (unsigned __int64)v28 >= *(_QWORD *)(a2 + 8) )
      {
        v23 = v90;
        v27 = v76;
        goto LABEL_99;
      }
    }
  }
  if ( (unsigned __int8)getinf_flag(3, 4, v9, a4, a5, a6, v70, a1, v73) || (getinf(3) & 0x1006) == 0x1002 )
    v15 = 8;
  else
    v15 = 4;
  return sub_7E640((__int64 *)a2, v15);
}
