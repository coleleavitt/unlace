__int64 __fastcall sub_14CE20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 (*v7)(); // rax
  __int64 *v8; // r14
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // r15
  __int128 v18; // rdi
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // r14
  int v21; // eax
  __int64 v22; // rdi
  __int64 (*v23)(); // rax
  int v24; // eax
  int v25; // esi
  int v26; // edx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 i; // rax
  __int64 *v32; // rcx
  __int64 v33; // rsi
  __int64 *v34; // rax
  __int64 *v35; // rdx
  int v36; // r11d
  int v37; // r8d
  __int64 *v38; // rax
  __int64 *v39; // rdx
  __int64 v40; // rdi
  __int64 (*v41)(); // rax
  __int64 v42; // rdi
  __int64 v43; // r9
  _DWORD *v44; // rcx
  int v45; // r8d
  _DWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rsi
  bool v50; // cf
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 *v53; // r10
  __int64 v54; // rdx
  __int64 *v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // [rsp+10h] [rbp-E0h]
  __int64 *v59; // [rsp+10h] [rbp-E0h]
  __int64 v60; // [rsp+20h] [rbp-D0h]
  int v61; // [rsp+20h] [rbp-D0h]
  __int64 v62; // [rsp+20h] [rbp-D0h]
  __int64 *v63; // [rsp+30h] [rbp-C0h]
  __int64 v64; // [rsp+30h] [rbp-C0h]
  int v65; // [rsp+30h] [rbp-C0h]
  __int64 v66; // [rsp+30h] [rbp-C0h]
  __int64 *v67; // [rsp+38h] [rbp-B8h]
  int v68; // [rsp+4Ch] [rbp-A4h]
  __int64 v69; // [rsp+50h] [rbp-A0h]
  _QWORD v70[2]; // [rsp+58h] [rbp-98h] BYREF
  int v71; // [rsp+68h] [rbp-88h]
  __int64 v72; // [rsp+70h] [rbp-80h]
  int v73; // [rsp+78h] [rbp-78h]
  __int64 v74; // [rsp+80h] [rbp-70h] BYREF
  int v75; // [rsp+88h] [rbp-68h]
  _DWORD *v76; // [rsp+90h] [rbp-60h] BYREF
  __int128 v77; // [rsp+98h] [rbp-58h]
  __int128 v78; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 64);
  v70[0] = a2;
  v5 = *(_QWORD *)(v4 + 920);
  v79 = __readfsqword(0x28u);
  v69 = v4;
  v7 = *(__int64 (**)())(*(_QWORD *)v5 + 32LL);
  if ( v7 == sub_76990 )
  {
    if ( !*(_DWORD *)(a1 + 76) )
    {
LABEL_3:
      LODWORD(v8) = 0;
      return (unsigned int)v8;
    }
    v68 = 0;
    goto LABEL_6;
  }
  v24 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))v7)(v5, v69, a3, 0, 0);
  LODWORD(v8) = 1;
  v68 = v24;
  if ( v24 == 2 )
    return (unsigned int)v8;
  if ( *(_DWORD *)(a1 + 76) )
  {
LABEL_6:
    v76 = nullptr;
    v77 = 0;
    v10 = (__int64 *)operator new(0x10u);
    *v10 = a3;
    v11 = *(_DWORD *)(a1 + 72);
    v72 = a3;
    v8 = v10 + 2;
    *((_DWORD *)v10 + 2) = v11;
    v73 = v11;
    v75 = v11;
    v74 = a3;
    sub_14AB80((__int64)v10, 0, 0, &v74);
    v12 = v77;
    v13 = *(_DWORD *)(a1 + 72);
    v14 = (__int64)v76;
    if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
    {
      v76 = (_DWORD *)qvector_reserve();
      v14 = (__int64)v76;
      v12 = v77;
    }
    *(_DWORD *)(v14 + 4 * v12) = v13;
    *(_QWORD *)&v77 = v77 + 1;
    v67 = v10 + 2;
    while ( 2 )
    {
      v15 = *((unsigned int *)v10 + 2);
      v16 = *v10;
      v63 = v8 - 2;
      if ( (char *)v8 - (char *)v10 <= 16 )
      {
LABEL_10:
        if ( (unsigned int)v15 >= *(_DWORD *)(v69 + 64) )
          sub_14AA60();
        v17 = *(_QWORD *)(*(_QWORD *)(v69 + 528) + 8 * v15);
        while ( 1 )
        {
          *((_QWORD *)&v18 + 1) = v16;
          *(_QWORD *)&v18 = v17;
          v19 = (unsigned __int8 *)sub_125A00(v18, (__int64)v70, 0);
          v20 = v19;
          if ( !v19 )
            break;
          if ( (unsigned __int8 *)v70[0] != v19 )
            goto LABEL_26;
          v21 = *(_DWORD *)v19;
          if ( v21 == 4 )
          {
            if ( !sub_122120(v20 + 64, v16, 0) )
              goto LABEL_26;
          }
          else if ( v21 != 8
                 || !sub_121B90(v20 + 64, *(_QWORD *)(v69 + 1504), v16, 1u)
                 || *((_DWORD *)v20 + 9) != *(_DWORD *)(v16 + 4) )
          {
            goto LABEL_26;
          }
          v16 = (__int64)(v20 + 32);
          if ( (v20[32] & 0xFB) != 1 )
            goto LABEL_26;
          v68 = 0;
          v22 = *(_QWORD *)(v69 + 920);
          v23 = *(__int64 (**)())(*(_QWORD *)v22 + 32LL);
          if ( v23 != sub_76990 )
          {
            v68 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int8 *, _QWORD, _QWORD))v23)(
                    v22,
                    v69,
                    v20 + 32,
                    0,
                    0);
            if ( v68 == 2 )
            {
              if ( *(_DWORD *)(v17 + 72) != 1 )
              {
LABEL_22:
                v8 = v63;
                goto LABEL_23;
              }
LABEL_53:
              v40 = *(_QWORD *)(v69 + 920);
              v41 = *(__int64 (**)())(*(_QWORD *)v40 + 32LL);
              if ( v41 == sub_76990
                || (v68 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))v41)(v40, v69, v16, 0, 0),
                    v68 != 1) )
              {
LABEL_26:
                LODWORD(v8) = 0;
                goto LABEL_27;
              }
              goto LABEL_22;
            }
          }
        }
        if ( *(_DWORD *)(v17 + 72) == 1 )
          goto LABEL_53;
        v42 = *(_QWORD *)(v17 + 352);
        if ( (int)v42 <= 0 )
          goto LABEL_22;
        v8 = v63;
        v43 = 0;
        do
        {
          v44 = &v76[v77];
          v45 = *(_DWORD *)(*(_QWORD *)(v17 + 344) + 4 * v43);
          if ( v76 == v44 )
            goto LABEL_66;
          v46 = v76;
          while ( v45 != *v46 )
          {
            if ( v44 == ++v46 )
              goto LABEL_66;
          }
          if ( v44 == v46 )
          {
LABEL_66:
            if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
            {
              v60 = v43;
              v65 = *(_DWORD *)(*(_QWORD *)(v17 + 344) + 4 * v43);
              v76 = (_DWORD *)qvector_reserve();
              v43 = v60;
              v45 = v65;
              v44 = &v76[v77];
            }
            *v44 = v45;
            *(_QWORD *)&v77 = v77 + 1;
            if ( v8 == v67 )
            {
              v48 = ((char *)v8 - (char *)v10) >> 4;
              if ( v48 == 0x7FFFFFFFFFFFFFFLL )
                std::__throw_length_error("vector::_M_realloc_append");
              v49 = 1;
              if ( v48 )
                v49 = ((char *)v8 - (char *)v10) >> 4;
              v50 = __CFADD__(v49, v48);
              v51 = v49 + v48;
              if ( v50 )
              {
                v51 = 0x7FFFFFFFFFFFFFFLL;
              }
              else if ( v51 > 0x7FFFFFFFFFFFFFFLL )
              {
                v51 = 0x7FFFFFFFFFFFFFFLL;
              }
              v58 = v43;
              v61 = v45;
              v66 = 2 * v51;
              v52 = operator new(16 * v51);
              v53 = (__int64 *)v52;
              v43 = v58;
              v54 = v52 + (char *)v8 - (char *)v10;
              *(_QWORD *)v54 = v16;
              *(_DWORD *)(v54 + 8) = v61;
              if ( v10 == v8 )
              {
                v56 = v52;
              }
              else
              {
                v55 = v10;
                v56 = v52 + (char *)v8 - (char *)v10;
                do
                {
                  v57 = *v55;
                  v52 += 16;
                  v55 += 2;
                  *(_QWORD *)(v52 - 16) = v57;
                  *(_DWORD *)(v52 - 8) = *((_DWORD *)v55 - 2);
                }
                while ( v56 != v52 );
              }
              v8 = (__int64 *)(v56 + 16);
              if ( v10 )
              {
                v59 = v53;
                v62 = v43;
                operator delete(v10, (char *)v67 - (char *)v10);
                v53 = v59;
                v43 = v62;
              }
              v10 = v53;
              v67 = &v53[v66];
            }
            else
            {
              *v8 = v16;
              v8 += 2;
              *((_DWORD *)v8 - 2) = v45;
            }
            v47 = *((_DWORD *)v8 - 2);
            v64 = v43;
            v72 = *(v8 - 2);
            v74 = v72;
            v73 = v47;
            v75 = v47;
            sub_14AB80((__int64)v10, (((char *)v8 - (char *)v10) >> 4) - 1, 0, &v74);
            v42 = *(_QWORD *)(v17 + 352);
            v43 = v64;
          }
          ++v43;
        }
        while ( (int)v42 > (int)v43 );
LABEL_23:
        v70[0] = 0;
        if ( v10 != v8 )
          continue;
        LOBYTE(v8) = v68 != 0;
LABEL_27:
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree();
        }
        if ( v10 )
          operator delete(v10, (char *)v67 - (char *)v10);
        return (unsigned int)v8;
      }
      break;
    }
    v27 = *((_DWORD *)v8 - 2);
    v28 = *(v8 - 2);
    *((_DWORD *)v8 - 2) = v15;
    v29 = *v10;
    v71 = v27;
    v73 = v27;
    v70[1] = v28;
    *(v8 - 2) = v29;
    v72 = v28;
    v30 = ((char *)v63 - (char *)v10) >> 4;
    if ( v30 - 1 <= 1 )
    {
      v33 = 0;
LABEL_48:
      if ( (v30 & 1) == 0 && (v30 - 2) / 2 == v33 )
      {
        v38 = &v10[2 * v33];
        v39 = &v10[4 * v33 + 2];
        *((_DWORD *)v38 + 2) = *((_DWORD *)v39 + 2);
        v33 = 2 * v33 + 1;
        *v38 = *v39;
      }
      v74 = v72;
      v75 = v73;
      sub_14AB80((__int64)v10, v33, 0, &v74);
      goto LABEL_10;
    }
    for ( i = 0; ; i = v33 )
    {
      v33 = 2 * (i + 1) - 1;
      v35 = &v10[4 * i + 4];
      v36 = *((_DWORD *)v35 + 2);
      v32 = &v10[2 * v33];
      v37 = *((_DWORD *)v32 + 2);
      if ( v36 >= v37 )
      {
        if ( v36 == v37 )
        {
          if ( *v35 < (unsigned __int64)*v32 )
            goto LABEL_43;
        }
        else
        {
          v37 = *((_DWORD *)v35 + 2);
        }
        v32 = &v10[4 * i + 4];
        v33 = 2 * (i + 1);
      }
LABEL_43:
      v34 = &v10[2 * i];
      *((_DWORD *)v34 + 2) = v37;
      *v34 = *v32;
      if ( v33 >= (v30 - 1) / 2 )
        goto LABEL_48;
    }
  }
  if ( *(_DWORD *)(a1 + 72) != 1 || v24 != 1 )
    goto LABEL_3;
  if ( *(_BYTE *)a3 != 1 )
  {
    if ( !under_debugger )
      sub_37EEE0(52846);
    BUG();
  }
  v25 = *(_DWORD *)(a3 + 8);
  v26 = *(_DWORD *)(*(_QWORD *)(v69 + 1504) + 84LL);
  v76 = nullptr;
  *(_QWORD *)&v77 = 0;
  sub_60440((__int64 *)&v76, v25, v26);
  v78 = 0;
  *((_QWORD *)&v77 + 1) = 0;
  LOBYTE(v8) = sub_125710(a1, &v76, *(_QWORD *)(v70[0] + 16LL), 0, nullptr, 0, 1u) == 0;
  if ( *((_QWORD *)&v77 + 1) )
  {
    *(_QWORD *)&v78 = 0;
    qfree();
  }
  qfree();
  return (unsigned int)v8;
}

