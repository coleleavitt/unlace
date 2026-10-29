__int64 __fastcall sub_9D9F0(
        __int128 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        _DWORD *a7,
        __int64 a8,
        unsigned __int8 a9)
{
  bool v10; // zf
  unsigned __int8 v11; // r11
  __int64 v12; // r12
  _DWORD *v13; // r8
  __int64 v15; // rax
  unsigned __int8 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int8 v19; // r11
  __int64 v20; // r15
  char v21; // al
  __int64 v22; // rsi
  unsigned int v23; // r13d
  char v25; // al
  char v26; // r11
  __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // eax
  _DWORD *v30; // rax
  char v31; // [rsp+Ch] [rbp-D4h]
  __int64 v32; // [rsp+18h] [rbp-C8h]
  unsigned __int8 v33; // [rsp+18h] [rbp-C8h]
  _DWORD *v34; // [rsp+20h] [rbp-C0h]
  unsigned __int8 v35; // [rsp+20h] [rbp-C0h]
  unsigned __int8 *v36; // [rsp+20h] [rbp-C0h]
  unsigned __int8 *v38; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+48h] [rbp-98h] BYREF
  _DWORD v42[8]; // [rsp+50h] [rbp-90h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-70h] BYREF
  _QWORD v44[2]; // [rsp+80h] [rbp-60h] BYREF
  _QWORD v45[10]; // [rsp+90h] [rbp-50h] BYREF

  v10 = *a3 == 14;
  v45[3] = __readfsqword(0x28u);
  v11 = a9;
  if ( !v10 )
    return 0;
  if ( *(_DWORD *)a8 != 11 )
    return 0;
  if ( *(_BYTE *)(a8 + 32) != 4 )
    return 0;
  v12 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = a4;
  v13 = *(_DWORD **)(a8 + 40);
  if ( !v13 || *v13 != 14 )
    return 0;
  v38 = nullptr;
  v39 = 0;
  if ( a5 )
  {
    v34 = v13;
    v15 = sub_1328E0((const __m128i *)a1, *((__int64 *)&a1 + 1), a5, a7, (__int64)v13, &v39, &v38, 2);
    v13 = v34;
    v32 = v15;
    v11 = a9;
    if ( !v15 )
      return 0;
  }
  else
  {
    v32 = 0;
  }
  v35 = v11;
  v16 = (unsigned __int8 *)sub_1328E0(
                             (const __m128i *)a1,
                             a2,
                             (__int64)a3,
                             a7,
                             (__int64)v13,
                             &v41,
                             &v40,
                             v11 == 0 ? 2 : 6);
  if ( !v16 )
    return 0;
  v17 = *(_QWORD *)(a1 + 480);
  v18 = v40;
  v19 = v35;
  v20 = *(_QWORD *)(v17 + 112);
  if ( a5 )
  {
    if ( (unsigned __int8)sub_12EA80(*(_QWORD *)(v17 + 112), (const __m128i *)a1, (__int64)a7, v32, (__int64)a7, v40, 1) )
    {
      v21 = sub_12EA80(v20, (const __m128i *)a1, (__int64)a7, (__int64)v16, (__int64)a7, (__int64)v38, 1);
      v18 = v32;
      v19 = v35;
      if ( v21 )
        goto LABEL_12;
    }
    return 0;
  }
  if ( *(_BYTE *)v40 == 4 )
  {
    v30 = *(_DWORD **)(v40 + 8);
    if ( *v30 == 9 )
      v18 = (__int64)(v30 + 8);
  }
  v38 = v16;
LABEL_12:
  v22 = *(_QWORD *)(v12 + 24);
  v33 = v19;
  v43[0] = 0xFFFFFFFF00000000LL;
  v44[0] = 0xFFFFFFFF00000000LL;
  v45[0] = 0xFFFFFFFF00000000LL;
  v36 = (unsigned __int8 *)v18;
  v43[1] = 0;
  v44[1] = 0;
  v45[1] = 0;
  sub_330970((__int64)v42, v22);
  v42[0] = 14;
  sub_125180((__int64)v43, v36);
  if ( (unsigned __int8)sub_12AB50((unsigned __int8 *)v43, v20, *(_DWORD *)(v41 + 4), 0) )
  {
    sub_1571F0(a1, v12, (__int64)v43, v12, v41, 0);
    sub_125180((__int64)v44, v16);
    if ( a5 )
    {
      *((_QWORD *)&a1 + 1) = v12;
      v25 = sub_132E20(a1, (__int64)v44, (__int64)a7, v39, 0);
      v26 = v33;
      if ( !v25 )
        goto LABEL_13;
    }
    else
    {
      sub_1207E0((char *)v44, v20, 9 - (unsigned int)v33, *(_QWORD *)(v12 + 24), SHIDWORD(v43[0]));
      v26 = v33;
    }
    v31 = v26;
    sub_125180((__int64)v45, (unsigned __int8 *)(v12 + 64));
    if ( (unsigned __int8)sub_126F10((unsigned __int64)v45, v20, -*(_DWORD *)(v12 + 36), v27) )
    {
      LOBYTE(v28) = sub_95A00(a1, v12, (__int64)v42, (__int64)a7, (__int64)v38, v40, v31);
      v23 = v28;
      if ( (_BYTE)v28 )
      {
        sub_179140(a1, v12);
        sub_93C10(a1, v12, (__int64)v42, a6);
        sub_1253A0(v12, (__int64)v42);
        v29 = *(_DWORD *)(a1 + 24);
        BYTE1(v29) &= ~2u;
        LOBYTE(v29) = v29 | 0x80;
        *(_DWORD *)(a1 + 24) = v29;
        sub_11D5D0(v12, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
        *((_QWORD *)&a1 + 1) = v12;
        sub_992D0(a1, a6);
        goto LABEL_14;
      }
    }
  }
LABEL_13:
  v23 = 0;
LABEL_14:
  sub_11CDA0((__int64)v45);
  sub_11CDA0((__int64)v44);
  sub_11CDA0((__int64)v43);
  return v23;
}

