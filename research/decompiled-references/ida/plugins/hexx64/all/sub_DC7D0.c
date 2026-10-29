__int64 __fastcall sub_DC7D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, double a5)
{
  __int64 v7; // rax
  int v8; // esi
  int v9; // r14d
  __int64 v10; // r12
  int v11; // r8d
  int v12; // r9d
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  const void *v16; // rsi
  __int64 (*v17)(); // rax
  int v18; // eax
  unsigned int v19; // r14d
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rax
  _DWORD *v23; // rdx
  _DWORD *v24; // rcx
  _BYTE *v26; // rdi
  unsigned __int64 v27; // r14
  unsigned int v28; // r11d
  __int64 v29; // rax
  __int64 v30; // r10
  char v31; // al
  int v32; // r8d
  int v33; // r9d
  char v34; // dl
  int v35; // eax
  _BYTE *v36; // rax
  __int64 v37; // rdx
  bool v38; // r14
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __m128i v41; // xmm1
  __int64 v42; // r15
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __int64 i; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r14
  _BYTE *v49; // rdi
  __int64 v50; // rsi
  int v51; // eax
  __int64 v52; // rax
  unsigned int v53; // edx
  __int64 v54; // rsi
  __int64 v55; // r14
  unsigned __int8 *v56; // rcx
  __int64 v57; // rdx
  __int128 v58; // rdi
  __int64 v59; // r14
  int v60; // eax
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // [rsp+0h] [rbp-D0h]
  unsigned int v65; // [rsp+0h] [rbp-D0h]
  __int64 v66; // [rsp+8h] [rbp-C8h]
  unsigned int v68; // [rsp+18h] [rbp-B8h]
  __int64 v69; // [rsp+18h] [rbp-B8h]
  int v70; // [rsp+18h] [rbp-B8h]
  __m128i v71; // [rsp+20h] [rbp-B0h] BYREF
  char v72; // [rsp+3Eh] [rbp-92h]
  char v73; // [rsp+3Fh] [rbp-91h]
  __int64 v74; // [rsp+40h] [rbp-90h] BYREF
  int v75; // [rsp+48h] [rbp-88h]
  __int64 v76; // [rsp+50h] [rbp-80h]
  __m128i v77; // [rsp+58h] [rbp-78h]
  const void *v78; // [rsp+70h] [rbp-60h] BYREF
  __int64 v79; // [rsp+78h] [rbp-58h]
  __int64 v80; // [rsp+80h] [rbp-50h]
  __m128i v81; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v82; // [rsp+98h] [rbp-38h]

  v71.m128i_i64[0] = a2;
  v82 = __readfsqword(0x28u);
  v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL);
  v7 = *(_QWORD *)(a2 + 480);
  v8 = *(_DWORD *)(a1 + 132);
  v9 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 80LL);
  v78 = nullptr;
  v79 = 0;
  sub_63E80((__int64 *)&v78, v8, v9, a5);
  v80 = 0;
  v81 = 0;
  v10 = sub_129150(v71.m128i_i64[0], &v78, a3, 0, 0, 0, 0x101u);
  if ( v80 )
  {
    v81.m128i_i64[0] = 0;
    qfree(v80);
  }
  qfree((__int64)v78);
  if ( !v10 )
  {
    if ( *(_QWORD *)(a1 + 32) == v71.m128i_i64[0] )
    {
      if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        v26 = *(_BYTE **)(v71.m128i_i64[0] + 56);
        if ( v26 )
        {
          if ( sub_120380(v26, 0) )
            return 5;
        }
      }
      v27 = *(_QWORD *)(v71.m128i_i64[0] + 32);
      if ( a4 < v27 || *(_QWORD *)(v71.m128i_i64[0] + 40) < a4 )
        return v10 != 0;
      goto LABEL_45;
    }
    if ( !under_debugger )
      sub_383060(0xC39Eu, 0.0);
    goto LABEL_151;
  }
  if ( *(_DWORD *)v10 == 61 )
    return 2;
  sub_127A20((__int64)&v74, v71.m128i_i64[0], v10, 256, v11, v12);
  if ( !(unsigned __int8)sub_64A60(&v74, *(_DWORD *)(a1 + 132), v9) )
  {
    sub_127A20((__int64)&v78, v71.m128i_i64[0], v10, 257, v13, v14);
    sub_648D0(&v74, &v78, 0.0);
    v40 = v80;
    v80 = 0;
    v41 = _mm_loadu_si128(&v81);
    v81 = 0;
    v42 = v40;
    if ( v76 )
    {
      v71 = v41;
      v77.m128i_i64[0] = 0;
      qfree(v76);
      v76 = v42;
      v77 = _mm_load_si128(&v71);
      if ( v80 )
      {
        v81.m128i_i64[0] = 0;
        qfree(v80);
      }
    }
    else
    {
      v76 = v40;
      v77 = v41;
    }
    qfree((__int64)v78);
    if ( (unsigned __int8)sub_64A60(&v74, *(_DWORD *)(a1 + 132), v9) )
      goto LABEL_73;
    if ( !under_debugger )
      sub_383060(0xC39Fu, 0.0);
LABEL_151:
    BUG();
  }
  v15 = *(_DWORD *)(v10 + 4);
  if ( (v15 & 0x80u) != 0 )
  {
LABEL_86:
    v19 = 3;
    goto LABEL_18;
  }
  if ( (v15 & 8) != 0 )
    goto LABEL_73;
  v16 = *(const void **)(v10 + 24);
  v17 = *(__int64 (**)())(*(_QWORD *)v66 + 280LL);
  if ( v17 == sub_DAAF0 )
    goto LABEL_9;
  if ( ((unsigned int (__fastcall *)(__int64, const void *))v17)(v66, v16) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
LABEL_73:
    v19 = 2;
    goto LABEL_18;
  }
  v16 = *(const void **)(v10 + 24);
LABEL_9:
  v78 = v16;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v71.m128i_i64[0] + 480) + 8LL) + 10LL) < 0 )
  {
    v72 = 1;
    v73 = 1;
    if ( sub_CFF70() == 1
      && *(const void **)(v10 + 24) == v78
      && sub_64930((_QWORD *)(v71.m128i_i64[0] + 280), *(_DWORD *)(a1 + 132)) )
    {
      v43 = *(_DWORD **)(v10 + 8);
      if ( v43 )
      {
        if ( (unsigned int)(*v43 - 42) <= 0xB )
        {
          v44 = *(_QWORD *)(v71.m128i_i64[0] + 376);
          for ( i = 0; (int)i < (int)v44; ++i )
          {
            v46 = *(unsigned int *)(*(_QWORD *)(v71.m128i_i64[0] + 368) + 4 * i);
            if ( (_DWORD)v46 != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL) )
            {
              v47 = *(_QWORD *)(v71.m128i_i64[0] + 64);
              if ( (unsigned int)v46 >= *(_DWORD *)(v47 + 64) )
                sub_DAC10(0.0);
              if ( sub_64930((_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 528) + 8 * v46) + 120LL), *(_DWORD *)(a1 + 132)) )
                goto LABEL_86;
              v44 = *(_QWORD *)(v71.m128i_i64[0] + 376);
            }
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 120) & 4) == 0 )
  {
LABEL_62:
    if ( v76 )
    {
      v77.m128i_i64[0] = 0;
      qfree(v76);
    }
    qfree(v74);
    if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
    {
      v49 = *(_BYTE **)(v71.m128i_i64[0] + 56);
      if ( v49 != (_BYTE *)v10 )
      {
        if ( sub_120380(v49, 0) )
          return 5;
      }
    }
    if ( !*(_QWORD *)(v10 + 8) )
      return v10 != 0;
    v39 = *(_QWORD *)(v71.m128i_i64[0] + 32);
    if ( a4 < v39 || *(_QWORD *)(v71.m128i_i64[0] + 40) < a4 )
      return v10 != 0;
    v48 = *(_QWORD *)(v10 + 24);
    if ( v48 >= v39 )
    {
      if ( !sub_120380((_BYTE *)v10, 1) )
      {
        v27 = *(_QWORD *)(v71.m128i_i64[0] + 32);
        goto LABEL_45;
      }
      v48 = *(_QWORD *)(v10 + 24);
    }
    v27 = v48 - 1;
LABEL_45:
    v28 = *(_DWORD *)(a1 + 128);
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
    v30 = *(_QWORD *)(v29 + 112);
    v74 = a4;
    if ( *(char *)(*(_QWORD *)(v29 + 8) + 10LL) < 0
      && (LOBYTE(v78) = 1, v64 = v30, v68 = v28, v73 = 1, v52 = sub_CFF70(), v28 = v68, v30 = v64, v52 == 1) )
    {
      if ( v74 != -1 )
      {
        v53 = v68;
        v54 = v64;
        v65 = v68;
        v69 = v30;
        v31 = sub_32E840(&v78, v54, v53, v74, v74 + 1, 1);
        v30 = v69;
        v28 = v65;
        if ( v31 )
          goto LABEL_48;
      }
    }
    else
    {
      v74 = -1;
    }
    v31 = sub_32E840(&v78, v30, v28, v27, a4, 1);
LABEL_48:
    v34 = v31 & 1;
    if ( (v31 & 2) == 0 )
    {
      *(_QWORD *)(a1 + 112) = -1;
      if ( !v34 )
        return v10 != 0;
      goto LABEL_50;
    }
    v50 = (__int64)v78;
    *(_QWORD *)(a1 + 112) = v78;
    if ( v34 )
    {
LABEL_50:
      if ( a3 )
      {
        v35 = *(_DWORD *)(a1 + 128);
        *(_QWORD *)(a1 + 104) = 0;
        v74 = (__int64)&off_4DCD60;
        v75 = v35;
        if ( a3 != v10 )
        {
          while ( 1 )
          {
            if ( !v10 )
            {
              sub_127A20((__int64)&v78, v71.m128i_i64[0], a3, 1, v32, v33);
              v38 = sub_64930(&v78, *(_DWORD *)(a1 + 132));
              if ( v80 )
              {
                v81.m128i_i64[0] = 0;
                qfree(v80);
              }
              qfree((__int64)v78);
              if ( v38 )
                break;
            }
            v36 = sub_120380((_BYTE *)a3, 1);
            v37 = *(_QWORD *)(a1 + 104);
            if ( v36 )
            {
              if ( v36[64] == 8 )
              {
                v55 = *((_QWORD *)v36 + 9);
                v32 = 0;
                if ( *(_QWORD *)(v55 + 32) )
                {
                  do
                  {
                    v70 = v32;
                    if ( v37 )
                      break;
                    if ( (unsigned int)for_all_arglocs() )
                    {
                      *(_QWORD *)(a1 + 104) = a3;
                      v37 = a3;
                    }
                    else
                    {
                      v37 = *(_QWORD *)(a1 + 104);
                    }
                    v32 = v70 + 1;
                  }
                  while ( (unsigned __int64)(v70 + 1) < *(_QWORD *)(v55 + 32) );
                }
              }
            }
            a3 = *(_QWORD *)(a3 + 16);
            if ( v10 == a3 )
            {
              if ( !v37 )
                return 1;
              return 5;
            }
            if ( v37 )
              return 5;
          }
        }
      }
      return 1;
    }
    if ( v31 != 2 )
      return v10 != 0;
    if ( *(_BYTE *)(a1 + 141) )
      return 5;
    v51 = *(_DWORD *)(a1 + 120);
    if ( (v51 & 4) != 0 )
      return 5;
    if ( v10 )
    {
      if ( *(_DWORD *)(v71.m128i_i64[0] + 72) != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL)
        || *(_DWORD *)v10 != 4 && (*(_DWORD *)v10 != 67 || *(_DWORD *)(v10 + 36) != *(_DWORD *)(v10 + 68)) )
      {
        goto LABEL_99;
      }
      if ( *(_BYTE *)(v10 + 64) != 1 )
        goto LABEL_99;
      if ( *(_DWORD *)(a1 + 132) != *(_DWORD *)(v10 + 72) )
        goto LABEL_99;
      if ( *(_BYTE *)(v10 + 32) != 10 )
        goto LABEL_99;
      v56 = *(unsigned __int8 **)(v10 + 40);
      if ( *v56 != 5 )
        goto LABEL_99;
      v57 = *(unsigned int *)(a1 + 124);
      if ( (_DWORD)v57 )
      {
        v57 = (int)v57 - 1;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v57) != -1 )
          goto LABEL_99;
      }
      if ( (v51 & 2) != 0 )
        goto LABEL_99;
      v78 = nullptr;
      v79 = 0;
      v80 = 0;
      v81 = 0;
      sub_123A40((__int64)&v74, v56, v57, (__int64)v56);
      *(_QWORD *)&v58 = v71.m128i_i64[0];
      *((_QWORD *)&v58 + 1) = &v78;
      HIDWORD(v74) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v71.m128i_i64[0] + 64) + 1504LL) + 84LL);
      sub_123EA0(v58, (__int64)&v74, 0, 0xFFFF0000);
      v59 = sub_129150(v71.m128i_i64[0], &v78, a3, v10, 0, 0, 0x101u);
      if ( v59 )
      {
        v60 = *(_DWORD *)v59;
        if ( *(_DWORD *)v59 == 4 )
        {
LABEL_135:
          if ( (unsigned __int8)sub_11FD80((char *)(v59 + 32), nullptr, 1u)
            && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v66 + 240LL))(
                 v66,
                 *(unsigned int *)(a1 + 128),
                 *(_QWORD *)(v59 + 24)) == 2 )
          {
            sub_1B5B40((int *)v59);
            sub_1B5B40((int *)v10);
            sub_11CDA0((__int64)&v74);
            sub_93B40((__int64 *)&v78);
            return 1;
          }
          goto LABEL_137;
        }
        if ( v60 == 67 )
        {
          if ( *(_DWORD *)(v59 + 36) == *(_DWORD *)(v59 + 68) )
            goto LABEL_135;
        }
        else if ( (unsigned int)(v60 - 8) <= 1 )
        {
          goto LABEL_135;
        }
      }
LABEL_137:
      sub_11CDA0((__int64)&v74);
      sub_93B40((__int64 *)&v78);
      v50 = *(_QWORD *)(a1 + 112);
LABEL_99:
      sub_DB6C0(a1, v71.m128i_i64[0], v50, a4);
      return 5;
    }
    v20 = sub_DB6C0(a1, v71.m128i_i64[0], v50, a4);
    if ( !a3 )
      return 5;
    if ( v20 == 1 )
      return 5;
    if ( !(unsigned __int8)sub_DC3A0(a1, v71.m128i_i64[0], a3, 0, 0, 0.0) )
      return 5;
    v21 = *(_QWORD *)(a1 + 104);
    if ( !v21 )
      return 5;
    if ( sub_124B60(v71.m128i_i64[0], *(_DWORD *)(a1 + 132), v21, 0, 0, 1u) )
      return 5;
    if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      return 5;
    v22 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)v22 != 4 || *(_BYTE *)(v22 + 32) != 1 || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v22 + 40) )
      return 5;
    if ( *(_BYTE *)(v22 + 64) == 1 )
    {
      v23 = *(_DWORD **)(a1 + 56);
      v24 = &v23[*(_QWORD *)(a1 + 64)];
      while ( v24 != v23 )
      {
        if ( *(_DWORD *)(v22 + 72) == *v23 )
          goto LABEL_146;
        ++v23;
      }
    }
    else
    {
LABEL_146:
      if ( !(unsigned __int8)sub_32F330(v22 + 64, &v78) )
        return 5;
      v61 = (unsigned __int64)v78;
      v62 = sub_D7360(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
      v63 = sub_D7430(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL));
      if ( v63 > 0 && v61 >= v62 && v62 + v63 - 1 >= v61 )
        return 5;
    }
    *(_BYTE *)(a1 + 141) = 1;
    return 2;
  }
  v18 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 == 4 )
  {
LABEL_14:
    v19 = 5;
    if ( *(_BYTE *)(v10 + 64) != 1
      || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v10 + 72)
      || *(_DWORD *)(v10 + 68) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL) + 84LL)
      || *(_BYTE *)(v10 + 32) != 10 )
    {
      goto LABEL_18;
    }
    goto LABEL_62;
  }
  if ( v18 == 67 )
  {
    if ( *(_DWORD *)(v10 + 36) == *(_DWORD *)(v10 + 68) )
      goto LABEL_14;
  }
  else if ( (unsigned int)(v18 - 12) <= 1 )
  {
    goto LABEL_14;
  }
  v19 = 5;
LABEL_18:
  if ( v76 )
  {
    v77.m128i_i64[0] = 0;
    qfree(v76);
  }
  qfree(v74);
  return v19;
}

