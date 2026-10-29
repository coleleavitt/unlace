__int64 __fastcall sub_409840(__int64 a1, char a2, int a3, int a4, double a5, __m128 a6, __m128 a7)
{
  const void *v8; // rbp
  char *v12; // rax
  __int64 v13; // r12
  __int16 v14; // r15
  __int16 v15; // cx
  unsigned int v16; // r15d
  int v17; // r8d
  __int64 v18; // rsi
  int v19; // edi
  int v20; // r10d
  unsigned int v21; // r11d
  _DWORD *v22; // rax
  __int64 v23; // rcx
  int v24; // r10d
  unsigned int v25; // r11d
  int v26; // eax
  __int64 v27; // rax
  int v28; // [rsp+8h] [rbp-3A0h]
  int v29; // [rsp+8h] [rbp-3A0h]
  int v30; // [rsp+10h] [rbp-398h]
  unsigned int v31; // [rsp+10h] [rbp-398h]
  int v32; // [rsp+18h] [rbp-390h]
  unsigned int v33; // [rsp+18h] [rbp-390h]
  int dtype_size; // [rsp+20h] [rbp-388h]
  int v35; // [rsp+2Ch] [rbp-37Ch]
  unsigned int v36; // [rsp+2Ch] [rbp-37Ch]
  int v37; // [rsp+38h] [rbp-370h]
  unsigned int v38; // [rsp+38h] [rbp-370h]
  unsigned int v39; // [rsp+3Ch] [rbp-36Ch]
  unsigned int v40; // [rsp+3Ch] [rbp-36Ch]
  _QWORD v41[2]; // [rsp+40h] [rbp-368h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-358h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-348h] BYREF
  _QWORD v44[2]; // [rsp+70h] [rbp-338h] BYREF
  unsigned __int8 v45[16]; // [rsp+80h] [rbp-328h] BYREF
  _BYTE v46[360]; // [rsp+90h] [rbp-318h] BYREF
  char v47; // [rsp+1F8h] [rbp-1B0h] BYREF
  _BYTE v48[360]; // [rsp+200h] [rbp-1A8h] BYREF
  unsigned __int64 v49; // [rsp+368h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( a2 != 2 )
    return 0;
  v8 = (const void *)(a1 + 24);
  if ( !(unsigned __int8)sub_1D6B40(a1, a1 + 24) )
    return 0;
  v12 = &v46[40];
  *(_QWORD *)&v46[24] = 0;
  *(_QWORD *)&v46[32] = 0;
  memset(v46, 255, 24);
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 40;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( &v47 != v12 );
  v13 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v14 = *(_WORD *)(a1 + 48);
  if ( !(unsigned int)decode_insn() )
    return 0;
  if ( v14 == 6 )
  {
    v15 = 5;
    v16 = 25;
  }
  else
  {
    v15 = 166;
    v16 = 35;
  }
  v17 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v19 = *(_DWORD *)(v18 + 104);
  if ( v19 <= *(unsigned __int16 *)&v46[24] && *(_DWORD *)(v18 + 108) > (int)*(unsigned __int16 *)&v46[24] )
    v17 = *(_DWORD *)(*(_QWORD *)(v18 + 112) + 16LL * (*(unsigned __int16 *)&v46[24] - v19) + 8);
  if ( v15 != *(_WORD *)&v46[24]
    || v46[45] != 2
    || (v46[28] & 7) != 0
    || (v17 & 0x10000) == 0
    || v46[32] == 33
    || (unsigned __int8)sub_409700(a1 + 64, (__int64)&v46[40])
    || (unsigned __int8)sub_409700(a1 + 64, (__int64)&v46[80])
    || (unsigned __int8)sub_409700(a1 + 104, (__int64)&v46[80]) && *(_BYTE *)(a1 + 105) != 5 )
  {
    return 0;
  }
  qmemcpy(v48, v8, sizeof(v48));
  qmemcpy((void *)(a1 + 24), v46, 0x168u);
  v22 = *(_DWORD **)(a1 + 832);
  v28 = v22[113];
  if ( a3 >= v28 )
  {
    v30 = v20;
    v33 = v21;
    sub_3F7E20(a1, 4u, 2, a3, 0x3BEA45E214ADDC55LL, (int)v22[115], (__m128i)0LL, a6, a7, 0);
    v22 = *(_DWORD **)(a1 + 832);
    v21 = v33;
    a3 = v22[115];
    v20 = v30;
  }
  if ( v28 <= a4 )
  {
    v31 = v21;
    v29 = v20;
    sub_3F7E20(a1, 4u, 2, a4, 0x3BEA45E214ADDC55LL, (int)v22[116], (__m128i)0LL, a6, a7, 0);
    v21 = v31;
    a4 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v20 = v29;
  }
  v39 = v21;
  v37 = v20;
  v35 = sub_3FAE40(a1, 0, 0, (__m128i)0LL, a6, a7);
  v32 = sub_3FAE40(a1, 1, 0, (__m128i)0LL, a6, a7);
  v41[1] = 0;
  v41[0] = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size();
  sub_1252A0((__int64)v41, (unsigned int)a3, v35, dtype_size);
  v42[0] = 0xFFFFFFFF00000000LL;
  v42[1] = 0;
  sub_1252A0((__int64)v42, (unsigned int)a4, v32, dtype_size);
  v44[1] = 3;
  v43[0] = 0x100000001LL;
  v44[0] = 0x100000001LL;
  v43[1] = 0;
  sub_123A40((__int64)v45, (unsigned __int8 *)v41, 0, v23);
  v24 = v37;
  v25 = v39;
  if ( v37 == 12 )
  {
    sub_11CA10((char *)v41, (char *)v42);
    v24 = 12;
    v25 = v39;
  }
  v40 = v25;
  v38 = v24;
  sub_1D6450(a1, v16, (unsigned __int8 *)v41, (unsigned __int8 *)v42, (unsigned __int8 *)v43, (__m128i)0LL, a6, a7);
  sub_1D6450(a1, v40, (unsigned __int8 *)v41, (unsigned __int8 *)v42, (unsigned __int8 *)v44, (__m128i)0LL, a6, a7);
  sub_1D6450(a1, v38, (unsigned __int8 *)v41, (unsigned __int8 *)v42, v45, (__m128i)0LL, a6, a7);
  sub_11D5D0(*(unsigned int **)(*(_QWORD *)(a1 + 16) + 56LL), *(unsigned __int64 **)(a1 + 832), (__m128i)0LL);
  sub_3FD520(a1, v35, 2u, (__m128i)0LL, a6, a7);
  if ( (unsigned __int8)sub_3FB270(a1, 0, v35, 1, (__m128i)0LL, a6, a7)
    && (qmemcpy((void *)(a1 + 24), v48, 0x168u), (unsigned __int8)sub_3FB270(a1, 0, a3, 1, (__m128i)0LL, a6, a7)) )
  {
    v27 = *(_QWORD *)(a1 + 864);
    if ( *(_QWORD *)(a1 + 872) < (unsigned __int64)(v27 + 1) )
    {
      *(_QWORD *)(a1 + 856) = qvector_reserve(a1 + 856, *(_QWORD *)(a1 + 856), v27 + 1, 8);
      v27 = *(_QWORD *)(a1 + 864);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 856) + 8 * v27) = v13;
    v26 = 1;
    ++*(_QWORD *)(a1 + 864);
  }
  else
  {
    v26 = -1;
  }
  v36 = v26;
  sub_11CDA0((__int64)v45);
  sub_11CDA0((__int64)v44);
  sub_11CDA0((__int64)v43);
  sub_11CDA0((__int64)v42);
  sub_11CDA0((__int64)v41);
  return v36;
}

