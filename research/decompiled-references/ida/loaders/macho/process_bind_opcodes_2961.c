__int64 __fastcall sub_29A60(__int64 a1, unsigned int a2, unsigned __int8 **a3, unsigned __int8 *a4, int a5, int a6)
{
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rbx
  bool v8; // zf
  unsigned __int8 *v9; // r12
  unsigned __int8 *v10; // r15
  char v11; // r14
  int v12; // edx
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // r13
  char v15; // dl
  unsigned int v16; // ebx
  unsigned __int8 *v17; // rdx
  unsigned __int8 *v18; // rcx
  int v19; // r13d
  __int64 v20; // rax
  const char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  void (__fastcall *v24)(unsigned __int8 *, _QWORD, const char *, _QWORD, _QWORD, __int64); // r10
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  const char *v29; // r13
  char v31; // al
  char v32; // dl
  __int64 v33; // rax
  __int64 v34; // rdx
  char *v35; // rax
  int v36; // r13d
  const char *v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // [rsp-10h] [rbp-F0h]
  __int64 *v42; // [rsp-8h] [rbp-E8h]
  int v43; // [rsp-8h] [rbp-E8h]
  int v44; // [rsp+8h] [rbp-D8h]
  void (__fastcall *v45)(unsigned __int8 *, _QWORD, const char *, _QWORD, _QWORD, __int64); // [rsp+8h] [rbp-D8h]
  __int64 v46; // [rsp+10h] [rbp-D0h]
  const char *v47; // [rsp+18h] [rbp-C8h]
  __int64 v48; // [rsp+18h] [rbp-C8h]
  char v49; // [rsp+2Bh] [rbp-B5h]
  unsigned __int8 v50; // [rsp+2Ch] [rbp-B4h]
  int v51; // [rsp+30h] [rbp-B0h]
  unsigned __int8 *v53; // [rsp+40h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+48h] [rbp-98h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-90h] BYREF
  __int64 v56; // [rsp+58h] [rbp-88h] BYREF
  __int64 v57; // [rsp+60h] [rbp-80h] BYREF
  __int64 v58; // [rsp+68h] [rbp-78h] BYREF
  const char *v59; // [rsp+70h] [rbp-70h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-68h] BYREF
  __int64 v61; // [rsp+80h] [rbp-60h] BYREF
  int v62; // [rsp+88h] [rbp-58h]
  __int64 v63; // [rsp+90h] [rbp-50h] BYREF
  __int128 v64; // [rsp+98h] [rbp-48h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-38h]

  v6 = *a3;
  v7 = &a3[1][(_QWORD)*a3];
  v8 = *(_BYTE *)(a1 + 161) == 0;
  v65 = __readfsqword(0x28u);
  v9 = a4;
  v53 = v6;
  v51 = 4;
  if ( !v8 )
    v51 = 8;
  v57 = 0;
  v56 = 0;
  v58 = -1;
  v59 = 0;
  v60 = -1;
  v63 = 0;
  v64 = 0;
  if ( v6 >= v7 )
    return 1;
  v49 = 0;
  v10 = 0;
  v11 = 1;
  v50 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *v6++;
      v53 = v6;
      v13 = v12 & 0xFFFFFFF0;
      v14 = v12 & 0xF;
      if ( (v12 & 0xF0) == 0x70 )
      {
        v13 = 64;
        if ( !(unsigned __int8)unpack_xleb128(&v59, 64, 0, &v53, v7) )
          goto LABEL_80;
        v13 = (unsigned __int64)&v58;
        v58 = -1;
        v60 = -1;
        sub_293D0(a1, &v58, &v60, v14);
        goto LABEL_72;
      }
      if ( (v12 & 0xF0u) <= 0x70 )
      {
        if ( (v12 & 0xF0) == 0x30 )
        {
          LODWORD(a4) = 0;
          v26 = (char)(v12 | 0xF0);
          if ( !v14 )
            v26 = 0;
          v56 = v26;
          goto LABEL_11;
        }
        if ( (v12 & 0xF0u) > 0x30 )
        {
          if ( (v12 & 0xF0) == 0x50 )
          {
            v11 = v12 & 0xF;
            goto LABEL_11;
          }
          if ( (v12 & 0xF0) != 0x60 )
          {
            if ( (v12 & 0xF0) != 0x40 )
              goto LABEL_73;
            v17 = v6;
            v18 = v6;
            if ( v6 < v7 )
            {
              while ( 1 )
              {
                v13 = *v17;
                v18 = v17++;
                if ( !(_BYTE)v13 )
                  break;
                v53 = v17;
                if ( v7 == v17 )
                {
                  v18 = v7;
                  break;
                }
              }
            }
            a4 = v18 + 1;
            v10 = v6;
            v50 = v14;
            v53 = a4;
            v6 = a4;
            goto LABEL_11;
          }
          v13 = 64;
          v31 = unpack_xleb128(&v57, 64, 1, &v53, v7);
        }
        else
        {
          if ( (v12 & 0xF0) == 0x10 )
          {
            v56 = v14;
            goto LABEL_11;
          }
          if ( (v12 & 0xF0) != 0x20 )
          {
            if ( (v12 & 0xF0) != 0 )
              goto LABEL_73;
            if ( a2 != 2 )
            {
LABEL_21:
              v16 = 1;
              goto LABEL_75;
            }
            goto LABEL_11;
          }
          v13 = 64;
          v31 = unpack_xleb128(&v56, 64, 0, &v53, v7);
        }
        v32 = v31;
        v6 = v53;
        if ( !v32 )
          goto LABEL_80;
        goto LABEL_11;
      }
      if ( (v12 & 0xF0) == 0xB0 )
      {
        v54 = v51 * (unsigned int)(unsigned __int8)(v14 + 1);
        v13 = a2;
        (*(void (__fastcall **)(unsigned __int8 *, _QWORD, const char *, _QWORD, _QWORD, __int64, __int64, unsigned __int8 *))(*(_QWORD *)v9 + 8LL))(
          v9,
          a2,
          &v59[v58],
          (unsigned int)v11,
          v50 & 0xF,
          v56,
          v57,
          v10);
        a5 = v41;
        a6 = v43;
        v59 += v54;
LABEL_72:
        v6 = v53;
        goto LABEL_11;
      }
      if ( (v12 & 0xF0u) <= 0xB0 )
        break;
      if ( (v12 & 0xF0) == 0xC0 )
      {
        v13 = 64;
        if ( !(unsigned __int8)unpack_xleb128(&v55, 64, 0, &v53, v7) )
          goto LABEL_80;
        v13 = 64;
        if ( !(unsigned __int8)unpack_xleb128(&v54, 64, 0, &v53, v7) )
          goto LABEL_80;
        v27 = v55;
        if ( v60 < v55 )
          goto LABEL_80;
        a4 = (unsigned __int8 *)v54;
        if ( v60 < v54 )
          goto LABEL_80;
        v13 = (unsigned __int64)v59;
        if ( v10 )
        {
          v28 = v51;
          v48 = v58;
          if ( v58 != -1 && v55 )
          {
            v36 = 0;
            do
            {
              v37 = (const char *)(v48 + v13);
              if ( !*(_BYTE *)(a1 + 440) )
                sub_28840(a1);
              v38 = *(_QWORD *)(a1 + 224);
              v39 = 9LL * *(_QWORD *)(a1 + 232);
              v40 = v38 + 72LL * *(_QWORD *)(a1 + 232);
              if ( v38 == v40 )
              {
LABEL_102:
                sub_112F0((unsigned int)"Warning: reference to wrong address %llx\n", (_DWORD)v37, v39, v40, a5, a6);
                a4 = (unsigned __int8 *)v54;
                v13 = (unsigned __int64)v59;
                v27 = v55 - v36;
                goto LABEL_103;
              }
              while ( 1 )
              {
                v39 = *(_QWORD *)(v38 + 24);
                if ( (unsigned __int64)v37 >= v39 )
                {
                  v39 += *(_QWORD *)(v38 + 32);
                  if ( (unsigned __int64)v37 < v39 )
                    break;
                }
                v38 += 72;
                if ( v40 == v38 )
                  goto LABEL_102;
              }
              (*(void (__fastcall **)(unsigned __int8 *, _QWORD, const char *, _QWORD, _QWORD, __int64, __int64, unsigned __int8 *))(*(_QWORD *)v9 + 8LL))(
                v9,
                a2,
                v37,
                (unsigned int)v11,
                v50,
                v56,
                v57,
                v10);
              ++v36;
              a4 = (unsigned __int8 *)v54;
              v13 = (unsigned __int64)&v59[v54 + v51];
              v28 = v51;
              v59 = (const char *)v13;
            }
            while ( v36 < v55 );
            v27 = v55 - v36;
          }
        }
        else
        {
LABEL_103:
          v28 = v51;
        }
        v59 = (const char *)(v13 + v27 * (_QWORD)&a4[v28]);
        v6 = v53;
      }
      else
      {
        if ( (v12 & 0xF0) != 0xD0 )
        {
LABEL_73:
          v13 = (unsigned __int8)v12 & 0xF0;
          sub_112F0(
            (unsigned int)"Warning: bad rebase opcode found (0x%02X), file possibly corrupted!\n",
            (unsigned __int8)v13,
            v12,
            (_DWORD)a4,
            a5,
            a6);
          goto LABEL_74;
        }
        if ( !v14 )
        {
          v13 = 64;
          if ( !(unsigned __int8)unpack_xleb128(&v61, 64, 0, &v53, v7) )
            v55 = -1;
          if ( v63 )
          {
            *(_QWORD *)&v64 = 0;
            qfree(v63, (const char *)&dword_40);
            v63 = 0;
            *((_QWORD *)&v64 + 1) = 0;
          }
          v49 = 1;
          v6 = v53;
          goto LABEL_11;
        }
        if ( v14 == 1 )
        {
          v19 = 0;
          v46 = v58;
          while ( 1 )
          {
            v13 = (unsigned __int64)&v59[v46];
            v47 = &v59[v46];
            if ( !*(_BYTE *)(a1 + 161) )
              break;
            v20 = sub_28DA0(a1, v13);
            a6 = v20;
            if ( v20 != -1 )
            {
              v61 = v20;
              v62 = 1;
              if ( v20 < 0 && (debug & 0x10) != 0 )
              {
                v21 = "true";
                v13 = (unsigned __int64)v47;
                v44 = v20;
                if ( (v20 & 0x1000000000000LL) == 0 )
                  v21 = "false";
                sub_191F0(
                  (unsigned int)"%a: JOP diversity 0x%04X, address %s, key %s",
                  (_DWORD)v47,
                  WORD2(v20),
                  (_DWORD)v21,
                  (unsigned int)(&off_65220)[((unsigned __int64)v20 >> 49) & 3],
                  v20);
                v20 = v61;
                a6 = v44;
              }
              if ( (v20 & 0x4000000000000000LL) != 0 )
              {
                if ( (unsigned __int16)a6 < (unsigned __int64)v64 )
                {
                  v11 = (v20 < 0) + 100;
                  v13 = a2;
                  (*(void (__fastcall **)(unsigned __int8 *, _QWORD, const char *, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 8LL))(
                    v9,
                    a2,
                    v47,
                    ((unsigned __int64)v20 >> 63) + 100,
                    *(unsigned __int8 *)(v63 + 32LL * (unsigned __int16)a6 + 25),
                    *(_QWORD *)(v63 + 32LL * (unsigned __int16)a6 + 16),
                    *(_QWORD *)(v63 + 32LL * (unsigned __int16)a6 + 8),
                    *(_QWORD *)(v63 + 32LL * (unsigned __int16)a6));
                  goto LABEL_44;
                }
LABEL_45:
                v22 = ((unsigned __int64)v20 >> 51) & 0x7FF;
                v19 = v22;
                v59 += 8 * v22;
                goto LABEL_46;
              }
LABEL_50:
              v23 = ((unsigned __int64)v20 >> 63) + 102;
              v24 = *(void (__fastcall **)(unsigned __int8 *, _QWORD, const char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 8LL);
              v11 = (v20 < 0) + 102;
              if ( !*(_BYTE *)(a1 + 440) )
              {
                v45 = *(void (__fastcall **)(unsigned __int8 *, _QWORD, const char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 8LL);
                sub_28840(a1);
                v24 = v45;
              }
              v25 = *(_QWORD *)(a1 + 448);
              if ( v25 == -1 )
                LODWORD(v25) = 0;
              switch ( v62 )
              {
                case 1:
                case 2:
                case 5:
                case 6:
                case 7:
                case 9:
                case 10:
                case 12:
                  break;
                default:
                  sub_196C0((unsigned int)"Unhandled pointer chain format %d", v62, 0, v25, a5, a6);
                  if ( under_debugger )
                    BUG();
                  interr(20152);
                  break;
              }
              v42 = &v61;
              v13 = a2;
              v24(v9, a2, v47, (unsigned int)v23, 0, -3);
LABEL_44:
              v20 = v61;
              LODWORD(a4) = (_DWORD)v42;
              goto LABEL_45;
            }
LABEL_46:
            if ( !v19 )
              goto LABEL_72;
          }
          v13 = (unsigned __int64)&v59[v46];
          v20 = sub_28D10(a1, v47);
          if ( v20 == -1 )
            goto LABEL_46;
          v61 = v20;
          v62 = 1;
          goto LABEL_50;
        }
      }
LABEL_11:
      if ( v6 >= v7 )
        goto LABEL_21;
    }
    if ( (v12 & 0xF0) == 0x90 )
    {
      if ( v49 )
      {
        v33 = v64;
        v13 = v63;
        v34 = v64 + 1;
        if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
        {
          v63 = qvector_reserve(&v63, v63, v34, 32);
          v13 = v63;
          v33 = v64;
          v34 = v64 + 1;
        }
        *(_QWORD *)&v64 = v34;
        v35 = (char *)(v13 + 32 * v33);
        LODWORD(a4) = v50;
        *(_QWORD *)v35 = v10;
        v35[25] = v50;
        v35[24] = v11;
        *(__m128 *)(v35 + 8) = _mm_loadh_ps((const double *)&v56);
      }
      else
      {
        v13 = a2;
        (*(void (__fastcall **)(unsigned __int8 *, _QWORD, const char *, _QWORD, _QWORD, __int64, __int64, unsigned __int8 *))(*(_QWORD *)v9 + 8LL))(
          v9,
          a2,
          &v59[v58],
          (unsigned int)v11,
          v50 & 0xF,
          v56,
          v57,
          v10);
      }
      v59 += v51;
      v6 = v53;
      goto LABEL_11;
    }
    if ( (v12 & 0xF0) == 0xA0 )
    {
      v13 = 64;
      v29 = &v59[v58];
      if ( !(unsigned __int8)unpack_xleb128(&v54, 64, 0, &v53, v7) )
        break;
      v13 = a2;
      (*(void (__fastcall **)(unsigned __int8 *, _QWORD, const char *, _QWORD, _QWORD, __int64, __int64, unsigned __int8 *))(*(_QWORD *)v9 + 8LL))(
        v9,
        a2,
        v29,
        (unsigned int)v11,
        v50 & 0xF,
        v56,
        v57,
        v10);
      v59 += v54 + v51;
      v6 = v53;
      goto LABEL_11;
    }
    if ( (v12 & 0xF0) != 0x80 )
      goto LABEL_73;
    v13 = 64;
    v15 = unpack_xleb128(&v54, 64, 0, &v53, v7);
    v6 = v53;
    if ( !v15 )
      break;
    v59 += v54;
    if ( v53 >= v7 )
      goto LABEL_21;
  }
LABEL_80:
  if ( (debug & 0x10) != 0 )
  {
    v13 = *v53;
    sub_191F0(
      (unsigned int)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n",
      v13,
      v53[1],
      v53[2],
      v53[3],
      v53[4]);
  }
LABEL_74:
  v16 = 0;
LABEL_75:
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63, (const char *)v13);
  }
  return v16;
}
