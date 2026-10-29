__int64 __fastcall sub_AB280(__int128 a1)
{
  unsigned __int8 *v1; // r13
  __int128 v2; // kr00_16
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  unsigned int v5; // r15d
  __int64 v7; // r14
  _DWORD *v8; // r15
  __int64 v9; // rax
  char v10; // cl
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // rdi
  bool v18; // al
  __int64 v19; // [rsp-10h] [rbp-F0h]
  __int64 v20; // [rsp-8h] [rbp-E8h]
  int n; // [rsp+0h] [rbp-E0h]
  __int64 na; // [rsp+0h] [rbp-E0h]
  int v23; // [rsp+8h] [rbp-D8h]
  __int64 v24; // [rsp+8h] [rbp-D8h]
  int v25; // [rsp+10h] [rbp-D0h]
  __int64 v26; // [rsp+10h] [rbp-D0h]
  __int64 v27; // [rsp+10h] [rbp-D0h]
  __int64 v28; // [rsp+18h] [rbp-C8h]
  __int64 v29; // [rsp+20h] [rbp-C0h]
  int v30; // [rsp+30h] [rbp-B0h]
  __int64 v31; // [rsp+30h] [rbp-B0h]
  __int64 v32; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-98h] BYREF
  unsigned __int64 *v34[2]; // [rsp+50h] [rbp-90h] BYREF
  void *src; // [rsp+60h] [rbp-80h]
  __int128 v36; // [rsp+68h] [rbp-78h]
  unsigned __int64 *v37[2]; // [rsp+80h] [rbp-60h] BYREF
  void *v38; // [rsp+90h] [rbp-50h]
  __int128 v39; // [rsp+98h] [rbp-48h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-38h]

  v1 = (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL);
  v2 = a1;
  v40 = __readfsqword(0x28u);
  v32 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) += 32LL;
  v3 = (_DWORD *)sub_129440(a1, (__int64)&v32, 1);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( *v3 != 14 )
    return 0;
  v7 = sub_11C8A0((__int64)v3, &v33);
  if ( !v7 )
    return 0;
  if ( *(_BYTE *)v33 != 4 )
    return 0;
  v8 = *(_DWORD **)(v33 + 8);
  if ( (unsigned int)(*v8 - 8) > 1 )
    return 0;
  v30 = 8 * v8[9] - 1;
  v9 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL), *(_DWORD *)(v7 + 4), 0);
  v10 = v30;
  if ( (unsigned __int64)v30 > 0x3F )
  {
    v31 = 0;
  }
  else
  {
    v31 = -1LL << v30;
    if ( ((-1LL << v10) & v9) != 1LL << v10 )
      return 0;
  }
  if ( !(unsigned __int8)sub_12EA80(
                           *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                           (const __m128i *)a1,
                           *((__int64 *)&v2 + 1),
                           *((_QWORD *)&v2 + 1) + 48LL,
                           v32,
                           (__int64)(v8 + 8),
                           0) )
    return 0;
  v5 = sub_1301F0((const __m128i *)a1, *((__int64 *)&v2 + 1), (__int64)v1, *(_QWORD *)(v32 + 8), (__int64)(v4 + 16));
  if ( !(_BYTE)v5 )
    return 0;
  if ( sub_125B60(v1, *((_QWORD *)&v2 + 1) + 64LL, 0) )
    goto LABEL_25;
  if ( *((_BYTE *)v4 + 64) == 14 )
  {
    v12 = *((_QWORD *)v4 + 9);
    src = nullptr;
    v36 = 0;
    v34[0] = nullptr;
    v34[1] = nullptr;
    sub_127FE0(a1, (__int64)v34, v12 + 16, 1u, 0, v11, n, v23, v25, DWORD2(v2) + 64, v29);
    v26 = *(_QWORD *)(v32 + 8);
    sub_64000((__int64 *)v37, (__int64)v34, 0.0);
    v38 = nullptr;
    v39 = 0;
    if ( (_QWORD)v36 )
    {
      v24 = v36;
      na = 16 * v36;
      v38 = (void *)qalloc_or_throw(16 * v36, (__int64)v34, 16 * v36, v36);
      *((_QWORD *)&v39 + 1) = v24;
      memcpy(v38, src, na);
      *(_QWORD *)&v39 = v24;
    }
    v27 = sub_A9D90(a1, v37, v26, *((__int64 *)&v2 + 1), 1u);
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree((__int64)v38);
    }
    qfree((__int64)v37[0]);
    if ( v27
      || sub_A9D90(a1, v34, *(_QWORD *)(*((_QWORD *)&v2 + 1) + 8LL), 0, 1u)
      || (!(unsigned __int8)sub_64880(v34) || (_QWORD)v36)
      && ((v17 = *(__int64 **)(*(_QWORD *)(a1 + 64) + 784LL)) == nullptr
       || (v18 = sub_17C4E0(v17, (__int64)v34, *(_DWORD *)(v2 + 72), 0xFFFFFFFF, 0, 0, 2u, 1u), v13 = v19,
                                                                                                v14 = v20,
                                                                                                v18)) )
    {
      sub_93B40((__int64 *)v34);
      return 0;
    }
    sub_123A40((__int64)v37, *((unsigned __int8 **)v4 + 9), v13, v14);
    sub_1571F0(v2, v32, (__int64)v37, *((__int64 *)&v2 + 1), v28, 1);
    sub_11CA10((char *)v4 + 64, (char *)v37);
    sub_11CDA0((__int64)v37);
    sub_93B40((__int64 *)v34);
LABEL_25:
    v15 = *(_QWORD *)(v7 + 8);
    v16 = sub_32ABC0(*(_QWORD *)(v15 + 16) | v31, *(_DWORD *)(v7 + 4), 0);
    *(__m128i *)(v15 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
    sub_11D5A0(*((__int64 *)&v2 + 1));
    return v5;
  }
  return 0;
}

