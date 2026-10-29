__int64 __fastcall sub_3BC70(_QWORD *a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  int *v5; // rsi
  int v6; // edx
  _QWORD *v7; // rax
  void (__fastcall *v8)(_QWORD, _QWORD); // rax
  _BYTE *v9; // rsi
  char *v10; // rbx
  char *v11; // rdi
  char *v12; // rbp
  void (__fastcall *v13)(_QWORD, _QWORD); // rax
  void (__fastcall *hexdsp)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v16; // rdi
  _BYTE *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  int (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // rax
  __int64 *v24; // rsi
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  int *v32; // rax
  int *v33; // rdx
  int *v34; // rcx
  int *v35; // rdx
  int *v36; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // rax
  void (__fastcall *v39)(_QWORD, _QWORD); // rax
  _BYTE *v40; // rsi
  char *v41; // rbx
  char *v42; // rdi
  char *v43; // rbp
  void (__fastcall *v44)(_QWORD, _QWORD); // rax
  unsigned __int8 v45; // [rsp+0h] [rbp-108h]
  unsigned __int8 v46; // [rsp+0h] [rbp-108h]
  _BYTE v48[16]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 *v49; // [rsp+50h] [rbp-B8h] BYREF
  int v50; // [rsp+58h] [rbp-B0h] BYREF
  void *v51; // [rsp+60h] [rbp-A8h]
  int *v52; // [rsp+68h] [rbp-A0h]
  int *v53; // [rsp+70h] [rbp-98h]
  __int64 v54; // [rsp+78h] [rbp-90h]
  unsigned __int8 v55[16]; // [rsp+80h] [rbp-88h] BYREF
  int v56; // [rsp+90h] [rbp-78h] BYREF
  void *v57; // [rsp+98h] [rbp-70h]
  int *v58; // [rsp+A0h] [rbp-68h]
  int *v59; // [rsp+A8h] [rbp-60h]
  __int64 v60; // [rsp+B0h] [rbp-58h]
  _BYTE v61[16]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+C8h] [rbp-40h]

  v2 = *(_BYTE *)a2;
  v62 = __readfsqword(0x28u);
  if ( (v2 & 0xFB) == 1 )
  {
    *(_DWORD *)v55 = 0;
    v56 = 0;
    v57 = nullptr;
    v58 = &v56;
    v59 = &v56;
    v60 = 0;
    hexdsp = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))get_hexdsp(a1, a2);
    v16 = 273;
    v17 = v61;
    hexdsp(273, v61, a2);
    v18 = a1[2];
    v19 = (__int64)(a1 + 1);
    if ( v18 )
    {
      do
      {
        while ( !*(_DWORD *)(v18 + 32) )
        {
          v23 = (int (__fastcall *)(_QWORD, _QWORD, _QWORD))get_hexdsp(v16, v17);
          v17 = (_BYTE *)(v18 + 88);
          v16 = 296;
          if ( v23(296, v18 + 88, v61) >= 0 )
            break;
          v18 = *(_QWORD *)(v18 + 24);
          if ( !v18 )
            goto LABEL_16;
        }
        v19 = v18;
        v18 = *(_QWORD *)(v18 + 16);
      }
      while ( v18 );
LABEL_16:
      if ( a1 + 1 != (_QWORD *)v19 )
      {
        v21 = v19 + 32;
        if ( !(unsigned __int8)sub_35D60((__int64)v55, v19 + 32) )
          goto LABEL_19;
      }
    }
    else
    {
      v19 = (__int64)(a1 + 1);
    }
    v21 = v19;
    v49 = v55;
    v19 = sub_3B9D0(a1, (_QWORD *)v19, (__int64 *)&v49);
LABEL_19:
    ++*(_DWORD *)(v19 + 104);
    sub_C930((__int64)v61, v21, v22);
    sub_32480((char *)v57, v21);
    return 1;
  }
  result = 0;
  if ( v2 != 4 )
    return result;
  v5 = *(int **)(a2 + 8);
  v6 = *v5;
  if ( *v5 == 14 )
  {
    sub_33DA0((__int64)&v49, (__int64)(v5 + 8));
    v24 = (__int64 *)&v49;
    v25 = sub_3BC70(a1, (unsigned __int8 **)&v49);
    if ( v25 )
    {
      sub_33DA0((__int64)v55, *(_QWORD *)(a2 + 8) + 48LL);
      v24 = (__int64 *)v55;
      v45 = sub_3BC70(a1, v55);
      sub_C930((__int64)v55, (__int64)v55, v27);
      v25 = v45;
    }
    v46 = v25;
    sub_C930((__int64)&v49, (__int64)v24, v26);
    return v46;
  }
  else
  {
    if ( v6 == 20 )
    {
      v50 = 0;
      v52 = &v50;
      v51 = nullptr;
      v53 = &v50;
      v54 = 0;
      sub_33DA0((__int64)v55, a2);
      sub_3B670(v55, (unsigned __int8 **)&v49, v28, v29, v30);
      sub_C930((__int64)v55, (__int64)&v49, v31);
      sub_33DA0((__int64)v48, a2);
      *(_DWORD *)v55 = 1;
      v56 = 0;
      v57 = nullptr;
      v58 = &v56;
      v59 = &v56;
      v60 = 0;
      if ( v51 )
      {
        v32 = (int *)sub_324E0((int *)v51, (__int64)&v56);
        v33 = v32;
        do
        {
          v34 = v33;
          v33 = *((int **)v33 + 2);
        }
        while ( v33 );
        v58 = v34;
        v35 = v32;
        do
        {
          v36 = v35;
          v35 = *((int **)v35 + 3);
        }
        while ( v35 );
        v59 = v36;
        v57 = v32;
        v60 = v54;
      }
      sub_33DA0((__int64)v61, (__int64)v48);
      sub_C930((__int64)v48, (__int64)v48, v37);
      v38 = sub_3BBB0(a1, (__int64)v55);
      ++*(_DWORD *)v38;
      v39 = (void (__fastcall *)(_QWORD, _QWORD))get_hexdsp(a1, v55);
      v40 = v61;
      v39(276, v61);
      v41 = (char *)v57;
      if ( v57 )
      {
        do
        {
          v42 = *((char **)v41 + 3);
          v43 = v41;
          sub_32480(v42, (__int64)v40);
          v41 = *((char **)v41 + 2);
          v44 = (void (__fastcall *)(_QWORD, _QWORD))get_hexdsp(v42, v40);
          v44(276, v43 + 32);
          v40 = (_BYTE *)&dword_30;
          operator delete(v43, 0x30u);
        }
        while ( v41 );
      }
      sub_32480((char *)v51, (__int64)v40);
      return 1;
    }
    if ( v6 == 5 )
    {
      *(_DWORD *)v55 = 0;
      v58 = &v56;
      v59 = &v56;
      v56 = 0;
      v57 = nullptr;
      v60 = 0;
      sub_33DA0((__int64)v61, a2);
      v7 = sub_3BBB0(a1, (__int64)v55);
      ++*(_DWORD *)v7;
      v8 = (void (__fastcall *)(_QWORD, _QWORD))get_hexdsp(a1, v55);
      v9 = v61;
      v8(276, v61);
      v10 = (char *)v57;
      if ( v57 )
      {
        do
        {
          v11 = *((char **)v10 + 3);
          v12 = v10;
          sub_32480(v11, (__int64)v9);
          v10 = *((char **)v10 + 2);
          v13 = (void (__fastcall *)(_QWORD, _QWORD))get_hexdsp(v11, v9);
          v13(276, v12 + 32);
          v9 = (_BYTE *)&dword_30;
          operator delete(v12, 0x30u);
        }
        while ( v10 );
      }
      return 1;
    }
  }
  return result;
}

