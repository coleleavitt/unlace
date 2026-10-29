__int64 __fastcall sub_1A7E10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r14
  char v8; // r15
  int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // ecx
  signed int v12; // esi
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // ebx
  unsigned int v17; // eax
  __int64 v18; // rsi
  unsigned int v19; // edx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r12
  char *v24; // r15
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __int64 v32; // rdx
  int v33; // esi
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rsi
  int v44; // r12d
  __int64 v45; // r13
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // [rsp+0h] [rbp-1F0h]
  __int64 v58; // [rsp+20h] [rbp-1D0h]
  __int64 v59; // [rsp+28h] [rbp-1C8h]
  __int64 v60; // [rsp+30h] [rbp-1C0h]
  int v61; // [rsp+38h] [rbp-1B8h]
  signed int v62; // [rsp+3Ch] [rbp-1B4h]
  __int64 v64; // [rsp+58h] [rbp-198h]
  __int64 v65; // [rsp+58h] [rbp-198h]
  _QWORD *v66; // [rsp+58h] [rbp-198h]
  char v67[8]; // [rsp+60h] [rbp-190h] BYREF
  __int64 v68; // [rsp+68h] [rbp-188h]
  __int64 v69; // [rsp+70h] [rbp-180h] BYREF
  __int128 v70; // [rsp+78h] [rbp-178h] BYREF
  __int128 v71; // [rsp+88h] [rbp-168h]
  __int64 v72[16]; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v73; // [rsp+120h] [rbp-D0h] BYREF
  __int128 v74; // [rsp+128h] [rbp-C8h] BYREF
  __int128 v75; // [rsp+138h] [rbp-B8h]
  __int64 v76; // [rsp+148h] [rbp-A8h]
  __int128 v77; // [rsp+150h] [rbp-A0h]
  __int128 v78; // [rsp+160h] [rbp-90h]
  __int64 v79; // [rsp+190h] [rbp-60h]
  int v80; // [rsp+198h] [rbp-58h]
  __int64 v81; // [rsp+1A0h] [rbp-50h]
  char v82; // [rsp+1A8h] [rbp-48h]
  unsigned __int64 v83; // [rsp+1B8h] [rbp-38h]

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v83 = __readfsqword(0x28u);
  v8 = a3;
  v59 = *(_QWORD *)(v7 + 1504);
  sub_134FD0(v7, (__int64)a2, a3, a4, a5, a6);
  v9 = *(_DWORD *)(a1 + 112);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v10 + 8) == 3 || !*(_DWORD *)(v10 + 48) )
    {
      v11 = *(_DWORD *)(v7 + 72) & 0xFFFFFFF0;
      if ( v11 == 208 || v11 == 64 )
      {
        if ( (unsigned int)(*(_DWORD *)(v7 + 72) - 208) <= 0x2F && (unsigned int)sub_138740((_QWORD *)v7, 3) )
        {
          v9 = *(_DWORD *)(a1 + 112);
        }
        else
        {
          if ( *(_BYTE *)(v7 + 320) )
          {
            if ( !under_debugger )
              sub_37CFE0(51558);
            goto LABEL_111;
          }
          *(_DWORD *)(a1 + 112) = 1;
          v9 = 1;
        }
      }
    }
  }
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v62 = v12;
  if ( !(unsigned __int8)sub_1A7500(
                           a1,
                           (__int64)a2,
                           *(_QWORD *)(a1 + 104) + v12 * v9,
                           v12 * *(_DWORD *)(*(_QWORD *)(v7 + 1496) + 656LL),
                           v8) )
  {
    v17 = *(_DWORD *)(v7 + 72) & 0xFFFFFFF0;
    if ( v17 != 208 && v17 != 64 )
      return 0;
    v14 = *(_DWORD *)(a1 + 112);
LABEL_16:
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 1496) + 656LL) < v14 )
      return 0;
LABEL_17:
    sub_19C0E0((__int64)v72, v7, a2);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = *(_DWORD *)(a1 + 112);
    v64 = *(_QWORD *)(v18 + 104);
    v20 = *(_QWORD *)(a1 + 104) + (int)(v19 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL));
    if ( v20 < 0 )
      v20 = 0;
    v21 = sub_19C340(v72, v18 + 96, v19, v20, *(_DWORD *)(*(_QWORD *)(v7 + 1496) + 656LL) - v19, v62);
    v22 = *(_QWORD *)(a1 + 104);
    v23 = v21;
    v58 = (__int64)v21;
    if ( v22 < 0 )
      v22 = 0;
    v24 = (char *)sub_19C340(v72, *(_QWORD *)(a1 + 16) + 96LL, 0, v22, *(_DWORD *)(a1 + 112) + 1, v62);
    sub_19B3C0(v72, 0);
    if ( !v23[3] )
      goto LABEL_25;
    v25 = *(_QWORD *)(a1 + 104) + (int)v64 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    if ( v25 < 0 )
      v25 = 0;
    v26 = sub_19C410(v58, v7, v25);
    if ( v26 )
      v27 = v64 + v26;
    else
LABEL_25:
      v27 = sub_19C470(v58, v7);
    v28 = *(_DWORD *)(a1 + 112);
    if ( v27 >= v28 )
      v28 = v27;
    v61 = v28;
    sub_18B740(v7);
    if ( a2 )
    {
      v29 = *(_QWORD *)(a1 + 16);
      v30 = *(int *)(a1 + 112);
      v69 = 0;
      v70 = 0u;
      v31 = *(_QWORD *)(a1 + 104);
      v71 = 0;
      v32 = *(int *)(v29 + 24);
      if ( (int)v30 > (int)v32 )
        v30 = v32;
      if ( (int)v30 > 0 )
      {
        v65 = 0;
        v60 = 4 * v30;
        do
        {
          if ( v24 )
          {
            while ( v31 < *(_QWORD *)(v7 + 168) )
            {
              v34 = *(_QWORD *)(v7 + 1440);
              v73 = 0;
              v74 = 0;
              v35 = v31 + v34;
              if ( !__CFADD__(v35, v62 - 1LL) )
              {
                v57 = v35;
                v73 = qvector_reserve();
                v56 = (_QWORD *)(16 * v74 + v73);
                *v56 = v57;
                v56[1] = v62;
                *(_QWORD *)&v74 = v74 + 1;
              }
              if ( !(unsigned __int8)sub_312680(v24 + 16, &v73) )
              {
                if ( v73 )
                {
                  *(_QWORD *)&v74 = 0;
                  qfree();
                }
                break;
              }
              if ( v73 )
              {
                *(_QWORD *)&v74 = 0;
                qfree();
              }
              v65 += 4;
              v31 += v62;
              if ( v60 == v65 )
                goto LABEL_46;
            }
          }
          v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) + v65);
          v73 = 0;
          *(_QWORD *)&v74 = 0;
          sub_5F400((__int64 *)&v73, v33, v62);
          *((_QWORD *)&v74 + 1) = 0;
          v75 = 0;
          sub_5F800(&v69, (__int64 *)&v73);
          sub_3113F0((char *)&v70 + 8, (char *)&v74 + 8);
          if ( *((_QWORD *)&v74 + 1) )
          {
            *(_QWORD *)&v75 = 0;
            qfree();
          }
          v31 += v62;
          qfree();
          v65 += 4;
        }
        while ( v60 != v65 );
      }
LABEL_46:
      sub_1984A0((__int64)a2, &v69);
      sub_1984A0((__int64)(a2 + 7), &v69);
      if ( *((_QWORD *)&v70 + 1) )
      {
        *(_QWORD *)&v71 = 0;
        qfree();
      }
      qfree();
    }
    v36 = *(_QWORD *)(a1 + 72);
    if ( v36 )
    {
      v38 = *(_QWORD *)(a1 + 64) + 40 * v36 - 40;
      v39 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) * v61;
      if ( *(_QWORD *)(v38 + 24) >= v39 )
        goto LABEL_60;
      if ( (*(_BYTE *)(v38 + 32) & 2) != 0 )
      {
        *(_QWORD *)(v38 + 24) = v39;
        goto LABEL_60;
      }
    }
    else
    {
      v37 = *(_DWORD *)(v7 + 72) & 0xFFFFFFF0;
      if ( v37 != 64 && v37 != 208 )
        goto LABEL_52;
      v54 = *(_QWORD *)(a1 + 8);
      v55 = *(_QWORD *)(a1 + 104);
      if ( *(_BYTE *)(v7 + 320) )
      {
        if ( *(_DWORD *)(a1 + 112) != v61 )
        {
          v39 = v55 + *(_DWORD *)(*(_QWORD *)(v54 + 112) + 80LL) * v61;
          goto LABEL_101;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 112) = v61;
      }
      *(_BYTE *)(a1 + 116) = 0;
      v39 = v55 + *(_DWORD *)(*(_QWORD *)(v54 + 112) + 80LL) * v61;
    }
LABEL_101:
    *(_BYTE *)(sub_194CC0((unsigned __int64 *)(a1 + 64), v39, 0, 0) + 32) = 2;
LABEL_60:
    v40 = *(_DWORD *)(v7 + 72) & 0xFFFFFFF0;
    if ( v40 != 64
      && v40 != 208
      && !(unsigned __int8)sub_311780(
                             v58 + 16,
                             *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16)
                           + *(_QWORD *)(v7 + 1440)) )
    {
      goto LABEL_52;
    }
    if ( !*(_BYTE *)(a1 + 116) )
    {
LABEL_91:
      v15 = 1;
      goto LABEL_92;
    }
    v41 = *(_QWORD *)(a1 + 72);
    v42 = *(_QWORD *)(a1 + 64);
    v43 = v42 + 40 * v41 - 40;
    if ( (*(_BYTE *)(v43 + 32) & 2) != 0
      && *(_QWORD *)(v43 + 24) == *(_QWORD *)(a1 + 104)
                                + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) )
    {
LABEL_52:
      v15 = 0;
LABEL_92:
      sub_19B2D0((__int64)v72);
      return v15;
    }
    if ( *(__int64 *)(v42 + 24) >= 0 || *(_BYTE *)(v7 + 320) && (v41 == 1 || *(__int64 *)(v42 + 64) >= 0) )
    {
      v69 = 0;
      v70 = 0;
      sub_326800(v67, v59, (unsigned int)v62);
      print_tinfo();
      get_func();
      v68 = 0;
      get_func_frame();
      if ( *(_QWORD *)(a1 + 72) )
      {
        v44 = 0;
        v45 = -1;
        v46 = 0;
        v66 = nullptr;
        do
        {
          v66 = sub_199BE0(a1, (__int64)v66, v44, (__int64)v67, (__int64)&v69);
          v47 = *(_QWORD *)(a1 + 64) + 40 * v46;
          v48 = *(_QWORD *)(v47 + 24);
          if ( v45 < 0 )
            v45 = *(_QWORD *)(v47 + 24);
          if ( v48 < 0 )
            v48 = 0;
          v49 = sub_1CAED0(v7, v48);
          v50 = v68;
          v82 = 0;
          v79 = 1;
          v73 = 8 * v49;
          v74 = 0u;
          v76 = 0;
          v80 = -1;
          v81 = 0;
          v75 = 0;
          v77 = 0;
          v78 = 0;
          if ( (unsigned int)find_tinfo_udt_member() != -1 && (v73 >> 3 != v49 || v62 < (unsigned __int64)v74 >> 3) )
          {
            v50 = 10;
            set_tinfo_property4();
          }
          clear_tinfo_t();
          if ( v76 )
          {
            *(_QWORD *)&v77 = 0;
            qfree();
          }
          v51 = *((_QWORD *)&v74 + 1);
          if ( *((_QWORD *)&v74 + 1) )
          {
            *(_QWORD *)&v75 = 0;
            qfree();
          }
          v46 = ++v44;
        }
        while ( (unsigned __int64)v44 < *(_QWORD *)(a1 + 72) );
        if ( v45 >= 0 )
        {
          v50 = v45;
          v51 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
          sub_188CD0(v51, v45);
        }
        if ( v66 )
        {
          if ( *(_DWORD *)(v7 + 64) <= 1u )
            sub_190580(v51, v50);
          v52 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL);
          v53 = *(_DWORD *)(v52 + 24);
          BYTE1(v53) &= ~2u;
          LOBYTE(v53) = v53 | 0x80;
          *(_DWORD *)(v52 + 24) = v53;
        }
      }
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        qfree();
      }
      goto LABEL_91;
    }
    if ( !under_debugger )
      sub_37CFE0(51657);
LABEL_111:
    BUG();
  }
  v13 = (*(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) - *(_QWORD *)(a1 + 104))
      / *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v14 = *(_DWORD *)(a1 + 112);
  if ( v14 > (int)v13 )
  {
    if ( !under_debugger )
      sub_37CFE0(51450);
    goto LABEL_111;
  }
  if ( v14 >= (int)v13 || *(_BYTE *)(v7 + 320) )
    goto LABEL_16;
  *(_DWORD *)(a1 + 112) = v13;
  if ( *(_DWORD *)(*(_QWORD *)(v7 + 1496) + 656LL) >= (int)v13 )
    goto LABEL_17;
  return 0;
}

