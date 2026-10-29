__int64 __fastcall sub_157530(__int64 a1, const __m128i *a2, unsigned __int8 *a3, __m128 a4, __m128 a5)
{
  __int64 v7; // rax
  unsigned __int64 *v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // r10
  int v11; // r11d
  int v12; // eax
  _DWORD *v13; // rax
  unsigned __int64 *v14; // r14
  _DWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // r8
  char v21; // dl
  char *v22; // rax
  int v23; // edx
  __int64 v24; // r8
  __int128 v25; // rdi
  __int128 v26; // rdi
  int v27; // r11d
  int v28; // eax
  unsigned __int8 *v29; // rax
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r14
  int v34; // eax
  char v35; // al
  __int64 v36; // rdx
  int v37; // eax
  __int128 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // ecx
  int v46; // eax
  __int64 v47; // [rsp+8h] [rbp-D8h]
  int v48; // [rsp+10h] [rbp-D0h]
  __int64 v49; // [rsp+10h] [rbp-D0h]
  int v50; // [rsp+10h] [rbp-D0h]
  int v51; // [rsp+10h] [rbp-D0h]
  int v52; // [rsp+18h] [rbp-C8h]
  __int64 v53; // [rsp+18h] [rbp-C8h]
  __int64 v54; // [rsp+18h] [rbp-C8h]
  int v55; // [rsp+18h] [rbp-C8h]
  __int64 v56; // [rsp+18h] [rbp-C8h]
  _DWORD *v57; // [rsp+18h] [rbp-C8h]
  int v58; // [rsp+20h] [rbp-C0h]
  __int64 v59; // [rsp+20h] [rbp-C0h]
  int v60; // [rsp+20h] [rbp-C0h]
  _DWORD *v61; // [rsp+20h] [rbp-C0h]
  int v62; // [rsp+20h] [rbp-C0h]
  __int64 v63; // [rsp+28h] [rbp-B8h]
  __int64 v64; // [rsp+28h] [rbp-B8h]
  int v65; // [rsp+28h] [rbp-B8h]
  unsigned __int8 *v66; // [rsp+28h] [rbp-B8h]
  int v67; // [rsp+34h] [rbp-ACh]
  int v68; // [rsp+34h] [rbp-ACh]
  int v69; // [rsp+34h] [rbp-ACh]
  int v71; // [rsp+4Ch] [rbp-94h] BYREF
  char *v72; // [rsp+50h] [rbp-90h] BYREF
  int *v73; // [rsp+58h] [rbp-88h] BYREF
  unsigned __int64 *v74; // [rsp+60h] [rbp-80h] BYREF
  unsigned __int8 *v75; // [rsp+68h] [rbp-78h] BYREF
  unsigned __int64 v76; // [rsp+70h] [rbp-70h] BYREF
  _DWORD *v77; // [rsp+78h] [rbp-68h]
  unsigned __int64 v78; // [rsp+80h] [rbp-60h] BYREF
  __int64 v79; // [rsp+88h] [rbp-58h]
  __int64 v80[10]; // [rsp+90h] [rbp-50h] BYREF

  v7 = a2[30].m128i_i64[0];
  v80[3] = __readfsqword(0x28u);
  v8 = *(unsigned __int64 **)(v7 + 112);
  v9 = sub_B0740(&v72, &v71, &v73, a1);
  if ( (_BYTE)v9 )
  {
    v76 = 0xFFFFFFFF00000000LL;
    v77 = nullptr;
    v10 = 1LL << v71;
    if ( (unsigned __int64)v71 >= 0x40 )
      v10 = 0;
    v11 = *(_DWORD *)(a1 + 68);
    v12 = *v73;
    if ( *v73 == 11 )
    {
      if ( *((_BYTE *)v73 + 32) != 4 )
        goto LABEL_16;
      v16 = *((_DWORD **)v73 + 5);
      if ( *v16 != 14 )
        goto LABEL_16;
      v64 = v10;
      v69 = v11;
      v17 = sub_11C8A0((__int64)v16, &v74);
      if ( !v17 )
        goto LABEL_16;
      v18 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL), *(_DWORD *)(v17 + 4), 0);
      v10 = v64;
      v11 = v69;
      if ( v64 != v18 )
        goto LABEL_16;
      if ( *(_BYTE *)v74 != 4 )
        goto LABEL_16;
      v19 = (_DWORD *)v74[1];
      if ( *v19 != 9 )
        goto LABEL_16;
      v14 = (unsigned __int64 *)(v19 + 8);
      v74 = (unsigned __int64 *)(v19 + 8);
      v68 = 8 * v69 - v71;
    }
    else if ( v12 == 23 )
    {
      if ( *((_BYTE *)v73 + 48) != 2 )
        goto LABEL_16;
      v68 = *(unsigned __int8 *)(*((_QWORD *)v73 + 7) + 16LL);
      if ( 8 * v11 - v71 != v68 )
        goto LABEL_16;
      v14 = (unsigned __int64 *)(v73 + 8);
      v74 = (unsigned __int64 *)(v73 + 8);
    }
    else
    {
      if ( v12 != 9 )
        goto LABEL_16;
      if ( v71 != 8 * v73[9] )
        goto LABEL_16;
      v63 = v10;
      v67 = *(_DWORD *)(a1 + 68);
      v80[0] = (__int64)a3;
      v13 = (_DWORD *)sub_129440((__int64)a2, (__int64)v72, (__int64)v80, 0, *(double *)a4.m128_u64, a5);
      if ( v13 )
      {
        if ( *v13 == 9 && v13[9] == v73[9] )
          goto LABEL_16;
      }
      v14 = &v76;
      sub_125180((unsigned __int8 *)&v76, (unsigned __int8 *)v73 + 32);
      if ( (_BYTE)v76 == 4 && *v77 == 2 )
        goto LABEL_16;
      if ( !sub_131780((__int64)&v76, v8, *((_DWORD *)v72 + 1), 1u, 0, (__m128i)a4, a5) )
        goto LABEL_16;
      v11 = v67;
      v74 = &v76;
      v10 = v63;
      v68 = 8 * v67 - v71;
    }
    if ( *((_DWORD *)v14 + 1) == v11 )
    {
      v20 = (__int64)v72;
      if ( *v72 == 4 )
      {
        v75 = a3;
        v59 = v10;
        v65 = v11;
        v29 = (unsigned __int8 *)sub_30D5C0((__int64)v8, (__int64)a2, &v75, *((_DWORD **)v72 + 1));
        v11 = v65;
        if ( v29 )
        {
          v54 = v59;
          v60 = v65;
          v66 = v29;
          v30 = sub_12EA80((__int64)v8, a2, (__int64)v75, (__int64)v29, (__int64)a3, (__int64)v74, (__m128i)a4, a5, 0);
          v11 = v60;
          if ( v30 )
          {
            sub_123A40((__int64)v80, v66, v31, (__int64)v66);
            sub_1207E0((char *)v80, v8, 8, *(_QWORD *)(a1 + 24), 2 * v60, (__m128i)a4);
            sub_11CA10((char *)(a1 + 32), (char *)v80);
            sub_120A10(a1 + 48, v8, v54, *(_DWORD *)(a1 + 36), *(_QWORD *)(a1 + 24), 0);
            v34 = *(_DWORD *)(a1 + 36);
            *(_DWORD *)a1 = 14;
            *(_DWORD *)(a1 + 68) = v34;
            v9 = sub_12B6F0(a1, v8, 11, v60, 1, (__m128i)a4);
            if ( (_BYTE)v9 )
            {
              sub_11CDA0((__int64)v80);
              goto LABEL_17;
            }
            if ( !under_debugger )
              sub_383060(0xC545u, *(double *)a4.m128_u64);
            goto LABEL_81;
          }
        }
        v14 = v74;
        v20 = (__int64)v72;
      }
      v79 = 0;
      v78 = 0xFFFFFFFF00000000LL;
      v21 = *(_BYTE *)v20;
      if ( *(_DWORD *)(v20 + 4) + *((_DWORD *)v14 + 1) <= 8 )
      {
        if ( v21 != 4 )
          goto LABEL_35;
        if ( *(_BYTE *)v14 != 4 || (unsigned int)(**(_DWORD **)(v20 + 8) - 12) > 1 )
        {
LABEL_33:
          v22 = *(char **)(v20 + 8);
          v23 = *(_DWORD *)v22;
          if ( *(_DWORD *)v22 != 9 )
          {
LABEL_34:
            if ( v23 == 20 )
            {
              v50 = v11;
              v56 = v20;
              v35 = sub_11FD80(v22 + 48, v80, 1);
              v20 = v56;
              v11 = v50;
              if ( v35 )
              {
                if ( v80[0] < (unsigned __int64)((1 << v68) - 1) )
                  goto LABEL_45;
                v20 = *(_QWORD *)(v56 + 8) + 32LL;
              }
            }
            goto LABEL_35;
          }
          v20 = (__int64)(v22 + 32);
          if ( v68 > 8 * *((_DWORD *)v22 + 9) )
            goto LABEL_45;
          if ( v22[32] == 4 )
          {
            v22 = *((char **)v22 + 5);
            v23 = *(_DWORD *)v22;
            goto LABEL_34;
          }
LABEL_35:
          v80[1] = 0;
          v80[0] = 0xFFFFFFFF00000000LL;
          v52 = v11;
          v24 = sub_969E0(*(unsigned __int64 **)(a2[30].m128i_i64[0] + 112), (__int64)v80, v20, *((_DWORD *)v14 + 1));
          if ( v24 )
          {
            v48 = v52;
            v53 = v24;
            if ( (unsigned __int8)sub_130BC0(a2, (__int64)a3, (__int64)v14, (__int64)a3, v24, 0, (__m128i)a4, a5) )
            {
              *((_QWORD *)&v25 + 1) = v53;
              *(_QWORD *)&v25 = a2;
              if ( !(unsigned __int8)sub_A9CB0(v25, (__int64)a3, (__int64)a3) )
              {
                if ( (unsigned __int8)sub_157240((__int64)a2, (__int64)v14, v53, a4) )
                {
                  sub_125180((unsigned __int8 *)&v78, (unsigned __int8 *)v14);
                  *((_QWORD *)&v26 + 1) = a3;
                  *(_QWORD *)&v26 = a2;
                  sub_B1520(
                    v26,
                    (__int64)&v78,
                    a3,
                    (unsigned __int8 *)&v78,
                    (__int64)a3,
                    *(double *)a4.m128_u64,
                    v53,
                    0);
                  sub_11CDA0((__int64)v80);
                  v27 = v48;
LABEL_40:
                  v58 = v27;
                  sub_11CA10((char *)(a1 + 32), (char *)&v78);
                  sub_120A10(a1 + 48, v8, v68, 1, *(_QWORD *)(a1 + 24), 0);
                  v28 = *(_DWORD *)(a1 + 36);
                  *(_DWORD *)a1 = 24;
                  *(_DWORD *)(a1 + 68) = v28;
                  if ( (unsigned __int8)sub_12B6F0(a1, v8, 10, v58, 1, (__m128i)a4) )
                  {
LABEL_41:
                    sub_11CDA0((__int64)&v78);
                    goto LABEL_17;
                  }
                  if ( (unsigned __int8)sub_12B6F0(a1, v8, 10, -1, 1, (__m128i)a4) )
                  {
                    *(_DWORD *)(a1 + 68) = v58;
                    goto LABEL_41;
                  }
                  if ( !under_debugger )
                    sub_383060(0xC544u, *(double *)a4.m128_u64);
LABEL_81:
                  BUG();
                }
              }
            }
          }
          sub_11CDA0((__int64)v80);
LABEL_45:
          v9 = 0;
          sub_11CDA0((__int64)&v78);
          goto LABEL_17;
        }
        v55 = v11;
        v61 = *(_DWORD **)(v20 + 8);
        v49 = v14[1];
        v32 = sub_11C8A0((__int64)v61, &v75);
        v11 = v55;
        v33 = v32;
        if ( !v32 || *v61 == 13 && (_DWORD *)v32 != v61 + 12 )
          goto LABEL_52;
        v57 = v61;
        v62 = v11;
        v47 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v32 + 8) + 16LL), *(_DWORD *)(v32 + 4), 1);
        v11 = v62;
        v37 = *((_DWORD *)v75 + 1);
        if ( v37 <= 3 )
          goto LABEL_68;
        LOBYTE(v36) = v47 != 1;
        if ( v47 == 1 || v47 == -1 || *v75 == 4 )
          goto LABEL_68;
        v45 = 8 * v37 - 1;
        v46 = 0;
        v36 = v45;
        if ( (unsigned __int64)v45 <= 0x1F )
          v46 = 1 << v45;
        if ( v47 == v46 )
        {
LABEL_68:
          sub_123A40((__int64)v80, v75, v36, (__int64)&v78);
          *((_QWORD *)&v38 + 1) = a3;
          *(_QWORD *)&v38 = a2;
          if ( (unsigned __int8)sub_133220(v38, (__int64)v80, a3, v49, (__m128i)a4, a5) )
          {
            v51 = HIDWORD(v80[0]);
            v41 = j__qalloc_or_throw(80, (__int64)a3, v39, v40);
            v42 = *((_QWORD *)v57 + 3);
            *(_QWORD *)(v41 + 56) = 0;
            *(_QWORD *)(v41 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v41 + 40) = 0;
            *(_QWORD *)(v41 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v41 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v41 + 72) = 0;
            sub_330970(v41, v42);
            *(_DWORD *)v41 = *v57;
            sub_11CA10((char *)(v41 + 32), (char *)v80);
            v43 = 0;
            v44 = 8 * *(_DWORD *)(v33 + 4);
            if ( (unsigned __int64)v44 <= 0x3F )
              v43 = v47 << v44;
            sub_120A10(v41 + 48, *(unsigned __int64 **)(a2[30].m128i_i64[0] + 112), v43, v51, **(_QWORD **)(v33 + 8), 0);
            *(_DWORD *)(v41 + 68) = v51;
            sub_11CDA0((__int64)&v78);
            LOBYTE(v78) = 4;
            v79 = v41;
            HIDWORD(v78) = v51;
            sub_11CDA0((__int64)v80);
            v27 = v62;
            goto LABEL_40;
          }
          sub_11CDA0((__int64)v80);
          v20 = (__int64)v72;
          v14 = v74;
          v11 = v62;
          v21 = *v72;
        }
        else
        {
LABEL_52:
          v20 = (__int64)v72;
          v14 = v74;
          v21 = *v72;
        }
      }
      if ( v21 != 4 )
        goto LABEL_35;
      goto LABEL_33;
    }
LABEL_16:
    v9 = 0;
LABEL_17:
    sub_11CDA0((__int64)&v76);
  }
  return v9;
}

