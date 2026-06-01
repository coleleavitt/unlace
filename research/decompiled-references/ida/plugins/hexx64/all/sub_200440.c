__int64 __fastcall sub_200440(__int64 a1, unsigned __int64 a2, _BYTE *a3, char a4, double a5, __m128 a6)
{
  unsigned int v6; // r10d
  char v8; // al
  __int64 v9; // r13
  char v14; // al
  int v15; // r8d
  int v16; // r9d
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // r12
  __int64 v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  signed int v30; // ecx
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // eax
  int v36; // r13d
  __int64 v37; // rax
  int v38; // eax
  int v39; // r10d
  char v40; // al
  char v41; // al
  char v42; // dl
  unsigned __int64 v43; // rax
  int v44; // r13d
  _QWORD *v45; // rcx
  __int64 v46; // rdi
  _DWORD *v47; // rax
  _DWORD *v48; // rdx
  int v49; // eax
  __int64 v50; // r13
  __int64 v51; // rdi
  __int64 v52; // rax
  int v53; // eax
  unsigned __int64 v54; // r14
  int v55; // eax
  int v56; // eax
  __int64 v57; // rdx
  int v58; // esi
  _DWORD *v59; // rdi
  int v60; // eax
  signed __int64 v61; // rsi
  _QWORD *v62; // rdi
  signed __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // [rsp+0h] [rbp-220h]
  char v68; // [rsp+0h] [rbp-220h]
  __int64 v69; // [rsp+10h] [rbp-210h]
  int v70; // [rsp+10h] [rbp-210h]
  signed __int64 v71; // [rsp+10h] [rbp-210h]
  __int64 v72; // [rsp+10h] [rbp-210h]
  int v73; // [rsp+18h] [rbp-208h]
  unsigned int v75; // [rsp+28h] [rbp-1F8h]
  unsigned int v76; // [rsp+28h] [rbp-1F8h]
  int v77; // [rsp+34h] [rbp-1ECh] BYREF
  __int64 v78; // [rsp+38h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+40h] [rbp-1E0h] BYREF
  __int64 v80; // [rsp+48h] [rbp-1D8h]
  _QWORD v81[6]; // [rsp+50h] [rbp-1D0h] BYREF
  __int128 v82; // [rsp+80h] [rbp-1A0h]
  __int64 v83; // [rsp+90h] [rbp-190h]
  __int64 v84; // [rsp+98h] [rbp-188h]
  __int64 v85; // [rsp+A0h] [rbp-180h]
  char v86; // [rsp+A8h] [rbp-178h] BYREF
  unsigned __int64 v87; // [rsp+1E8h] [rbp-38h] BYREF

  v87 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 108) != a4 )
    return 0;
  v8 = *(_BYTE *)a2;
  v9 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)a2 == 5 || v8 == 15 )
  {
    if ( !(unsigned __int8)sub_32F330(a2, v81) )
      goto LABEL_9;
    if ( v81[0] >= *(__int64 *)(v9 + 128)
      || sub_317040(
           (unsigned __int64 **)(v9 + 848),
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v9 + 1440) + v81[0])) )
    {
      return 0;
    }
    v14 = !sub_317040(
             (unsigned __int64 **)(v9 + 232),
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v9 + 1440) + v81[0]));
  }
  else
  {
    if ( v8 != 1 )
      return 0;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 1504) + 264LL))(
            *(_QWORD *)(v9 + 1504),
            *(unsigned int *)(a2 + 8))
        ^ 1;
  }
  if ( !v14 )
    return 0;
LABEL_9:
  v17 = **(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
  if ( !v17 )
    goto LABEL_12;
  v18 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v18 )
    return 0;
  if ( (*(_BYTE *)v18 & 2) != 0 )
    goto LABEL_12;
  while ( 1 )
  {
    v31 = *(_QWORD *)(v18 + 24);
    if ( a2 >= v31 )
      break;
    v18 = *(_QWORD *)(v18 + 8);
LABEL_23:
    if ( (*(_BYTE *)v18 & 2) != 0 )
      goto LABEL_12;
  }
  if ( v31 < a2 )
  {
    v18 = *(_QWORD *)(v18 + 16);
    goto LABEL_23;
  }
  if ( v17 != (_QWORD *)v18 )
    return 0;
LABEL_12:
  v19 = *(_QWORD *)(a1 + 32);
  v20 = *(_QWORD *)(a1 + 16);
  v81[1] = *(_QWORD *)(a1 + 8);
  v21 = *(_QWORD *)(a1 + 24);
  v81[0] = &off_4DED70;
  v81[4] = v19;
  v22 = *(_QWORD **)(a1 + 96);
  v81[2] = v20;
  v81[3] = v21;
  v23 = *(int *)(v20 + 72);
  if ( v23 >= v22[1] )
    sub_1FB150(a5);
  v24 = sub_1F1F50((__int64 *)(*v22 + 80 * v23), v21, a2, a4, v15, v16, a5, a6);
  v77 = v24;
  if ( v24 == -1 )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    v79 = 0;
    v80 = 0;
    v69 = v32;
    if ( !(unsigned __int8)sub_1C5030((char *)a2, (__int64)&v79) )
    {
      if ( !under_debugger )
        sub_383060(0xC7F7u, a5);
      goto LABEL_131;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 6LL) & 1) != 0 )
      v69 = sub_1F0B80(*(_QWORD *)(a1 + 8), v69, (int *)&v79, a5);
    v33 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v33 & 1) != 0 )
    {
      v34 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(v33 + 40) == v69 )
      {
        v57 = *(_QWORD *)(a1 + 24);
        if ( v57 != v34 )
          v69 = *(_QWORD *)(v57 + 24);
      }
      if ( (*(_BYTE *)(v34 + 4) & 0x40) != 0 )
      {
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
        {
          v83 = -1;
          v84 = 0;
          v65 = (unsigned __int64 *)&v86;
          v85 = 0;
          v82 = -1;
          a5 = 0.0;
          do
          {
            *(_WORD *)v65 = 0;
            v65 += 5;
            *((_WORD *)v65 - 19) = 0;
            *((_WORD *)v65 - 18) = 0;
            *((_DWORD *)v65 - 2) = 0;
            *((_WORD *)v65 - 17) = 0;
            *((_OWORD *)v65 - 2) = 0;
            *(v65 - 2) = 0;
          }
          while ( &v87 != v65 );
          if ( (int)decode_insn() > 0 )
            v69 += (unsigned __int8)is_call_insn();
        }
        v33 = *(_QWORD *)(a1 + 8);
      }
      v69 += *(unsigned __int8 *)(a1 + 108);
    }
    v35 = 1;
    if ( *(_DWORD *)(a2 + 4) != -1 )
      v35 = *(_DWORD *)(a2 + 4);
    v73 = v35;
    *(_BYTE *)(a1 + 109) = sub_1F09D0(v33, (char *)a2, v69);
    v36 = 0;
    v37 = 0;
    if ( !*(_QWORD *)(a1 + 80) )
    {
LABEL_54:
      v42 = *(_BYTE *)(a1 + 109);
      if ( v42 )
      {
        v43 = 0;
        v44 = 0;
      }
      else
      {
        v43 = *(int *)(a1 + 104);
        v44 = *(_DWORD *)(a1 + 104);
      }
      v45 = *(_QWORD **)(a1 + 48);
      v68 = 0;
      if ( v43 < v45[1] )
      {
        while ( 1 )
        {
          if ( v42
            || (v46 = *v45 + 104 * v43, (*(_BYTE *)(v46 + 25) & 0x10) == 0)
            || !a4 && *(_QWORD *)(v46 + 16) == v69 )
          {
            v47 = *(_DWORD **)(a1 + 72);
            v48 = &v47[*(_QWORD *)(a1 + 80)];
            if ( v47 == v48 )
              goto LABEL_71;
            while ( v44 != *v47 )
            {
              if ( v48 == ++v47 )
                goto LABEL_71;
            }
            if ( v48 == v47 )
            {
LABEL_71:
              v49 = sub_200240(a1, (_BYTE *)a2, a3, v44, (__int64)v81, a5, a6);
              v39 = v49;
              if ( v49 <= 0 )
                goto LABEL_49;
              if ( v49 == 4 )
                goto LABEL_108;
              v45 = *(_QWORD **)(a1 + 48);
            }
          }
          else if ( *(_BYTE *)a2 == 5 )
          {
            v56 = sub_1C36B0(
                    v46,
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
                    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                    v73,
                    *(_DWORD *)(v46 + 88),
                    nullptr,
                    a5,
                    nullptr);
            v45 = *(_QWORD **)(a1 + 48);
            v68 |= v56 != 0;
          }
          v43 = ++v44;
          if ( (unsigned __int64)v44 >= v45[1] )
            break;
          v42 = *(_BYTE *)(a1 + 109);
        }
      }
      if ( (**(_BYTE **)(a1 + 8) & 1) != 0 && *(int *)(a1 + 104) > 0 )
      {
        v50 = 0;
        while ( 1 )
        {
          v51 = *v45 + 104 * v50;
          if ( *(_QWORD *)(v51 + 16) == v69
            && (*(_BYTE *)(v51 + 25) & 1) == 0
            && (!(unsigned int)sub_1C2AD0((int *)v51, (int *)&v79, a5)
             || *(_BYTE *)a2 == 5 && (unsigned __int8)sub_1C3F00()) )
          {
            v52 = *(_QWORD *)(a1 + 80);
            if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v52 + 1) )
            {
              *(_QWORD *)(a1 + 72) = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v52 + 1, 4);
              v52 = *(_QWORD *)(a1 + 80);
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v52) = v50;
            ++*(_QWORD *)(a1 + 80);
            v39 = sub_200240(a1, (_BYTE *)a2, a3, v50, (__int64)v81, a5, a6);
            if ( v39 <= 0 )
              goto LABEL_49;
          }
          if ( *(_DWORD *)(a1 + 104) <= (int)++v50 )
            break;
          v45 = *(_QWORD **)(a1 + 48);
        }
      }
      v53 = sub_1FCAD0(a1, &v77, (unsigned __int8 *)a2, v69, (__int64)a3, v68 | a4, a5);
      v54 = v77;
      v39 = v53;
      if ( v77 == -1 )
      {
LABEL_49:
        v76 = v39;
        cleanup_argloc();
        return v76;
      }
      v70 = v53;
      v55 = sub_2089E0(a2, v77, (__int64)v81, (__m128i *)(a1 + 56), a4, 0, a3);
      if ( v55 == 3 || v70 == -36 )
      {
LABEL_106:
        v39 = -36;
        goto LABEL_49;
      }
      if ( v55 == 4 )
      {
LABEL_108:
        v39 = 1;
        goto LABEL_49;
      }
      if ( v55 == 1 )
      {
        v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104 * v54;
        if ( (unsigned int)(*(_DWORD *)v64 - 3) <= 1 )
        {
          if ( !under_debugger )
            sub_383060(0xC49Bu, a5);
          goto LABEL_131;
        }
        if ( (*(_BYTE *)(v64 + 25) & 4) != 0 )
          goto LABEL_121;
      }
      else
      {
        if ( v55 != 2 || *(_BYTE *)a2 != 5 )
          goto LABEL_95;
        v66 = *(_QWORD *)(a1 + 8);
        v72 = *(_QWORD *)(v66 + 432) + 104 * v54;
        if ( !sub_228C90(v66, v72) || *(_DWORD *)v72 != 1 )
        {
          if ( !under_debugger )
            sub_383060(0xCCDEu, a5);
          goto LABEL_131;
        }
        if ( (*(_BYTE *)(v72 + 24) & 2) == 0 )
        {
          v58 = *(_DWORD *)(v72 + 88);
          v59 = (_DWORD *)v72;
          v71 = *(_QWORD *)(v72 + 8);
          v60 = sub_1C35C0(v59, v58, a5);
          v61 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
          v62 = *(_QWORD **)(a1 + 8);
          v63 = v61 + *(int *)(a2 + 4);
          if ( v61 > v71 )
            v61 = v71;
          if ( v63 >= v60 )
            v60 = v63;
          LODWORD(v78) = v60 - v61;
          if ( (unsigned int)sub_2327F0(v62, (int *)&v78, v61, a3) - 1 <= 1 )
            goto LABEL_106;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
        {
LABEL_121:
          sub_2089E0(a2, v54, (__int64)v81, (__m128i *)(a1 + 56), a4, 1u, a3);
LABEL_95:
          cleanup_argloc();
          return 0;
        }
      }
      v39 = -10;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v38 = sub_200240(a1, (_BYTE *)a2, a3, *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v37), (__int64)v81, a5, a6);
      v39 = v38;
      if ( v38 <= 0 )
        goto LABEL_49;
      if ( v38 == 4 )
      {
        v40 = *(_BYTE *)a2;
        if ( *(_BYTE *)a2 == 5 || v40 == 15 )
        {
          v67 = *(_QWORD *)(a1 + 8);
          if ( !(unsigned __int8)sub_32F330(a2, &v78) )
            goto LABEL_40;
          if ( v78 >= *(_QWORD *)(v67 + 128)
            || sub_317040(
                 (unsigned __int64 **)(v67 + 848),
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v67 + 1440) + v78)) )
          {
LABEL_48:
            v39 = 0;
            goto LABEL_49;
          }
          v41 = sub_317040(
                  (unsigned __int64 **)(v67 + 232),
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v67 + 1440) + v78));
        }
        else
        {
          if ( v40 != 1 )
            goto LABEL_48;
          v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL) + 264LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                  *(unsigned int *)(a2 + 8));
        }
        if ( v41 == 1 )
          goto LABEL_48;
      }
LABEL_40:
      v37 = ++v36;
      if ( (unsigned __int64)v36 >= *(_QWORD *)(a1 + 80) )
        goto LABEL_54;
    }
  }
  v25 = v24;
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL);
  v6 = sub_2089E0(a2, v24, (__int64)v81, (__m128i *)(a1 + 56), a4, 0, nullptr);
  if ( v6 == 1 )
  {
    v27 = sub_2089E0(a2, v25, (__int64)v81, (__m128i *)(a1 + 56), a4, 1u, nullptr);
    if ( v27 != 1 )
    {
      v75 = v27;
      v28 = v26 + 104 * v25;
      *(_DWORD *)(v28 + 24) |= 0x400u;
      v29 = *(_QWORD *)(a1 + 8);
      v30 = *(_DWORD *)(v28 + 88);
      v79 = 0;
      v80 = 0;
      sub_1EFA10(*(_DWORD **)(v29 + 1504), (__int64 *)(v29 + 496), v28, v30, &v79, 0);
      cleanup_argloc();
      sub_1F08B0(*(_QWORD **)(a1 + 8), *(_QWORD *)(v26 + 104 * v25 + 16), 0x1Au);
      return v75;
    }
    if ( !under_debugger )
      sub_383060(0xCE8Au, a5);
LABEL_131:
    BUG();
  }
  return v6;
}

