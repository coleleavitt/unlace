__int64 __fastcall sub_D8310(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rax
  int v7; // esi
  int v8; // r14d
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rsi
  __int64 (*v12)(); // rax
  int v13; // eax
  unsigned int v14; // r14d
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rdx
  _DWORD *v19; // rcx
  __int64 v21; // rdi
  unsigned __int64 v22; // r14
  unsigned int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // r10
  char v26; // al
  char v27; // dl
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm1
  __int64 v35; // r15
  __int64 v36; // rsi
  _QWORD *v37; // rdi
  __int64 v38; // r8
  _DWORD *v39; // rax
  __int64 v40; // rcx
  __int64 i; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r14
  __int64 v45; // rdi
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r14
  int v52; // r8d
  _BYTE *v53; // rcx
  int v54; // edx
  __int64 v55; // r14
  int v56; // eax
  __int64 v57; // rsi
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // [rsp+0h] [rbp-D0h]
  unsigned int v62; // [rsp+0h] [rbp-D0h]
  __int64 v63; // [rsp+8h] [rbp-C8h]
  unsigned int v65; // [rsp+18h] [rbp-B8h]
  __int64 v66; // [rsp+18h] [rbp-B8h]
  int v67; // [rsp+18h] [rbp-B8h]
  __m128i v68; // [rsp+20h] [rbp-B0h] BYREF
  char v69; // [rsp+3Eh] [rbp-92h]
  char v70; // [rsp+3Fh] [rbp-91h]
  unsigned __int64 v71; // [rsp+40h] [rbp-90h] BYREF
  int v72; // [rsp+48h] [rbp-88h]
  __int64 v73; // [rsp+50h] [rbp-80h]
  __m128i v74; // [rsp+58h] [rbp-78h]
  __int64 v75; // [rsp+70h] [rbp-60h] BYREF
  __int64 v76; // [rsp+78h] [rbp-58h]
  __int64 v77; // [rsp+80h] [rbp-50h]
  __m128i v78; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v79; // [rsp+98h] [rbp-38h]

  v68.m128i_i64[0] = a2;
  v79 = __readfsqword(0x28u);
  v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL);
  v6 = *(_QWORD *)(a2 + 480);
  v7 = *(_DWORD *)(a1 + 132);
  v8 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 80LL);
  v75 = 0;
  v76 = 0;
  sub_5FB00(&v75, v7, v8);
  v77 = 0;
  v78 = 0;
  v9 = sub_124C90(v68.m128i_i32[0], (unsigned int)&v75, a3, 0, 0, 0, 257);
  if ( v77 )
  {
    v78.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( !v9 )
  {
    if ( *(_QWORD *)(a1 + 32) == v68.m128i_i64[0] )
    {
      if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        v21 = *(_QWORD *)(v68.m128i_i64[0] + 56);
        if ( v21 )
        {
          if ( sub_11BEC0(v21, 0) )
            return 5;
        }
      }
      v22 = *(_QWORD *)(v68.m128i_i64[0] + 32);
      if ( a4 < v22 || *(_QWORD *)(v68.m128i_i64[0] + 40) < a4 )
        return v9 != 0;
      goto LABEL_45;
    }
    if ( !under_debugger )
      sub_37DDE0(50078);
    goto LABEL_151;
  }
  if ( *(_DWORD *)v9 == 61 )
    return 2;
  sub_123560(&v71, v68.m128i_i64[0], v9, 256);
  if ( !(unsigned __int8)sub_606E0(&v71, *(_DWORD *)(a1 + 132), v8) )
  {
    sub_123560(&v75, v68.m128i_i64[0], v9, 257);
    sub_60550((__int64 *)&v71, &v75);
    v33 = v77;
    v77 = 0;
    v34 = _mm_loadu_si128(&v78);
    v78 = 0;
    v35 = v33;
    if ( v73 )
    {
      v68 = v34;
      v74.m128i_i64[0] = 0;
      qfree();
      v73 = v35;
      v74 = _mm_load_si128(&v68);
      if ( v77 )
      {
        v78.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      v73 = v33;
      v74 = v34;
    }
    qfree();
    if ( (unsigned __int8)sub_606E0(&v71, *(_DWORD *)(a1 + 132), v8) )
      goto LABEL_73;
    if ( !under_debugger )
      sub_37DDE0(50079);
LABEL_151:
    BUG();
  }
  v10 = *(_DWORD *)(v9 + 4);
  if ( (v10 & 0x80u) != 0 )
  {
LABEL_86:
    v14 = 3;
    goto LABEL_18;
  }
  if ( (v10 & 8) != 0 )
    goto LABEL_73;
  v11 = *(_QWORD *)(v9 + 24);
  v12 = *(__int64 (**)())(*(_QWORD *)v63 + 280LL);
  if ( v12 == sub_D6630 )
    goto LABEL_9;
  if ( ((unsigned int (__fastcall *)(__int64, __int64))v12)(v63, v11) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
LABEL_73:
    v14 = 2;
    goto LABEL_18;
  }
  v11 = *(_QWORD *)(v9 + 24);
LABEL_9:
  v75 = v11;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v68.m128i_i64[0] + 480) + 8LL) + 10LL) < 0 )
  {
    v69 = 1;
    v70 = 1;
    if ( sub_CBAB0() == 1 && *(_QWORD *)(v9 + 24) == v75 )
    {
      v36 = *(unsigned int *)(a1 + 132);
      v37 = (_QWORD *)(v68.m128i_i64[0] + 280);
      if ( sub_605B0((_QWORD *)(v68.m128i_i64[0] + 280), v36) )
      {
        v39 = *(_DWORD **)(v9 + 8);
        if ( v39 )
        {
          if ( (unsigned int)(*v39 - 42) <= 0xB )
          {
            v40 = *(_QWORD *)(v68.m128i_i64[0] + 376);
            for ( i = 0; (int)i < (int)v40; ++i )
            {
              v42 = *(unsigned int *)(*(_QWORD *)(v68.m128i_i64[0] + 368) + 4 * i);
              if ( (_DWORD)v42 != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL) )
              {
                v43 = *(_QWORD *)(v68.m128i_i64[0] + 64);
                if ( (unsigned int)v42 >= *(_DWORD *)(v43 + 64) )
                  sub_D6750(v37, v36, v43, v68.m128i_i64[0], v38);
                v36 = *(unsigned int *)(a1 + 132);
                v37 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 528) + 8 * v42) + 120LL);
                if ( sub_605B0(v37, v36) )
                  goto LABEL_86;
                v40 = *(_QWORD *)(v68.m128i_i64[0] + 376);
              }
            }
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 120) & 4) == 0 )
  {
LABEL_62:
    if ( v73 )
    {
      v74.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
    {
      v45 = *(_QWORD *)(v68.m128i_i64[0] + 56);
      if ( v45 != v9 )
      {
        if ( sub_11BEC0(v45, 0) )
          return 5;
      }
    }
    if ( !*(_QWORD *)(v9 + 8) )
      return v9 != 0;
    v32 = *(_QWORD *)(v68.m128i_i64[0] + 32);
    if ( a4 < v32 || *(_QWORD *)(v68.m128i_i64[0] + 40) < a4 )
      return v9 != 0;
    v44 = *(_QWORD *)(v9 + 24);
    if ( v44 >= v32 )
    {
      if ( !sub_11BEC0(v9, 1) )
      {
        v22 = *(_QWORD *)(v68.m128i_i64[0] + 32);
        goto LABEL_45;
      }
      v44 = *(_QWORD *)(v9 + 24);
    }
    v22 = v44 - 1;
LABEL_45:
    v23 = *(_DWORD *)(a1 + 128);
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
    v25 = *(_QWORD *)(v24 + 112);
    v71 = a4;
    if ( *(char *)(*(_QWORD *)(v24 + 8) + 10LL) < 0
      && (LOBYTE(v75) = 1, v61 = v25, v65 = v23, v70 = 1, v48 = sub_CBAB0(), v23 = v65, v25 = v61, v48 == 1) )
    {
      if ( v71 != -1 )
      {
        v49 = v65;
        v50 = v61;
        v62 = v65;
        v66 = v25;
        v26 = sub_329580(&v75, v50, v49, v71, v71 + 1, 1);
        v25 = v66;
        v23 = v62;
        if ( v26 )
          goto LABEL_48;
      }
    }
    else
    {
      v71 = -1;
    }
    v26 = sub_329580(&v75, v25, v23, v22, a4, 1);
LABEL_48:
    v27 = v26 & 1;
    if ( (v26 & 2) == 0 )
    {
      *(_QWORD *)(a1 + 112) = -1;
      if ( !v27 )
        return v9 != 0;
      goto LABEL_50;
    }
    v46 = v75;
    *(_QWORD *)(a1 + 112) = v75;
    if ( v27 )
    {
LABEL_50:
      if ( a3 )
      {
        v28 = *(_DWORD *)(a1 + 128);
        *(_QWORD *)(a1 + 104) = 0;
        v71 = (unsigned __int64)&off_4AF7E0;
        v72 = v28;
        if ( a3 != v9 )
        {
          while ( 1 )
          {
            if ( !v9 )
            {
              sub_123560(&v75, v68.m128i_i64[0], a3, 1);
              v31 = sub_605B0(&v75, *(_DWORD *)(a1 + 132));
              if ( v77 )
              {
                v78.m128i_i64[0] = 0;
                qfree();
              }
              qfree();
              if ( v31 )
                break;
            }
            v29 = sub_11BEC0(a3, 1);
            v30 = *(_QWORD *)(a1 + 104);
            if ( v29 )
            {
              if ( *(_BYTE *)(v29 + 64) == 8 )
              {
                v51 = *(_QWORD *)(v29 + 72);
                v52 = 0;
                if ( *(_QWORD *)(v51 + 32) )
                {
                  do
                  {
                    v67 = v52;
                    if ( v30 )
                      break;
                    if ( (unsigned int)for_all_arglocs() )
                    {
                      *(_QWORD *)(a1 + 104) = a3;
                      v30 = a3;
                    }
                    else
                    {
                      v30 = *(_QWORD *)(a1 + 104);
                    }
                    v52 = v67 + 1;
                  }
                  while ( (unsigned __int64)(v67 + 1) < *(_QWORD *)(v51 + 32) );
                }
              }
            }
            a3 = *(_QWORD *)(a3 + 16);
            if ( v9 == a3 )
            {
              if ( !v30 )
                return 1;
              return 5;
            }
            if ( v30 )
              return 5;
          }
        }
      }
      return 1;
    }
    if ( v26 != 2 )
      return v9 != 0;
    if ( *(_BYTE *)(a1 + 141) )
      return 5;
    v47 = *(_DWORD *)(a1 + 120);
    if ( (v47 & 4) != 0 )
      return 5;
    if ( v9 )
    {
      if ( *(_DWORD *)(v68.m128i_i64[0] + 72) != *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL)
        || *(_DWORD *)v9 != 4 && (*(_DWORD *)v9 != 67 || *(_DWORD *)(v9 + 36) != *(_DWORD *)(v9 + 68)) )
      {
        goto LABEL_99;
      }
      if ( *(_BYTE *)(v9 + 64) != 1 )
        goto LABEL_99;
      if ( *(_DWORD *)(a1 + 132) != *(_DWORD *)(v9 + 72) )
        goto LABEL_99;
      if ( *(_BYTE *)(v9 + 32) != 10 )
        goto LABEL_99;
      v53 = *(_BYTE **)(v9 + 40);
      if ( *v53 != 5 )
        goto LABEL_99;
      v54 = *(_DWORD *)(a1 + 124);
      if ( v54 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * (v54 - 1)) != -1 )
          goto LABEL_99;
      }
      if ( (v47 & 2) != 0 )
        goto LABEL_99;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      sub_11F580(&v71, v53);
      HIDWORD(v71) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v68.m128i_i64[0] + 64) + 1504LL) + 84LL);
      sub_11F9E0(v68.m128i_i64[0], &v75, &v71, 0, 4294901760LL);
      v55 = sub_124C90(v68.m128i_i32[0], (unsigned int)&v75, a3, v9, 0, 0, 257);
      if ( v55 )
      {
        v56 = *(_DWORD *)v55;
        if ( *(_DWORD *)v55 == 4 )
        {
LABEL_135:
          if ( (unsigned __int8)sub_11B8C0(v55 + 32, 0, 1) )
          {
            v57 = *(unsigned int *)(a1 + 128);
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v63 + 240LL))(
                   v63,
                   v57,
                   *(_QWORD *)(v55 + 24)) == 2 )
            {
              sub_1B1540(v55, v57);
              sub_1B1540(v9, v57);
              sub_1188E0(&v71);
              sub_8F680((__int64)&v75);
              return 1;
            }
          }
          goto LABEL_137;
        }
        if ( v56 == 67 )
        {
          if ( *(_DWORD *)(v55 + 36) == *(_DWORD *)(v55 + 68) )
            goto LABEL_135;
        }
        else if ( (unsigned int)(v56 - 8) <= 1 )
        {
          goto LABEL_135;
        }
      }
LABEL_137:
      sub_1188E0(&v71);
      sub_8F680((__int64)&v75);
      v46 = *(_QWORD *)(a1 + 112);
LABEL_99:
      sub_D7200(a1, v68.m128i_i64[0], v46, a4);
      return 5;
    }
    v15 = sub_D7200(a1, v68.m128i_i64[0], v46, a4);
    if ( !a3 )
      return 5;
    if ( v15 == 1 )
      return 5;
    if ( !(unsigned __int8)sub_D7EE0(a1, v68.m128i_i64[0], a3, 0, 0) )
      return 5;
    v16 = *(_QWORD *)(a1 + 104);
    if ( !v16 )
      return 5;
    if ( sub_1206A0(v68.m128i_i64[0], *(unsigned int *)(a1 + 132), v16, 0, 0, 1) )
      return 5;
    if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      return 5;
    v17 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)v17 != 4 || *(_BYTE *)(v17 + 32) != 1 || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v17 + 40) )
      return 5;
    if ( *(_BYTE *)(v17 + 64) == 1 )
    {
      v18 = *(_DWORD **)(a1 + 56);
      v19 = &v18[*(_QWORD *)(a1 + 64)];
      while ( v19 != v18 )
      {
        if ( *(_DWORD *)(v17 + 72) == *v18 )
          goto LABEL_146;
        ++v18;
      }
    }
    else
    {
LABEL_146:
      if ( !(unsigned __int8)sub_329F60(v17 + 64, &v75) )
        return 5;
      v58 = v75;
      v59 = sub_D2EA0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
      v60 = sub_D2F70(*(_QWORD *)(a1 + 32));
      if ( v60 > 0 && v58 >= v59 && v59 + v60 - 1 >= v58 )
        return 5;
    }
    *(_BYTE *)(a1 + 141) = 1;
    return 2;
  }
  v13 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 == 4 )
  {
LABEL_14:
    v14 = 5;
    if ( *(_BYTE *)(v9 + 64) != 1
      || *(_DWORD *)(a1 + 132) != *(_DWORD *)(v9 + 72)
      || *(_DWORD *)(v9 + 68) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL) + 112LL) + 84LL)
      || *(_BYTE *)(v9 + 32) != 10 )
    {
      goto LABEL_18;
    }
    goto LABEL_62;
  }
  if ( v13 == 67 )
  {
    if ( *(_DWORD *)(v9 + 36) == *(_DWORD *)(v9 + 68) )
      goto LABEL_14;
  }
  else if ( (unsigned int)(v13 - 12) <= 1 )
  {
    goto LABEL_14;
  }
  v14 = 5;
LABEL_18:
  if ( v73 )
  {
    v74.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v14;
}

