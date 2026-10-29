unsigned __int64 __fastcall sub_95D0(__int64 a1)
{
  int v1; // eax
  char *v2; // r12
  char *v3; // r13
  int v4; // eax
  int v5; // r15d
  char *v6; // rbp
  int v7; // eax
  void (__fastcall **v8)(_QWORD, _QWORD); // rdx
  __int16 v9; // ax
  _BYTE *v10; // r13
  unsigned int v11; // r12d
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  unsigned int v17; // ebp
  _BYTE *v18; // r12
  __int64 (__fastcall *v19)(_QWORD *, char); // rax
  __int64 v20; // r13
  unsigned __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // al
  _BYTE *v26; // r12
  unsigned int v27; // ebp
  __int64 v28; // rdx
  __int64 (__fastcall *v29)(_QWORD *, char); // rax
  __int64 v30; // r13
  unsigned __int64 v31; // r15
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 (__fastcall *v35)(_QWORD *, char); // rax
  __int64 v36; // r12
  unsigned __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rax
  char *s; // [rsp+0h] [rbp-88h] BYREF
  __int128 v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+20h] [rbp-68h] BYREF
  __int128 v43; // [rsp+28h] [rbp-60h]
  __int64 v44; // [rsp+38h] [rbp-50h]
  int v45; // [rsp+40h] [rbp-48h]
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  s = nullptr;
  v41 = 0;
  v1 = netnode_qsupstr(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 160LL), &s, *(_QWORD *)(a1 + 240), 322);
  if ( v1 > 0 )
  {
    v2 = s;
    if ( !(_QWORD)v41 )
      v2 = (char *)&unk_150C8;
    v3 = &s[v1];
    v4 = *(_DWORD *)(a1 + 144);
    v5 = v4 & 0x1890;
    *(_DWORD *)(a1 + 144) = v4 & 0xFFFFE76F;
    if ( v2 < v3 )
    {
      do
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 1);
        v6 = strchr(v2, 10);
        if ( !v6 )
          v6 = &v2[strlen(v2)];
        sub_7FF0(a1, (__int64)"%*.*s", (_DWORD)v6 - (_DWORD)v2, (_DWORD)v6 - (_DWORD)v2, v2);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 1);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFF);
        if ( !*v6 )
          break;
        v2 = v6 + 1;
      }
      while ( v6 + 1 < v3 );
      v4 = v5 | *(_DWORD *)(a1 + 144);
    }
    *(_DWORD *)(a1 + 144) = v4;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v7 = sub_8AB0(*(_BYTE *)(a1 + 248));
  v8 = *(void (__fastcall ***)(_QWORD, _QWORD))a1;
  if ( v7 == 1 )
  {
    v8[4](a1, 123);
    v25 = *(_BYTE *)(a1 + 265);
    v26 = (_BYTE *)(a1 + 265);
    v27 = 0;
    if ( v25 )
    {
      if ( v25 == 1 )
      {
LABEL_39:
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v27);
        while ( 1 )
        {
          ++v27;
          v26 += 40;
          if ( v27 == 8 )
            goto LABEL_23;
          v28 = *(_QWORD *)a1;
          v24 = *(_QWORD *)a1;
          if ( !*v26 )
            goto LABEL_58;
          if ( *v26 != 1 )
            goto LABEL_52;
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v28 + 32))(a1, 44, v28, v24);
          v29 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
          if ( v29 != sub_7F70 )
          {
            v29((_QWORD *)a1, 32);
            goto LABEL_39;
          }
          v30 = *(_QWORD *)(a1 + 32);
          v31 = 2;
          if ( v30 )
            v31 = v30-- + 1;
          v32 = *(_QWORD *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 40) < v31 )
          {
            v34 = qvector_reserve(a1 + 24, v32, v31, 1);
            *(_QWORD *)(a1 + 24) = v34;
            v32 = v34;
          }
          *(_QWORD *)(a1 + 32) = v31;
          *(_BYTE *)(v32 + v30) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v30 + 1) = 0;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v27);
        }
      }
      v24 = *(_QWORD *)a1;
LABEL_52:
      (*(void (__fastcall **)(__int64, __int64))(v24 + 32))(a1, 125);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v35 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v35 == sub_7F70 )
      {
        v36 = *(_QWORD *)(a1 + 32);
        v37 = 2;
        if ( v36 )
          v37 = v36-- + 1;
        v38 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v37 )
        {
          v39 = qvector_reserve(a1 + 24, v38, v37, 1);
          *(_QWORD *)(a1 + 24) = v39;
          v38 = v39;
        }
        *(_QWORD *)(a1 + 32) = v37;
        *(_BYTE *)(v38 + v36) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v36 + 1) = 0;
        v28 = *(_QWORD *)a1;
        goto LABEL_58;
      }
      v35((_QWORD *)a1, 32);
    }
    v28 = *(_QWORD *)a1;
LABEL_58:
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(v28 + 304))(a1, v27, v28, v24);
    goto LABEL_23;
  }
  if ( v7 != 2 )
  {
    v17 = 0;
    v18 = (_BYTE *)(a1 + 265);
    if ( !*(_BYTE *)(a1 + 265) )
      goto LABEL_24;
LABEL_28:
    v8[38](a1, v17);
    while ( 1 )
    {
      ++v17;
      v18 += 40;
      if ( v17 == 8 || !*v18 )
        break;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v19 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v19 != sub_7F70 )
      {
        v19((_QWORD *)a1, 32);
        v8 = *(void (__fastcall ***)(_QWORD, _QWORD))a1;
        goto LABEL_28;
      }
      v20 = *(_QWORD *)(a1 + 32);
      v21 = 2;
      if ( v20 )
        v21 = v20-- + 1;
      v22 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v21 )
      {
        v33 = qvector_reserve(a1 + 24, v22, v21, 1);
        *(_QWORD *)(a1 + 24) = v33;
        v22 = v33;
      }
      *(_QWORD *)(a1 + 32) = v21;
      *(_BYTE *)(v22 + v20) = 32;
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v20 + 1) = 0;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v17);
    }
LABEL_23:
    v8 = *(void (__fastcall ***)(_QWORD, _QWORD))a1;
    goto LABEL_24;
  }
  v8[4](a1, 123);
  v9 = *(_WORD *)(a1 + 270);
  v45 = 0;
  v42 = 256;
  v44 = 0;
  HIWORD(v42) = v9;
  v43 = 0;
  sub_8D50((_QWORD *)a1, &v42);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 46);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 46);
  HIWORD(v42) = *(_WORD *)(a1 + 310) - 1;
  sub_8D50((_QWORD *)a1, &v42);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 125);
  v10 = (_BYTE *)(a1 + 345);
  v11 = 2;
  while ( 1 )
  {
    v8 = *(void (__fastcall ***)(_QWORD, _QWORD))a1;
    if ( !*v10 )
      break;
    v8[4](a1, 44);
    v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v12 == sub_7F70 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      v14 = 2;
      if ( v13 )
        v14 = v13-- + 1;
      v15 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v14 )
      {
        v23 = qvector_reserve(a1 + 24, v15, v14, 1);
        *(_QWORD *)(a1 + 24) = v23;
        v15 = v23;
      }
      *(_QWORD *)(a1 + 32) = v14;
      *(_BYTE *)(v15 + v13) = 32;
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v13 + 1) = 0;
    }
    else
    {
      v12((_QWORD *)a1, 32);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v11++);
    v10 += 40;
    if ( v11 == 8 )
      goto LABEL_23;
  }
LABEL_24:
  v8[16](a1, 0xFFFFFFFFLL);
  if ( s )
  {
    *(_QWORD *)&v41 = 0;
    qfree(s, (const char *)0xFFFFFFFFLL);
  }
  return v46 - __readfsqword(0x28u);
}

