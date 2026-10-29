__int64 __fastcall sub_166170(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r13
  char v26; // al
  __int64 v27; // r10
  const char *v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  int v31; // edx
  const char *v32; // r9
  const char *v33; // r8
  const char *v34; // rcx
  __int64 v35; // rsi
  __m128i *v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // r13
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // [rsp+Ch] [rbp-14Ch]
  unsigned __int64 v49; // [rsp+20h] [rbp-138h]
  __int64 v50; // [rsp+28h] [rbp-130h]
  const char *v51; // [rsp+30h] [rbp-128h]
  __int64 v52; // [rsp+38h] [rbp-120h]
  int v53; // [rsp+44h] [rbp-114h] BYREF
  __int64 v54; // [rsp+48h] [rbp-110h] BYREF
  __int64 v55; // [rsp+50h] [rbp-108h] BYREF
  __int128 v56; // [rsp+58h] [rbp-100h]
  __int64 v57; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v58; // [rsp+78h] [rbp-E0h]
  __int64 v59; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v60; // [rsp+98h] [rbp-C0h]
  __int64 v61; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-A0h]
  __int64 v63; // [rsp+C8h] [rbp-90h]
  __int64 v64; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v65; // [rsp+D8h] [rbp-80h]
  __int64 v66; // [rsp+E8h] [rbp-70h]
  __int64 v67; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v68; // [rsp+F8h] [rbp-60h]
  __int64 v69; // [rsp+108h] [rbp-50h]
  unsigned __int64 v70; // [rsp+118h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 76) != 4 )
    return 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v3 + 64) != 7 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = sub_10E680(v5, 1);
  v7 = v6;
  if ( *(_DWORD *)(v6 + 76) != 4 || *(_BYTE *)(*(_QWORD *)(v6 + 56) + 64LL) != 7 || *(_DWORD *)(v6 + 352) != 1 )
  {
LABEL_6:
    v8 = *(_QWORD *)(a1 + 64);
LABEL_7:
    v9 = *(unsigned int *)(v3 + 72);
    if ( (unsigned int)v9 < *(_DWORD *)(v8 + 64) )
    {
      v10 = sub_10E680(*(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v9), 1);
      v7 = v10;
      if ( *(_DWORD *)(v10 + 76) != 4
        || *(_BYTE *)(*(_QWORD *)(v10 + 56) + 64LL) != 7
        || *(_DWORD *)(v10 + 352) != 1
        || sub_32C980(v10) != 1
        || (unsigned int)(**(_DWORD **)(v7 + 56) - 43) > 9 )
      {
        return 0;
      }
      v5 = *(_QWORD *)(a1 + 8);
      v11 = sub_10E680(v5, 0);
      v12 = *(_QWORD *)(a1 + 64);
      v13 = v11;
      v14 = *(unsigned int *)(*(_QWORD *)(v7 + 56) + 72LL);
      if ( (unsigned int)v14 < *(_DWORD *)(v12 + 64) )
      {
        v48 = 2 * (v13 == sub_10E680(*(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v14), 0));
        goto LABEL_15;
      }
    }
LABEL_75:
    sub_1640B0(v5);
  }
  v5 = v6;
  v19 = sub_32C980(v6);
  v8 = *(_QWORD *)(a1 + 64);
  if ( v19 != 1 )
    goto LABEL_7;
  v20 = *(_DWORD **)(v7 + 56);
  if ( (unsigned int)(*v20 - 43) > 9 )
    goto LABEL_7;
  v21 = (unsigned int)v20[18];
  if ( (unsigned int)v21 >= *(_DWORD *)(v8 + 64) )
    goto LABEL_75;
  v5 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v21);
  v22 = sub_10E680(v5, 0);
  if ( v7 == v22 )
    return 0;
  v23 = *(_QWORD *)(a1 + 64);
  v24 = *(unsigned int *)(v3 + 72);
  if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 64) )
    goto LABEL_75;
  v25 = sub_10E680(*(_QWORD *)(*(_QWORD *)(v23 + 528) + 8 * v24), 0);
  if ( v22 != v25 )
  {
    v5 = *(_QWORD *)(v7 + 8);
    if ( v25 == sub_10E680(v5, 0) )
    {
      v48 = 3;
      goto LABEL_15;
    }
    goto LABEL_6;
  }
  v48 = 1;
LABEL_15:
  v15 = *(_QWORD *)(v7 + 56);
  if ( sub_122120((unsigned __int8 *)(v3 + 32), v15 + 32, 0) )
  {
    v63 = 0;
    v62 = 0;
    v61 = 0x800000000LL;
    v1 = sub_1DC400(v3, &v61);
    if ( !(_BYTE)v1 )
    {
LABEL_27:
      sub_30EA00(&v61);
      return v1;
    }
    v66 = 0;
    v65 = 0;
    v64 = 0x800000000LL;
    v1 = sub_1DC400(v15, &v64);
    if ( !(_BYTE)v1 )
    {
LABEL_26:
      sub_30EA00(&v64);
      goto LABEL_27;
    }
    v69 = 0;
    v68 = 0;
    v67 = 0x800000000LL;
    switch ( v48 )
    {
      case 2:
        sub_3115B0(&v64);
        break;
      case 3:
        sub_3115B0(&v61);
        break;
      case 1:
        sub_30EC10(&v67, &v61);
        sub_310A80(&v67, &v64);
        if ( !(unsigned __int8)sub_30E9B0(&v67, &v53, &v54) || v53 == 4 && sub_326890(v54, HIDWORD(v67), 1) == -3 )
          goto LABEL_24;
LABEL_23:
        if ( (*(_BYTE *)(v15 + 6) & 2) == 0
          && !(unsigned __int8)sub_11CB60((_BYTE *)v15, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, v16, v17, v18) )
        {
          v55 = 0;
          v56 = 0;
          sub_1AEC20(v3 + 32, &v55, 4);
          if ( (unsigned __int64)v56 > 1 )
            tag_remove();
          v57 = 0;
          v58 = 0;
          sub_311C90(&v61, &v57);
          v27 = v58;
          v28 = " || ";
          if ( v48 != 1 )
            v28 = " && ";
          if ( (_QWORD)v58 )
          {
            v29 = v58 + 3;
            v30 = v58 + 4;
            v27 = v58 - 1;
          }
          else
          {
            v30 = 5;
            v29 = 4;
          }
          if ( *((_QWORD *)&v58 + 1) < v30 )
          {
            v52 = v27;
            v51 = v28;
            v50 = v29;
            v49 = v30;
            v47 = qvector_reserve();
            v27 = v52;
            v28 = v51;
            v57 = v47;
            v29 = v50;
            v30 = v49;
          }
          *(_QWORD *)&v58 = v30;
          v31 = *(_DWORD *)v28;
          *(_BYTE *)(v57 + v29) = 0;
          *(_DWORD *)(v57 + v27) = v31;
          sub_311C90(&v64, &v57);
          v59 = 0;
          v60 = 0;
          sub_311C90(&v67, &v59);
          v32 = s1;
          if ( (_QWORD)v60 )
            LODWORD(v32) = v59;
          v33 = s1;
          if ( (_QWORD)v58 )
            LODWORD(v33) = v57;
          v34 = s1;
          if ( (_QWORD)v56 )
            LODWORD(v34) = v55;
          sub_32CD90(*(_QWORD *)(a1 + 64), *(_QWORD *)(v3 + 24), 54, (_DWORD)v34, (_DWORD)v33, (_DWORD)v32);
          if ( v59 )
          {
            *(_QWORD *)&v60 = 0;
            qfree();
          }
          if ( v57 )
          {
            *(_QWORD *)&v58 = 0;
            qfree();
          }
          if ( v55 )
          {
            *(_QWORD *)&v56 = 0;
            qfree();
          }
          v35 = *(unsigned int *)(v3 + 52);
          v36 = *(__m128i **)(v3 + 56);
          *(_DWORD *)v3 = v53 + 43;
          v37 = v54;
          v38 = sub_326890(v54, v35, 0);
          v36[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v38);
          v39 = *(_QWORD *)(a1 + 64);
          v40 = *(unsigned int *)(v15 + 72);
          v41 = *(_DWORD *)(v39 + 64);
          if ( (unsigned int)v40 >= v41 )
            sub_1640B0(v37);
          v42 = *(_QWORD *)(*(_QWORD *)(v39 + 528) + 8 * v40);
          if ( v48 == 3 )
          {
            v37 = a1;
            sub_164C60(a1, *(_DWORD *)(v42 + 72));
            v39 = *(_QWORD *)(a1 + 64);
            v41 = *(_DWORD *)(v39 + 64);
          }
          v43 = *(unsigned int *)(v3 + 72);
          if ( (unsigned int)v43 >= v41 )
            sub_1640B0(v37);
          sub_137880(*(_QWORD *)(*(_QWORD *)(v39 + 528) + 8 * v43));
          sub_137880(*(_QWORD *)(a1 + 8));
          sub_10EB10(v7, *(_QWORD *)(v7 + 8), v42);
          sub_119B60(v15);
          v44 = *(_DWORD *)(v7 + 24);
          BYTE1(v44) &= ~2u;
          LOBYTE(v44) = v44 | 0x80;
          *(_DWORD *)(v7 + 24) = v44;
          v45 = *(_QWORD *)(a1 + 64);
          v46 = *(unsigned int *)(v15 + 72);
          if ( (unsigned int)v46 >= *(_DWORD *)(v45 + 64) )
            sub_1640B0(v15);
          sub_137880(*(_QWORD *)(*(_QWORD *)(v45 + 528) + 8 * v46));
          sub_137880(*(_QWORD *)(v7 + 8));
          sub_63560(*(_QWORD *)(a1 + 64), 1u, (__int64)"REMOVE_USELESS_JX_VALRANGES");
          goto LABEL_25;
        }
LABEL_24:
        v1 = 0;
LABEL_25:
        sub_30EA00(&v67);
        goto LABEL_26;
      default:
        v26 = sub_30E9B0(&v67, &v53, &v54);
LABEL_41:
        if ( !v26 )
          goto LABEL_24;
        goto LABEL_23;
    }
    sub_30EC10(&v67, &v61);
    sub_310630(&v67, &v64);
    v26 = sub_30E9B0(&v67, &v53, &v54);
    goto LABEL_41;
  }
  return 0;
}

