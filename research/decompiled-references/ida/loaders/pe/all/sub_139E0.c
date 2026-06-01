__int64 __fastcall sub_139E0(int a1, const char *a2, __int64 a3, unsigned __int64 *a4)
{
  _DWORD *v4; // r13
  unsigned int v5; // edi
  __int64 v6; // r12
  bool (__fastcall *v7)(__int64, _DWORD *, unsigned int); // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // dl
  unsigned int v16; // r14d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rbp
  __int64 v21; // rdx
  unsigned __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 *v28; // rax
  __int64 v29; // rbp
  char v30; // r12
  int v31; // r13d
  unsigned int v32; // ebp
  unsigned int v33; // r12d
  unsigned __int64 v34; // rbp
  int v35; // r13d
  unsigned __int64 v36; // r12
  char v38; // [rsp+0h] [rbp-138h]
  unsigned __int64 v40; // [rsp+8h] [rbp-130h]
  __int64 v41; // [rsp+10h] [rbp-128h]
  unsigned int v42; // [rsp+1Ch] [rbp-11Ch]
  int v43; // [rsp+20h] [rbp-118h]
  _DWORD *v44; // [rsp+20h] [rbp-118h]
  int v45; // [rsp+28h] [rbp-110h]
  int v46; // [rsp+2Ch] [rbp-10Ch]
  __int16 v47; // [rsp+34h] [rbp-104h]
  unsigned __int16 v48; // [rsp+36h] [rbp-102h]
  unsigned int v49; // [rsp+38h] [rbp-100h]
  unsigned int v50; // [rsp+3Ch] [rbp-FCh]
  unsigned __int64 v51; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-F0h]
  __m128i si128; // [rsp+50h] [rbp-E8h]
  __int64 v54; // [rsp+60h] [rbp-D8h]
  __int16 v55; // [rsp+68h] [rbp-D0h]
  __int128 v56; // [rsp+70h] [rbp-C8h]
  __int64 v57; // [rsp+80h] [rbp-B8h]
  __int64 v58; // [rsp+88h] [rbp-B0h]
  int v59; // [rsp+90h] [rbp-A8h]
  __int64 v60; // [rsp+98h] [rbp-A0h]
  int v61; // [rsp+A0h] [rbp-98h]
  __int64 v62; // [rsp+A8h] [rbp-90h]
  int v63; // [rsp+B0h] [rbp-88h]
  __int64 v64; // [rsp+B8h] [rbp-80h]
  int v65; // [rsp+C0h] [rbp-78h]
  __int64 v66; // [rsp+C8h] [rbp-70h]
  unsigned int v67; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v68; // [rsp+F8h] [rbp-40h]

  v4 = (_DWORD *)a3;
  v5 = *(_DWORD *)(a3 + 8);
  v68 = __readfsqword(0x28u);
  *(_QWORD *)(a3 + 20) = 8;
  if ( !v5 )
  {
    v34 = sub_EE10();
    if ( (unsigned int)get_segm_qty() )
      set_segm_end();
    else
      add_segm();
    set_name();
    put_byte();
    create_insn();
    v51 = v34;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2CFE0);
    v52 = v34 + 1;
    v54 = 0;
    v55 = 0;
    v57 = 0xFFFFFFFFLL;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v56 = 0;
    add_func_ex();
    *a4 = v34 + 1;
    v4[2] = v34;
    v4[6] = -1;
    return 0;
  }
  v6 = qword_349B0;
  v7 = **(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))qword_349B0;
  if ( v7 == sub_DAB0 )
  {
    if ( qword_349A8 && *(_DWORD *)qword_349A8 == 3 )
      goto LABEL_15;
    v8 = *(_QWORD *)(qword_349B0 + 16) - 1LL;
    if ( v8 >= 0 )
    {
      v9 = (_QWORD *)(*(_QWORD *)(qword_349B0 + 8) + 32LL * *(_QWORD *)(qword_349B0 + 16) - 32);
      while ( (unsigned __int64)v5 < *v9 || (unsigned __int64)v5 >= v9[1] )
      {
        --v8;
        v9 -= 4;
        if ( v8 == -1 )
          goto LABEL_10;
      }
      if ( v5 + v9[2] - *v9 != -1 )
        goto LABEL_15;
    }
LABEL_10:
    if ( v5 < (__int64)(*(_QWORD *)(qword_349B0 + 592) + *(unsigned int *)(qword_349B0 + 156)) )
    {
LABEL_15:
      qlseek();
      goto LABEL_16;
    }
    if ( !*(_BYTE *)(qword_349B0 + 985)
      && (int)sub_CFC0(
                1u,
                (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                v5) <= 0 )
    {
      sub_DA00(
        0,
        (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
        v10,
        v11,
        v12,
        v13,
        (char)a4);
    }
    *(_BYTE *)(v6 + 985) = 1;
    qlseek();
  }
  else
  {
    v7(qword_349B0, (_DWORD *)qword_349A8, v5);
  }
LABEL_16:
  lread();
  v14 = v47 & 3;
  if ( (v47 & 3) == 2 )
  {
    v46 = 8;
    v41 = 1;
    v16 = (unsigned __int8)v47 >> 2;
    v45 = 1;
    v43 = 0;
    v42 = 0;
  }
  else
  {
    if ( v14 != 3 )
    {
      sub_6F70((__int64)"%s: bad method header bits %02X at RVA 0x%X, skipped\n", a2, v14, (unsigned int)v4[2]);
      return 0;
    }
    v16 = v49;
    v46 = v48;
    v45 = 4 * (HIBYTE(v47) >> 4);
    v42 = v50;
    v43 = v47 & 0xFFF;
    v41 = v45;
  }
  v17 = sub_EE10();
  v18 = (unsigned int)v4[2];
  v19 = v17;
  v20 = v16 + v17;
  v21 = *(_QWORD *)(qword_349B0 + 16) - 1LL;
  if ( v21 < 0 )
  {
LABEL_27:
    v23 = -1;
  }
  else
  {
    v22 = (unsigned __int64 *)(*(_QWORD *)(qword_349B0 + 8) + 32LL * *(_QWORD *)(qword_349B0 + 16) - 32);
    while ( v18 < *v22 || v18 >= v22[1] )
    {
      --v21;
      v22 -= 4;
      if ( v21 == -1 )
        goto LABEL_27;
    }
    v23 = v22[2] + v18 - *v22;
  }
  v24 = qlsize() - (v23 + v41);
  if ( v19 >= v20 || v16 > v24 )
  {
    sub_6F70((__int64)"%s: wrong method length %u at RVA 0x%X, skipped\n", a2, v16, v4[2]);
  }
  else
  {
    file2base();
    if ( (unsigned int)get_segm_qty() )
      set_segm_end();
    else
      add_segm();
    set_name();
    create_insn();
    v51 = v19;
    v55 = 0;
    v52 = v20;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2CFE0);
    v54 = 0;
    v57 = 0xFFFFFFFFLL;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v56 = 0;
    add_func_ex();
    *a4 = v20;
    if ( dword_349A4 == a1 )
    {
      setinf();
      setinf();
    }
    v25 = qword_349B0;
    v26 = (unsigned int)v4[2];
    v4[5] = v46;
    v4[6] = v43;
    v27 = *(_QWORD *)(v25 + 16) - 1LL;
    if ( v27 < 0 )
    {
      v27 = -1;
    }
    else
    {
      v28 = (unsigned __int64 *)(*(_QWORD *)(v25 + 8) + 32LL * *(_QWORD *)(v25 + 16) - 32);
      while ( v26 < *v28 || v26 >= v28[1] )
      {
        --v27;
        v28 -= 4;
        if ( v27 == -1 )
          goto LABEL_39;
      }
      v27 = v28[2] + v26 - *v28;
    }
LABEL_39:
    v29 = v27 + v16 + (__int64)v45;
    if ( (v43 & 8) != 0 )
    {
      v44 = v4;
      do
      {
        v40 = (v29 + 3) & 0xFFFFFFFFFFFFFFFCLL;
        qlseek();
        lread();
        v30 = v67;
        v38 = v67;
        qlseek();
        if ( (v30 & 0x40) != 0 )
        {
          v35 = 0;
          v32 = v67 >> 8;
          v36 = (2863311531u * (unsigned __int64)(v67 >> 8)) >> 36;
          if ( v67 >> 8 > 0x17 )
          {
            do
            {
              ++v35;
              lread();
              sub_13890(v19, v16, (unsigned int *)&v51);
            }
            while ( (_DWORD)v36 != v35 );
          }
        }
        else
        {
          v31 = 0;
          v32 = BYTE1(v67);
          v33 = BYTE1(v67) / 0xCu;
          if ( BYTE1(v67) > 0xBu )
          {
            do
            {
              ++v31;
              lread();
              sub_13730(v19, v16, (__int64)&v51);
            }
            while ( v33 != v31 );
          }
        }
        v29 = v40 + v32 + 4;
      }
      while ( v38 < 0 );
      v4 = v44;
    }
    v4[2] = v19;
  }
  return v42;
}
