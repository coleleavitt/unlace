__int64 __fastcall sub_154100(__int64 a1, unsigned __int64 *a2, const __m128i *a3, _DWORD *a4, __m128i a5, __m128 a6)
{
  bool v6; // zf
  unsigned int v10; // ebx
  __int64 v12; // r13
  _DWORD *v13; // rax
  __int64 v14; // r13
  __int128 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  char v31; // al
  char v32; // al
  __int64 v33; // rcx
  int v34; // r9d
  __int128 v35; // rdi
  _DWORD *v36; // rdx
  __int128 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rax
  char v43; // al
  __int64 v44; // [rsp+8h] [rbp-B8h]
  __int64 v45; // [rsp+8h] [rbp-B8h]
  unsigned __int8 *v46; // [rsp+10h] [rbp-B0h]
  __int64 v47; // [rsp+18h] [rbp-A8h]
  __int64 v48; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v49; // [rsp+18h] [rbp-A8h]
  __int64 v50; // [rsp+20h] [rbp-A0h]
  unsigned __int8 *v51; // [rsp+28h] [rbp-98h]
  __int64 v52; // [rsp+28h] [rbp-98h]
  __int64 v53; // [rsp+28h] [rbp-98h]
  __int64 v54; // [rsp+28h] [rbp-98h]
  __int64 v55; // [rsp+30h] [rbp-90h]
  _DWORD *v57; // [rsp+40h] [rbp-80h] BYREF
  _DWORD *v58; // [rsp+48h] [rbp-78h] BYREF
  _QWORD v59[2]; // [rsp+50h] [rbp-70h] BYREF
  _BYTE v60[16]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v61[10]; // [rsp+70h] [rbp-50h] BYREF

  v61[3] = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v6 = *(_BYTE *)(a1 + 32) == 4;
  v59[1] = 0;
  v59[0] = 0xFFFFFFFF00000000LL;
  if ( v6 )
  {
    v12 = *(_QWORD *)(a1 + 40);
    if ( *(_DWORD *)v12 != 21 )
      goto LABEL_4;
    v51 = (unsigned __int8 *)(a1 + 48);
    v55 = v12 + 48;
    if ( sub_125B60((unsigned __int8 *)(v12 + 48), a1 + 48, 0, *(double *)a5.m128i_i64) )
    {
      v55 = v12 + 32;
    }
    else if ( !sub_125B60((unsigned __int8 *)(v12 + 32), (__int64)v51, 0, *(double *)a5.m128i_i64) )
    {
      goto LABEL_4;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 48) != 14
      || !sub_125B60(*(unsigned __int8 **)(a1 + 56), *(_QWORD *)(a1 + 56) + 16LL, 0, *(double *)a5.m128i_i64)
      || (*(_BYTE *)(a1 + 36) & 1) != 0 )
    {
      goto LABEL_4;
    }
    v50 = *(_QWORD *)(a1 + 56);
    sub_123A40((__int64)v60, (unsigned __int8 *)(a1 + 32), v21, v22);
    sub_123A40((__int64)v61, (unsigned __int8 *)(a1 + 32), v23, v24);
    if ( !(unsigned __int8)sub_1272B0((__int64)v60, a2, *(_DWORD *)(a1 + 36) / 2, 0, *(double *)a5.m128i_i64) )
      goto LABEL_21;
    if ( !(unsigned __int8)sub_127850((__int64)v61, a2, *(_DWORD *)(a1 + 36) / 2, 0, a5) )
      goto LABEL_21;
    v57 = a4;
    v25 = sub_129440((__int64)a3, (__int64)v60, (__int64)&v57, 0, *(double *)a5.m128i_i64, a6);
    v26 = v25;
    if ( !v25 )
      goto LABEL_21;
    if ( *(_DWORD *)v25 != 21 )
      goto LABEL_21;
    if ( v57 != a4 )
    {
      v52 = v25;
      v27 = sub_125B60((unsigned __int8 *)(v25 + 64), (__int64)v60, 0, *(double *)a5.m128i_i64);
      v26 = v52;
      if ( !v27 )
        goto LABEL_21;
    }
    v53 = v26;
    v58 = a4;
    v28 = sub_129440((__int64)a3, (__int64)v61, (__int64)&v58, 0, *(double *)a5.m128i_i64, a6);
    v29 = v53;
    v30 = v28;
    if ( !v28 )
      goto LABEL_21;
    if ( *(_DWORD *)v28 != 21 )
      goto LABEL_21;
    if ( v58 != a4 )
    {
      v47 = v53;
      v54 = v28;
      v31 = sub_125B60((unsigned __int8 *)(v28 + 64), (__int64)v61, 0, *(double *)a5.m128i_i64);
      v30 = v54;
      v29 = v47;
      if ( !v31 )
        goto LABEL_21;
    }
    v44 = v30;
    v48 = v29;
    v51 = (unsigned __int8 *)v50;
    v46 = (unsigned __int8 *)(v29 + 48);
    v32 = sub_125B60((unsigned __int8 *)(v29 + 48), v50, 0, *(double *)a5.m128i_i64);
    v33 = v44;
    if ( v32 )
    {
      v46 = (unsigned __int8 *)(v48 + 32);
    }
    else
    {
      v43 = sub_125B60((unsigned __int8 *)(v48 + 32), v50, 0, *(double *)a5.m128i_i64);
      v33 = v44;
      if ( !v43 )
      {
LABEL_21:
        sub_11CDA0((__int64)v61);
        sub_11CDA0((__int64)v60);
        goto LABEL_4;
      }
    }
    v45 = v33;
    v49 = (unsigned __int8 *)(v33 + 48);
    if ( sub_125B60((unsigned __int8 *)(v33 + 48), v50, 0, *(double *)a5.m128i_i64) )
    {
      v49 = (unsigned __int8 *)(v45 + 32);
    }
    else if ( !sub_125B60((unsigned __int8 *)(v45 + 32), v50, 0, *(double *)a5.m128i_i64) )
    {
      goto LABEL_21;
    }
    if ( v57 == a4 && a4 == v58 )
    {
      if ( !(unsigned __int8)sub_12CF30(a3[4].m128i_i64[0], (__int64)v46, v49, (__int64)v59, 1, v34, a5) )
        goto LABEL_21;
    }
    else
    {
      if ( !(unsigned __int8)sub_130BC0(a3, (__int64)v57, (__int64)v46, (__int64)v58, (__int64)v49, 0, a5, a6) )
        goto LABEL_21;
      *((_QWORD *)&v35 + 1) = a1;
      *(_QWORD *)&v35 = a3;
      sub_B1520(v35, (__int64)v59, v57, v46, (__int64)v58, *(double *)a5.m128i_i64, (__int64)v49, 0);
      if ( v58 && sub_122240((__int64)v57, *((_QWORD *)v58 + 1), 0) )
        v36 = v58;
      else
        v36 = v57;
      *((_QWORD *)&v37 + 1) = v59;
      *(_QWORD *)&v37 = a3;
      if ( (unsigned __int8)sub_A9CB0(v37, (__int64)v36, (__int64)a4) )
        goto LABEL_21;
    }
    sub_11CDA0((__int64)v61);
    sub_11CDA0((__int64)v60);
    v55 = 0;
  }
  v61[0] = (__int64)a4;
  v13 = sub_30D610((__int64)a2, (__int64)a3, v61, v51);
  v14 = (__int64)v13;
  if ( !v13 )
    goto LABEL_4;
  *((_QWORD *)&v15 + 1) = v13;
  *(_QWORD *)&v15 = a3;
  if ( (unsigned __int8)sub_A9CB0(v15, v61[0], (__int64)a4) )
    goto LABEL_4;
  if ( *(_BYTE *)(a1 + 32) == 4 )
  {
    v38 = v55;
    if ( *(_BYTE *)v55 == 4 )
    {
      v42 = *(_DWORD **)(v55 + 8);
      if ( *v42 == 8 )
        v38 = (__int64)(v42 + 8);
    }
    v39 = v14;
    if ( *(_BYTE *)v14 == 4 )
    {
      v41 = *(_DWORD **)(v14 + 8);
      if ( *v41 == 8 )
        v39 = (__int64)(v41 + 8);
    }
    if ( !(unsigned __int8)sub_152EE0(
                             (__int64)a2,
                             (__int64)v59,
                             v38,
                             v39,
                             *(_QWORD *)(a1 + 24),
                             a3,
                             a5,
                             a6,
                             (__int64)a4) )
    {
      if ( *(_BYTE *)v55 != 4 )
        goto LABEL_4;
      v40 = *(_QWORD *)(v55 + 8);
      if ( *(_DWORD *)v40 != 24 || !sub_125B60((unsigned __int8 *)(v40 + 32), v14, 0, *(double *)a5.m128i_i64) )
        goto LABEL_4;
      sub_125180((unsigned __int8 *)v59, (unsigned __int8 *)v55);
    }
LABEL_14:
    v17 = sub_153040(a3[4].m128i_i64[0], (__int64)v59, *(_QWORD *)(a1 + 24));
    sub_11CDA0(a1 + 32);
    v18 = HIDWORD(v59[0]);
    *(_BYTE *)(a1 + 32) = 4;
    *(_QWORD *)(a1 + 40) = v17;
    *(_DWORD *)(a1 + 36) = v18;
    sub_11CDA0(a1 + 48);
    v19 = *(_DWORD *)(a1 + 68);
    v20 = 9;
    if ( *(_DWORD *)(a1 + 36) >= v19 )
    {
      v20 = 4;
      if ( *(_DWORD *)(a1 + 36) > v19 )
        v20 = 10;
    }
    *(_DWORD *)a1 = v20;
    v10 = 1;
    goto LABEL_5;
  }
  if ( sub_152650((__int64)v59, a2, v14, v16, a5) )
    goto LABEL_14;
LABEL_4:
  v10 = 0;
LABEL_5:
  sub_11CDA0((__int64)v59);
  return v10;
}

