char __fastcall sub_259AB0(__int64 a1, __int64 a2, double a3)
{
  int v4; // eax
  __int64 i; // rbx
  unsigned int v7; // r13d
  unsigned __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // r14
  int tinfo_size; // r13d
  char v16; // zf
  int v17; // eax
  int v18; // eax
  __int64 j; // rbx
  __int64 *v20; // r14
  int v21; // r13d
  char v22; // zf
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r9d
  unsigned int v26; // eax
  int v27; // eax
  char v28; // zf
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  __int64 *v34; // r13
  int v35; // ebx
  char v36; // zf
  int v37; // eax
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // eax
  __int64 v43; // rax
  _QWORD *v44; // r13
  _QWORD *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // r14
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+8h] [rbp-60h]
  __int64 v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+8h] [rbp-60h]
  __int64 v58; // [rsp+8h] [rbp-60h]
  __int64 v59; // [rsp+8h] [rbp-60h]
  __int64 v60; // [rsp+8h] [rbp-60h]
  __int64 v61; // [rsp+8h] [rbp-60h]
  int v62; // [rsp+10h] [rbp-58h]
  int v63; // [rsp+10h] [rbp-58h]
  __int64 v64; // [rsp+10h] [rbp-58h]
  __int64 v65; // [rsp+10h] [rbp-58h]
  __int64 v66; // [rsp+10h] [rbp-58h]
  __int64 *v67; // [rsp+18h] [rbp-50h]
  __int64 v68; // [rsp+18h] [rbp-50h]
  __int64 v69; // [rsp+20h] [rbp-48h]
  __int64 v70; // [rsp+20h] [rbp-48h]
  unsigned int v71; // [rsp+2Ch] [rbp-3Ch]

  if ( sub_259850(a1, a2, 0, a3) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    for ( i = a1; v4 == 48; v4 = *(_DWORD *)(i + 8) )
      i = *(_QWORD *)(i + 24);
    if ( v4 != 61 )
      goto LABEL_89;
    v14 = *(__int64 **)(i + 24);
    tinfo_size = get_tinfo_size();
    v16 = (unsigned int)get_tinfo_property() == 1;
    v17 = 16;
    if ( tinfo_size <= 16 )
      v17 = tinfo_size;
    if ( sub_32ABC0(*v14, v17, v16) )
      goto LABEL_89;
    v18 = *(_DWORD *)(a2 + 8);
    for ( j = a2; v18 == 48; v18 = *(_DWORD *)(j + 8) )
      j = *(_QWORD *)(j + 24);
    if ( v18 != 61 )
      goto LABEL_89;
    v20 = *(__int64 **)(j + 24);
    v21 = get_tinfo_size();
    v22 = (unsigned int)get_tinfo_property() == 1;
    v23 = 16;
    if ( v21 <= 16 )
      v23 = v21;
    if ( sub_32ABC0(*v20, v23, v22) )
    {
LABEL_89:
      if ( ((*(_BYTE *)(a2 + 56) & 4) != 0) != ((*(_BYTE *)(a1 + 56) & 4) != 0) )
        return 0;
      v7 = *(_DWORD *)(a1 + 8);
      LODWORD(v8) = *(_DWORD *)(a2 + 8);
      if ( v7 <= 0x45 && (*((_BYTE *)&off_4E0320 + 16 * (int)v7 + 11) & 0x10) != 0 )
      {
        v9 = sub_255000(v7);
        if ( v9 != (unsigned int)sub_255000(v8) )
          return 0;
      }
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(_QWORD *)(a2 + 24);
      v12 = *(_QWORD *)(a1 + 32);
      v13 = *(_QWORD *)(a2 + 32);
      if ( v7 == (_DWORD)v8 )
        goto LABEL_11;
      v24 = (unsigned int)(v8 - 24);
      if ( (unsigned int)v24 > 7 )
      {
        v25 = v8;
        v26 = v7 & 0xFFFFFFFB;
        if ( (v7 & 0xFFFFFFFB) == 0x19 )
        {
          v27 = v8 & 0xFFFFFFFB;
          goto LABEL_61;
        }
      }
      else
      {
        v25 = dword_42BF40[v24];
        if ( v7 == v25 )
        {
          LODWORD(v8) = v7;
          v11 = *(_QWORD *)(a2 + 32);
          v13 = *(_QWORD *)(a2 + 24);
LABEL_11:
          if ( (unsigned int)(v8 - 1) > 0x3B && (_DWORD)v8 != 67 )
            goto LABEL_13;
          if ( *(_DWORD *)(v10 + 8) == 48 )
          {
            v66 = v13;
            v59 = v12;
            v52 = sub_253280(v10);
            v13 = v66;
            v12 = v59;
            v10 = v52;
          }
          if ( *(_DWORD *)(v11 + 8) == 48 )
          {
            v65 = v13;
            v58 = v12;
            v51 = sub_253280(v11);
            v13 = v65;
            v12 = v58;
            v11 = v51;
          }
          v64 = v13;
          v57 = v12;
          v39 = sub_259AB0(v10, v11);
          v8 = *(unsigned int *)(a1 + 8);
          v40 = v57;
          v41 = v64;
          if ( v39 )
          {
            v42 = v8 - 1;
          }
          else
          {
            if ( (unsigned int)v8 > 0x2C )
              return 0;
            v43 = 0x142800F80000LL;
            if ( !_bittest64(&v43, v8) || !sub_259AB0(v10, v64) )
              return 0;
            LODWORD(v8) = *(_DWORD *)(a1 + 8);
            v40 = v57;
            v41 = v11;
            v42 = v8 - 1;
          }
          if ( v42 > 0x2C && (_DWORD)v8 != 58 )
            goto LABEL_13;
          if ( *(_DWORD *)(v40 + 8) == 48 )
          {
            v61 = v41;
            v54 = sub_253280(v40);
            v41 = v61;
            v40 = v54;
          }
          if ( *(_DWORD *)(v41 + 8) == 48 )
          {
            v60 = v40;
            v53 = sub_253280(v41);
            v40 = v60;
            v41 = v53;
          }
          if ( sub_259AB0(v40, v41) )
          {
            LODWORD(v8) = *(_DWORD *)(a1 + 8);
LABEL_13:
            switch ( (int)v8 )
            {
              case '0':
                return compare_tinfo();
              case '9':
                v44 = *(_QWORD **)(a1 + 32);
                v45 = *(_QWORD **)(a2 + 32);
                v46 = v44[1];
                if ( (int)v46 != v45[1] )
                  return 0;
                if ( (int)v46 <= 0 )
                  return 1;
                v47 = 0;
                v48 = 8 * (9LL * (unsigned int)(v46 - 1) + 9);
                break;
              case ';':
              case '<':
                return *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32);
              case '=':
              case '>':
              case '@':
              case 'A':
                return 0;
              default:
                return 1;
            }
            while ( 1 )
            {
              v49 = v47 + *v44;
              if ( *(_DWORD *)(v49 + 8) == 48 )
                v49 = sub_253340(v47 + *v44);
              v50 = v47 + *v45;
              if ( *(_DWORD *)(v50 + 8) == 48 )
                v50 = sub_253340(v47 + *v45);
              if ( !sub_259AB0(v49, v50) )
                break;
              v47 += 72;
              if ( v47 == v48 )
                return 1;
            }
          }
          return 0;
        }
        v26 = v7 & 0xFFFFFFFB;
        if ( (v7 & 0xFFFFFFFB) == 0x19 )
        {
LABEL_29:
          v27 = v8 & 0xFFFFFFFB;
          if ( (v8 & 0xFFFFFFFB) == 0x19 )
          {
LABEL_30:
            if ( *(_DWORD *)(v12 + 8) != 61 )
            {
              if ( *(_DWORD *)(v10 + 8) != 61 )
                return 0;
              v7 = dword_42BF40[v7 - 24];
              v10 = *(_QWORD *)(a1 + 32);
              v12 = *(_QWORD *)(a1 + 24);
            }
            v71 = v25;
            v69 = *(_QWORD *)(a2 + 32);
            v67 = *(__int64 **)(v12 + 24);
            v55 = v12;
            v62 = get_tinfo_size();
            v28 = (unsigned int)get_tinfo_property() == 1;
            v29 = 16;
            if ( v62 <= 16 )
              v29 = v62;
            v30 = sub_32ABC0(*v67, v29, v28);
            v31 = v55;
            v32 = v69;
            v33 = v71;
            if ( v7 != 29 || v30 )
            {
              if ( v7 != 25 )
                return 0;
              if ( v30 != 1 )
                return 0;
            }
            if ( *(_DWORD *)(v69 + 8) == 61 )
            {
              v33 = v8;
              v32 = v11;
              v11 = v69;
            }
            else if ( *(_DWORD *)(v11 + 8) != 61 )
            {
              return 0;
            }
            v68 = v30;
            v63 = v33;
            v34 = *(__int64 **)(v11 + 24);
            v56 = v32;
            v70 = v31;
            v35 = get_tinfo_size();
            v36 = (unsigned int)get_tinfo_property() == 1;
            v37 = 16;
            if ( v35 <= 16 )
              v37 = v35;
            v38 = sub_32ABC0(*v34, v37, v36);
            if ( v63 != 29 || (v12 = v70, v38) )
            {
              if ( v38 != 1 || v63 != 25 || (v68 & 1) != 0 )
                return 0;
              v12 = v11;
              LODWORD(v8) = *(_DWORD *)(a1 + 8);
              v11 = v56;
              v13 = v12;
            }
            else
            {
              if ( !v68 )
                return 0;
              v11 = v56;
              LODWORD(v8) = *(_DWORD *)(a1 + 8);
              v13 = v70;
            }
            goto LABEL_11;
          }
LABEL_61:
          if ( v27 != 27 )
            return 0;
          goto LABEL_30;
        }
      }
      if ( v26 != 27 )
        return 0;
      goto LABEL_29;
    }
  }
  return 1;
}

