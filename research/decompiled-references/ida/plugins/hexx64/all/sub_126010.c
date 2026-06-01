unsigned __int64 __fastcall sub_126010(
        char *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        __m128i a6)
{
  int v6; // r14d
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  char v13; // cl
  char v14; // dl
  char v15; // cl
  char v16; // dl
  __int16 v17; // cx
  __int16 v18; // dx
  int v19; // ecx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  char v26; // dl
  char v27; // cl
  char v28; // dl
  __int16 v29; // cx
  __int16 v30; // dx
  int v31; // ecx
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  _WORD v36[2]; // [rsp+20h] [rbp-50h] BYREF
  int v37; // [rsp+24h] [rbp-4Ch]
  __int64 v38; // [rsp+28h] [rbp-48h]
  unsigned __int64 v39; // [rsp+38h] [rbp-38h]

  v6 = a3;
  v39 = __readfsqword(0x28u);
  v8 = j__qalloc_or_throw(80, (__int64)a2, a3, a4);
  v9 = v8 + 48;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  sub_330970(v8, a4);
  if ( a5 != (unsigned __int8 *)(v8 + 48) )
  {
    sub_11CDA0(v9);
    sub_123A40(v9, a5, v10, v11);
  }
  v12 = *((_DWORD *)a1 + 1);
  *(_DWORD *)v8 = v6;
  v13 = *(_BYTE *)(v8 + 32);
  *(_QWORD *)(v8 + 24) = a4;
  *(_DWORD *)(v8 + 68) = v12;
  v14 = *a1;
  *a1 = v13;
  v15 = *(_BYTE *)(v8 + 33);
  *(_BYTE *)(v8 + 32) = v14;
  v16 = a1[1];
  a1[1] = v15;
  v17 = *(_WORD *)(v8 + 34);
  *(_BYTE *)(v8 + 33) = v16;
  v18 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = v17;
  v19 = *(_DWORD *)(v8 + 36);
  *(_WORD *)(v8 + 34) = v18;
  v20 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v19;
  v21 = *(_QWORD *)(v8 + 40);
  *(_DWORD *)(v8 + 36) = v20;
  v22 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v21;
  *(_QWORD *)(v8 + 40) = v22;
  v36[0] = *(_WORD *)a1;
  LOWORD(v22) = *((_WORD *)a1 + 1);
  *(_DWORD *)a1 = 4;
  v36[1] = v22;
  LODWORD(v22) = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v12;
  v37 = v22;
  v23 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v8;
  v38 = v23;
  if ( (int)sub_15BC70((unsigned int *)v8, a2, 0, 0, nullptr, nullptr, a6, 0) > 0 )
  {
    v24 = *((_QWORD *)a1 + 1);
    if ( *(_DWORD *)v24 == 4 || *(_DWORD *)v24 == 67 && *(_DWORD *)(v24 + 36) == *(_DWORD *)(v24 + 68) )
    {
      v26 = *a1;
      *a1 = *(_BYTE *)(v24 + 32);
      v27 = *(_BYTE *)(v24 + 33);
      *(_BYTE *)(v24 + 32) = v26;
      v28 = a1[1];
      a1[1] = v27;
      v29 = *(_WORD *)(v24 + 34);
      *(_BYTE *)(v24 + 33) = v28;
      v30 = *((_WORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v29;
      v31 = *(_DWORD *)(v24 + 36);
      *(_WORD *)(v24 + 34) = v30;
      v32 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = v31;
      v33 = *(_QWORD *)(v24 + 40);
      *(_DWORD *)(v24 + 36) = v32;
      v34 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v33;
      *(_QWORD *)(v24 + 40) = v34;
      *(_BYTE *)(v8 + 32) = 0;
      sub_11CDA0(v8 + 64);
      sub_11CDA0(v9);
      sub_11CDA0(v8 + 32);
      j__qfree(v8);
    }
  }
  sub_11CDA0((__int64)v36);
  return v39 - __readfsqword(0x28u);
}

