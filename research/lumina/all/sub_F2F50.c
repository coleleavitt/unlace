__int64 __fastcall sub_F2F50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        double a7)
{
  __int64 v7; // r15
  unsigned int v8; // r13d
  __int64 v10; // r12
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rbp
  char v17; // bl
  char v18; // al
  unsigned int v19; // ebx
  __int64 v20; // rdx
  int v21; // r14d
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rbp
  int v28; // r15d
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // edx
  signed int v33; // eax
  _DWORD *v34; // rcx
  __int64 v35; // rbp
  unsigned int v36; // r12d
  __int64 *v37; // r15
  int v38; // edx
  int v39; // eax
  _DWORD *v40; // rcx
  unsigned int v41; // r8d
  unsigned int v42; // ecx
  __int64 v43; // rdi
  int v44; // r14d
  int v45; // r13d
  int v46; // ebx
  char v47; // al
  __int64 v48; // rax
  int v49; // ecx
  _DWORD *v50; // rdx
  int v51; // eax
  _DWORD *v52; // rdx
  int v53; // eax
  _DWORD *v54; // rdx
  int v55; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  int v59; // edx
  int v60; // ebx
  _DWORD *v61; // rdx
  int v62; // ebx
  int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r9
  _DWORD *v66; // rdx
  char *v67; // r8
  int v68; // edx
  __int64 v69; // [rsp+8h] [rbp-B0h]
  unsigned int v72; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v75; // [rsp+28h] [rbp-90h]
  unsigned int v76; // [rsp+2Ch] [rbp-8Ch]
  __int64 *v77; // [rsp+30h] [rbp-88h]
  __int64 *v78; // [rsp+38h] [rbp-80h]
  unsigned int v79; // [rsp+40h] [rbp-78h]
  unsigned int v80; // [rsp+44h] [rbp-74h]
  __int64 v81; // [rsp+48h] [rbp-70h]
  char v82; // [rsp+53h] [rbp-65h]
  signed int v83; // [rsp+54h] [rbp-64h]
  unsigned int v84; // [rsp+58h] [rbp-60h]
  int v85; // [rsp+5Ch] [rbp-5Ch]
  __int64 v86; // [rsp+60h] [rbp-58h]
  unsigned int v87; // [rsp+68h] [rbp-50h]
  unsigned int v88; // [rsp+6Ch] [rbp-4Ch]
  unsigned int v89; // [rsp+74h] [rbp-44h]
  unsigned int v90; // [rsp+78h] [rbp-40h]
  unsigned int v91; // [rsp+7Ch] [rbp-3Ch]

  v7 = a1;
  v8 = a5 + 9;
  v10 = *(_QWORD *)(a1 + 16);
  v69 = *(_QWORD *)a1;
  result = a5 + 9;
  if ( *(_DWORD *)(a1 + 56) >= (signed int)(a5 + 9) )
    result = *(unsigned int *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = result;
  if ( !v10 )
  {
    result = (__int64)sub_E2050((__int64 *)a1);
    v10 = result;
  }
  if ( !v10 )
    return result;
  if ( !a2 )
    return result;
  if ( *(_BYTE *)(a2 + 63) )
    return result;
  result = sub_C83C0("sqlite\\_%", *(char **)a2, "%_", 0x5Cu);
  if ( !(_DWORD)result )
    return result;
  v12 = *(_QWORD *)(a2 + 96);
  if ( v12 )
  {
    v83 = sub_CFB20(v69, v12);
    result = sub_E4020(a1, 28, v14, 0, *(_QWORD *)(v13 + 32LL * v83));
    if ( (_DWORD)result )
      return result;
    if ( v83 == 1 )
      goto LABEL_13;
    v67 = *(char **)a2;
    v68 = *(_DWORD *)(a2 + 40);
  }
  else
  {
    result = sub_E4020(a1, 28, *(_QWORD *)a2, 0, *(_QWORD *)(*(_QWORD *)(v69 + 32) - 0x100000LL));
    if ( (_DWORD)result )
      return result;
    v67 = *(char **)a2;
    v68 = *(_DWORD *)(a2 + 40);
    v83 = -32768;
  }
  sub_E30E0(a1, v83, v68, 0, (__int64)v67);
LABEL_13:
  v79 = a5 + 4;
  v89 = a5 + 6;
  v87 = a5 + 7;
  v90 = a5 + 8;
  v72 = a6 + 1;
  v15 = a6 + 2;
  if ( *(_DWORD *)(a1 + 52) >= (signed int)(a6 + 2) )
    v15 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 52) = v15;
  sub_F2630(a1, a6, v83, a2, 112, a7);
  sub_E17B0(v10, a5 + 6, *(_QWORD *)a2);
  v16 = *(_QWORD *)(a2 + 16);
  if ( v16 )
  {
    v82 = 1;
    v86 = a2;
    v75 = v8;
    v80 = a5 + 1;
    v76 = a5 + 2;
    while ( 1 )
    {
      if ( v16 == a3 || !a3 )
      {
        v17 = v82;
        if ( !*(_QWORD *)(v16 + 72) )
          v17 = 0;
        v18 = *(_BYTE *)(v16 + 99);
        v82 = v17;
        if ( *(char *)(v86 + 48) < 0 && (v18 & 3) == 2 )
        {
          v19 = *(unsigned __int16 *)(v16 + 94);
          v20 = *(_QWORD *)v86;
          v21 = v19 - 1;
        }
        else
        {
          v19 = *(unsigned __int16 *)(v16 + 96);
          v20 = *(_QWORD *)v16;
          v21 = v19 - 1;
          if ( (v18 & 8) != 0 )
            v21 = *(unsigned __int16 *)(v16 + 94) - 1;
        }
        sub_E17B0(v10, v87, v20);
        v22 = v21 + v75;
        if ( (signed int)(v21 + v75) < *(_DWORD *)(v7 + 56) )
          v22 = *(_DWORD *)(v7 + 56);
        *(_DWORD *)(v7 + 56) = v22;
        sub_E1710(v10, 112, v72, *(_DWORD *)(v16 + 88), v83);
        sub_F2600(v7, v16, a7);
        sub_E1710(v10, 71, v19, v76, 0);
        sub_E1710(v10, 71, *(unsigned __int16 *)(v16 + 94), a5 + 3, 0);
        v85 = sub_E1710(v10, 35, v72, 0, 0);
        sub_E1710(v10, 98, v72, v79, 1u);
        sub_E1710(v10, 71, *(_DWORD *)(v69 + 728), a5 + 5, 0);
        sub_E17F0((__int64 *)v7, *(_QWORD *)(v7 + 16), 0, v76, v80, 4, (__int64)&unk_23BD60, 0);
        sub_E1710(v10, 71, 0, v76, 0);
        if ( v21 <= 0 )
        {
          v84 = *(_DWORD *)(v10 + 144);
          goto LABEL_45;
        }
        v23 = *(_DWORD *)(v7 + 68) - 1;
        *(_DWORD *)(v7 + 68) = v23;
        v88 = v23;
        v77 = sub_DBF10(v69, 4LL * v21);
        if ( v77 )
          break;
      }
LABEL_66:
      v16 = *(_QWORD *)(v16 + 40);
      if ( !v16 )
      {
        result = v82 & 1;
        goto LABEL_68;
      }
    }
    sub_E1710(v10, 8, 0, 0, 0);
    v84 = *(_DWORD *)(v10 + 144);
    if ( v21 == 1 && *(_WORD *)(v16 + 94) == 1 && *(_BYTE *)(v16 + 98) )
      sub_E1710(v10, 51, v75, v88, 0);
    v24 = (unsigned int)(v21 - 1);
    v91 = v21;
    v25 = 0;
    v26 = v16;
    v78 = (__int64 *)v7;
    v81 = v24 + 1;
    do
    {
      v27 = sub_F2480(v78, *(unsigned __int8 **)(*(_QWORD *)(v26 + 64) + 8 * v25), a7);
      sub_E1710(v10, 71, v25, v76, 0);
      sub_E1710(v10, 94, v72, v25, v79);
      v28 = sub_E1710(v10, 52, v79, 0, v75 + (unsigned int)v25);
      sub_DCC50(v10, v28, v27, 4294967294LL, v29, v30);
      *((_DWORD *)v77 + v25) = v28;
      v31 = *(int *)(v10 + 144);
      if ( (int)v31 > 0 )
        *(_WORD *)(*(_QWORD *)(v10 + 136) + 24 * v31 - 22) = 128;
      ++v25;
    }
    while ( v81 != v25 );
    sub_E1710(v10, 71, v91, v76, 0);
    sub_E1710(v10, 8, 0, v88, 0);
    v32 = *(_DWORD *)(v10 + 144);
    v33 = v84 - 1;
    if ( (int)(v84 - 1) < 0 )
      v33 = v32 - 1;
    v34 = &unk_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
      v34 = (_DWORD *)(*(_QWORD *)(v10 + 136) + 24LL * v33);
    v35 = v10;
    v36 = 0;
    v34[2] = v32;
    v37 = v77;
    do
    {
      v38 = *(_DWORD *)(v35 + 144);
      v39 = *(_DWORD *)v37;
      if ( *(int *)v37 < 0 )
        v39 = v38 - 1;
      v40 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v35 + 103LL) )
        v40 = (_DWORD *)(*(_QWORD *)(v35 + 136) + 24LL * v39);
      v41 = v36 + v75;
      v40[2] = v38;
      v42 = v36++;
      v37 = (__int64 *)((char *)v37 + 4);
      sub_E1710(v35, 94, v72, v42, v41);
    }
    while ( v91 != v36 );
    v10 = v35;
    v7 = (__int64)v78;
    v43 = v35;
    v16 = v26;
    sub_E0BB0(v43, v88);
    sub_C9250(v69, v77);
LABEL_45:
    sub_E17F0((__int64 *)v7, *(_QWORD *)(v7 + 16), 1u, v80, v79, 2, (__int64)&unk_23BD00, 0);
    if ( !*(_DWORD *)(v69 + 728) )
    {
      sub_E1710(v10, 38, v72, v84, 0);
LABEL_59:
      sub_E17F0((__int64 *)v7, *(_QWORD *)(v7 + 16), 0, v80, v90, 1, (__int64)&unk_23BCA0, 0);
      v55 = sub_E1710(v10, 97, v89, 3u, v79);
      sub_DCC50(v10, v55, (__int64)"BBB", 0, v56, v57);
      sub_E1710(v10, 127, a4, a5, 0);
      sub_E1710(v10, 128, a4, v79, a5);
      v58 = *(int *)(v10 + 144);
      if ( (int)v58 > 0 )
      {
        *(_WORD *)(*(_QWORD *)(v10 + 136) + 24 * v58 - 22) = 8;
        LODWORD(v58) = *(_DWORD *)(v10 + 144);
      }
      v59 = v58 - 1;
      if ( v85 >= 0 )
        v59 = v85;
      v60 = v59;
      v61 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
        v61 = (_DWORD *)(*(_QWORD *)(v10 + 136) + 24LL * v60);
      v61[2] = v58;
      goto LABEL_66;
    }
    v44 = sub_E1710(v10, 50, v79, 0, 0);
    v45 = sub_E1710(v10, 15, v79, 0, 0);
    v46 = sub_E1710(v10, 23, v72, 0, v75);
    v47 = *(_BYTE *)(*(_QWORD *)v10 + 103LL);
    if ( v47 )
    {
      v49 = *(_DWORD *)(v10 + 144);
      v50 = &unk_241F50;
      if ( v44 >= 0 )
      {
LABEL_50:
        v50[2] = v49;
        sub_E1710(v10, 38, v72, v84, 0);
        v51 = *(_DWORD *)(v10 + 144);
        if ( v45 < 0 )
          v45 = v51 - 1;
        v52 = &unk_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
          v52 = (_DWORD *)(*(_QWORD *)(v10 + 136) + 24LL * v45);
        v52[2] = v51;
        v53 = *(_DWORD *)(v10 + 144);
        if ( v46 < 0 )
          v46 = v53 - 1;
        v54 = &unk_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
          v54 = (_DWORD *)(*(_QWORD *)(v10 + 136) + 24LL * v46);
        v54[2] = v53;
        goto LABEL_59;
      }
    }
    else
    {
      v48 = *(_QWORD *)(v10 + 136) + 24LL * v46;
      *(_BYTE *)(v48 + 1) = -3;
      *(_DWORD *)(v48 + 16) = 1;
      v49 = *(_DWORD *)(v10 + 144);
      v47 = *(_BYTE *)(*(_QWORD *)v10 + 103LL);
      if ( v44 >= 0 )
        goto LABEL_48;
    }
    v44 = v49 - 1;
LABEL_48:
    v50 = &unk_241F50;
    if ( !v47 )
      v50 = (_DWORD *)(*(_QWORD *)(v10 + 136) + 24LL * v44);
    goto LABEL_50;
  }
  result = 1;
LABEL_68:
  if ( !a3 && (_BYTE)result )
  {
    sub_E1710(v10, 98, a6, v90, 0);
    v62 = sub_E1710(v10, 16, v90, 0, 0);
    sub_E1710(v10, 75, 0, v87, 0);
    v63 = sub_E1710(v10, 97, v89, 3u, v79);
    sub_DCC50(v10, v63, (__int64)"BBB", 0, v64, v65);
    sub_E1710(v10, 127, a4, a5, 0);
    sub_E1710(v10, 128, a4, v79, a5);
    result = *(int *)(v10 + 144);
    if ( (int)result > 0 )
    {
      *(_WORD *)(*(_QWORD *)(v10 + 136) + 24 * result - 22) = 8;
      result = *(unsigned int *)(v10 + 144);
    }
    if ( v62 < 0 )
      v62 = result - 1;
    v66 = &unk_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
      v66 = (_DWORD *)(*(_QWORD *)(v10 + 136) + 24LL * v62);
    v66[2] = result;
  }
  return result;
}
