__int64 __fastcall sub_9BBC0(
        __int128 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  int v8; // eax
  __int64 v12; // r11
  int v13; // edx
  int v14; // edx
  __int64 v15; // rax
  unsigned __int64 *v16; // rax
  bool v17; // al
  char v18; // al
  unsigned __int8 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  int v25; // eax
  int v27; // eax
  int v28; // [rsp+0h] [rbp-150h]
  int v29; // [rsp+8h] [rbp-148h]
  __int64 v30; // [rsp+8h] [rbp-148h]
  __int64 *v31; // [rsp+10h] [rbp-140h]
  __int64 v32; // [rsp+18h] [rbp-138h]
  int v33; // [rsp+18h] [rbp-138h]
  _DWORD *v35; // [rsp+20h] [rbp-130h]
  unsigned __int64 *v36; // [rsp+28h] [rbp-128h]
  __int64 v37; // [rsp+38h] [rbp-118h]
  __int64 v38; // [rsp+38h] [rbp-118h]
  unsigned __int8 v39; // [rsp+47h] [rbp-109h]
  __int64 v40; // [rsp+48h] [rbp-108h]
  unsigned __int8 v41[16]; // [rsp+50h] [rbp-100h] BYREF
  __int64 v42; // [rsp+60h] [rbp-F0h] BYREF
  __int128 v43; // [rsp+68h] [rbp-E8h]
  __int128 v44; // [rsp+78h] [rbp-D8h]
  __int64 v45[2]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-B0h]
  __int128 v47; // [rsp+A8h] [rbp-A8h]
  _DWORD v48[8]; // [rsp+C0h] [rbp-90h] BYREF
  _QWORD v49[2]; // [rsp+E0h] [rbp-70h] BYREF
  _QWORD v50[2]; // [rsp+F0h] [rbp-60h] BYREF
  _QWORD v51[10]; // [rsp+100h] [rbp-50h] BYREF

  v8 = *(_DWORD *)(a4 + 4);
  v40 = *((_QWORD *)&a1 + 1);
  v51[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 4) < v8 )
    return 0;
  v39 = v8 > 7 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL) <= 7;
  if ( v39 )
    return 0;
  v12 = a5;
  if ( a7 )
  {
    v13 = *(_DWORD *)(a6 + 4);
    if ( v13 != *(_DWORD *)(a7 + 4) )
      return v39;
    v14 = 2 * v13;
  }
  else
  {
    if ( (a8 & 4) == 0 )
    {
LABEL_8:
      v15 = *(_QWORD *)(a1 + 480);
      v42 = 0;
      v43 = 0;
      v16 = *(unsigned __int64 **)(v15 + 112);
      v44 = 0;
      v36 = v16;
      if ( a2 )
      {
        v37 = a2;
        v17 = sub_122240(*((__int64 *)&a1 + 1), *(_QWORD *)(a2 + 8), 0);
        v12 = a5;
        if ( v17 )
        {
          *((_QWORD *)&a1 + 1) = v37;
          v18 = sub_155D40(a1, a3, v37, v40, (__int64)&v42);
          v12 = a5;
          if ( !v18 )
            goto LABEL_28;
        }
      }
      if ( v12 )
      {
        v38 = v12;
        if ( sub_122240(v40, *(_QWORD *)(v12 + 8), 0) )
        {
          *((_QWORD *)&a1 + 1) = v38;
          if ( !(unsigned __int8)sub_155D40(a1, a6, v38, v40, 0) )
            goto LABEL_28;
        }
      }
      sub_1558B0((int *)&v42);
      v49[1] = 0;
      v50[1] = 0;
      *((_QWORD *)&a1 + 1) = *(_QWORD *)(v40 + 24);
      v51[1] = 0;
      v49[0] = 0xFFFFFFFF00000000LL;
      v50[0] = 0xFFFFFFFF00000000LL;
      v51[0] = 0xFFFFFFFF00000000LL;
      v35 = v48;
      sub_330970((__int64)v48, *((__int64 *)&a1 + 1));
      v48[0] = 14;
      sub_125180((__int64)v49, (unsigned __int8 *)a3);
      sub_12B320((__int64)v49, (__int64)v36, *(_QWORD *)(v40 + 24), *(_DWORD *)(a4 + 4));
      sub_125180((__int64)v50, (unsigned __int8 *)a6);
      v39 = sub_157240(a1, (__int64)v49, a4);
      if ( !v39 )
      {
LABEL_27:
        sub_11CDA0((__int64)v51);
        sub_11CDA0((__int64)v50);
        sub_11CDA0((__int64)v49);
LABEL_28:
        sub_155800((unsigned int *)&v42);
        return v39;
      }
      sub_1571F0(a1, v40, (__int64)v49, v40, a4, 0);
      if ( a7 )
      {
        if ( a8 )
        {
          if ( !under_debugger )
            sub_383060(0xC84Cu, 0.0);
          goto LABEL_47;
        }
        sub_1571F0(a1, v40, (__int64)v50, v40, a7, 0);
      }
      else if ( (a8 & 4) == 0 )
      {
        sub_1207E0(
          (char *)v50,
          (__int64)v36,
          (unsigned int)((a8 & 2) == 0) + 8,
          *(_QWORD *)(v40 + 24),
          SHIDWORD(v49[0]));
        if ( (a8 & 1) != 0 )
          sub_1207E0((char *)v50, (__int64)v36, 5, *(_QWORD *)(v40 + 24), SHIDWORD(v50[0]));
      }
      sub_179140(a1, v40);
      v19 = (unsigned __int8 *)(v40 + 64);
      sub_125180((__int64)v51, (unsigned __int8 *)(v40 + 64));
      if ( !sub_131730(v36, (const __m128i *)a1, (__int64)v48, (__int64)v51, 2 * HIDWORD(v51[0]), 1u, 1u) )
      {
        v33 = HIDWORD(v51[0]);
        sub_11CDA0((__int64)v51);
        HIDWORD(v51[0]) = 2 * v33;
        goto LABEL_25;
      }
      sub_123A40((__int64)v41, (unsigned __int8 *)v51, v20, v21);
      if ( (unsigned __int8)sub_12AB50(v41, (__int64)v36, *(_DWORD *)(a4 + 4), 1) )
      {
        v45[0] = 0;
        v45[1] = 0;
        v46 = 0;
        v47 = 0;
        sub_127FE0(a1, (__int64)v45, (__int64)v41, 1u, v22, v23, v28, v29, (int)v45, (int)v41, (__int64)v48);
        v24 = sub_129150(a1, v31, *(_QWORD *)(v40 + 16), 0, (__int64)v31, 0, 0x101u);
        if ( v24 )
        {
          if ( *(_DWORD *)v24 == 14 )
          {
            v30 = v24;
            if ( (unsigned __int8)sub_130BC0(
                                    (const __m128i *)a1,
                                    *(_QWORD *)(v24 + 8),
                                    v24 + 64,
                                    *(_QWORD *)(v40 + 8),
                                    (__int64)v19,
                                    0) )
            {
              if ( !sub_A9D90(a1, v31, *(_QWORD *)(v30 + 8), v40, 1u) )
              {
                sub_11D5A0(v30);
                if ( v46 )
                {
                  *(_QWORD *)&v47 = 0;
                  qfree(v46);
                }
                qfree(v45[0]);
                sub_11CDA0(v32);
                sub_11D890(v40, (__int64)v35);
                v27 = *(_DWORD *)(a1 + 24);
                BYTE1(v27) &= ~2u;
                LOBYTE(v27) = v27 | 0x80;
                *(_DWORD *)(a1 + 24) = v27;
                sub_11D5D0(v40, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
                *((_QWORD *)&a1 + 1) = v40;
                sub_992D0(a1, 0.0);
                goto LABEL_26;
              }
            }
          }
        }
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree(v46);
        }
        qfree(v45[0]);
        sub_11CDA0(v32);
LABEL_25:
        sub_12B6F0((__int64)v35, (__int64)v36, 11, *(_DWORD *)(a4 + 4), 1);
        sub_125180((__int64)v51, v19);
        sub_11D890(v40, (__int64)v35);
LABEL_26:
        v25 = *(_DWORD *)(a1 + 24);
        BYTE1(v25) &= ~2u;
        LOBYTE(v25) = v25 | 0x80;
        *(_DWORD *)(a1 + 24) = v25;
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_383060(0xC84Du, 0.0);
LABEL_47:
      BUG();
    }
    v14 = *(_DWORD *)(a6 + 4);
  }
  if ( !v14 || 2 * v8 == v14 )
    goto LABEL_8;
  return v39;
}

