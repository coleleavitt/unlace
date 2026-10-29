__int64 __fastcall sub_48B90(_QWORD *a1, int a2, __int64 a3, unsigned __int8 *a4, char a5)
{
  __int64 v7; // rdi
  int v9; // r12d
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  const char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  __int64 v18; // rsi
  unsigned __int8 v19; // di
  __int64 v20; // r12
  __int64 v21; // r14
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 v26; // r14
  unsigned __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // r12
  const char *v30; // rdx
  __int64 custom_refinfo; // rax
  void (__fastcall *v32)(const char **); // rax
  const char *v33; // rdx
  unsigned int v34; // [rsp+Ch] [rbp-ACh]
  __int64 v35; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+20h] [rbp-98h] BYREF
  __int128 v37; // [rsp+28h] [rbp-90h]
  const char *v38; // [rsp+40h] [rbp-78h] BYREF
  __int128 v39; // [rsp+48h] [rbp-70h]
  _BYTE v40[24]; // [rsp+60h] [rbp-58h] BYREF
  char v41; // [rsp+78h] [rbp-40h]
  char v42; // [rsp+79h] [rbp-3Fh]
  unsigned __int64 v43; // [rsp+88h] [rbp-30h]

  v7 = a1[77];
  v43 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v7 + 468) == 2 && !a5 )
    return 0;
  v9 = sub_347D0(v7, (__int64)(a1 + 28), (__int64)&v35, (__int64)v40, a2, a3, a4);
  if ( !v9 )
    return 0;
  if ( *(_DWORD *)(a1[77] + 468LL) )
  {
    if ( v9 != 1 )
      goto LABEL_10;
  }
  else if ( v9 != 1 )
  {
    return 0;
  }
  if ( a5 != 1 )
    return 0;
LABEL_10:
  v11 = (char)a4[2];
  v12 = *a4;
  v37 = 0;
  v13 = (const char *)(a1[30] + v11);
  v36 = 0;
  if ( get_name_expr(&v36, v13, v12, v35, v35, 1) > 0 )
  {
    if ( v9 == 1 || *(_DWORD *)(a1[77] + 468LL) == 2 )
    {
      v13 = s1;
      if ( (_QWORD)v37 )
        v13 = (const char *)v36;
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, v13, 0);
      result = 2;
      goto LABEL_32;
    }
    switch ( v9 )
    {
      case 3:
        v25 = v37;
        if ( (_QWORD)v37 )
        {
          v26 = v37 + 8;
          v27 = v37 + 9;
          v25 = v37 - 1;
        }
        else
        {
          v27 = 10;
          v26 = 9;
        }
        v28 = v36;
        if ( *((_QWORD *)&v37 + 1) < v27 )
        {
          v36 = qvector_reserve(&v36, v36, v27, 1);
          v28 = v36;
        }
        *(_QWORD *)&v37 = v27;
        *(_BYTE *)(v28 + v26) = 0;
        v29 = v36 + v25;
        *(_QWORD *)v29 = 0x232616473402001LL;
        *(_BYTE *)(v29 + 8) = 32;
        break;
      case 4:
        v20 = v37;
        if ( (_QWORD)v37 )
        {
          v21 = v37 + 9;
          v22 = v37 + 10;
          v20 = v37 - 1;
        }
        else
        {
          v22 = 11;
          v21 = 10;
        }
        v23 = v36;
        if ( *((_QWORD *)&v37 + 1) < v22 )
        {
          v36 = qvector_reserve(&v36, v36, v22, 1);
          v23 = v36;
        }
        *(_QWORD *)&v37 = v22;
        *(_BYTE *)(v23 + v21) = 0;
        v24 = v36 + v20;
        *(_QWORD *)v24 = 0x3132616473402001LL;
        *(_WORD *)(v24 + 8) = 8194;
        break;
      case 2:
        v15 = v37;
        if ( (_QWORD)v37 )
        {
          v16 = v37 + 7;
          v17 = v37 + 8;
          v15 = v37 - 1;
        }
        else
        {
          v17 = 9;
          v16 = 8;
        }
        v18 = v36;
        if ( *((_QWORD *)&v37 + 1) < v17 )
        {
          v36 = qvector_reserve(&v36, v36, v17, 1);
          v18 = v36;
        }
        *(_QWORD *)&v37 = v17;
        *(_BYTE *)(v18 + v16) = 0;
        *(_QWORD *)(v36 + v15) = 0x2002616473402001LL;
        break;
    }
    if ( (v42 & 1) != 0 )
      goto LABEL_25;
    v19 = v41 & 0x4F;
    if ( (v41 & 0x4F) == 4 )
    {
      v13 = *(const char **)(a1[79] + 360LL);
      if ( !v13 )
        goto LABEL_24;
    }
    else if ( v19 != 6 || (v13 = *(const char **)(a1[79] + 368LL)) == nullptr )
    {
LABEL_24:
      if ( v19 == *(_DWORD *)(a1[77] + 540LL) && (v41 & 0x40) != 0 )
      {
        custom_refinfo = get_custom_refinfo();
        if ( custom_refinfo )
        {
          v32 = *(void (__fastcall **)(const char **))(custom_refinfo + 48);
          if ( v32 )
          {
            v38 = nullptr;
            v39 = 0;
            v32(&v38);
            v33 = s1;
            if ( (_QWORD)v37 )
              v33 = (const char *)v36;
            v13 = s1;
            if ( (_QWORD)v39 )
              v13 = v38;
            sub_481D0((__int64)a1, (__int64)v13, v33);
            if ( v38 )
            {
              *(_QWORD *)&v39 = 0;
              qfree(v38, v13, v14, 0.0);
            }
LABEL_28:
            result = 1;
            goto LABEL_32;
          }
        }
      }
LABEL_25:
      v13 = s1;
      if ( (_QWORD)v37 )
        v13 = (const char *)v36;
      (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, v13, 0);
      goto LABEL_28;
    }
    v30 = s1;
    if ( (_QWORD)v37 )
      v30 = (const char *)v36;
    sub_481D0((__int64)a1, (__int64)v13, v30);
    goto LABEL_28;
  }
  result = 0;
LABEL_32:
  if ( v36 )
  {
    v34 = result;
    *(_QWORD *)&v37 = 0;
    qfree(v36, v13, v14, 0.0);
    return v34;
  }
  return result;
}
