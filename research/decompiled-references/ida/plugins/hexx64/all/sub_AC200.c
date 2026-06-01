__int64 __fastcall sub_AC200(const __m128i *a1, unsigned int *a2)
{
  unsigned __int64 v4; // rdi
  char v5; // al
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r13d
  __int128 v11; // rdi
  __int64 v12; // rdx
  __int128 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // r13
  __int128 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  __int128 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  __int128 v31; // rdi
  unsigned int v32; // eax
  __int32 v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 n; // [rsp+8h] [rbp-168h]
  char v40; // [rsp+20h] [rbp-150h]
  signed int v41; // [rsp+34h] [rbp-13Ch]
  char v42; // [rsp+34h] [rbp-13Ch]
  __int64 v43; // [rsp+40h] [rbp-130h]
  unsigned __int8 v44[4]; // [rsp+60h] [rbp-110h] BYREF
  signed int v45; // [rsp+64h] [rbp-10Ch]
  _BYTE v46[16]; // [rsp+70h] [rbp-100h] BYREF
  __int64 v47[2]; // [rsp+80h] [rbp-F0h] BYREF
  __int64 v48; // [rsp+90h] [rbp-E0h] BYREF
  __int128 v49; // [rsp+98h] [rbp-D8h]
  __int64 v50[2]; // [rsp+B0h] [rbp-C0h] BYREF
  void *src; // [rsp+C0h] [rbp-B0h] BYREF
  __int128 v52; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 *v53[2]; // [rsp+E0h] [rbp-90h] BYREF
  void *v54; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v55; // [rsp+F8h] [rbp-78h]
  __int64 v56; // [rsp+110h] [rbp-60h] BYREF
  __int64 v57; // [rsp+118h] [rbp-58h]
  __int64 v58; // [rsp+120h] [rbp-50h] BYREF
  __int128 v59; // [rsp+128h] [rbp-48h]
  unsigned __int64 v60; // [rsp+138h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 )
    return 0;
  if ( (int)a2[17] > 4 )
    return 0;
  v4 = *a2;
  if ( (_DWORD)v4 == 4 )
    return 0;
  if ( (_DWORD)v4 == 62 )
    return 0;
  if ( !sub_32ED70(v4) )
    return 0;
  if ( *((_BYTE *)a2 + 64) == 8 || *((_BYTE *)a2 + 64) == 14 )
    return 0;
  if ( !*((_QWORD *)a2 + 2) )
    return 0;
  v5 = *((_BYTE *)a2 + 32);
  if ( v5 == 10 )
    return 0;
  v6 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( v5 == 1 )
  {
    v32 = a2[10];
    if ( *(_DWORD *)(v6 + 60) == v32 || v32 == *(_DWORD *)(a1[4].m128i_i64[0] + 1184) )
      return 0;
  }
  if ( !sub_A0E80(a2) )
    return 0;
  sub_123A40((__int64)v44, (unsigned __int8 *)a2 + 64, v7, v8);
  LOBYTE(v9) = sub_131730((unsigned __int64 *)v6, a1, (__int64)a2, (__int64)v44, 2 * v45, 0, 0);
  v10 = v9;
  if ( (_BYTE)v9 )
  {
    *((_QWORD *)&v11 + 1) = v47;
    *(_QWORD *)&v11 = a1;
    v47[0] = 0;
    v47[1] = 0;
    v48 = 0;
    v49 = 0;
    sub_123EA0(v11, (__int64)v44, 1, 0xFFFF0000);
    v43 = sub_129150((__int64)a1, v47, *((_QWORD *)a2 + 2), 0, 0, 0, 0x101u);
    if ( !v43 || !sub_A0E80((_BYTE *)v43) || (v41 = sub_11E240((int *)v43), (int)a2[17] >= v41) )
    {
      v10 = 0;
      goto LABEL_38;
    }
    sub_123A40((__int64)v46, (unsigned __int8 *)(v43 + 64), v12, (__int64)v46);
    if ( *(_DWORD *)(v43 + 68) > v41 )
    {
      v10 = sub_127850((unsigned __int64)v46, v6, v41, 0);
      if ( !(_BYTE)v10 )
      {
LABEL_37:
        sub_11CDA0((__int64)v46);
LABEL_38:
        if ( v48 )
        {
          *(_QWORD *)&v49 = 0;
          qfree(v48);
        }
        qfree(v47[0]);
        goto LABEL_41;
      }
    }
    *((_QWORD *)&v13 + 1) = v50;
    *(_QWORD *)&v13 = a1;
    v50[0] = 0;
    v50[1] = 0;
    src = nullptr;
    v52 = 0;
    sub_123EA0(v13, (__int64)v46, 1, 0xFFFF0000);
    sub_124680((__int64)&v56, (__int64)a1, (__int64)a2, 1u);
    sub_64640(v50, &v56, v14, v15, v16, v17);
    sub_317C60((__int64 *)&src, (__int64)&v58);
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58);
    }
    qfree(v56);
    if ( v45 <= *(_DWORD *)(v6 + 80) || (unsigned __int8)sub_A2310(v47, v50) )
    {
      sub_64000((__int64 *)v53, (__int64)v50, 0.0);
      v19 = v52;
      v54 = nullptr;
      v55 = 0;
      if ( (_QWORD)v52 )
      {
        n = 16 * v52;
        v54 = (void *)qalloc_or_throw(16 * v52, (__int64)v50, 16 * v52, v18);
        *((_QWORD *)&v55 + 1) = v19;
        memcpy(v54, src, n);
        *(_QWORD *)&v55 = v19;
      }
      *(_QWORD *)&v20 = a1;
      *((_QWORD *)&v20 + 1) = &v56;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      sub_123EA0(v20, (__int64)(a2 + 16), 1, 0xFFFF0000);
      sub_64640((__int64 *)v53, &v56, v21, v22, v23, v24);
      sub_317C60((__int64 *)&v54, (__int64)&v58);
      if ( sub_A9D90((__int64)a1, v53, *((_QWORD *)a2 + 1), 0, 1u) )
      {
LABEL_24:
        sub_93B40(&v56);
        sub_93B40((__int64 *)v53);
        v56 = 0;
        *(_QWORD *)&v25 = a1;
        v57 = 0;
        v58 = 0;
        *((_QWORD *)&v25 + 1) = &v56;
        v59 = 0;
        sub_123EA0(v25, (__int64)(a2 + 16), 1, 0xFFFF0000);
        sub_64280(&v56, v50, 0.0);
        sub_316CB0(&v58, (__int64 **)&src, v26, v27);
        v10 = sub_A2310(&v56, v47);
        if ( !(_BYTE)v10 )
          goto LABEL_32;
        v29 = (unsigned int)v45;
        v30 = *(_DWORD *)(v6 + 88);
        if ( v45 == v30 )
          goto LABEL_49;
        v40 = v44[0] == 6;
        if ( v45 < v30 )
        {
          while ( 1 )
          {
            sub_123A40((__int64)v53, v44, v29, v28);
            v42 = sub_131730((unsigned __int64 *)v6, a1, (__int64)a2, (__int64)v44, 2 * v45, 0, 0);
            if ( !v42 )
              break;
            *((_QWORD *)&v31 + 1) = v47;
            *(_QWORD *)&v31 = a1;
            sub_123EA0(v31, (__int64)v44, 1, 0xFFFF0000);
            if ( !(unsigned __int8)sub_64820(v47, &v56) || (v40 = sub_317F40(&v58, (__int64)&v48)) == 0 )
            {
              sub_125180((__int64)v44, (unsigned __int8 *)v53);
              goto LABEL_30;
            }
            sub_11CDA0((__int64)v53);
            if ( v45 >= *(_DWORD *)(v6 + 88) )
              goto LABEL_49;
          }
          v42 = v40;
LABEL_30:
          sub_11CDA0((__int64)v53);
          v40 = v42;
        }
        if ( v40 )
        {
LABEL_49:
          sub_12B6F0((__int64)a2, v6, 9, -1, 1);
          sub_125180((__int64)(a2 + 16), v44);
          *a2 = 9;
          sub_A0E10((__int64)(a2 + 16), v6);
          sub_A1280(v6, (__int64)a2, *(_DWORD *)(v43 + 4));
          v34 = a1[1].m128i_i32[2];
          BYTE1(v34) &= ~2u;
          LOBYTE(v34) = v34 | 0x80;
          a1[1].m128i_i32[2] = v34;
        }
        else
        {
LABEL_32:
          v10 = 0;
        }
        sub_93B40(&v56);
        goto LABEL_34;
      }
      if ( (!(unsigned __int8)sub_64880(v53) || (_QWORD)v55)
        && *(_DWORD *)(v43 + 68) <= v41
        && !(unsigned __int8)sub_120170((__int64)(a2 + 16), v6) )
      {
        sub_64640(v50, &v56, v35, v36, v37, v38);
        sub_317C60((__int64 *)&src, (__int64)&v58);
        goto LABEL_24;
      }
      sub_93B40(&v56);
      sub_93B40((__int64 *)v53);
    }
    v10 = 0;
LABEL_34:
    if ( src )
    {
      *(_QWORD *)&v52 = 0;
      qfree((__int64)src);
    }
    qfree(v50[0]);
    goto LABEL_37;
  }
LABEL_41:
  sub_11CDA0((__int64)v44);
  return v10;
}

