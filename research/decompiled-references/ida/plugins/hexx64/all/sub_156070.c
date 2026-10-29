__int64 __fastcall sub_156070(const __m128i *a1, _DWORD *a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v6; // rbx
  char *v7; // r14
  unsigned int v8; // r13d
  __int64 v10; // r9
  __int128 v11; // rdi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r12
  int v17; // r9d
  _DWORD *v18; // rsi
  __int128 v19; // rdi
  char v20; // al
  __int64 v21; // rdx
  int v22; // r12d
  __int64 v23; // r10
  int v24; // eax
  __int128 v25; // rdi
  _DWORD *v26; // [rsp+8h] [rbp-138h]
  int v27; // [rsp+14h] [rbp-12Ch]
  unsigned __int64 *v28; // [rsp+18h] [rbp-128h]
  __int64 v29; // [rsp+20h] [rbp-120h]
  __int64 v30; // [rsp+28h] [rbp-118h]
  unsigned __int64 *v31; // [rsp+30h] [rbp-110h]
  __int64 v33; // [rsp+68h] [rbp-D8h] BYREF
  _DWORD *v34; // [rsp+70h] [rbp-D0h] BYREF
  _DWORD *v35; // [rsp+78h] [rbp-C8h] BYREF
  _DWORD *v36; // [rsp+80h] [rbp-C0h] BYREF
  _DWORD *v37; // [rsp+88h] [rbp-B8h] BYREF
  unsigned int *v38[2]; // [rsp+90h] [rbp-B0h] BYREF
  _QWORD v39[2]; // [rsp+A0h] [rbp-A0h] BYREF
  __int64 v40[2]; // [rsp+B0h] [rbp-90h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-78h]
  __int64 v43; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-58h]
  unsigned __int64 *v45; // [rsp+F0h] [rbp-50h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v47; // [rsp+108h] [rbp-38h]

  v6 = (__int64)a1;
  v47 = __readfsqword(0x28u);
  v7 = (char *)(a3 + 32);
  if ( (unsigned __int8)sub_11CA60((_BYTE *)(a3 + 32)) )
  {
    if ( (unsigned __int8)sub_11CA60((_BYTE *)(a3 + 48)) )
    {
      v35 = a2;
      v29 = sub_14FD30(a1, (__int64)&v35, (__int64)v7, -1, &v33, &v34, a4, a5);
      if ( v29 )
      {
        v36 = a2;
        v10 = sub_14FD30(a1, (__int64)&v36, a3 + 48, 0, nullptr, nullptr, a4, a5);
        if ( v10 )
        {
          *((_QWORD *)&v11 + 1) = a1;
          *(_QWORD *)&v11 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
          v28 = *(unsigned __int64 **)(*(_QWORD *)(v6 + 480) + 112LL);
          LOBYTE(v12) = sub_30CFD0(v11, (__int64)v35, v29, (__int64)v36, v10);
          v8 = v12;
          if ( (_BYTE)v12 )
          {
            v38[1] = nullptr;
            v38[0] = (unsigned int *)0xFFFFFFFF00000000LL;
            v39[0] = 0xFFFFFFFF00000000LL;
            v13 = *(_DWORD *)(v33 + 36);
            v39[1] = 0;
            v37 = nullptr;
            v27 = v13;
            if ( *(_DWORD *)(v29 + 4) == v13 )
            {
              sub_125180((unsigned __int8 *)v38, (unsigned __int8 *)v29);
            }
            else
            {
              sub_125180((unsigned __int8 *)v39, (unsigned __int8 *)(v33 + 32));
              if ( !(unsigned __int8)sub_1272B0((__int64)v39, v28, SHIDWORD(v39[0]) / 2, 0, *(double *)a4.m128i_i64) )
              {
                if ( !under_debugger )
                  sub_383060(0xC540u, *(double *)a4.m128i_i64);
                goto LABEL_71;
              }
              v26 = v34;
              v37 = v34;
              while ( 1 )
              {
                v16 = sub_129440(v6, (__int64)v39, (__int64)&v37, 0, *(double *)a4.m128i_i64, a5);
                if ( !v16 )
                  goto LABEL_40;
                if ( LOBYTE(v39[0]) == 4 )
                  goto LABEL_21;
                sub_127A20((__int64)v40, v6, (__int64)v37, 0, v14, v15, *(double *)a4.m128i_i64, a5);
                a4 = 0;
                v43 = 0;
                v44 = 0;
                v45 = nullptr;
                v46 = 0;
                sub_123EA0(v6, &v43, (__int64)v39, 0, 0xFFFF0000, 0.0);
                if ( (unsigned __int8)sub_64780(&v43, v40) || (unsigned __int8)sub_318470(&v45, (__int64)&v41) )
                  break;
                if ( v45 )
                {
                  *(_QWORD *)&v46 = 0;
                  qfree((__int64)v45);
                }
                qfree(v43);
                if ( v41 )
                {
                  v42 = 0;
                  qfree(v41);
                }
                qfree(v40[0]);
              }
              if ( !(unsigned __int8)sub_12CF30(
                                       *(_QWORD *)(v6 + 64),
                                       v16 + 64,
                                       (unsigned __int8 *)v39,
                                       0,
                                       0,
                                       v17,
                                       (__m128i)0LL) )
                v16 = 0;
              if ( v45 )
              {
                *(_QWORD *)&v46 = 0;
                qfree((__int64)v45);
              }
              qfree(v43);
              if ( v41 )
              {
                v42 = 0;
                qfree(v41);
              }
              qfree(v40[0]);
              if ( v16 )
              {
LABEL_21:
                if ( (unsigned __int8)sub_1205A0((_BYTE *)v16, (__int64)v28, 0) )
                {
                  if ( *(_DWORD *)v16 != 4 && (*(_DWORD *)v16 != 67 || *(_DWORD *)(v16 + 36) != *(_DWORD *)(v16 + 68)) )
                    goto LABEL_24;
                  sub_125180((unsigned __int8 *)v39, (unsigned __int8 *)(v16 + 64));
                  v37 = *((_DWORD **)v37 + 1);
                }
                else
                {
                  sub_1262E0((__int64)v39, (unsigned __int8 *)v16, *(double *)a4.m128i_i64);
                }
              }
              else
              {
LABEL_40:
                v37 = v26;
              }
              if ( HIDWORD(v39[0]) == v27 )
              {
                sub_11CA10((char *)v38, (char *)v39);
                v18 = v37;
LABEL_28:
                if ( v18 != a2 )
                {
                  if ( !v18 )
                    goto LABEL_44;
                  if ( !v6
                    || !(unsigned __int8)sub_155D40(
                                           v6,
                                           (__int64)v18,
                                           (__int64)v38,
                                           (__int64)v18,
                                           (__int64)a2,
                                           0,
                                           *(double *)a4.m128i_i64,
                                           a5) )
                  {
                    goto LABEL_24;
                  }
                }
LABEL_32:
                if ( HIDWORD(v38[0]) == v27 )
                {
                  sub_12AB50(v38, v28, v27, 2, a4);
                  sub_11CA10(v7, (char *)v38);
                  *(_DWORD *)a3 = 66;
                  *(_DWORD *)(v6 + 24) |= 0x40u;
                  sub_11CDA0((__int64)v39);
                  goto LABEL_25;
                }
                if ( !under_debugger )
                  sub_383060(0xC541u, *(double *)a4.m128i_i64);
LABEL_71:
                BUG();
              }
              *((_QWORD *)&v19 + 1) = v37;
              if ( v37 != v35 )
              {
                if ( a2 )
                {
LABEL_44:
                  v44 = 0;
                  *(_QWORD *)&v46 = 0;
                  if ( !v6 )
                  {
                    v23 = 0;
                    v22 = 0;
                    goto LABEL_47;
                  }
                  LODWORD(v43) = 0;
                  v45 = nullptr;
                  *((_QWORD *)&v46 + 1) = 0;
                  v20 = sub_155D40(
                          v6,
                          (__int64)v37,
                          (__int64)v39,
                          (__int64)v37,
                          (__int64)a2,
                          (__int64)&v43,
                          *(double *)a4.m128i_i64,
                          a5);
                  v22 = v43;
                  v23 = *((_QWORD *)&v46 + 1);
                  v31 = v45;
                  if ( !v20 )
                  {
LABEL_46:
                    v6 = (__int64)v31;
LABEL_47:
                    LODWORD(v43) = v22;
                    v45 = (unsigned __int64 *)v6;
                    *((_QWORD *)&v46 + 1) = v23;
                    sub_155800((unsigned int *)&v43, *(double *)a4.m128i_i64);
LABEL_24:
                    v8 = 0;
                    sub_11CDA0((__int64)v39);
LABEL_25:
                    sub_11CDA0((__int64)v38);
                    return v8;
                  }
                  v30 = *((_QWORD *)&v46 + 1);
                  sub_123A40((__int64)v40, (unsigned __int8 *)v29, v21, (__int64)v45);
                  if ( !(unsigned __int8)sub_155D40(
                                           v6,
                                           (__int64)v35,
                                           (__int64)v40,
                                           (__int64)v35,
                                           (__int64)a2,
                                           0,
                                           *(double *)a4.m128i_i64,
                                           a5) )
                  {
                    sub_11CDA0((__int64)v40);
                    v23 = v30;
                    goto LABEL_46;
                  }
                  if ( v22 == 1 )
                  {
                    if ( v30 )
                    {
                      sub_11CDA0(v30);
                      j__qfree(v30);
                    }
                  }
                  else if ( v22 == 2 )
                  {
                    v24 = *((_DWORD *)v31 + 6);
                    BYTE1(v24) &= ~2u;
                    LOBYTE(v24) = v24 | 0x80;
                    *((_DWORD *)v31 + 6) = v24;
                  }
                  sub_11CA10((char *)v38, (char *)v39);
                  *((_QWORD *)&v25 + 1) = v37;
                  *(_QWORD *)&v25 = v6;
                  sub_B1520(
                    v25,
                    (__int64)v38,
                    v37,
                    (unsigned __int8 *)v38,
                    (__int64)v35,
                    *(double *)a4.m128i_i64,
                    (__int64)v40,
                    4);
                  sub_11CDA0((__int64)v40);
                  LODWORD(v43) = 0;
                  sub_155800((unsigned int *)&v43, *(double *)a4.m128i_i64);
                  goto LABEL_32;
                }
                goto LABEL_32;
              }
              if ( HIDWORD(v39[0]) != v27 / 2 )
              {
                if ( !under_debugger )
                  sub_383060(0xCB7Eu, *(double *)a4.m128i_i64);
                goto LABEL_71;
              }
              *(_QWORD *)&v19 = v6;
              sub_B1520(v19, (__int64)v39, v37, (unsigned __int8 *)v39, (__int64)v37, *(double *)a4.m128i_i64, v29, 4);
              sub_11CA10((char *)v38, (char *)v39);
            }
            v18 = v35;
            goto LABEL_28;
          }
        }
      }
    }
  }
  return 0;
}

