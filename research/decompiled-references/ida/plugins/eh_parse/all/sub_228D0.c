__int64 __fastcall sub_228D0(__int64 a1, __int64 a2, __int64 a3, __int64 (***a4)(), char a5)
{
  unsigned int dword; // eax
  __int64 v7; // r12
  unsigned int v8; // r13d
  __int64 v9; // rdx
  int v10; // r14d
  int v11; // eax
  int v12; // ecx
  char v14; // al
  __int64 v15; // r14
  __int64 v16; // r13
  unsigned int v17; // eax
  int v18; // ecx
  __int64 (*v19)(); // rax
  unsigned int v20; // eax
  unsigned int v21; // r15d
  int v22; // ecx
  unsigned int v23; // r12d
  unsigned int v24; // r14d
  const char *v25; // rsi
  __int64 v26; // rdx
  int flags; // eax
  __int64 v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  unsigned __int8 (__fastcall *v31)(__int64, unsigned __int8 *); // r14
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // r13
  unsigned __int8 v34; // al
  __int64 (*v35)(); // r8
  unsigned __int64 v36; // rdx
  char v37; // al
  __int64 v38; // rax
  __int64 (**v39)(); // rax
  __int64 (*v40)(); // r10
  unsigned __int8 v41; // bl
  int v42; // eax
  __int64 (*v43)(); // rax
  int v44; // eax
  int v45; // r14d
  __int64 v46; // r12
  __int64 v47; // rdx
  __int64 (*v48)(); // rax
  int v50; // [rsp+8h] [rbp-A0h]
  __int64 v51; // [rsp+10h] [rbp-98h]
  __int64 v52; // [rsp+10h] [rbp-98h]
  unsigned __int64 v53; // [rsp+10h] [rbp-98h]
  unsigned int v54; // [rsp+1Ch] [rbp-8Ch]
  unsigned __int64 v55; // [rsp+20h] [rbp-88h]
  bool v56; // [rsp+2Ch] [rbp-7Ch]
  unsigned __int8 v57; // [rsp+3Fh] [rbp-69h] BYREF
  __int64 v58; // [rsp+40h] [rbp-68h] BYREF
  __int64 v59; // [rsp+48h] [rbp-60h]
  const char *v60; // [rsp+50h] [rbp-58h] BYREF
  __int128 v61; // [rsp+58h] [rbp-50h]
  unsigned __int64 v62; // [rsp+68h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  dword = get_dword(a2 + 4);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = dword;
  v9 = *(_QWORD *)(a1 + 32) + (unsigned int)get_dword(a2);
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v7 + 8) + 4LL) - 12) <= 1 && v9 != -1 )
  {
    v51 = v9;
    v14 = getinf_flag(3, 4);
    v9 = v51;
    if ( !v14 )
      v9 = (unsigned int)v51 & 0xFFFFFFFE;
  }
  v58 = v9;
  v59 = 0;
  v10 = v8 & 3;
  if ( (v8 & 3) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) & (*(_QWORD *)(a1 + 32) + (unsigned int)get_dword(a2 + 4));
    v17 = get_dword(v16);
    v18 = *(_DWORD *)(a1 + 60);
    v54 = v17;
    v59 = v58 + (2 * (v18 == 5) + 2) * (v17 & 0x3FFFF);
    if ( (v17 & 0xC0000) != 0 )
      return 0;
    v19 = **a4;
    if ( v19 != sub_210C0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(__int64 (***)(), __int64, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
              a4,
              v16,
              &v58,
              0,
              0,
              0,
              0,
              0) )
        return 0;
      v18 = *(_DWORD *)(a1 + 60);
    }
    v20 = v54 >> 22;
    if ( v18 == 5 )
    {
      v56 = 1;
      v22 = (v54 >> 22) & 0x1F;
      v21 = v54 >> 27;
    }
    else
    {
      v56 = (v54 & 0x400000) != 0;
      v20 = v54 >> 23;
      v21 = v54 >> 28;
      v22 = (v54 >> 23) & 0x1F;
    }
    v52 = v16 + 4;
    if ( v20 )
    {
      v60 = nullptr;
      v61 = 0;
      if ( (v54 & 0x200000) != 0 )
      {
        sub_8A10((__int64 *)&v60, (__int64)"Single epilog (packed) - unwind codes begin at index: %d", v22);
        v24 = 4;
        if ( a5 )
          goto LABEL_23;
LABEL_60:
        v28 = v24;
LABEL_27:
        v29 = v24 + 4 * v21;
        v30 = v16 + v28;
        v31 = (unsigned __int8 (__fastcall *)(__int64, unsigned __int8 *))sub_21240;
        v53 = v16 + v29;
        if ( *(_DWORD *)(a1 + 60) != 5 )
          v31 = (unsigned __int8 (__fastcall *)(__int64, unsigned __int8 *))sub_211A0;
        v32 = v30;
        v33 = v16 + v29;
        if ( v30 >= v53 )
          goto LABEL_61;
        do
        {
          while ( 1 )
          {
            v32 += v31(v32, &v57);
            if ( *(_DWORD *)(a1 + 60) == 5 || v57 > 7u )
              break;
            if ( v57 >= 6u )
              v33 = v32;
            if ( v32 >= v53 )
              goto LABEL_39;
          }
          if ( v57 == 9 )
            v33 = v32;
        }
        while ( v32 < v53 );
LABEL_39:
        if ( v30 < v33 )
        {
          while ( 1 )
          {
            v34 = v31(v30, &v57);
            v35 = (*a4)[3];
            v36 = v30 + v34;
            if ( v35 != sub_21090 )
            {
              v55 = v30 + v34;
              v37 = ((__int64 (__fastcall *)(__int64 (***)(), unsigned __int64, unsigned __int64, _QWORD))v35)(
                      a4,
                      v30,
                      v36,
                      v57);
              v36 = v55;
              if ( !v37 )
                break;
            }
            if ( v36 >= v33 )
              goto LABEL_61;
            v30 = v36;
          }
        }
        else
        {
LABEL_61:
          v43 = (*a4)[4];
          if ( v43 == sub_210A0 || ((unsigned __int8 (__fastcall *)(__int64 (***)(), unsigned __int64))v43)(a4, v33) )
          {
            if ( (v54 & 0x100000) == 0
              || (v46 = *(_QWORD *)(a1 + 8),
                  v47 = *(_QWORD *)(*(_QWORD *)(v46 + 24) + 16LL)
                      & (*(_QWORD *)(a1 + 32) + (unsigned int)get_dword(v53)),
                  v47 != -1)
              && ((v48 = (*a4)[6], v48 == sub_210D0)
               || ((unsigned __int8 (__fastcall *)(__int64 (***)(), unsigned __int64, __int64, unsigned __int64))v48)(
                    a4,
                    v53,
                    v47,
                    v53 + 4)) )
            {
              v41 = !v56 | (v54 >> 21) & (*(_DWORD *)(a1 + 60) == 5);
              if ( v60 )
              {
                *(_QWORD *)&v61 = 0;
                qfree(v60);
              }
              v39 = *a4;
              goto LABEL_50;
            }
          }
        }
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree(v60);
        }
        return 0;
      }
      if ( a5 )
      {
        v23 = 4;
LABEL_22:
        v50 = v22;
        set_cmt(v16 + v23, "<-- epilog scopes", 0);
        v24 = v23 + 4 * v50;
        sub_8A10((__int64 *)&v60, (__int64)"Epilog scopes count: %d", v50);
LABEL_23:
        v25 = s1;
        if ( (_QWORD)v61 )
          v25 = v60;
        set_cmt(v16, v25, 0);
        flags = get_flags_ex(v52, 4, v26);
        v28 = v24;
        if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x20000000 )
          create_data(v52, 0x20000000, v24 - 4LL, -1);
        goto LABEL_27;
      }
      v42 = 4;
    }
    else
    {
      v44 = get_dword(v16 + 4);
      v45 = v44;
      if ( a5 )
      {
        v23 = 8;
        set_cmt(v52, "extension word", 0);
        v22 = (unsigned __int16)v45;
        v61 = 0;
        v60 = nullptr;
        v21 = BYTE2(v45);
        if ( (v54 & 0x200000) != 0 )
        {
          sub_8A10(
            (__int64 *)&v60,
            (__int64)"Single epilog (packed) - unwind codes begin at index: %d",
            (unsigned __int16)v45);
          v24 = 8;
          goto LABEL_23;
        }
        goto LABEL_22;
      }
      v22 = (unsigned __int16)v44;
      v60 = nullptr;
      v21 = BYTE2(v44);
      v61 = 0;
      v42 = 8;
      if ( (v54 & 0x200000) != 0 )
      {
        sub_8A10((__int64 *)&v60, (__int64)"Single epilog (packed) - unwind codes begin at index: %d", v22);
        v24 = 8;
        goto LABEL_60;
      }
    }
    v24 = v42 + 4 * v22;
    sub_8A10((__int64 *)&v60, (__int64)"Epilog scopes count: %d", v22);
    goto LABEL_60;
  }
  if ( v10 != 3 )
  {
    v11 = (v8 >> 2) & 0x7FF;
    if ( *(_DWORD *)(a1 + 60) == 5 )
    {
      v38 = (unsigned int)(4 * v11);
    }
    else
    {
      v12 = (v8 >> 20) & 1;
      if ( (v8 & 0x200000) != 0 )
      {
        if ( !v12 || (v8 & 0x80000) == 0 && (~v8 & 0x70000) == 0 )
          return 0;
      }
      else if ( !(v12 | (v8 >> 13) & 3) )
      {
        return 0;
      }
      v38 = (unsigned int)(2 * v11);
    }
    v59 = v9 + v38;
    v39 = *a4;
    v40 = **a4;
    if ( v40 == sub_210C0 )
    {
LABEL_49:
      v41 = v10 != 2;
LABEL_50:
      ((void (__fastcall *)(__int64 (***)(), _QWORD))v39[7])(a4, v41);
      return 1;
    }
    if ( ((unsigned __int8 (__fastcall *)(__int64 (***)(), __int64, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v40)(
           a4,
           -1,
           &v58,
           0,
           0,
           0,
           0,
           0) )
    {
      v39 = *a4;
      goto LABEL_49;
    }
    return 0;
  }
  return 1;
}

