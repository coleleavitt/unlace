__int64 __fastcall sub_29A60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // rbx
  bool v6; // zf
  __m128 v8; // xmm0
  unsigned __int8 *v9; // r15
  char v10; // r14
  char v11; // dl
  unsigned __int8 v12; // si
  unsigned __int8 v13; // r13
  char v14; // dl
  unsigned int v15; // ebx
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rcx
  unsigned __int8 v18; // si
  int v19; // r13d
  __int64 v20; // rax
  unsigned __int16 v21; // r9
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  void (__fastcall *v25)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD, __int64); // r10
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  char v33; // dl
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // r13d
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int16 v43; // [rsp+8h] [rbp-D8h]
  void (__fastcall *v44)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD, __int64); // [rsp+8h] [rbp-D8h]
  __int64 v45; // [rsp+10h] [rbp-D0h]
  unsigned __int64 v46; // [rsp+18h] [rbp-C8h]
  __int64 v47; // [rsp+18h] [rbp-C8h]
  char v48; // [rsp+2Bh] [rbp-B5h]
  unsigned __int8 v49; // [rsp+2Ch] [rbp-B4h]
  int v50; // [rsp+30h] [rbp-B0h]
  unsigned __int8 *v52; // [rsp+40h] [rbp-A0h]
  unsigned __int64 v53; // [rsp+48h] [rbp-98h]
  unsigned __int64 v54; // [rsp+50h] [rbp-90h]
  __int64 v55; // [rsp+58h] [rbp-88h] BYREF
  __int64 v56; // [rsp+60h] [rbp-80h]
  __int64 v57; // [rsp+68h] [rbp-78h] BYREF
  unsigned __int64 v58; // [rsp+70h] [rbp-70h]
  unsigned __int64 v59; // [rsp+78h] [rbp-68h] BYREF
  __int64 v60; // [rsp+80h] [rbp-60h]
  int v61; // [rsp+88h] [rbp-58h]
  __int64 v62; // [rsp+90h] [rbp-50h]
  __int128 v63; // [rsp+98h] [rbp-48h]
  unsigned __int64 v64; // [rsp+A8h] [rbp-38h]

  v4 = *(unsigned __int8 **)a3;
  v5 = (unsigned __int8 *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
  v6 = *(_BYTE *)(a1 + 161) == 0;
  v64 = __readfsqword(0x28u);
  v50 = 4;
  if ( !v6 )
    v50 = 8;
  v8.m128_u64[0] = 0;
  v56 = 0;
  v55 = 0;
  v57 = -1;
  v58 = 0;
  v59 = -1;
  v62 = 0;
  v63 = 0;
  if ( v4 >= v5 )
    return 1;
  v48 = 0;
  v9 = nullptr;
  v10 = 1;
  v49 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *v4++;
      v52 = v4;
      v12 = v11 & 0xF0;
      v13 = v11 & 0xF;
      if ( (v11 & 0xF0) == 0x70 )
      {
        if ( !(unsigned __int8)unpack_xleb128() )
          goto LABEL_77;
        v57 = -1;
        v59 = -1;
        sub_293D0(a1, &v57, &v59, v13);
        goto LABEL_70;
      }
      if ( (v11 & 0xF0u) > 0x70 )
        break;
      if ( v12 == 48 )
      {
        v26 = (char)(v11 | 0xF0);
        if ( !v13 )
          v26 = 0;
        v55 = v26;
        goto LABEL_11;
      }
      if ( v12 > 0x30u )
      {
        if ( v12 == 80 )
        {
          v10 = v11 & 0xF;
          goto LABEL_11;
        }
        if ( v12 != 96 )
        {
          if ( v12 != 64 )
            goto LABEL_71;
          v16 = v4;
          v17 = v4;
          if ( v4 < v5 )
          {
            while ( 1 )
            {
              v18 = *v16;
              v17 = v16++;
              if ( !v18 )
                break;
              if ( v5 == v16 )
              {
                v17 = v5;
                break;
              }
            }
          }
          v9 = v4;
          v49 = v13;
          v4 = v17 + 1;
          goto LABEL_11;
        }
LABEL_76:
        v33 = unpack_xleb128();
        v4 = v52;
        if ( !v33 )
          goto LABEL_77;
        goto LABEL_11;
      }
      if ( v12 == 16 )
      {
        v55 = v13;
        goto LABEL_11;
      }
      if ( v12 == 32 )
        goto LABEL_76;
      if ( v12 )
        goto LABEL_71;
      if ( a2 != 2 )
      {
LABEL_21:
        v15 = 1;
        goto LABEL_73;
      }
LABEL_11:
      if ( v4 >= v5 )
        goto LABEL_21;
    }
    if ( v12 == 0xB0 )
    {
      v53 = v50 * (unsigned int)(unsigned __int8)(v13 + 1);
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD, __int64, __int64, unsigned __int8 *))(*(_QWORD *)a4 + 8LL))(
        a4,
        a2,
        v57 + v58,
        (unsigned int)v10,
        v49 & 0xF,
        v55,
        v56,
        v9);
      v58 += v53;
LABEL_70:
      v4 = v52;
      goto LABEL_11;
    }
    if ( v12 > 0xB0u )
    {
      if ( v12 == 0xC0 )
      {
        if ( !(unsigned __int8)unpack_xleb128() )
          break;
        if ( !(unsigned __int8)unpack_xleb128() )
          break;
        v27 = v54;
        if ( v59 < v54 )
          break;
        v28 = v53;
        if ( v59 < v53 )
          break;
        v29 = v58;
        if ( v9 )
        {
          v30 = v50;
          v47 = v57;
          if ( v57 != -1 && v54 )
          {
            v38 = 0;
            do
            {
              v39 = v47 + v29;
              if ( !*(_BYTE *)(a1 + 440) )
                sub_28840(a1);
              v40 = *(_QWORD *)(a1 + 224);
              v41 = v40 + 72LL * *(_QWORD *)(a1 + 232);
              if ( v40 == v41 )
              {
LABEL_99:
                sub_112F0((__int64)"Warning: reference to wrong address %llx\n", v39);
                v28 = v53;
                v29 = v58;
                v27 = v54 - v38;
                goto LABEL_100;
              }
              while ( 1 )
              {
                v42 = *(_QWORD *)(v40 + 24);
                if ( v39 >= v42 && v39 < *(_QWORD *)(v40 + 32) + v42 )
                  break;
                v40 += 72;
                if ( v41 == v40 )
                  goto LABEL_99;
              }
              (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD, __int64, __int64, unsigned __int8 *))(*(_QWORD *)a4 + 8LL))(
                a4,
                a2,
                v39,
                (unsigned int)v10,
                v49,
                v55,
                v56,
                v9);
              ++v38;
              v28 = v53;
              v29 = v50 + v53 + v58;
              v30 = v50;
              v58 = v29;
            }
            while ( v38 < v54 );
            v27 = v54 - v38;
          }
        }
        else
        {
LABEL_100:
          v30 = v50;
        }
        v58 = v29 + v27 * (v28 + v30);
        v4 = v52;
      }
      else
      {
        if ( v12 != 0xD0 )
        {
LABEL_71:
          sub_112F0((__int64)"Warning: bad rebase opcode found (0x%02X), file possibly corrupted!\n", v12);
          goto LABEL_72;
        }
        if ( !v13 )
        {
          if ( !(unsigned __int8)unpack_xleb128() )
            v54 = -1;
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree();
            v62 = 0;
            *((_QWORD *)&v63 + 1) = 0;
          }
          v48 = 1;
          v4 = v52;
          goto LABEL_11;
        }
        if ( v13 == 1 )
        {
          v19 = 0;
          v45 = v57;
          while ( 1 )
          {
            v46 = v58 + v45;
            if ( !*(_BYTE *)(a1 + 161) )
              break;
            v20 = sub_28DA0(a1, v58 + v45);
            v21 = v20;
            if ( v20 != -1 )
            {
              v60 = v20;
              v61 = 1;
              if ( v20 < 0 && (debug & 0x10) != 0 )
              {
                v22 = "true";
                v43 = v20;
                if ( (v20 & 0x1000000000000LL) == 0 )
                  v22 = "false";
                sub_191F0(
                  (__int64)"%a: JOP diversity 0x%04X, address %s, key %s",
                  *(double *)v8.m128_u64,
                  v46,
                  (const char *)WORD2(v20),
                  v22);
                v20 = v60;
                v21 = v43;
              }
              if ( (v20 & 0x4000000000000000LL) != 0 )
              {
                if ( v21 < (unsigned __int64)v63 )
                {
                  v10 = (v20 < 0) + 100;
                  (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a4 + 8LL))(
                    a4,
                    a2,
                    v46,
                    ((unsigned __int64)v20 >> 63) + 100,
                    *(unsigned __int8 *)(v62 + 32LL * v21 + 25),
                    *(_QWORD *)(v62 + 32LL * v21 + 16),
                    *(_QWORD *)(v62 + 32LL * v21 + 8),
                    *(_QWORD *)(v62 + 32LL * v21));
                  goto LABEL_44;
                }
LABEL_45:
                v23 = ((unsigned __int64)v20 >> 51) & 0x7FF;
                v19 = v23;
                v58 += 8 * v23;
                goto LABEL_46;
              }
LABEL_50:
              v24 = ((unsigned __int64)v20 >> 63) + 102;
              v25 = *(void (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 8LL);
              v10 = (v20 < 0) + 102;
              if ( !*(_BYTE *)(a1 + 440) )
              {
                v44 = *(void (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 8LL);
                sub_28840(a1);
                v25 = v44;
              }
              switch ( v61 )
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
                  sub_196C0((__int64)"Unhandled pointer chain format %d");
                  if ( under_debugger )
                    BUG();
                  interr();
                  break;
              }
              v25(a4, a2, v46, (unsigned int)v24, 0, -3);
LABEL_44:
              v20 = v60;
              goto LABEL_45;
            }
LABEL_46:
            if ( !v19 )
              goto LABEL_70;
          }
          v20 = sub_28D10(a1, v46);
          if ( v20 == -1 )
            goto LABEL_46;
          v60 = v20;
          v61 = 1;
          goto LABEL_50;
        }
      }
      goto LABEL_11;
    }
    if ( v12 == 0x90 )
    {
      if ( v48 )
      {
        v34 = v63;
        v35 = v62;
        v36 = v63 + 1;
        if ( *((_QWORD *)&v63 + 1) < (unsigned __int64)(v63 + 1) )
        {
          v62 = qvector_reserve();
          v35 = v62;
          v34 = v63;
          v36 = v63 + 1;
        }
        *(_QWORD *)&v63 = v36;
        v37 = v35 + 32 * v34;
        *(_QWORD *)v37 = v9;
        *(_BYTE *)(v37 + 25) = v49;
        *(_BYTE *)(v37 + 24) = v10;
        v8 = _mm_loadh_ps((const double *)&v55);
        *(__m128 *)(v37 + 8) = v8;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD, __int64, __int64, unsigned __int8 *))(*(_QWORD *)a4 + 8LL))(
          a4,
          a2,
          v57 + v58,
          (unsigned int)v10,
          v49 & 0xF,
          v55,
          v56,
          v9);
      }
      v58 += v50;
      v4 = v52;
      goto LABEL_11;
    }
    if ( v12 == 0xA0 )
    {
      v31 = v57 + v58;
      if ( !(unsigned __int8)unpack_xleb128() )
        break;
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD, _QWORD, __int64, __int64, unsigned __int8 *))(*(_QWORD *)a4 + 8LL))(
        a4,
        a2,
        v31,
        (unsigned int)v10,
        v49 & 0xF,
        v55,
        v56,
        v9);
      v58 += v53 + v50;
      v4 = v52;
      goto LABEL_11;
    }
    if ( v12 != 0x80 )
      goto LABEL_71;
    v14 = unpack_xleb128();
    v4 = v52;
    if ( !v14 )
      break;
    v58 += v53;
    if ( v52 >= v5 )
      goto LABEL_21;
  }
LABEL_77:
  if ( (debug & 0x10) != 0 )
    sub_191F0(
      (__int64)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n",
      *v52,
      v52[1],
      v52[2],
      v52[3],
      v52[4]);
LABEL_72:
  v15 = 0;
LABEL_73:
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree();
  }
  return v15;
}

