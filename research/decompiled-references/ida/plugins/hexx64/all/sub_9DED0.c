__int64 __fastcall sub_9DED0(__int128 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  int *v5; // rax
  __int64 v6; // r13
  unsigned int v7; // r15d
  int v9; // eax
  _DWORD *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  _DWORD *v17; // rcx
  _DWORD *v18; // r8
  char v19; // al
  __int64 v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r13
  int v38; // eax
  int v39; // r15d
  __int64 v40; // rax
  _DWORD *v41; // [rsp-20h] [rbp-140h]
  __int64 v42; // [rsp-18h] [rbp-138h]
  _DWORD *v43; // [rsp+8h] [rbp-118h]
  unsigned __int8 *v44; // [rsp+10h] [rbp-110h]
  unsigned __int8 *v45; // [rsp+18h] [rbp-108h]
  char v46; // [rsp+28h] [rbp-F8h]
  _DWORD *v47; // [rsp+30h] [rbp-F0h]
  __int64 v48; // [rsp+38h] [rbp-E8h]
  __int64 v49; // [rsp+38h] [rbp-E8h]
  __int64 v50; // [rsp+40h] [rbp-E0h]
  __int64 v51; // [rsp+58h] [rbp-C8h] BYREF
  _DWORD *v52; // [rsp+60h] [rbp-C0h] BYREF
  unsigned __int8 *v53; // [rsp+68h] [rbp-B8h] BYREF
  _QWORD v54[2]; // [rsp+70h] [rbp-B0h] BYREF
  unsigned __int8 v55[16]; // [rsp+80h] [rbp-A0h] BYREF
  __int64 v56[4]; // [rsp+90h] [rbp-90h] BYREF
  _QWORD v57[2]; // [rsp+B0h] [rbp-70h] BYREF
  _QWORD v58[2]; // [rsp+C0h] [rbp-60h] BYREF
  _QWORD v59[10]; // [rsp+D0h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v59[3] = __readfsqword(0x28u);
  v3 = *((_QWORD *)&a1 + 1);
  v48 = v2;
  v4 = sub_11C8E0(*((__int64 *)&a1 + 1), &v51, 14);
  if ( v4 )
  {
    *((_QWORD *)&a1 + 1) = v51;
    v52 = (_DWORD *)v3;
    v5 = (int *)sub_129440(a1, (__int64)&v52, 0);
    v6 = (__int64)v5;
    if ( !v5 )
      return 0;
    v9 = *v5;
    if ( v9 != 13 )
    {
      v46 = 0;
      v50 = 0;
      v47 = nullptr;
      if ( v9 != 11 )
        goto LABEL_31;
LABEL_7:
      if ( *(_BYTE *)(v6 + 32) == 4 )
      {
        v10 = *(_DWORD **)(v6 + 40);
        if ( v10 )
        {
LABEL_9:
          if ( *v10 != 14 )
            return 0;
          v54[1] = 0;
          v54[0] = 0xFFFFFFFF00000000LL;
          if ( v4 || !v50 )
          {
            v12 = sub_1328E0((const __m128i *)a1, v3, v4, v52, (__int64)v10, v56, &v53, v46 == 0 ? 2 : 6);
            if ( !v12 )
              goto LABEL_17;
            if ( *v53 != 4 )
              goto LABEL_17;
            v23 = *((_QWORD *)v53 + 1);
            if ( *(_DWORD *)v23 != 9 )
              goto LABEL_17;
            v53 = (unsigned __int8 *)(v23 + 32);
            sub_125180((__int64)v54, (unsigned __int8 *)(v23 + 32));
            if ( (unsigned __int8)sub_130BC0((const __m128i *)a1, (__int64)v52, (__int64)v53, v3, v56[0], 0) )
            {
              sub_1571F0(a1, (__int64)v52, (__int64)v54, v3, v56[0], 4);
            }
            else
            {
              if ( *(_BYTE *)v56[0] != 4
                || !sub_30D8F0(v48, a1, v3, *(_DWORD **)(v56[0] + 8), (__int64)v52, (__int64)v53) )
              {
                goto LABEL_17;
              }
              sub_1207E0((char *)v54, v48, 8, *(_QWORD *)(v3 + 24), 2 * *(_DWORD *)(v51 + 4));
            }
          }
          else
          {
            v11 = sub_11C8A0((__int64)v10, &v53);
            v12 = v11;
            if ( !v11
              || sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL), *(_DWORD *)(v3 + 68), 1) >= 0
              || *v53 != 4
              || **((_DWORD **)v53 + 1) != 9
              || (sub_125180((__int64)v54, v53),
                  v53 = (unsigned __int8 *)(*((_QWORD *)v53 + 1) + 32LL),
                  !(unsigned __int8)sub_12EA80(
                                      v48,
                                      (const __m128i *)a1,
                                      (__int64)v47,
                                      v50,
                                      (__int64)v52,
                                      (__int64)v53,
                                      0)) )
            {
LABEL_17:
              v7 = 0;
LABEL_18:
              sub_11CDA0((__int64)v54);
              return v7;
            }
          }
          v44 = v53;
          v43 = v52;
          v24 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
          v57[1] = 0;
          v58[1] = 0;
          v49 = v24;
          v57[0] = 0xFFFFFFFF00000000LL;
          v58[0] = 0xFFFFFFFF00000000LL;
          v59[0] = 0xFFFFFFFF00000000LL;
          v59[1] = 0;
          sub_330970((__int64)v56, -1);
          v45 = (unsigned __int8 *)(v3 + 64);
          sub_125180((__int64)v59, (unsigned __int8 *)(v3 + 64));
          v7 = sub_126F10((unsigned __int64)v59, v49, -*(_DWORD *)(v3 + 36), v25);
          if ( (_BYTE)v7 )
          {
            v27 = *(_QWORD *)(v3 + 24);
            LODWORD(v56[0]) = 14;
            v56[3] = v27;
            sub_125180((__int64)v57, (unsigned __int8 *)v12);
            v28 = HIDWORD(v54[0]);
            if ( v50 )
            {
              if ( *(_BYTE *)v12 == 2 && (v39 = *(_DWORD *)(v12 + 4), HIDWORD(v54[0]) == v39) )
              {
                v40 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL), v39 / 2, 1);
                sub_120A10((__int64)v57, v49, v40, v39, -1, 0);
                v28 = HIDWORD(v54[0]);
                v29 = *(_QWORD *)(v3 + 24);
                v30 = 8;
              }
              else
              {
                v29 = *(_QWORD *)(v3 + 24);
                v30 = 8;
              }
            }
            else
            {
              v29 = *(_QWORD *)(v3 + 24);
              v30 = 9;
            }
            sub_1207E0((char *)v57, v49, v30, v29, v28);
            sub_125180((__int64)v58, (unsigned __int8 *)v54);
            sub_123A40((__int64)v55, v45, v31, v32);
            LOBYTE(v33) = sub_95A00(a1, v3, (__int64)v56, (__int64)v43, v12, (__int64)v44, 1);
            v7 = v33;
            if ( (_BYTE)v33 )
            {
              sub_12AB50((unsigned __int8 *)v54, v49, SHIDWORD(v54[0]), 2);
              if ( *(_QWORD *)(v6 + 8) )
              {
                sub_11D5A0(v6);
                v34 = *(_DWORD *)(a1 + 24);
                BYTE1(v34) &= ~2u;
                LOBYTE(v34) = v34 | 0x80;
                *(_DWORD *)(a1 + 24) = v34;
              }
              sub_179140(a1, v3);
              sub_93C10(a1, v3, (__int64)v56, a2);
              if ( !sub_125B60(v55, (__int64)v45, 0) )
              {
                v37 = j__qalloc_or_throw(80, (__int64)v45, v35, v36);
                *((_QWORD *)&a1 + 1) = *(_QWORD *)(v3 + 24);
                *(_QWORD *)(v37 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v37 + 40) = 0;
                *(_QWORD *)(v37 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v37 + 56) = 0;
                *(_QWORD *)(v37 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v37 + 72) = 0;
                sub_330970(v37, *((__int64 *)&a1 + 1));
                *(_DWORD *)v37 = 4;
                sub_11CA10((char *)(v37 + 32), (char *)v55);
                sub_11CA10((char *)(v37 + 64), (char *)v45);
                sub_A3160(a1, (_QWORD *)v37, v3);
              }
              sub_1253A0(v3, (__int64)v56);
              v38 = *(_DWORD *)(a1 + 24);
              BYTE1(v38) &= ~2u;
              LOBYTE(v38) = v38 | 0x80;
              *(_DWORD *)(a1 + 24) = v38;
              sub_11D5D0(v3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
              *((_QWORD *)&a1 + 1) = v3;
              sub_992D0(a1, a2);
            }
            sub_11CDA0((__int64)v55);
          }
          sub_11CDA0((__int64)v59);
          sub_11CDA0((__int64)v58);
          sub_11CDA0((__int64)v57);
          goto LABEL_18;
        }
      }
LABEL_31:
      v7 = sub_1301F0((const __m128i *)a1, v3, v51, (__int64)v52, v6 + 64);
      if ( (_BYTE)v7 )
      {
        v10 = (_DWORD *)v6;
        goto LABEL_9;
      }
      if ( !v50 && *(_DWORD *)v6 == 12 )
      {
        v20 = sub_11C8E0(v6, v56, 11);
        if ( v20 )
        {
          if ( *(_BYTE *)v56[0] == 4 )
          {
            v18 = v52;
            v16 = *(_QWORD *)(v56[0] + 8);
            v17 = (_DWORD *)v4;
            v42 = v20;
            v41 = v52;
            goto LABEL_37;
          }
        }
      }
      return v7;
    }
    v46 = 0;
    v50 = v6 + 48;
    v47 = v52;
    v19 = sub_130BC0((const __m128i *)a1, (__int64)v52, v6 + 48, v3, v4 + 32, 0);
    goto LABEL_28;
  }
  v13 = sub_11C8E0(*((__int64 *)&a1 + 1), &v51, 13);
  if ( v13 )
  {
    if ( *(_BYTE *)(v13 + 32) != 4 )
      goto LABEL_21;
    v4 = *(_QWORD *)(v13 + 40);
    if ( *(_DWORD *)v4 == 14 )
    {
      if ( v4 )
      {
        v46 = 0;
        v50 = v13 + 48;
        goto LABEL_44;
      }
    }
    else if ( *(_DWORD *)v4 == 5 && *(_BYTE *)(v13 + 48) == 4 )
    {
      v21 = *(_DWORD **)(v13 + 56);
      if ( *v21 == 14 )
      {
        if ( v21 )
        {
          v22 = v4 + 32;
          v46 = 1;
          v4 = (__int64)v21;
          v50 = v22;
LABEL_44:
          *((_QWORD *)&a1 + 1) = v51;
          v52 = (_DWORD *)v3;
          v6 = sub_129440(a1, (__int64)&v52, 0);
          if ( !v6 )
            return 0;
          v47 = (_DWORD *)v3;
          v19 = sub_130BC0((const __m128i *)a1, v3, v50, v3, v4 + 32, 0);
LABEL_28:
          if ( !v19
            && !(unsigned __int8)sub_130BC0((const __m128i *)a1, (__int64)v47, v50, v3, v4 + 48, 0)
            && (*(_BYTE *)(v4 + 32) != 4 || !sub_30D8F0(v48, a1, v3, *(_DWORD **)(v4 + 40), (__int64)v47, v50))
            && (*(_BYTE *)(v4 + 48) != 4 || !sub_30D8F0(v48, a1, v3, *(_DWORD **)(v4 + 56), (__int64)v47, v50)) )
          {
            return 0;
          }
          goto LABEL_29;
        }
      }
    }
  }
  else
  {
    v26 = sub_11C8E0(*((__int64 *)&a1 + 1), &v51, 5);
    if ( v26 )
    {
      v50 = v26 + 32;
      if ( (unsigned __int8)sub_1299D0(a1, (char *)(v26 + 32), 0) )
      {
        *((_QWORD *)&a1 + 1) = v51;
        v52 = (_DWORD *)v3;
        v6 = sub_129440(a1, (__int64)&v52, 0);
        if ( !v6 )
          return 0;
        v47 = (_DWORD *)v3;
        v46 = 0;
LABEL_29:
        if ( v50 == v6 + 48 )
        {
          *((_QWORD *)&a1 + 1) = v6 + 32;
          v6 = sub_129440(a1, (__int64)&v52, 0);
          if ( !v6 )
            return 0;
        }
        if ( *(_DWORD *)v6 != 11 )
          goto LABEL_31;
        goto LABEL_7;
      }
    }
  }
LABEL_21:
  v14 = sub_11C8E0(*((__int64 *)&a1 + 1), v56, 11);
  if ( !v14 )
    return 0;
  v7 = 0;
  if ( *(_BYTE *)v56[0] == 4 )
  {
    v15 = *(_QWORD *)(v56[0] + 8);
    if ( *(_DWORD *)v15 == 12 && *(_BYTE *)(v15 + 32) == 4 && *(_BYTE *)(v15 + 48) == 4 )
    {
      v16 = *(_QWORD *)(v15 + 56);
      v17 = *(_DWORD **)(v15 + 40);
      v18 = *((_DWORD **)&a1 + 1);
      v42 = v14;
      v41 = *((_DWORD **)&a1 + 1);
LABEL_37:
      *((_QWORD *)&a1 + 1) = v3;
      return (unsigned int)sub_9D9F0(a1, v3, v17, (__int64)v18, v16, a2, v41, v42, 0);
    }
  }
  return v7;
}

