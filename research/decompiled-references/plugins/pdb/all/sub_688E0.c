__int64 __fastcall sub_688E0(_QWORD *a1, _DWORD *a2, unsigned int a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rbp
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // rax
  void (*v21)(); // rax
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rdi
  __int64 v28; // rax
  void (*v29)(); // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // rax
  void (*v34)(); // rax
  __int64 v35; // rax
  __m128i si128; // xmm1
  __int64 v37; // rdi
  __int64 v38; // rax
  void (*v39)(); // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  __m128i v42; // xmm0
  __int64 v43; // rax
  void (*v44)(); // rax
  int v45; // [rsp+Ch] [rbp-7Ch]
  int v46; // [rsp+Ch] [rbp-7Ch]
  int v47; // [rsp+Ch] [rbp-7Ch]
  int v48; // [rsp+Ch] [rbp-7Ch]
  int v49; // [rsp+Ch] [rbp-7Ch]
  unsigned __int16 v50; // [rsp+16h] [rbp-72h] BYREF
  __int64 v51; // [rsp+18h] [rbp-70h] BYREF
  __int64 v52; // [rsp+20h] [rbp-68h] BYREF
  __int64 v53; // [rsp+28h] [rbp-60h] BYREF
  __int64 v54; // [rsp+30h] [rbp-58h] BYREF
  __int64 v55; // [rsp+38h] [rbp-50h] BYREF
  __int64 v56[9]; // [rsp+40h] [rbp-48h] BYREF

  v56[1] = __readfsqword(0x28u);
  v6 = sub_67FE0(a1, a3);
  if ( v6 == -1 )
    return 0;
  v7 = v6;
  if ( !a4 )
  {
    LOBYTE(v8) = sub_640C0((__int64)a1, (__int64)a2, v6);
    v9 = v8;
    if ( (_BYTE)v8 )
      return v9;
  }
  sub_67120(&v51, (__int64)a1, v7, nullptr);
  v10 = v51;
  if ( !v51 )
    return 0;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int16 *, __int64))(*(_QWORD *)v10 + 48LL))(v10, &v50, 2) )
    goto LABEL_24;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, v11);
  if ( !(_BYTE)v9 )
    goto LABEL_24;
  v12 = (__int64)(a1[1] - *a1) >> 3;
  v13 = sub_72FB0(v50);
  v14 = sub_72E20(v13);
  v15 = sub_732A0(v14);
  if ( v50 == 5401 )
  {
LABEL_47:
    v48 = v15;
    v35 = operator new(0x88u);
    *(_DWORD *)(v35 + 16) = v12;
    v17 = v35;
    *(_OWORD *)(v35 + 32) = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_94160);
    v37 = v51;
    *(_DWORD *)(v35 + 20) = v48;
    *(_QWORD *)(v35 + 8) = 0;
    *(_QWORD *)(v35 + 24) = 0;
    *(_WORD *)(v35 + 84) = -1;
    *(_QWORD *)(v35 + 48) = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(v35 + 56) = 0xFFFFFFFFLL;
    *(_DWORD *)(v35 + 80) = -1;
    *(_QWORD *)v35 = off_B08F0;
    *(_QWORD *)(v35 + 104) = 0;
    *(_QWORD *)(v35 + 112) = 0;
    *(__m128i *)(v35 + 64) = si128;
    *(_OWORD *)(v35 + 120) = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v37 + 48LL))(v37, v35 + 86, 18) )
      goto LABEL_22;
    *(_WORD *)(v17 + 84) = *(_WORD *)(v17 + 86);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 320LL))(v17, &v51, 0) )
      goto LABEL_22;
    v38 = *(_QWORD *)v17;
    *(_QWORD *)(v17 + 8) = a1;
    v39 = *(void (**)())(v38 + 312);
    if ( v39 != nullsub_15 )
      ((void (__fastcall *)(__int64))v39)(v17);
    if ( !v17 )
      goto LABEL_24;
    v22 = (__int64 *)a1[1];
    if ( v22 != (__int64 *)a1[2] )
      goto LABEL_44;
    v53 = v17;
    sub_57F80((__int64)a1, &v53);
    v23 = v53;
    if ( v53 )
      goto LABEL_37;
    goto LABEL_45;
  }
  if ( v50 <= 0x1519u )
  {
    if ( v50 == 5382 )
    {
LABEL_58:
      v49 = v15;
      v40 = operator new(0x68u);
      *(_DWORD *)(v40 + 16) = v12;
      v17 = v40;
      *(_OWORD *)(v40 + 32) = 0;
      v41 = v51;
      v42 = _mm_load_si128((const __m128i *)&xmmword_94160);
      *(_DWORD *)(v40 + 20) = v49;
      *(_QWORD *)(v40 + 8) = 0;
      *(_QWORD *)(v40 + 24) = 0;
      *(_DWORD *)(v40 + 80) = -1;
      *(_QWORD *)(v40 + 48) = 0xFFFFFFFF00000001LL;
      *(_QWORD *)(v40 + 56) = 0xFFFFFFFFLL;
      *(_WORD *)(v40 + 84) = -1;
      *(_QWORD *)v40 = off_B0BA0;
      *(_QWORD *)(v40 + 96) = 0;
      *(__m128i *)(v40 + 64) = v42;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v41 + 48LL))(v41, v40 + 86, 10) )
        goto LABEL_22;
      *(_WORD *)(v17 + 84) = *(_WORD *)(v17 + 86);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 320LL))(v17, &v51, 0) )
        goto LABEL_22;
      v43 = *(_QWORD *)v17;
      *(_QWORD *)(v17 + 8) = a1;
      v44 = *(void (**)())(v43 + 312);
      if ( v44 != nullsub_15 )
        ((void (__fastcall *)(__int64))v44)(v17);
      if ( !v17 )
        goto LABEL_24;
      v22 = (__int64 *)a1[1];
      if ( v22 != (__int64 *)a1[2] )
        goto LABEL_44;
      v54 = v17;
      sub_57F80((__int64)a1, &v54);
      v23 = v54;
      if ( v54 )
        goto LABEL_37;
      goto LABEL_45;
    }
    if ( v50 > 0x1506u )
    {
      if ( v50 == 5383 )
      {
        v45 = v15;
        v16 = operator new(0x68u);
        *(_DWORD *)(v16 + 16) = v12;
        v17 = v16;
        *(_OWORD *)(v16 + 32) = 0;
        v18 = _mm_load_si128((const __m128i *)&xmmword_94160);
        *(_DWORD *)(v16 + 20) = v45;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 24) = 0;
        *(_WORD *)(v16 + 84) = -1;
        v19 = v51;
        *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000001LL;
        *(_QWORD *)(v16 + 56) = 0xFFFFFFFFLL;
        *(_DWORD *)(v16 + 80) = -1;
        *(_QWORD *)v16 = off_B1D18;
        *(__m128i *)(v16 + 64) = v18;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, v16 + 86, 14) )
        {
          *(_WORD *)(v17 + 84) = *(_WORD *)(v17 + 86);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 320LL))(v17, &v51, 0) )
          {
            v20 = *(_QWORD *)v17;
            *(_QWORD *)(v17 + 8) = a1;
            v21 = *(void (**)())(v20 + 312);
            if ( v21 != nullsub_15 )
              ((void (__fastcall *)(__int64))v21)(v17);
            if ( v17 )
            {
              v22 = (__int64 *)a1[1];
              if ( v22 == (__int64 *)a1[2] )
              {
                v52 = v17;
                sub_57F80((__int64)a1, &v52);
                v23 = v52;
                if ( !v52 )
                  goto LABEL_45;
LABEL_37:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 272LL))(v23);
                goto LABEL_45;
              }
LABEL_44:
              *v22 = v17;
              a1[1] += 8LL;
              goto LABEL_45;
            }
            goto LABEL_24;
          }
        }
LABEL_22:
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 272LL))(v17);
        goto LABEL_24;
      }
      goto LABEL_56;
    }
    if ( (unsigned __int16)(v50 - 5380) > 1u )
    {
LABEL_56:
      if ( under_debugger )
        BUG();
      interr(30569);
      goto LABEL_58;
    }
    goto LABEL_47;
  }
  if ( v50 == 5642 )
  {
    v47 = v15;
    v30 = operator new(0x70u);
    *(_DWORD *)(v30 + 16) = v12;
    v17 = v30;
    *(_OWORD *)(v30 + 32) = 0;
    v31 = v51;
    v32 = _mm_load_si128((const __m128i *)&xmmword_94160);
    *(_DWORD *)(v30 + 20) = v47;
    *(_QWORD *)(v30 + 8) = 0;
    *(_QWORD *)(v30 + 24) = 0;
    *(_DWORD *)(v30 + 80) = -1;
    *(_QWORD *)(v30 + 48) = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(v30 + 56) = 0xFFFFFFFFLL;
    *(_WORD *)(v30 + 84) = -1;
    *(_QWORD *)v30 = off_B0CF8;
    *(_QWORD *)(v30 + 104) = 0;
    *(__m128i *)(v30 + 64) = v32;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 48LL))(v31, v30 + 86, 12) )
      goto LABEL_22;
    *(_WORD *)(v17 + 84) = *(_WORD *)(v17 + 86);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 320LL))(v17, &v51, 0) )
      goto LABEL_22;
    v33 = *(_QWORD *)v17;
    *(_QWORD *)(v17 + 8) = a1;
    v34 = *(void (**)())(v33 + 312);
    if ( v34 != nullsub_15 )
      ((void (__fastcall *)(__int64))v34)(v17);
    if ( !v17 )
      goto LABEL_24;
    v22 = (__int64 *)a1[1];
    if ( v22 != (__int64 *)a1[2] )
      goto LABEL_44;
    v56[0] = v17;
    sub_57F80((__int64)a1, v56);
    v23 = v56[0];
    if ( v56[0] )
      goto LABEL_37;
LABEL_45:
    if ( a2 )
      *a2 = v12;
    goto LABEL_25;
  }
  if ( v50 > 0x160Au )
  {
    if ( v50 != 5643 )
      goto LABEL_56;
  }
  else if ( (unsigned __int16)(v50 - 5640) > 1u )
  {
    goto LABEL_56;
  }
  v46 = v15;
  v25 = operator new(0x90u);
  *(_DWORD *)(v25 + 16) = v12;
  v17 = v25;
  *(_OWORD *)(v25 + 32) = 0;
  v26 = _mm_load_si128((const __m128i *)&xmmword_94160);
  v27 = v51;
  *(_DWORD *)(v25 + 20) = v46;
  *(_QWORD *)(v25 + 8) = 0;
  *(_QWORD *)(v25 + 24) = 0;
  *(_WORD *)(v25 + 84) = -1;
  *(_QWORD *)(v25 + 48) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(v25 + 56) = 0xFFFFFFFFLL;
  *(_DWORD *)(v25 + 80) = -1;
  *(_QWORD *)v25 = off_B0A48;
  *(_QWORD *)(v25 + 112) = 0;
  *(_QWORD *)(v25 + 120) = 0;
  *(__m128i *)(v25 + 64) = v26;
  *(_OWORD *)(v25 + 128) = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 48LL))(v27, v25 + 86, 20) )
    goto LABEL_22;
  *(_WORD *)(v17 + 84) = *(_WORD *)(v17 + 86);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 320LL))(v17, &v51, 0) )
    goto LABEL_22;
  v28 = *(_QWORD *)v17;
  *(_QWORD *)(v17 + 8) = a1;
  v29 = *(void (**)())(v28 + 312);
  if ( v29 != nullsub_15 )
    ((void (__fastcall *)(__int64))v29)(v17);
  if ( v17 )
  {
    v22 = (__int64 *)a1[1];
    if ( v22 == (__int64 *)a1[2] )
    {
      v55 = v17;
      sub_57F80((__int64)a1, &v55);
      v23 = v55;
      if ( !v55 )
        goto LABEL_45;
      goto LABEL_37;
    }
    goto LABEL_44;
  }
LABEL_24:
  v9 = 0;
LABEL_25:
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
  return v9;
}
