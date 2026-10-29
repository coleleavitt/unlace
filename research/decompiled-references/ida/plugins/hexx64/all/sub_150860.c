__int64 __fastcall sub_150860(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (*v9)(); // rax
  __int64 *v10; // r14
  __int64 *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  int v15; // r13d
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // r15
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // r14
  int v22; // eax
  __int64 v23; // rdi
  __int64 (*v24)(); // rax
  int v25; // eax
  int v26; // esi
  int v27; // edx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 i; // rax
  __int64 *v33; // rcx
  __int64 v34; // rsi
  __int64 *v35; // rax
  __int64 *v36; // rdx
  int v37; // r11d
  int v38; // r8d
  __int64 *v39; // rax
  __int64 *v40; // rdx
  __int64 v41; // rdi
  __int64 (*v42)(); // rax
  __int64 v43; // rdi
  __int64 v44; // r9
  _DWORD *v45; // rcx
  int v46; // r8d
  _DWORD *v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rsi
  bool v51; // cf
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // r10
  __int64 v55; // rdx
  __int64 *v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // [rsp+10h] [rbp-E0h]
  __int64 *v60; // [rsp+10h] [rbp-E0h]
  __int64 v61; // [rsp+20h] [rbp-D0h]
  int v62; // [rsp+20h] [rbp-D0h]
  __int64 v63; // [rsp+20h] [rbp-D0h]
  __int64 *v64; // [rsp+30h] [rbp-C0h]
  __int64 v65; // [rsp+30h] [rbp-C0h]
  int v66; // [rsp+30h] [rbp-C0h]
  __int64 v67; // [rsp+30h] [rbp-C0h]
  __int64 *v68; // [rsp+38h] [rbp-B8h]
  int v69; // [rsp+4Ch] [rbp-A4h]
  __int64 v70; // [rsp+50h] [rbp-A0h]
  _QWORD v71[2]; // [rsp+58h] [rbp-98h] BYREF
  int v72; // [rsp+68h] [rbp-88h]
  __int64 v73; // [rsp+70h] [rbp-80h]
  int v74; // [rsp+78h] [rbp-78h]
  __int64 v75; // [rsp+80h] [rbp-70h] BYREF
  int v76; // [rsp+88h] [rbp-68h]
  _DWORD *v77; // [rsp+90h] [rbp-60h] BYREF
  __int128 v78; // [rsp+98h] [rbp-58h]
  __int128 v79; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v80; // [rsp+B8h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 64);
  v71[0] = a2;
  v7 = *(_QWORD *)(v6 + 920);
  v80 = __readfsqword(0x28u);
  v70 = v6;
  v9 = *(__int64 (**)())(*(_QWORD *)v7 + 32LL);
  if ( v9 == sub_7A3D0 )
  {
    if ( !*(_DWORD *)(a1 + 76) )
    {
LABEL_3:
      LODWORD(v10) = 0;
      return (unsigned int)v10;
    }
    v69 = 0;
    goto LABEL_6;
  }
  v25 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))v9)(v7, v70, a3, 0, 0);
  LODWORD(v10) = 1;
  v69 = v25;
  if ( v25 == 2 )
    return (unsigned int)v10;
  if ( *(_DWORD *)(a1 + 76) )
  {
LABEL_6:
    v77 = nullptr;
    v78 = 0;
    v12 = (__int64 *)operator new(0x10u);
    *v12 = a3;
    v13 = *(_DWORD *)(a1 + 72);
    v73 = a3;
    v10 = v12 + 2;
    *((_DWORD *)v12 + 2) = v13;
    v74 = v13;
    v76 = v13;
    v75 = a3;
    sub_14E5C0((__int64)v12, 0, 0, &v75);
    v14 = v78;
    v15 = *(_DWORD *)(a1 + 72);
    v16 = (__int64)v77;
    if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
    {
      v77 = (_DWORD *)qvector_reserve((__int64)&v77, (__int64)v77, v78 + 1, 4);
      v16 = (__int64)v77;
      v14 = v78;
    }
    *(_DWORD *)(v16 + 4 * v14) = v15;
    *(_QWORD *)&v78 = v78 + 1;
    v68 = v12 + 2;
    while ( 2 )
    {
      v17 = *((unsigned int *)v12 + 2);
      v18 = *v12;
      v64 = v10 - 2;
      if ( (char *)v10 - (char *)v12 <= 16 )
      {
LABEL_10:
        if ( (unsigned int)v17 >= *(_DWORD *)(v70 + 64) )
          sub_14E4A0(0.0);
        v19 = *(_QWORD *)(*(_QWORD *)(v70 + 528) + 8 * v17);
        while ( 1 )
        {
          v20 = (unsigned __int8 *)sub_129440(v19, v18, (__int64)v71, 0, 0.0, a5);
          v21 = v20;
          if ( !v20 )
            break;
          if ( (unsigned __int8 *)v71[0] != v20 )
            goto LABEL_26;
          v22 = *(_DWORD *)v20;
          if ( v22 == 4 )
          {
            if ( !sub_125B60(v21 + 64, v18, 0, 0.0) )
              goto LABEL_26;
          }
          else if ( v22 != 8
                 || !sub_1255D0(v21 + 64, *(_QWORD *)(v70 + 1504), v18, 1, 0.0)
                 || *((_DWORD *)v21 + 9) != *(_DWORD *)(v18 + 4) )
          {
            goto LABEL_26;
          }
          v18 = (__int64)(v21 + 32);
          if ( (v21[32] & 0xFB) != 1 )
            goto LABEL_26;
          v69 = 0;
          v23 = *(_QWORD *)(v70 + 920);
          v24 = *(__int64 (**)())(*(_QWORD *)v23 + 32LL);
          if ( v24 != sub_7A3D0 )
          {
            v69 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int8 *, _QWORD, _QWORD))v24)(
                    v23,
                    v70,
                    v21 + 32,
                    0,
                    0);
            if ( v69 == 2 )
            {
              if ( *(_DWORD *)(v19 + 72) != 1 )
              {
LABEL_22:
                v10 = v64;
                goto LABEL_23;
              }
LABEL_53:
              v41 = *(_QWORD *)(v70 + 920);
              v42 = *(__int64 (**)())(*(_QWORD *)v41 + 32LL);
              if ( v42 == sub_7A3D0
                || (v69 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))v42)(v41, v70, v18, 0, 0),
                    v69 != 1) )
              {
LABEL_26:
                LODWORD(v10) = 0;
                goto LABEL_27;
              }
              goto LABEL_22;
            }
          }
        }
        if ( *(_DWORD *)(v19 + 72) == 1 )
          goto LABEL_53;
        v43 = *(_QWORD *)(v19 + 352);
        if ( (int)v43 <= 0 )
          goto LABEL_22;
        v10 = v64;
        v44 = 0;
        do
        {
          v45 = &v77[v78];
          v46 = *(_DWORD *)(*(_QWORD *)(v19 + 344) + 4 * v44);
          if ( v77 == v45 )
            goto LABEL_66;
          v47 = v77;
          while ( v46 != *v47 )
          {
            if ( v45 == ++v47 )
              goto LABEL_66;
          }
          if ( v45 == v47 )
          {
LABEL_66:
            if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
            {
              v61 = v44;
              v66 = *(_DWORD *)(*(_QWORD *)(v19 + 344) + 4 * v44);
              v77 = (_DWORD *)qvector_reserve((__int64)&v77, (__int64)v77, v78 + 1, 4);
              v44 = v61;
              v46 = v66;
              v45 = &v77[v78];
            }
            *v45 = v46;
            *(_QWORD *)&v78 = v78 + 1;
            if ( v10 == v68 )
            {
              v49 = ((char *)v10 - (char *)v12) >> 4;
              if ( v49 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v50 = 1;
              if ( v49 )
                v50 = ((char *)v10 - (char *)v12) >> 4;
              v51 = __CFADD__(v50, v49);
              v52 = v50 + v49;
              if ( v51 )
              {
                v52 = 0x7FFFFFFFFFFFFFFLL;
              }
              else if ( v52 > 0x7FFFFFFFFFFFFFFLL )
              {
                v52 = 0x7FFFFFFFFFFFFFFLL;
              }
              v59 = v44;
              v62 = v46;
              v67 = 2 * v52;
              v53 = operator new(16 * v52);
              v54 = (__int64 *)v53;
              v44 = v59;
              v55 = v53 + (char *)v10 - (char *)v12;
              *(_QWORD *)v55 = v18;
              *(_DWORD *)(v55 + 8) = v62;
              if ( v12 == v10 )
              {
                v57 = v53;
              }
              else
              {
                v56 = v12;
                v57 = v53 + (char *)v10 - (char *)v12;
                do
                {
                  v58 = *v56;
                  v53 += 16;
                  v56 += 2;
                  *(_QWORD *)(v53 - 16) = v58;
                  *(_DWORD *)(v53 - 8) = *((_DWORD *)v56 - 2);
                }
                while ( v57 != v53 );
              }
              v10 = (__int64 *)(v57 + 16);
              if ( v12 )
              {
                v60 = v54;
                v63 = v44;
                operator delete(v12, (char *)v68 - (char *)v12);
                v54 = v60;
                v44 = v63;
              }
              v12 = v54;
              v68 = &v54[v67];
            }
            else
            {
              *v10 = v18;
              v10 += 2;
              *((_DWORD *)v10 - 2) = v46;
            }
            v48 = *((_DWORD *)v10 - 2);
            v65 = v44;
            v73 = *(v10 - 2);
            v75 = v73;
            v74 = v48;
            v76 = v48;
            sub_14E5C0((__int64)v12, (((char *)v10 - (char *)v12) >> 4) - 1, 0, &v75);
            v43 = *(_QWORD *)(v19 + 352);
            v44 = v65;
          }
          ++v44;
        }
        while ( (int)v43 > (int)v44 );
LABEL_23:
        v71[0] = 0;
        if ( v12 != v10 )
          continue;
        LOBYTE(v10) = v69 != 0;
LABEL_27:
        if ( v77 )
        {
          *(_QWORD *)&v78 = 0;
          qfree((__int64)v77);
        }
        if ( v12 )
          operator delete(v12, (char *)v68 - (char *)v12);
        return (unsigned int)v10;
      }
      break;
    }
    v28 = *((_DWORD *)v10 - 2);
    v29 = *(v10 - 2);
    *((_DWORD *)v10 - 2) = v17;
    v30 = *v12;
    v72 = v28;
    v74 = v28;
    v71[1] = v29;
    *(v10 - 2) = v30;
    v73 = v29;
    v31 = ((char *)v64 - (char *)v12) >> 4;
    if ( v31 - 1 <= 1 )
    {
      v34 = 0;
LABEL_48:
      if ( (v31 & 1) == 0 && (v31 - 2) / 2 == v34 )
      {
        v39 = &v12[2 * v34];
        v40 = &v12[4 * v34 + 2];
        *((_DWORD *)v39 + 2) = *((_DWORD *)v40 + 2);
        v34 = 2 * v34 + 1;
        *v39 = *v40;
      }
      v75 = v73;
      v76 = v74;
      sub_14E5C0((__int64)v12, v34, 0, &v75);
      goto LABEL_10;
    }
    for ( i = 0; ; i = v34 )
    {
      v34 = 2 * (i + 1) - 1;
      v36 = &v12[4 * i + 4];
      v37 = *((_DWORD *)v36 + 2);
      v33 = &v12[2 * v34];
      v38 = *((_DWORD *)v33 + 2);
      if ( v37 >= v38 )
      {
        if ( v37 == v38 )
        {
          if ( *v36 < (unsigned __int64)*v33 )
            goto LABEL_43;
        }
        else
        {
          v38 = *((_DWORD *)v36 + 2);
        }
        v33 = &v12[4 * i + 4];
        v34 = 2 * (i + 1);
      }
LABEL_43:
      v35 = &v12[2 * i];
      *((_DWORD *)v35 + 2) = v38;
      *v35 = *v33;
      if ( v34 >= (v31 - 1) / 2 )
        goto LABEL_48;
    }
  }
  if ( *(_DWORD *)(a1 + 72) != 1 || v25 != 1 )
    goto LABEL_3;
  if ( *(_BYTE *)a3 != 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCE6Eu, a4);
    BUG();
  }
  v26 = *(_DWORD *)(a3 + 8);
  v27 = *(_DWORD *)(*(_QWORD *)(v70 + 1504) + 84LL);
  v77 = nullptr;
  *(_QWORD *)&v78 = 0;
  sub_63E80((__int64 *)&v77, v26, v27, a4);
  v79 = 0;
  *((_QWORD *)&v78 + 1) = 0;
  LOBYTE(v10) = sub_129150(a1, &v77, *(_QWORD *)(v71[0] + 16LL), 0, 0, 0, 0.0, a5, 1u) == 0;
  if ( *((_QWORD *)&v78 + 1) )
  {
    *(_QWORD *)&v79 = 0;
    qfree(*((__int64 *)&v78 + 1));
  }
  qfree((__int64)v77);
  return (unsigned int)v10;
}

