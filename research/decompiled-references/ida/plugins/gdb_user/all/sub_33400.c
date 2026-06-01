__int64 __fastcall sub_33400(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 (*v4)(); // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdi
  __m128i si128; // xmm0
  _QWORD *v10; // r14
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 (*v19)(); // rax
  __int64 v20; // rdx
  int v21; // ecx
  char v22; // bl
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  char *v26; // rdi
  __int64 v27; // [rsp+0h] [rbp-98h] BYREF
  __int128 v28; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+18h] [rbp-80h]
  __int128 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+30h] [rbp-68h]
  __int128 v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  __int128 v34; // [rsp+50h] [rbp-48h]
  unsigned __int64 v35; // [rsp+68h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 864);
  v35 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v3 + 84) == 1 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    if ( !(unsigned __int8)sub_1FBC0((__int64)&v27, "target.xml", v3) )
    {
      sub_130C0(&v27);
      return 0;
    }
    v6 = *(_QWORD *)(a1 + 1136);
    v7 = 0;
    *(_QWORD *)(a1 + 1064) = 0;
    *(_QWORD *)(a1 + 1088) = 0;
    *(_QWORD *)(a1 + 1112) = 0;
    if ( v6 )
    {
      do
      {
        v8 = 9 * v7++;
        sub_28190((_QWORD *)(*(_QWORD *)(a1 + 1128) + 16 * v8));
      }
      while ( v6 != v7 );
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_594A0);
    v10 = (_QWORD *)(a1 + 1056);
    *(_QWORD *)(a1 + 1136) = 0;
    *(__m128i *)(a1 + 1152) = si128;
    sub_2A840((_DWORD *)a1, (_QWORD *)(a1 + 1056), "<REMOTE XML>", &v27);
    sub_130C0(&v27);
  }
  else
  {
    v4 = *(__int64 (**)())(*(_QWORD *)a1 + 800LL);
    if ( v4 == sub_12460 || !(unsigned __int8)v4() )
      return 0;
    v14 = *(_QWORD *)(a1 + 1136);
    v15 = 0;
    *(_QWORD *)(a1 + 1064) = 0;
    *(_QWORD *)(a1 + 1088) = 0;
    *(_QWORD *)(a1 + 1112) = 0;
    if ( v14 )
    {
      do
      {
        v16 = 9 * v15++;
        sub_28190((_QWORD *)(*(_QWORD *)(a1 + 1128) + 16 * v16));
      }
      while ( v14 != v15 );
    }
    v17 = _mm_load_si128((const __m128i *)&xmmword_594A0);
    v18 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 1136) = 0;
    *(__m128i *)(a1 + 1152) = v17;
    v19 = *(__int64 (**)())(v18 + 808);
    if ( v19 == sub_12470 )
      return 0;
    v10 = (_QWORD *)(a1 + 1056);
    if ( !((unsigned __int8 (__fastcall *)(__int64, __int64))v19)(a1, a1 + 1056) )
      return 0;
  }
  if ( !(unsigned __int8)sub_2B350(a1, (int *)(a1 + 1152), v10, v11, v12, v13) )
  {
    sub_DBE0((__int64)"GDB: could not detect architecture from target info\n");
    return 0;
  }
  v22 = sub_27990(a1, (_DWORD *)(a1 + 1152));
  if ( !v22 )
    return 4294967294LL;
  v25 = sub_31E70(a1, (__int64)v10, v20, v21, v23, v24);
  if ( v25 != -1 )
  {
    if ( v25 )
    {
      if ( *(int *)(a1 + 1152) >= 0 && *(int *)(a1 + 1156) >= 0 )
        v22 = *(int *)(a1 + 1160) < 0;
      *(_BYTE *)(a1 + 1168) = v22;
      *(_BYTE *)(a1 + 1170) = 0;
      return 1;
    }
    return 0;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a2[2] <= 0x36 )
      *a2 = qvector_reserve();
    v26 = (char *)*a2;
    a2[1] = 55;
    qmemcpy(v26, "GDB: failed to load registers from target description.", 0x36u);
    *(_BYTE *)(*a2 + 54) = 0;
  }
  return 4294967293LL;
}

