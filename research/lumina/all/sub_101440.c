__int64 __fastcall sub_101440(unsigned int *a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int v10; // r15d
  _DWORD *v11; // r12
  unsigned int *v12; // rcx
  int v13; // r13d
  unsigned int v14; // ebp
  int i; // eax
  unsigned int v16; // r14d
  __int64 v17; // rdi
  unsigned int v18; // eax
  _DWORD *v19; // rsi
  unsigned int *v20; // rdx
  bool v21; // zf
  __int64 v23; // rdi
  __int64 *v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  int v31; // r13d
  __int64 v32; // r12
  int v33; // r14d
  int v34; // eax
  unsigned int v35; // eax
  char v36; // al
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // ebp
  unsigned int v41; // eax
  unsigned int v42; // r9d
  __int64 v43; // rdi
  unsigned int v44; // eax
  __int64 v45; // r8
  _OWORD *v46; // rax
  int v47; // r10d
  _OWORD *v48; // rbp
  _OWORD *v49; // rax
  __int64 v50; // rdi
  const __m128i *v51; // rax
  unsigned int v52; // eax
  __int64 v53; // r8
  __int64 v54; // rdi
  unsigned int v55; // r14d
  __int64 v56; // r13
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r12
  __int64 v62; // rax
  int v63; // ebp
  int v64; // eax
  _DWORD *v65; // [rsp+0h] [rbp-B8h]
  unsigned int *v66; // [rsp+0h] [rbp-B8h]
  int v67; // [rsp+0h] [rbp-B8h]
  int v68; // [rsp+0h] [rbp-B8h]
  unsigned int v69; // [rsp+0h] [rbp-B8h]
  unsigned int v70; // [rsp+0h] [rbp-B8h]
  _DWORD *v71; // [rsp+0h] [rbp-B8h]
  unsigned int v72; // [rsp+0h] [rbp-B8h]
  int v73; // [rsp+Ch] [rbp-ACh]
  unsigned int v74; // [rsp+Ch] [rbp-ACh]
  char *v75; // [rsp+10h] [rbp-A8h]
  unsigned int v76; // [rsp+28h] [rbp-90h]
  unsigned int v77; // [rsp+2Ch] [rbp-8Ch]
  unsigned __int32 v78; // [rsp+38h] [rbp-80h] BYREF
  int v79; // [rsp+3Ch] [rbp-7Ch] BYREF
  __int64 v80; // [rsp+40h] [rbp-78h] BYREF
  char v81[8]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v82[16]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v83; // [rsp+60h] [rbp-58h]
  unsigned __int64 v84; // [rsp+78h] [rbp-40h]

  v5 = a3;
  v84 = __readfsqword(0x28u);
  if ( (int)a4 > 5 )
  {
    LODWORD(v8) = 15;
    if ( (int)a4 > 100 )
      return (unsigned int)v8;
    v9 = 1;
    if ( (int)a4 > 9 )
      v9 = (unsigned int)((39 * a4 - 351) * (a4 - 9));
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(
      *(_QWORD *)a1,
      v9,
      a3,
      a4,
      a5,
      15);
  }
  if ( v5 )
  {
    v10 = a1[22];
    v8 = 0;
    v11 = **((_DWORD ***)a1 + 6);
    goto LABEL_8;
  }
  if ( *((_BYTE *)a1 + 70) )
  {
LABEL_26:
    v23 = *((_QWORD *)a1 + 1);
    if ( !*((_BYTE *)a1 + 63) )
    {
      v24 = (_QWORD *)(&dword_0 + 3);
      v41 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v23 + 112LL))(v23, 3, 1, 6);
      v42 = v41;
      if ( v41 )
      {
        if ( v41 == 5 )
          goto LABEL_106;
        goto LABEL_81;
      }
      v23 = *((_QWORD *)a1 + 1);
    }
    *((_WORD *)a1 + 30) = 0;
    v24 = nullptr;
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, char *))(*(_QWORD *)v23 + 104LL))(
            v23,
            0,
            0x8000,
            0,
            v81);
    v29 = v25;
    if ( v25 != 1288 )
    {
      if ( v25 != 8 )
      {
        v30 = 0;
        goto LABEL_30;
      }
      goto LABEL_106;
    }
    v50 = *((_QWORD *)a1 + 2);
    v24 = &v80;
    v51 = **((const __m128i ***)a1 + 6);
    *(__m128i *)(a1 + 18) = _mm_loadu_si128(v51);
    *(__m128i *)(a1 + 22) = _mm_loadu_si128(v51 + 1);
    *(__m128i *)(a1 + 26) = _mm_loadu_si128(v51 + 2);
    v52 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, __int64))(*(_QWORD *)v50 + 48LL))(
            v50,
            &v80,
            v26,
            v27,
            v28,
            v29);
    v42 = v52;
    if ( !v52 )
    {
      if ( v80 <= 31 )
      {
        *a2 = 1;
        if ( !a1[22] )
        {
          sub_C91C0(0, (__int64)&v80);
          LODWORD(v8) = 0;
          return (unsigned int)v8;
        }
        goto LABEL_106;
      }
      v54 = *((_QWORD *)a1 + 2);
      v24 = (__int64 *)v82;
      v42 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v54 + 16LL))(
              v54,
              v82,
              32,
              0,
              v53,
              v52);
      if ( !v42 )
      {
        if ( v83 == *((_QWORD *)a1 + 13) )
        {
          v55 = a1[14];
          if ( !(unsigned int)sub_FEBD0(v54, (__int64)v82) )
          {
            v56 = (int)(v55 + 24);
            v74 = v55 + 24;
            v57 = sub_D1E10(v56, (__int64)v82);
            v30 = v57;
            if ( v57 )
            {
              v59 = 0;
              v75 = (char *)(v57 + 24);
              v76 = a1[24];
              v77 = a1[25];
              v60 = a1[22] * (unsigned __int64)(a1[14] + 24);
              v61 = v60 + 32;
              if ( v80 < (__int64)(v60 + v56 + 32) )
              {
                sub_C91C0(v30, (__int64)v82);
                LODWORD(v8) = 0;
                return (unsigned int)v8;
              }
              v71 = a2;
              while ( 1 )
              {
                v24 = (__int64 *)v30;
                v63 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64, __int64, __int64))(**((_QWORD **)a1 + 2) + 16LL))(
                        *((_QWORD *)a1 + 2),
                        v30,
                        v74,
                        v61,
                        v58,
                        v59);
                if ( v63 || (v24 = (__int64 *)&v78, !(unsigned int)sub_C8010((__int64)a1, &v78, &v79, v75, v30)) )
                {
LABEL_96:
                  LODWORD(v29) = v63;
                  a2 = v71;
                  goto LABEL_97;
                }
                if ( v79 )
                  break;
                v62 = v61 + 2 * v56;
                v61 += v56;
                if ( v80 < v62 )
                  goto LABEL_96;
              }
              a2 = v71;
              LODWORD(v29) = -1;
LABEL_97:
              a1[24] = v76;
              a1[25] = v77;
LABEL_30:
              v67 = v29;
              sub_C91C0(v30, (__int64)v24);
              LODWORD(v8) = v67;
              if ( !v67 )
                return (unsigned int)v8;
              goto LABEL_31;
            }
          }
          sub_C91C0(0, (__int64)v82);
          LODWORD(v8) = 7;
LABEL_31:
          v31 = v8;
          if ( (int)a1[10] > 0 )
          {
            do
            {
              v32 = v5++;
              sub_C91C0(*(_QWORD *)(*((_QWORD *)a1 + 6) + 8 * v32), (__int64)v24);
              *(_QWORD *)(*((_QWORD *)a1 + 6) + 8 * v32) = 0;
            }
            while ( v5 < (int)a1[10] );
            LODWORD(v8) = v31;
          }
          *((_BYTE *)a1 + 70) = 0;
          v68 = v8;
          sub_CC410((__int64)a1);
          *a2 = 1;
          LODWORD(v8) = v68;
          return (unsigned int)v8;
        }
LABEL_106:
        sub_C91C0(0, (__int64)v24);
        LODWORD(v8) = -1;
        goto LABEL_31;
      }
    }
LABEL_81:
    v70 = v42;
    sub_C91C0(0, (__int64)v24);
    LODWORD(v8) = v70;
    goto LABEL_31;
  }
  v35 = sub_100BA0((__int64)a1, a2);
  v8 = v35;
  if ( v35 != 5 )
  {
    if ( v35 )
      return (unsigned int)v8;
    if ( *((_BYTE *)a1 + 70) )
      goto LABEL_26;
    v11 = **((_DWORD ***)a1 + 6);
    v10 = a1[22];
    if ( v11[24] != v10 )
      goto LABEL_8;
    v36 = *((_BYTE *)a1 + 63);
    v37 = *((_QWORD *)a1 + 1);
    if ( v36 )
    {
      v48 = a1 + 18;
      v72 = v8;
      if ( v36 == 2 )
      {
        v64 = memcmp(v11, a1 + 18, 0x30u);
        LODWORD(v8) = v72;
        if ( v64 )
          goto LABEL_56;
LABEL_74:
        *((_WORD *)a1 + 30) = 0;
        return (unsigned int)v8;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 120LL))(v37);
      v8 = v72;
    }
    else
    {
      v69 = v8;
      v40 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v37 + 112LL))(v37, 3, 1, 6);
      v8 = v69;
      if ( *((_BYTE *)a1 + 63) != 2 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 120LL))(
          *((_QWORD *)a1 + 1),
          3,
          v38,
          v39,
          a5,
          v69);
        v8 = v69;
      }
      if ( v40 )
      {
        v8 = v40;
        if ( v40 != 5 )
          return (unsigned int)v8;
        v10 = a1[22];
LABEL_8:
        v12 = v11 + 26;
        v13 = 0;
        v14 = 0;
        v65 = v11 + 25;
        for ( i = 1; i != 5; ++i )
        {
          if ( *v12 >= v14 && *v12 <= v10 )
          {
            v13 = i;
            v14 = *v12;
          }
          ++v12;
        }
        if ( (*((_BYTE *)a1 + 66) & 2) != 0 )
        {
          if ( !v13 )
          {
            if ( (_DWORD)v8 != 5 )
            {
              LODWORD(v8) = 1288;
              return (unsigned int)v8;
            }
            goto LABEL_56;
          }
LABEL_44:
          v16 = v13 + 3;
        }
        else if ( v14 < v10 || (v16 = v13 + 3, !v13) )
        {
          v33 = 1;
          while ( !*((_BYTE *)a1 + 63) )
          {
            v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(**((_QWORD **)a1 + 1)
                                                                                                + 112LL))(
                    *((_QWORD *)a1 + 1),
                    (unsigned int)(v33 + 3),
                    1,
                    10,
                    a5,
                    v8);
            if ( !v34 )
              break;
            if ( v34 != 5 )
            {
              LODWORD(v8) = v34;
              return (unsigned int)v8;
            }
            if ( ++v33 == 5 )
            {
              if ( !v13 )
                goto LABEL_56;
              goto LABEL_44;
            }
          }
          v19 = v11 + 25;
          v47 = v33;
          v16 = v33 + 3;
          v20 = &v65[v47];
          *v20 = v10;
          v17 = *((_QWORD *)a1 + 1);
          if ( !*((_BYTE *)a1 + 63) )
          {
            v73 = v47;
            v14 = v10;
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 112LL))(
              v17,
              v16,
              1,
              9,
              a5,
              v8);
            v13 = v73;
            goto LABEL_16;
          }
          LOWORD(v13) = v47;
          v14 = v10;
LABEL_19:
          v21 = *((_BYTE *)a1 + 63) == 2;
          a1[30] = v11[24] + 1;
          if ( !v21 )
          {
            v66 = v20;
            (*(void (__fastcall **)(__int64, _DWORD *, unsigned int *, unsigned int *, __int64, __int64))(*(_QWORD *)v17 + 120LL))(
              v17,
              v19,
              v20,
              v12,
              a5,
              v8);
            v20 = v66;
          }
          if ( *v20 == v14 )
          {
            v46 = **((_OWORD ***)a1 + 6);
            if ( *(_OWORD *)(a1 + 18) == *v46 && *(_OWORD *)(a1 + 22) == v46[1] && v46[2] == *(_OWORD *)(a1 + 26) )
            {
              LODWORD(v8) = 0;
              *((_WORD *)a1 + 30) = v13;
              return (unsigned int)v8;
            }
          }
          if ( !*((_BYTE *)a1 + 63) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(**((_QWORD **)a1 + 1) + 112LL))(
              *((_QWORD *)a1 + 1),
              v16,
              1,
              5,
              a5,
              v8);
            LODWORD(v8) = -1;
            return (unsigned int)v8;
          }
LABEL_56:
          LODWORD(v8) = -1;
          return (unsigned int)v8;
        }
LABEL_16:
        v17 = *((_QWORD *)a1 + 1);
        if ( *((_BYTE *)a1 + 63) )
        {
          v19 = v11 + 25;
          v20 = &v65[v13];
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 112LL))(
                  v17,
                  v16,
                  1,
                  6,
                  a5,
                  v8);
          v8 = v18;
          if ( v18 )
          {
            if ( v18 != 5 )
              return (unsigned int)v8;
            goto LABEL_56;
          }
          v19 = v11 + 25;
          v17 = *((_QWORD *)a1 + 1);
          v20 = &v65[v13];
        }
        goto LABEL_19;
      }
      v48 = a1 + 18;
    }
    v49 = **((_OWORD ***)a1 + 6);
    if ( *v48 != *v49 || v48[1] != v49[1] || v49[2] != v48[2] )
    {
      if ( !*((_BYTE *)a1 + 63) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64))(**((_QWORD **)a1 + 1) + 112LL))(
          *((_QWORD *)a1 + 1),
          3,
          1,
          5,
          a5,
          v8);
        LODWORD(v8) = -1;
        return (unsigned int)v8;
      }
      goto LABEL_56;
    }
    goto LABEL_74;
  }
  if ( !**((_QWORD **)a1 + 6) )
    goto LABEL_56;
  v43 = *((_QWORD *)a1 + 1);
  if ( *((_BYTE *)a1 + 63) )
    goto LABEL_56;
  v44 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v43 + 112LL))(
          v43,
          2,
          1,
          6,
          a5,
          v35);
  LODWORD(v8) = v44;
  if ( !v44 )
  {
    if ( !*((_BYTE *)a1 + 63) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 112LL))(
        *((_QWORD *)a1 + 1),
        2,
        1,
        5,
        v45,
        v44);
    goto LABEL_56;
  }
  if ( v44 == 5 )
    LODWORD(v8) = 261;
  return (unsigned int)v8;
}
