__int64 __fastcall sub_39E60(__int64 *a1)
{
  bool v2; // zf
  __int64 v3; // rax
  int v5; // eax
  _DWORD *v6; // rax
  void *v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  _DWORD *v11; // r12
  _DWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rsi
  _QWORD *v15; // r14
  _QWORD *v16; // r12
  _QWORD *j; // r15
  _QWORD *v18; // rbp
  int v19; // edx
  double v20; // r12
  int v21; // r15d
  __int64 v22; // r14
  __int64 v23; // rax
  _DWORD *v24; // rax
  int v25; // eax
  __int64 v26; // [rsp+0h] [rbp-508h]
  __int64 v27; // [rsp+8h] [rbp-500h]
  _QWORD v28[2]; // [rsp+20h] [rbp-4E8h] BYREF
  __m128 v29; // [rsp+30h] [rbp-4D8h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+40h] [rbp-4C8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-4C0h]
  _UNKNOWN **v32; // [rsp+60h] [rbp-4A8h] BYREF
  bool v33; // [rsp+68h] [rbp-4A0h]
  __int128 i; // [rsp+70h] [rbp-498h]
  int v35; // [rsp+80h] [rbp-488h]
  int v36; // [rsp+84h] [rbp-484h]
  int v37; // [rsp+88h] [rbp-480h]
  unsigned int v38; // [rsp+90h] [rbp-478h]
  unsigned int v39; // [rsp+94h] [rbp-474h]
  int v40; // [rsp+A4h] [rbp-464h]
  __int64 v41; // [rsp+A8h] [rbp-460h]
  __int64 *v42; // [rsp+B0h] [rbp-458h]
  _BYTE v43[1032]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int64 v44; // [rsp+4C8h] [rbp-40h]

  v2 = *a1 == 0;
  v44 = __readfsqword(0x28u);
  if ( !v2 )
    sub_36B40((__int64)a1, 1);
  v3 = open_linput();
  *a1 = v3;
  if ( !v3 )
    return 28;
  qlseek();
  lread();
  a1[75] = 0;
  qlseek();
  a1[41] = 0;
  a1[73] = 0;
  memset(
    (void *)((unsigned __int64)(a1 + 42) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 328 - (((_DWORD)a1 + 336) & 0xFFFFFFF8) + 264) >> 3));
  qlseek();
  if ( (unsigned __int64)(qlread() - 93) > 0xAB )
    return 25;
  v5 = *((_DWORD *)a1 + 82);
  if ( v5 != 4542530 && v5 != 17744 && v5 != 19536 )
    return 25;
  if ( !(unsigned __int8)sub_35A40((__m128i *)a1 + 5, (const __m128i *)(a1 + 41), 1, 1) )
    return 25;
  if ( *((_WORD *)a1 + 52) == 523 )
    v6 = (_DWORD *)a1[16];
  else
    v6 = (_DWORD *)*((unsigned int *)a1 + 33);
  v7 = *(void **)((char *)a1 + 676);
  a1[74] = (__int64)v6;
  v28[0] = &off_71BD0;
  v26 = (__int64)(a1 + 1);
  v28[1] = a1;
  sub_347B0(v7);
  v8 = *a1;
  *(__int64 *)((char *)a1 + 676) = 0;
  *(__int64 *)((char *)a1 + 684) = (__int64)a1 + 668;
  *(__int64 *)((char *)a1 + 692) = (__int64)a1 + 668;
  *(__int64 *)((char *)a1 + 700) = 0;
  if ( (unsigned int)sub_39440((__int64)(a1 + 1), v8, (__int64)v28) && (*((_BYTE *)a1 + 793) & 0x10) == 0 )
    return 26;
  v9 = qlseek();
  v10 = *(__int64 *)((char *)a1 + 620);
  v11 = (_DWORD *)v9;
  if ( v10 < v9 )
  {
    v14 = *(__int64 *)((char *)a1 + 612);
    if ( *(__int64 *)((char *)a1 + 628) < v9 )
    {
      v23 = qvector_reserve();
      *(__int64 *)((char *)a1 + 612) = v23;
      v10 = *(__int64 *)((char *)a1 + 620);
      v14 = v23;
    }
    memset((void *)(v14 + v10), 0, (size_t)v11 - v10);
    *(__int64 *)((char *)a1 + 620) = (__int64)v11;
  }
  else if ( v9 != v10 )
  {
    *(__int64 *)((char *)a1 + 620) = v9;
  }
  qlseek();
  qlread();
  v12 = (_DWORD *)a1[74];
  *((_DWORD *)a1 + 202) = 1;
  *(__int64 *)((char *)a1 + 820) = (__int64)v12;
  v29 = _mm_loadh_ps((const double *)a1);
  sub_366B0((__int64 *)&v29, (_DWORD *)a1 + 203, (_DWORD *)a1 + 204);
  v13 = *((_DWORD *)a1 + 198);
  if ( (v13 & 0x400) == 0 )
  {
    v15 = *(_QWORD **)((char *)a1 + 636);
    v33 = 0;
    v32 = &off_71C00;
    v35 = 0;
    v40 = 0;
    v41 = 0;
    v42 = a1;
    for ( i = 0; (__int64 *)((char *)a1 + 636) != v15; --*(__int64 *)((char *)a1 + 652) )
    {
      v16 = v15;
      v15 = (_QWORD *)*v15;
      *(_QWORD *)v16[1] = v15;
      v15[1] = v16[1];
      for ( j = (_QWORD *)v16[7]; v16 + 7 != j; --v16[9] )
      {
        v18 = j;
        j = (_QWORD *)*j;
        *(_QWORD *)v18[1] = j;
        j[1] = v18[1];
        if ( v18[2] )
        {
          v18[3] = 0;
          qfree();
        }
        qfree();
      }
      if ( v16[2] )
      {
        v16[3] = 0;
        qfree();
      }
      qfree();
    }
    if ( (unsigned int)sub_361C0(v26, (_DWORD *)*a1, (unsigned int *)&v32) )
      return 27;
    v13 = *((_DWORD *)a1 + 198);
    if ( (v13 & 0x800) != 0 )
    {
      v19 = *((_DWORD *)a1 + 76);
      if ( v19 )
      {
        v20 = *(double *)a1;
        if ( !a1[3] )
        {
          v2 = *((_DWORD *)a1 + 20) == 23126;
          v30 = off_71B70;
          v24 = (_DWORD *)a1[75];
          if ( v2 )
            v25 = (_DWORD)v24 + 40;
          else
            v25 = *((unsigned __int16 *)a1 + 50) + (_DWORD)v24 + 24;
          sub_354A0(v26, *(__int64 *)&v20, (const char *)v25, *((unsigned __int16 *)a1 + 43), (__int64)&v30);
          v19 = *((_DWORD *)a1 + 76);
        }
        v21 = 0;
        while ( (*(unsigned __int8 (__fastcall **)(__int64, double, _QWORD))a1[1])(
                  v26,
                  COERCE_DOUBLE(*(_QWORD *)&v20),
                  (unsigned int)(v21 + v19)) )
        {
          if ( qlread() != 32 )
            return 27;
          if ( !v37 )
            break;
          v22 = v38;
          v27 = v39;
          v33 = !(v36 & 1);
          if ( (v36 & 1) != 0 )
            v22 = a1[74] + v38;
          (*(void (__fastcall **)(__int64, double))a1[1])(v26, COERCE_DOUBLE(*(_QWORD *)&v20));
          v43[0] = 0;
          qlgetz();
          if ( !v43[0] )
            return 27;
          v31 = 0;
          v30 = nullptr;
          if ( (unsigned __int8)idb_utf8() )
            qstrncpy();
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree();
          }
          v21 += 32;
          sub_39120((__int64)&v32, v43, v22, v27);
          if ( (unsigned int)sub_35DF0(v26, *(__int64 *)&v20, v22, v27, (__int64)&v32) )
            return 27;
          v19 = *((_DWORD *)a1 + 76);
        }
        v13 = *((_DWORD *)a1 + 198);
      }
    }
  }
  if ( (v13 & 0x200) == 0 )
    sub_37B80((__int64)a1);
  close_linput();
  *a1 = 0;
  return 0;
}

