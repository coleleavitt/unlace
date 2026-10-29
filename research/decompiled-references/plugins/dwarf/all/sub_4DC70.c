unsigned __int64 __fastcall sub_4DC70(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // rax
  _BYTE *v17; // rdi
  int v18; // r8d
  int v19; // r9d
  _DWORD *v20; // r15
  int v21; // ecx
  int v22; // edx
  void (__fastcall *v23)(_QWORD *); // rcx
  void (__fastcall *v24)(_QWORD *); // rax
  _QWORD *v25; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rbp
  void *v28; // rdi
  __int64 v29; // rbx
  _QWORD *v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rdx
  size_t v41; // rbp
  __int64 v42; // r15
  __int64 v43; // rdi
  int v44; // eax
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rax
  int v53; // r8d
  int v54; // r9d
  int v55; // eax
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-378h]
  __int64 *v63; // [rsp+8h] [rbp-370h]
  int *v64; // [rsp+10h] [rbp-368h]
  int v65; // [rsp+18h] [rbp-360h]
  __m128i *v66; // [rsp+18h] [rbp-360h]
  __int64 v67; // [rsp+18h] [rbp-360h]
  unsigned __int64 v68; // [rsp+20h] [rbp-358h]
  unsigned __int64 v69; // [rsp+20h] [rbp-358h]
  unsigned int *v70; // [rsp+28h] [rbp-350h]
  __int64 *v71; // [rsp+30h] [rbp-348h]
  __int64 *v72; // [rsp+38h] [rbp-340h]
  _BYTE *v73; // [rsp+40h] [rbp-338h]
  int v74; // [rsp+40h] [rbp-338h]
  int v75; // [rsp+40h] [rbp-338h]
  int v76; // [rsp+40h] [rbp-338h]
  int v77; // [rsp+40h] [rbp-338h]
  _BYTE *v78; // [rsp+48h] [rbp-330h]
  __int64 v79; // [rsp+50h] [rbp-328h] BYREF
  int v80; // [rsp+58h] [rbp-320h]
  int v81; // [rsp+60h] [rbp-318h]
  int v82; // [rsp+68h] [rbp-310h]
  int v83; // [rsp+70h] [rbp-308h]
  int v84; // [rsp+78h] [rbp-300h]
  unsigned int v85; // [rsp+7Ch] [rbp-2FCh] BYREF
  __int64 v86; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v87; // [rsp+88h] [rbp-2F0h] BYREF
  int v88; // [rsp+90h] [rbp-2E8h] BYREF
  __int64 v89; // [rsp+98h] [rbp-2E0h]
  __int64 v90; // [rsp+A0h] [rbp-2D8h]
  int v91; // [rsp+A8h] [rbp-2D0h]
  __int64 v92; // [rsp+B0h] [rbp-2C8h] BYREF
  __int128 v93; // [rsp+B8h] [rbp-2C0h]
  int v94; // [rsp+C8h] [rbp-2B0h]
  __int64 (__fastcall **v95)(); // [rsp+D0h] [rbp-2A8h] BYREF
  int v96; // [rsp+D8h] [rbp-2A0h]
  __int64 v97; // [rsp+E0h] [rbp-298h]
  __int64 *v98; // [rsp+E8h] [rbp-290h]
  __int64 v99; // [rsp+F0h] [rbp-288h]
  __int64 v100; // [rsp+F8h] [rbp-280h]
  __int128 v101; // [rsp+100h] [rbp-278h]
  int v102; // [rsp+110h] [rbp-268h]
  int v103; // [rsp+118h] [rbp-260h]
  _DWORD v104[24]; // [rsp+120h] [rbp-258h] BYREF
  __int64 v105; // [rsp+180h] [rbp-1F8h]
  _BYTE v106[264]; // [rsp+230h] [rbp-148h] BYREF
  unsigned __int64 v107; // [rsp+338h] [rbp-40h]

  v72 = a2;
  v62 = a4;
  v107 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_97630(a4, 60) )
    return v107 - __readfsqword(0x28u);
  v98 = a2;
  v96 = 0;
  v97 = 0;
  v95 = off_C80E8;
  v99 = a3;
  v100 = a4;
  LOWORD(v102) = 0;
  v101 = -1;
  sub_A1190(a4, &v95, 0);
  v8 = *(_QWORD *)(a3 + 384);
  v9 = v8 + 104LL * *(_QWORD *)(a3 + 392);
  if ( *(_DWORD *)(a3 + 408) == 3 || v8 == v9 )
    goto LABEL_42;
  v64 = &v88;
  v63 = &v87;
  v70 = &v85;
  v71 = &v86;
  do
  {
    v10 = v8;
    v8 += 104;
    v86 = 0;
    v85 = 0;
    if ( v8 == v9 )
    {
      if ( (_BYTE)v102 )
      {
        v11 = 8 * v101;
      }
      else
      {
        v48 = sub_97AE0(v100);
        if ( v48 == -1 )
        {
          v50 = -1;
          v11 = -8;
        }
        else
        {
          v49 = v48;
          v11 = v48 & 0xFFFFFFFFFFFFFFF8LL;
          v50 = v49 >> 3;
        }
        *(_QWORD *)&v101 = v50;
        LOBYTE(v102) = 1;
      }
    }
    else
    {
      v11 = *(_QWORD *)(v8 + 40);
    }
    v12 = v11 - *(_QWORD *)(v8 - 64);
    v87 = 0;
    v68 = v12;
    v13 = *(_QWORD *)(a1 + 80);
    v88 = 0;
    v14 = *(unsigned int *)(v13 + 192);
    v89 = -1;
    v90 = v14;
    v65 = v8 - 56;
    if ( (unsigned __int8)sub_554E0(v63, v64, v8 - 56, 0) && (unsigned __int8)sub_30620(a3, v71, v70, v87, v64) )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v44 = sub_575D0(a3);
        v10 = (v10 - *(_QWORD *)(a3 + 384)) >> 3;
        sub_88B80((unsigned int)"Member #%d of %s is missing definition.\n", -991146299 * v10, v44, v45, v46, v47);
      }
      v15 = v85;
      if ( !v85 )
      {
        if ( !under_debugger )
          interr(30425);
LABEL_84:
        BUG();
      }
      *(_BYTE *)(v8 - 32) |= 4u;
      v16 = *(_QWORD *)(a3 + 232);
      v92 = 0;
      v93 = 0;
      if ( (v16 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v16 != -1 )
      {
        sub_58940(*(_QWORD *)(a1 + 80), &v92, v15, a3 + 232);
        if ( !(_QWORD)v93 )
        {
          v43 = v92;
          if ( v92 )
            goto LABEL_60;
          goto LABEL_61;
        }
        v10 = (__int64)v104;
        sub_84A60(v104);
        if ( !(unsigned __int8)sub_98E20(v92, v104) )
          goto LABEL_71;
        v51 = *(_QWORD *)(a1 + 136);
        if ( !v51 )
          goto LABEL_71;
        v52 = sub_27560(v51, (__int64)v104, v68 >> 3);
        if ( !v52
          || sub_561C0(
               (int)v72 + 24,
               v52,
               0,
               v52,
               v53,
               v54,
               v62,
               (_DWORD)v63,
               (_DWORD)v64,
               v65,
               v68,
               (_DWORD)v70,
               (_DWORD)v71,
               (_DWORD)v72,
               v52,
               (_DWORD)v78,
               v79,
               v80,
               v81,
               v82,
               v83,
               v84,
               v86,
               v87,
               v88,
               v89,
               v90,
               v91,
               v92,
               v93,
               DWORD2(v93),
               v94,
               (_DWORD)v95,
               v96,
               v97,
               (_DWORD)v98,
               v99,
               v100,
               v101,
               DWORD2(v101),
               v102,
               v103,
               v104[0],
               v104[2],
               v104[4],
               v104[6],
               v104[8],
               v104[10],
               v104[12],
               v104[14],
               v104[16],
               v104[18],
               v104[20],
               v104[22],
               v105) )
        {
          goto LABEL_71;
        }
        v78 = v73;
        v73 = v106;
        sub_84A60(v106);
        if ( !(unsigned __int8)sub_98E20(v78, v106) )
        {
          v17 = v106;
LABEL_81:
          sub_1B750((__int64)v17);
LABEL_71:
          sub_1B750(v10);
          v43 = v92;
          if ( v92 )
          {
            *(_QWORD *)&v93 = 0;
LABEL_60:
            qfree(v43);
          }
LABEL_61:
          *(_BYTE *)(v8 - 32) |= 2u;
          *(_QWORD *)(v8 - 24) = v68;
          continue;
        }
      }
      else
      {
        if ( under_debugger )
          goto LABEL_84;
        interr(30478);
      }
      sub_4E7A0(&v79, *v72, v72, v73, 1);
      v17 = v73;
      if ( (unsigned __int8)sub_58160(*(_QWORD *)(a1 + 80), v15) )
        goto LABEL_81;
      sub_1B750((__int64)v73);
      sub_1B750(v10);
      if ( v92 )
      {
        *(_QWORD *)&v93 = 0;
        qfree(v92);
      }
    }
    v20 = *(_DWORD **)(sub_87DA0(v62) + 216);
    if ( v20 )
    {
      v21 = v20[2];
      v22 = v20[31];
      if ( !v21 )
      {
        v23 = **(void (__fastcall ***)(_QWORD *))v20;
        if ( v23 == sub_15E30 )
        {
          v24 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v20 + 16LL);
          if ( v24 == sub_15D70 )
          {
            *(_QWORD *)v20 = &off_C71D8;
            v25 = *((_QWORD **)v20 + 16);
            if ( v25 )
            {
              if ( v25[2] )
              {
                v74 = v22;
                v78 = (_BYTE *)a3;
                v26 = v25[2];
                v27 = *((_QWORD **)v20 + 16);
                do
                {
                  sub_293E0(*(_QWORD **)(v26 + 24));
                  v28 = (void *)v26;
                  v26 = *(_QWORD *)(v26 + 16);
                  operator delete(v28, 0x30u);
                }
                while ( v26 );
                v22 = v74;
                a3 = (__int64)v78;
                v25 = v27;
              }
              v75 = v22;
              operator delete(v25, 0x30u);
              v22 = v75;
            }
            if ( *((_QWORD *)v20 + 19) )
            {
              v76 = v22;
              v78 = (_BYTE *)a3;
              v29 = *((_QWORD *)v20 + 19);
              do
              {
                v30 = (_QWORD *)v29;
                sub_29E10(*(_QWORD **)(v29 + 24));
                v31 = *(_QWORD *)(v29 + 32);
                v29 = *(_QWORD *)(v29 + 16);
                if ( v31 )
                {
                  v30[5] = 0;
                  qfree(v31);
                }
                operator delete(v30, 0x48u);
              }
              while ( v29 );
              v22 = v76;
              a3 = (__int64)v78;
            }
            v32 = *((_QWORD *)v20 + 12);
            if ( v32 )
            {
              *((_QWORD *)v20 + 13) = 0;
              v77 = v22;
              qfree(v32);
              v22 = v77;
            }
            LODWORD(v73) = v22;
            operator delete(v20, 0xC0u);
            v22 = (int)v73;
          }
          else
          {
            LODWORD(v73) = v20[31];
            v24(v20);
            v22 = (int)v73;
          }
        }
        else
        {
          LODWORD(v73) = v20[31];
          v23(v20);
          v22 = (int)v73;
        }
      }
      if ( v22 == 8 )
      {
        v36 = sub_5E020(
                v65,
                1,
                a1,
                v21,
                v18,
                v19,
                v62,
                (_DWORD)v63,
                (_DWORD)v64,
                v65,
                v68,
                (_DWORD)v70,
                (_DWORD)v71,
                (_DWORD)v72,
                (_DWORD)v73,
                (_DWORD)v78,
                v79);
        if ( v36 != -1 && v69 < 8 * v36 && 8 * *(_DWORD *)(*(_QWORD *)(a1 + 80) + 192LL) == v69 )
        {
          if ( (debug & 0x400000) != 0 )
          {
            v55 = sub_81860(v8 - 16, 0, 0);
            sub_88B80(
              (unsigned int)"Member @ %s would overlap the next, and has the right room for being turned into a pointer. "
                            "Turning into one.\n",
              v55,
              v56,
              v57,
              v58,
              v59);
          }
          if ( (unsigned __int8)sub_2F9C0(a3, v66, (__int64)(v72 + 3), v8 - 16, v66, a1) )
          {
            v37 = *(_QWORD *)(v8 - 80);
            v38 = *(_QWORD *)(v8 - 72);
            v39 = *(_QWORD *)(v8 - 88);
            if ( v37 )
            {
              v40 = v37 + 16;
              v41 = v37 - 1;
              v42 = v37 + 15;
              if ( v38 >= v37 + 16 )
              {
LABEL_53:
                *(_QWORD *)(v8 - 80) = v40;
                *(_BYTE *)(v39 + v42) = 0;
                if ( v41 )
                  memmove((void *)(*(_QWORD *)(v8 - 88) + 16LL), *(const void **)(v8 - 88), v41);
                goto LABEL_55;
              }
              v60 = v8 - 88;
            }
            else
            {
              if ( v38 > 0x10 )
              {
                *(_QWORD *)(v8 - 80) = 17;
                *(_BYTE *)(v39 + 16) = 0;
LABEL_55:
                *(__m128i *)*(_QWORD *)(v8 - 88) = _mm_load_si128((const __m128i *)&xmmword_AB190);
                continue;
              }
              v60 = v8 - 88;
              v41 = 0;
              v40 = 17;
              v42 = 16;
            }
            v67 = v40;
            v61 = qvector_reserve(v60, v39, v40, 1);
            v40 = v67;
            *(_QWORD *)(v8 - 88) = v61;
            v39 = v61;
            goto LABEL_53;
          }
        }
      }
    }
  }
  while ( v8 != v9 );
  v8 = *(_QWORD *)(a3 + 384);
  v9 = v8 + 104LL * *(_QWORD *)(a3 + 392);
LABEL_42:
  sub_4D8C0(v8, v9, (__int64 (__fastcall *)(__m128 *, __m128i *))sub_27FE0);
  if ( (unsigned int)(*(_DWORD *)(a3 + 408) - 1) <= 1 )
    sub_4CEB0(a1, v72, a3, v33, v34, v35);
  return v107 - __readfsqword(0x28u);
}
