__int64 __fastcall sub_1522E0(__int64 a1, unsigned __int64 *a2, __m128i a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned int v6; // r14d
  __int64 v8; // r12
  int v9; // r9d
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // r12
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // [rsp+8h] [rbp-80h]
  int v29; // [rsp+Ch] [rbp-7Ch]
  unsigned int v30; // [rsp+10h] [rbp-78h]
  __int64 v31; // [rsp+10h] [rbp-78h]
  unsigned int v32; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v33; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v34; // [rsp+28h] [rbp-60h]
  char *v35; // [rsp+38h] [rbp-50h] BYREF
  __int64 v36[9]; // [rsp+40h] [rbp-48h] BYREF

  v36[1] = __readfsqword(0x28u);
  v4 = sub_11C8E0(a1, &v35, 0);
  if ( v4
    && (v5 = v4, *(_DWORD *)v4 == 23)
    && *(_BYTE *)(v4 + 48) == 2
    && (v8 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL), (unsigned __int8)sub_11FD80(v35, v36, 0))
    && (v36[0] & (v36[0] + 1)) == 0
    && (v9 = log2ceil()) != 0
    && ((v10 = (unsigned __int8)v8 + v9, v29 = (unsigned __int8)v8, ((v10 - 8) & 0xFFFFFFF7) == 0)
     || ((v10 - 32) & 0xFFFFFFDF) == 0)
    && ((v28 = v10 >> 3, *(_BYTE *)(v5 + 32) != 4) || (unsigned __int8)v8 > 8u)
    && (v6 = sub_12AB50((unsigned int **)(v5 + 32), a2, v28, 1, a3), (_BYTE)v6) )
  {
    v13 = (_QWORD *)j__qalloc_or_throw(80, (__int64)a2, v11, v12);
    v14 = *(_QWORD *)(v5 + 24);
    v15 = v13;
    v34 = (unsigned __int8 *)(v13 + 4);
    v33 = (unsigned __int8 *)(v13 + 6);
    v13[4] = 0xFFFFFFFF00000000LL;
    v13[5] = 0;
    v13[6] = 0xFFFFFFFF00000000LL;
    v13[7] = 0;
    v13[8] = 0xFFFFFFFF00000000LL;
    v13[9] = 0;
    sub_330970((__int64)v13, v14);
    *(_DWORD *)v15 = 23;
    v16 = round_up_power2();
    if ( *(_BYTE *)(v5 + 32) != 4 || v10 <= 0xF || v28 == v16 )
    {
      sub_125180(v34, (unsigned __int8 *)(v5 + 32));
      sub_125180(v33, (unsigned __int8 *)(v5 + 48));
      v25 = *((_DWORD *)v15 + 9);
    }
    else
    {
      v30 = v16;
      v19 = (_QWORD *)j__qalloc_or_throw(80, v14, v17, v18);
      v20 = *(_QWORD *)(v5 + 24);
      v21 = v19;
      v19[4] = 0xFFFFFFFF00000000LL;
      v19[5] = 0;
      v19[6] = 0xFFFFFFFF00000000LL;
      v19[7] = 0;
      v19[8] = 0xFFFFFFFF00000000LL;
      v19[9] = 0;
      sub_330970((__int64)v19, v20);
      *(_DWORD *)v21 = 11;
      v32 = v30;
      v23 = j__qalloc_or_throw(80, v20, v30, v22);
      v24 = *(_QWORD *)(v5 + 40);
      *(_OWORD *)(v23 + 8) = 0;
      v31 = v23;
      *(_QWORD *)(v23 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v23 + 40) = 0;
      *(_QWORD *)(v23 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v23 + 56) = 0;
      *(_QWORD *)(v23 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v23 + 72) = 0;
      sub_1253A0(v23, v24);
      *((_BYTE *)v21 + 32) = 4;
      *((_DWORD *)v21 + 17) = v32;
      v21[5] = v31;
      *((_DWORD *)v21 + 9) = v28;
      *((_BYTE *)v15 + 32) = 4;
      v15[5] = v21;
      *((_DWORD *)v15 + 9) = *((_DWORD *)v21 + 17);
      sub_120A10((__int64)v33, a2, v29 - 8 * (v28 - v32), 1, -1, 0);
      v25 = *((_DWORD *)v15 + 9);
    }
    *((_DWORD *)v15 + 17) = v25;
    sub_11CDA0(a1 + 48);
    sub_11CDA0(a1 + 32);
    *(_BYTE *)(a1 + 32) = 4;
    v26 = 9;
    *(_QWORD *)(a1 + 40) = v15;
    v27 = *((_DWORD *)v15 + 17);
    *(_DWORD *)(a1 + 36) = v27;
    if ( v27 >= *(_DWORD *)(a1 + 68) )
    {
      v26 = 4;
      if ( v27 > *(_DWORD *)(a1 + 68) )
        v26 = 10;
    }
    *(_DWORD *)a1 = v26;
  }
  else
  {
    return 0;
  }
  return v6;
}

