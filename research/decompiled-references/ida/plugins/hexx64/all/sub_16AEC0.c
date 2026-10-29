__int64 __fastcall sub_16AEC0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r15
  int v8; // eax
  int v9; // eax
  int v10; // edx
  __int64 v11; // r13
  char *v12; // rax
  __int64 v13; // r14
  int v14; // eax
  _DWORD *v15; // r8
  int v16; // eax
  char *v17; // rcx
  char *v18; // rax
  char *v19; // rax
  __int64 v20; // rax
  unsigned __int64 *v21; // rdi
  signed int v22; // edx
  unsigned __int8 *v23; // r9
  unsigned int v24; // r12d
  int *v25; // rax
  int v26; // eax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rcx
  char v31; // al
  int v32; // r8d
  int v33; // r9d
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r9d
  __int64 *v40; // rdi
  __int32 v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  int v44; // r9d
  int v45; // eax
  int v46; // edx
  __int32 v47; // eax
  __int32 v48; // eax
  __int32 v49; // eax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // [rsp+0h] [rbp-130h]
  __int64 v53; // [rsp+8h] [rbp-128h]
  char *v54; // [rsp+18h] [rbp-118h]
  int v55; // [rsp+20h] [rbp-110h]
  __int64 v56; // [rsp+20h] [rbp-110h]
  unsigned __int8 *v57; // [rsp+28h] [rbp-108h]
  char *v58; // [rsp+30h] [rbp-100h]
  __int64 v59; // [rsp+30h] [rbp-100h]
  __int64 v60; // [rsp+30h] [rbp-100h]
  __int64 v61; // [rsp+30h] [rbp-100h]
  char *v62; // [rsp+38h] [rbp-F8h]
  unsigned __int64 *v63; // [rsp+38h] [rbp-F8h]
  char v64; // [rsp+47h] [rbp-E9h]
  char *v65; // [rsp+48h] [rbp-E8h]
  __int64 v66; // [rsp+48h] [rbp-E8h]
  __int64 v67; // [rsp+48h] [rbp-E8h]
  int v68; // [rsp+48h] [rbp-E8h]
  char *v69; // [rsp+50h] [rbp-E0h]
  char *v70; // [rsp+50h] [rbp-E0h]
  __int64 v71; // [rsp+50h] [rbp-E0h]
  __int64 v72; // [rsp+50h] [rbp-E0h]
  _DWORD *v74; // [rsp+68h] [rbp-C8h] BYREF
  char *v75; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v76; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+80h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+88h] [rbp-A8h] BYREF
  _QWORD v79[2]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v80[2]; // [rsp+A0h] [rbp-90h] BYREF
  char v81[32]; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v82[2]; // [rsp+D0h] [rbp-60h] BYREF
  char v83[24]; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v84; // [rsp+F8h] [rbp-38h]

  v6 = a3;
  v84 = __readfsqword(0x28u);
  v8 = sub_330DE0(a3);
  if ( v8 <= 0 )
    return 0;
  if ( **(_DWORD **)(v6 + 56) == 55 )
  {
    if ( v8 != 2 )
      return 0;
  }
  else if ( v8 != 1 )
  {
    return 0;
  }
  v9 = sub_330DE0(a4);
  v10 = v9;
  if ( v9 <= 0 )
    return 0;
  if ( **(_DWORD **)(a4 + 56) == 55 )
    v10 = v9 - 1;
  if ( v10 != 1 )
    return 0;
  if ( *(_DWORD *)(v6 + 376) != 1 )
    return 0;
  if ( *(_DWORD *)(a4 + 376) != 1 )
    return 0;
  if ( **(_DWORD **)(a4 + 368) != **(_DWORD **)(v6 + 368) )
    return 0;
  v11 = sub_1229A0(*(_QWORD *)(v6 + 48));
  v12 = (char *)sub_1229A0(*(_QWORD *)(a4 + 48));
  v74 = (_DWORD *)v11;
  v13 = (__int64)v12;
  v75 = v12;
  v14 = *(_DWORD *)v11;
  if ( *(_DWORD *)v13 != *(_DWORD *)v11 )
    return 0;
  if ( v14 == 13 )
  {
    if ( *(_BYTE *)(v11 + 48) != 4 || *(_BYTE *)(v13 + 48) != 4 )
      return 0;
    v15 = *(_DWORD **)(v11 + 56);
    v64 = 0;
    v75 = *(char **)(v13 + 56);
    v16 = *v15;
    v74 = v15;
  }
  else
  {
    v64 = v14 == 8 || v14 == 5;
    if ( !v64 )
    {
      v17 = (char *)v13;
      v15 = (_DWORD *)v11;
      goto LABEL_18;
    }
    if ( v14 != 8 )
      goto LABEL_15;
    if ( !(unsigned __int8)sub_1679C0(&v74, (__int64 *)&v75) )
      return 0;
    v15 = v74;
    if ( *v74 == 10 )
    {
      if ( !(unsigned __int8)sub_1679C0(&v74, (__int64 *)&v75) )
        return 0;
      v15 = v74;
    }
    v16 = *v15;
    if ( *v15 == 5 )
    {
LABEL_15:
      v64 = sub_1679C0(&v74, (__int64 *)&v75);
      if ( !v64 )
        return 0;
      v15 = v74;
      v16 = *v74;
    }
    else
    {
      v64 = 0;
    }
  }
  v17 = v75;
  if ( *(_DWORD *)v75 != v16 )
    return 0;
LABEL_18:
  v65 = v17;
  v69 = (char *)v15;
  v57 = (unsigned __int8 *)(v11 + 64);
  if ( !sub_125B60((unsigned __int8 *)(v11 + 64), v13 + 64, 0, *(double *)a5.m128i_i64) )
    return 0;
  v18 = sub_1687A0(&v76, v69);
  if ( !v18 )
    return 0;
  if ( *v18 != 4 )
    return 0;
  v58 = v18;
  v62 = v69;
  v70 = v65;
  v19 = sub_1687A0(&v77, v65);
  v66 = (__int64)v19;
  if ( !v19 )
    return 0;
  if ( *(_DWORD *)v70 == 20 )
  {
    v28 = 8 * *((_DWORD *)v19 + 1) - 1;
    v29 = 0;
    if ( (unsigned __int64)v28 <= 0x3F )
      v29 = 1LL << v28;
    v77 &= v29 - 1;
  }
  v71 = v76;
  if ( v76 != v77 )
    return 0;
  v55 = *(_DWORD *)v62;
  if ( *(_DWORD *)v11 == 13 )
  {
    if ( v55 != 24 )
      goto LABEL_27;
    return 0;
  }
  if ( v55 != 24 && *(_DWORD *)v11 == 5 )
    return 0;
LABEL_27:
  v59 = *((_QWORD *)v58 + 1);
  if ( *(_DWORD *)v59 != 12 )
    return 0;
  v54 = (char *)(v59 + 32);
  if ( !sub_125B60((unsigned __int8 *)(v59 + 32), v66, 0, *(double *)a5.m128i_i64)
    || !(unsigned __int8)sub_11FD80((char *)(v59 + 48), &v78, 0)
    || v71 != v78
    || (v78 & (v78 + 1)) != 0 )
  {
    return 0;
  }
  v20 = a1[30].m128i_i64[0];
  v79[0] = 0xFFFFFFFF00000000LL;
  v21 = *(unsigned __int64 **)(v20 + 112);
  v22 = *(_DWORD *)(v59 + 36);
  v79[1] = 0;
  v63 = v21;
  v23 = sub_167B10(v21, a2, v22, (unsigned __int8 *)v79, a5, a6);
  if ( !v23 )
    goto LABEL_39;
  v24 = sub_12EA80((__int64)v21, a1, a1[3].m128i_i64[1], v66, a1[3].m128i_i64[1], (__int64)v23, a5, a6, 0);
  if ( !(_BYTE)v24 )
    goto LABEL_39;
  v53 = v78;
  v72 = a1[3].m128i_i64[1];
  v52 = sub_167E70(a1[4].m128i_i64[0], *(_DWORD *)(v72 + 72), *(double *)a5.m128i_i64);
  if ( v55 == 24 )
  {
    *(_DWORD *)v72 = 16;
    sub_125180((unsigned __int8 *)(v72 + 64), v57);
LABEL_67:
    sub_11CA10((char *)(v72 + 32), v54);
    v43 = v53 + 1;
    if ( v64 )
      v43 = -v43;
    sub_120A10(v72 + 48, v63, v43, *(_DWORD *)(v72 + 36), -1, 0);
    v44 = *(_DWORD *)(v72 + 68);
    if ( *(_DWORD *)v11 == 8 && *(_BYTE *)(v11 + 32) == 4 )
    {
      v51 = *(_QWORD *)(v11 + 40);
      if ( *(_DWORD *)v51 == 10 )
      {
        if ( *(_DWORD *)(v11 + 68) == v44 )
        {
          if ( *(_BYTE *)(v51 + 32) == 4 )
          {
            v68 = *(_DWORD *)(v72 + 68);
            if ( (unsigned __int8)sub_12B6F0(v72, v63, 10, *(_DWORD *)(v11 + 36), 1, a5) )
            {
              if ( !(unsigned __int8)sub_12B6F0(v72, v63, 8, v68, 1, a5) )
              {
                if ( !under_debugger )
                  sub_383060(0xCAF9u, *(double *)a5.m128i_i64);
                goto LABEL_104;
              }
LABEL_74:
              sub_11D5A0(v11);
              v47 = a1[1].m128i_i32[2];
              BYTE1(v47) &= ~2u;
              LOBYTE(v47) = v47 | 0x80;
              a1[1].m128i_i32[2] = v47;
              sub_11D5A0(v13);
              v48 = a1[1].m128i_i32[2];
              BYTE1(v48) &= ~2u;
              LOBYTE(v48) = v48 | 0x80;
              if ( v6 == v52 )
                v6 = a4;
              a1[1].m128i_i32[2] = v48;
              sub_112550((__int64)a1, v6, v52);
              v49 = a1[1].m128i_i32[2];
              BYTE1(v49) &= ~2u;
              LOBYTE(v49) = v49 | 0x80;
              a1[1].m128i_i32[2] = v49;
              v50 = *(_DWORD *)(v52 + 24);
              BYTE1(v50) &= ~2u;
              LOBYTE(v50) = v50 | 0x80;
              *(_DWORD *)(v52 + 24) = v50;
              sub_A2520((__int64)a1, "SDIVMOD_POWER2");
              goto LABEL_40;
            }
            if ( !under_debugger )
              sub_383060(0xCAF8u, *(double *)a5.m128i_i64);
          }
          else if ( !under_debugger )
          {
            sub_383060(0xCAF7u, *(double *)a5.m128i_i64);
          }
        }
        else if ( !under_debugger )
        {
          sub_383060(0xCAF6u, *(double *)a5.m128i_i64);
        }
LABEL_104:
        BUG();
      }
    }
    v45 = *(_DWORD *)(v72 + 36);
    if ( v45 != v44 )
    {
      v46 = 10;
      *(_DWORD *)(v72 + 68) = v45;
      if ( v45 < v44 )
        v46 = 8;
      sub_12B6F0(v72, v63, v46, v44, 1, a5);
    }
    goto LABEL_74;
  }
  if ( *(_DWORD *)v11 == 13 )
  {
    if ( !sub_125B60((unsigned __int8 *)(v11 + 32), v66, 0, *(double *)a5.m128i_i64)
      || !sub_125B60((unsigned __int8 *)(v13 + 32), v66, 0, *(double *)a5.m128i_i64) )
    {
      goto LABEL_39;
    }
    sub_125180((unsigned __int8 *)(v72 + 64), v57);
LABEL_66:
    *(_DWORD *)v72 = 18;
    goto LABEL_67;
  }
  v56 = sub_167E70(a1[4].m128i_i64[0], **(_DWORD **)(v6 + 368), *(double *)a5.m128i_i64);
  v25 = (int *)sub_1229A0(*(_QWORD *)(v56 + 48));
  v67 = (__int64)v25;
  if ( v25 )
  {
    v26 = *v25;
    if ( v26 == 8 )
    {
      if ( (int)log2ceil() >= (unsigned __int64)(8 * *(_DWORD *)(v67 + 36)) )
        goto LABEL_39;
      if ( *(_BYTE *)(v67 + 32) != 4 )
        goto LABEL_39;
      v30 = *(_QWORD *)(v67 + 40);
      if ( *(_DWORD *)v30 != 13 )
        goto LABEL_39;
      if ( *(_DWORD *)(v59 + 36) <= *(_DWORD *)(v30 + 36) )
      {
LABEL_60:
        v60 = v30;
        if ( !sub_125B60((unsigned __int8 *)(v30 + 48), (__int64)v57, 0, *(double *)a5.m128i_i64) )
          goto LABEL_39;
        v31 = sub_12EA80((__int64)v21, a1, a1[3].m128i_i64[1], v60 + 32, a1[3].m128i_i64[1], (__int64)v54, a5, a6, 0);
        goto LABEL_62;
      }
    }
    else
    {
      if ( *(_DWORD *)(v67 + 36) >= *(_DWORD *)(v59 + 36) )
      {
        if ( v26 != 13 )
          goto LABEL_39;
        v30 = v67;
        goto LABEL_60;
      }
      v30 = v67;
    }
    v61 = v30;
    if ( !(unsigned __int8)sub_127420(v30 + 48, v21, v57, v30, *(double *)a5.m128i_i64) )
      goto LABEL_39;
    v31 = sub_1321C0(a1, a1[3].m128i_i64[1], v61 + 32, a1[3].m128i_i64[1], (__int64)v54, a5, a6);
LABEL_62:
    if ( !v31 )
      goto LABEL_39;
    sub_127A20((__int64)v80, v6, v11, 1, v32, v33, *(double *)a5.m128i_i64, a6);
    sub_127A20((__int64)v82, v56, v67, 0, v34, v35, *(double *)a5.m128i_i64, a6);
    sub_64640(v80, v82, v36, v37, v38, v39);
    sub_317C60((__int64 *)v81, (__int64)v83);
    sub_93B40(v82);
    v40 = *(__int64 **)(a1[4].m128i_i64[0] + 784);
    if ( !v40 || sub_17C4E0(v40, (__int64)v80, *(_DWORD *)(v56 + 72), 0xFFFFFFFF, *(_QWORD *)(v67 + 8), 0, 2u, 1u) )
    {
      sub_93B40(v80);
      goto LABEL_39;
    }
    sub_11CA10((char *)(v72 + 64), (char *)(v67 + 64));
    sub_11D5A0(v67);
    v41 = a1[1].m128i_i32[2];
    BYTE1(v41) &= ~2u;
    LOBYTE(v41) = v41 | 0x80;
    a1[1].m128i_i32[2] = v41;
    v42 = *(_DWORD *)(v56 + 24);
    BYTE1(v42) &= ~2u;
    LOBYTE(v42) = v42 | 0x80;
    *(_DWORD *)(v56 + 24) = v42;
    sub_93B40(v80);
    goto LABEL_66;
  }
LABEL_39:
  v24 = 0;
LABEL_40:
  sub_11CDA0((__int64)v79);
  return v24;
}

