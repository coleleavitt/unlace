unsigned __int64 __fastcall sub_14E0D0(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  const char ***v6; // r14
  __int64 v8; // rbx
  __int64 *v9; // r13
  int v10; // r13d
  __int64 v11; // rbp
  __int64 v12; // rax
  const char *v13; // rdi
  int v14; // eax
  __int64 v15; // rbp
  int v16; // eax
  __int64 *v17; // r12
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // r12
  __int64 *v22; // rax
  __int64 *v23; // r12
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 *v26; // rax
  const char **v27; // rax
  const char *v28; // rbp
  int v29; // edx
  __m128i *v30; // rdx
  __int64 *v31; // rax
  const char *v32; // r12
  size_t v33; // rbp
  __int64 *v34; // rax
  __int64 *v35; // rbp
  __m128i *v36; // rax
  __int64 *v37; // rsi
  __m128i *v38; // rax
  __int16 v39; // dx
  bool v40; // zf
  char v41; // al
  const char *v43; // rcx
  __int64 v44; // rsi
  __int64 *v45; // rbp
  __int64 *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  const char *v49; // rdi
  int v50; // eax
  __int64 *v51; // rax
  __int64 v52; // r13
  __int64 *v53; // rax
  __int64 *v54; // rax
  __int64 *v55; // rax
  __int64 *v56; // [rsp+8h] [rbp-110h]
  __int64 *v57; // [rsp+8h] [rbp-110h]
  __int64 *v59; // [rsp+18h] [rbp-100h]
  size_t n; // [rsp+20h] [rbp-F8h]
  __int64 *v61; // [rsp+28h] [rbp-F0h]
  __int64 *v62; // [rsp+28h] [rbp-F0h]
  __int64 *v64; // [rsp+40h] [rbp-D8h]
  int *v65; // [rsp+50h] [rbp-C8h]
  char v68; // [rsp+6Fh] [rbp-A9h]
  const char ***v69; // [rsp+70h] [rbp-A8h]
  int v71; // [rsp+7Ch] [rbp-9Ch]
  __int64 v72; // [rsp+80h] [rbp-98h] BYREF
  _QWORD *v73; // [rsp+88h] [rbp-90h] BYREF
  const char *v74; // [rsp+90h] [rbp-88h] BYREF
  int v75; // [rsp+98h] [rbp-80h]
  char *v76; // [rsp+A0h] [rbp-78h] BYREF
  int v77; // [rsp+A8h] [rbp-70h]
  const char *v78; // [rsp+B0h] [rbp-68h] BYREF
  int v79; // [rsp+B8h] [rbp-60h]
  const char *v80; // [rsp+C0h] [rbp-58h] BYREF
  int v81; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v82; // [rsp+D8h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v6 = (const char ***)sub_C2AB0(*(_QWORD *)(a2 + 96) + 80LL, *(unsigned __int8 **)a2, nullptr)[2];
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( a5 && !(unsigned int)sub_C4A40(a2, (__int64)v6, a5, a6) )
          goto LABEL_60;
        v8 = *a1;
        v68 = *((_BYTE *)v6 + (a3 != 0) + 45);
        if ( v68 != 7 || (*(_BYTE *)(v8 + 50) & 8) == 0 )
          break;
        v6 = (const char ***)v6[3];
        if ( !v6 )
          return __readfsqword(0x28u) ^ v82;
      }
      v69 = &v6[a3 != 0];
      v9 = (__int64 *)v69[6];
      if ( !v68 || v9 )
        goto LABEL_58;
      v72 = 0;
      v73 = nullptr;
      v71 = sub_E6250((__int64)a1, a2, (__int64)v6, &v72, (unsigned __int8 *)&v73);
      if ( !v71 )
        break;
LABEL_60:
      v6 = (const char ***)v6[3];
      if ( !v6 )
        return __readfsqword(0x28u) ^ v82;
    }
    if ( *((int *)v6 + 10) > 0 )
    {
      v65 = nullptr;
      v64 = nullptr;
      v59 = nullptr;
      v10 = 0;
      while ( 1 )
      {
        v75 = 3;
        v77 = 3;
        v74 = "old";
        v76 = "new";
        if ( v73 )
          v11 = *((int *)v73 + v10);
        else
          v11 = *((int *)v6 + 16);
        if ( v72 )
          v12 = *(__int16 *)(*(_QWORD *)(v72 + 8) + 2LL * v10);
        else
          v12 = *(__int16 *)(a2 + 52);
        v13 = *(const char **)(*(_QWORD *)(a2 + 8) + 16 * v12);
        v14 = 0;
        v80 = v13;
        if ( v13 )
          v14 = strlen(v13) & 0x3FFFFFFF;
        v81 = v14;
        v15 = 16 * v11;
        v16 = 0;
        v78 = *(const char **)&(*v6)[1][v15];
        if ( v78 )
          v16 = strlen(v78) & 0x3FFFFFFF;
        v79 = v16;
        v17 = sub_DEC00(v8, 59, (__int64)&v78, 0);
        v61 = sub_DEC00(v8, 59, (__int64)&v80, 0);
        v18 = sub_DEC00(v8, 59, (__int64)&v74, 0);
        v19 = sub_F04A0(a1, 141, (__int64)v18, (__int64)v61);
        v20 = sub_F04A0(a1, 53, (__int64)v19, (__int64)v17);
        v59 = sub_F07D0((__int64)a1, (__int64)v59, (__int64)v20);
        if ( a3 )
        {
          v21 = sub_DEC00(v8, 59, (__int64)&v80, 0);
          v22 = sub_DEC00(v8, 59, (__int64)&v76, 0);
          v23 = sub_F04A0(a1, 141, (__int64)v22, (__int64)v21);
          v62 = sub_DEC00(v8, 59, (__int64)&v80, 0);
          v24 = sub_DEC00(v8, 59, (__int64)&v74, 0);
          v25 = sub_F04A0(a1, 141, (__int64)v24, (__int64)v62);
          v26 = sub_F04A0(a1, 45, (__int64)v25, (__int64)v23);
          v64 = sub_F07D0((__int64)a1, (__int64)v64, (__int64)v26);
          if ( v68 != 7 )
          {
            if ( v68 == 10 )
            {
              v45 = sub_DEC00(v8, 59, (__int64)&v80, 0);
              v46 = sub_DEC00(v8, 59, (__int64)&v76, 0);
              v30 = (__m128i *)sub_F04A0(a1, 141, (__int64)v46, (__int64)v45);
            }
            else
            {
LABEL_21:
              if ( v68 == 9
                && (v27 = *v6, v28 = &(*v6)[1][v15], (v28[14] & 0x60) == 0)
                && (v29 = *((unsigned __int16 *)v28 + 6), (_WORD)v29)
                && !*((_BYTE *)v27 + 63)
                && (v43 = v27[10]) != nullptr
                && *(_DWORD *)v43 >= v29
                && (v44 = *(_QWORD *)&v43[24 * v29 - 16]) != 0 )
              {
                v30 = sub_DD6E0(v8, v44, 0, nullptr);
              }
              else
              {
                v30 = (__m128i *)sub_DEC00(v8, 121, 0, 0);
              }
            }
            v31 = sub_E0F20(a1, v65, (__int64)v30);
            v65 = (int *)v31;
            if ( v31 )
              sub_DCF40((__int64)a1, v31, (__int64)&v78, 0);
          }
        }
        else if ( v68 != 7 && v68 != 10 )
        {
          goto LABEL_21;
        }
        if ( ++v10 >= *((_DWORD *)v6 + 10) )
          goto LABEL_28;
      }
    }
    v65 = nullptr;
    v64 = nullptr;
    v59 = nullptr;
LABEL_28:
    if ( v73 )
      sub_C9250(v8, v73);
    v32 = **v6;
    if ( v32 )
    {
      v71 = strlen(**v6) & 0x3FFFFFFF;
      v33 = v71 + 169LL;
      n = v71;
    }
    else
    {
      v33 = 169;
      n = 0;
    }
    if ( v68 == 7 )
    {
      v47 = *(_QWORD *)(a2 + 96);
      v48 = -1048576;
      if ( v47 )
        v48 = 32LL * (int)sub_CFB20(v8, v47);
      v78 = v32;
      v79 = v71;
      v49 = *(const char **)(*(_QWORD *)(v8 + 32) + v48);
      v50 = 0;
      v80 = v49;
      if ( v49 )
        v50 = strlen(v49) & 0x3FFFFFFF;
      v81 = v50;
      v51 = sub_DEEF0(v8, 71, "FOREIGN KEY constraint failed");
      v52 = (__int64)v51;
      if ( v51 )
        *((_BYTE *)v51 + 1) = 2;
      v57 = sub_E5750(a1, nullptr, (__int64)&v80, &v78);
      v53 = sub_DEBF0(a1, v52);
      v54 = sub_DF550((__int64)a1, v53, v57, (__int64)v59, 0, 0, 0, 0, 0);
      ++*(_DWORD *)(v8 + 408);
      v56 = v54;
      *(_WORD *)(v8 + 412) = 0;
      v55 = sub_DC1C0(v8, v33);
      v9 = v55;
      if ( !v55 )
      {
        v40 = (*(_DWORD *)(v8 + 408))-- == 1;
        if ( !v40 )
        {
          v35 = nullptr;
          *(_WORD *)(v8 + 412) = 0;
LABEL_45:
          if ( v64 )
            sub_D7720(v8, (__int64)v64);
          if ( v65 )
            sub_D7810(v8, v65);
          if ( v56 )
            sub_D75C0(v8, v56, 1);
          if ( *(_BYTE *)(v8 + 103) != 1 )
          {
            if ( v68 == 7 )
            {
              *(_BYTE *)v35 = -118;
LABEL_56:
              v35[1] = (__int64)v9;
              v9[5] = *(_QWORD *)(a2 + 96);
              v9[6] = *(_QWORD *)(a2 + 96);
              v69[6] = (const char **)v9;
              v41 = (a3 != 0) + 0x80;
            }
            else
            {
              if ( v68 != 10 || a3 )
              {
                *(_BYTE *)v35 = -127;
                goto LABEL_56;
              }
              *(_BYTE *)v35 = 0x80;
              v35[1] = (__int64)v9;
              v9[5] = *(_QWORD *)(a2 + 96);
              v9[6] = *(_QWORD *)(a2 + 96);
              v69[6] = (const char **)v9;
              v41 = 0x80;
            }
            *((_BYTE *)v9 + 16) = v41;
LABEL_58:
            if ( v9 )
              sub_14DFF0((__int64)a1, v9, a2, a4, 2, 0);
            goto LABEL_60;
          }
          sub_D7F30(v8, v9);
          goto LABEL_60;
        }
        v35 = nullptr;
        v59 = nullptr;
LABEL_42:
        v39 = *(_WORD *)(v8 + 414);
LABEL_43:
        *(_WORD *)(v8 + 412) = v39;
        if ( v59 )
          sub_D7720(v8, (__int64)v59);
        goto LABEL_45;
      }
      v35 = v55 + 9;
      v55[7] = (__int64)(v55 + 9);
      v55[12] = (__int64)(v55 + 21);
      memcpy(v55 + 21, v32, n);
      v59 = nullptr;
      v36 = nullptr;
    }
    else
    {
      ++*(_DWORD *)(v8 + 408);
      *(_WORD *)(v8 + 412) = 0;
      v34 = sub_DC1C0(v8, v33);
      v9 = v34;
      if ( !v34 )
      {
        v56 = nullptr;
        v35 = nullptr;
        goto LABEL_41;
      }
      v35 = v34 + 9;
      v34[7] = (__int64)(v34 + 9);
      v34[12] = (__int64)(v34 + 21);
      memcpy(v34 + 21, v32, n);
      if ( v59 )
      {
        v36 = sub_DD6E0(v8, (__int64)v59, 1u, nullptr);
        v56 = nullptr;
      }
      else
      {
        v56 = nullptr;
        v36 = nullptr;
      }
    }
    v9[14] = (__int64)v36;
    v9[15] = (__int64)sub_DD150(v8, v65, 1u);
    v9[11] = sub_DD450(v8, (char *)v56, 1u);
    if ( v64 )
    {
      v37 = sub_F04A0(a1, 19, (__int64)v64, 0);
      v64 = v37;
      v38 = nullptr;
      if ( v37 )
        v38 = sub_DD6E0(v8, (__int64)v37, 1u, nullptr);
      v9[3] = (__int64)v38;
    }
LABEL_41:
    v39 = 0;
    v40 = (*(_DWORD *)(v8 + 408))-- == 1;
    if ( !v40 )
      goto LABEL_43;
    goto LABEL_42;
  }
  return __readfsqword(0x28u) ^ v82;
}
