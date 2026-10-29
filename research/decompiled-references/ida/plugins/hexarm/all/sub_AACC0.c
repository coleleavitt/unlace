__int64 __fastcall sub_AACC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // r15d
  __int64 v8; // r14
  _DWORD *v9; // r15
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 n; // [rsp+0h] [rbp-E0h]
  __int64 v17; // [rsp+8h] [rbp-D8h]
  __int64 v18; // [rsp+10h] [rbp-D0h]
  __int64 v19; // [rsp+10h] [rbp-D0h]
  int v20; // [rsp+30h] [rbp-B0h]
  __int64 v21; // [rsp+30h] [rbp-B0h]
  __int64 v22; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-98h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-90h] BYREF
  void *src; // [rsp+60h] [rbp-80h]
  __int128 v26; // [rsp+68h] [rbp-78h]
  __int64 v27[2]; // [rsp+80h] [rbp-60h] BYREF
  void *v28; // [rsp+90h] [rbp-50h]
  __int128 v29; // [rsp+98h] [rbp-48h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-38h]

  v2 = a2 + 32;
  v30 = __readfsqword(0x28u);
  v22 = a2;
  v4 = (_DWORD *)sub_128E80(a1, a2 + 32, &v22, 1);
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( *v4 != 14 )
    return 0;
  v8 = sub_11C2E0(v4, &v23);
  if ( !v8 )
    return 0;
  if ( *(_BYTE *)v23 != 4 )
    return 0;
  v9 = *(_DWORD **)(v23 + 8);
  if ( (unsigned int)(*v9 - 8) > 1 )
    return 0;
  v20 = 8 * v9[9] - 1;
  v10 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL), *(unsigned int *)(v8 + 4), 0);
  v11 = v20;
  if ( (unsigned __int64)v20 > 0x3F )
  {
    v21 = 0;
  }
  else
  {
    v21 = -1LL << v20;
    if ( ((-1LL << v11) & v10) != 1LL << v11 )
      return 0;
  }
  if ( !(unsigned __int8)sub_12E4C0(
                           *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                           a1,
                           a2,
                           (int)a2 + 48,
                           v22,
                           (int)v9 + 32,
                           0) )
    return 0;
  v6 = sub_12FC30(a1, a2, v2, *(_QWORD *)(v22 + 8), v5 + 16);
  if ( !(_BYTE)v6 )
    return 0;
  if ( (unsigned __int8)sub_1255A0(v2, a2 + 64, 0) )
    goto LABEL_25;
  if ( *((_BYTE *)v5 + 64) == 14 )
  {
    v12 = *((_QWORD *)v5 + 9);
    src = nullptr;
    v26 = 0;
    v24[0] = 0;
    v24[1] = 0;
    sub_127A20(a1, v24, v12 + 16, 1);
    v18 = *(_QWORD *)(v22 + 8);
    sub_63A00(v27, (__int64)v24);
    v28 = nullptr;
    v29 = 0;
    if ( (_QWORD)v26 )
    {
      v17 = v26;
      n = 16 * v26;
      v28 = (void *)qalloc_or_throw();
      *((_QWORD *)&v29 + 1) = v17;
      memcpy(v28, src, n);
      *(_QWORD *)&v29 = v17;
    }
    v19 = sub_A97D0(a1, v27, v18, a2, 1u);
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    qfree();
    if ( v19
      || sub_A97D0(a1, v24, *(_QWORD *)(a2 + 8), 0, 1u)
      || (!(unsigned __int8)sub_64280(v24) || (_QWORD)v26)
      && ((v15 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL)) == 0
       || (unsigned __int8)sub_17BF20(v15, (unsigned int)v24, *(_DWORD *)(a1 + 72), -1, 0, 0, 2, 1)) )
    {
      sub_93580((__int64)v24);
      return 0;
    }
    sub_123480(v27, *((_QWORD *)v5 + 9));
    sub_156C30(a1, v22, v27, a2, a2 + 64, 1);
    sub_11C450(v5 + 16, v27);
    sub_11C7E0(v27);
    sub_93580((__int64)v24);
LABEL_25:
    v13 = *(_QWORD *)(v8 + 8);
    v14 = sub_32AEF0(*(_QWORD *)(v13 + 16) | v21, *(unsigned int *)(v8 + 4), 0);
    *(__m128i *)(v13 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    sub_11CFE0(a2);
    return v6;
  }
  return 0;
}

