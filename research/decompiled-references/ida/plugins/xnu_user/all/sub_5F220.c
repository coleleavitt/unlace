__int64 __fastcall sub_5F220(__int64 a1, __int64 *a2)
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
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 (*v18)(); // rax
  __int64 v19; // rdx
  int v20; // ecx
  char v21; // bl
  int v22; // r8d
  int v23; // eax
  char *v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-98h] BYREF
  __int128 v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+18h] [rbp-80h]
  __int128 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+30h] [rbp-68h]
  __int128 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  __int128 v32; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+68h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 864);
  v33 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v3 + 84) == 1 )
  {
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    if ( !(unsigned __int8)sub_4C3C0((__int64)&v25, "target.xml", v3) )
    {
      sub_4EFC0(&v25);
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
        sub_30730((_QWORD *)(*(_QWORD *)(a1 + 1128) + 16 * v8));
      }
      while ( v6 != v7 );
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_823C0);
    v10 = (_QWORD *)(a1 + 1056);
    *(_QWORD *)(a1 + 1136) = 0;
    *(__m128i *)(a1 + 1152) = si128;
    sub_56340((_DWORD *)a1, (_QWORD *)(a1 + 1056), "<REMOTE XML>", &v25);
    sub_4EFC0(&v25);
  }
  else
  {
    v4 = *(__int64 (**)())(*(_QWORD *)a1 + 800LL);
    if ( v4 == sub_46CF0 || !(unsigned __int8)v4() )
      return 0;
    v13 = *(_QWORD *)(a1 + 1136);
    v14 = 0;
    *(_QWORD *)(a1 + 1064) = 0;
    *(_QWORD *)(a1 + 1088) = 0;
    *(_QWORD *)(a1 + 1112) = 0;
    if ( v13 )
    {
      do
      {
        v15 = 9 * v14++;
        sub_30730((_QWORD *)(*(_QWORD *)(a1 + 1128) + 16 * v15));
      }
      while ( v13 != v14 );
    }
    v16 = _mm_load_si128((const __m128i *)&xmmword_823C0);
    v17 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 1136) = 0;
    *(__m128i *)(a1 + 1152) = v16;
    v18 = *(__int64 (**)())(v17 + 808);
    if ( v18 == sub_46D00 )
      return 0;
    v10 = (_QWORD *)(a1 + 1056);
    if ( !((unsigned __int8 (__fastcall *)(__int64, __int64))v18)(a1, a1 + 1056) )
      return 0;
  }
  if ( !(unsigned __int8)sub_56E50(a1, (int *)(a1 + 1152), v10, v11, v12) )
  {
    sub_140F0((__int64)"GDB: could not detect architecture from target info\n");
    return 0;
  }
  v21 = sub_54310(a1, (_DWORD *)(a1 + 1152));
  if ( !v21 )
    return 4294967294LL;
  v23 = sub_5DC90(a1, (__int64)v10, v19, v20, v22);
  if ( v23 != -1 )
  {
    if ( v23 )
    {
      if ( *(int *)(a1 + 1152) >= 0 && *(int *)(a1 + 1156) >= 0 )
        v21 = *(int *)(a1 + 1160) < 0;
      *(_BYTE *)(a1 + 1168) = v21;
      *(_BYTE *)(a1 + 1170) = 0;
      return 1;
    }
    return 0;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a2[2] <= 0x36 )
      *a2 = qvector_reserve();
    v24 = (char *)*a2;
    a2[1] = 55;
    qmemcpy(v24, "GDB: failed to load registers from target description.", 0x36u);
    *(_BYTE *)(*a2 + 54) = 0;
  }
  return 4294967293LL;
}

