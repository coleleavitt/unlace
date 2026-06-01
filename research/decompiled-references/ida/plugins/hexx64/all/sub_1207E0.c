unsigned __int64 __fastcall sub_1207E0(char *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, int a5, __m128i a6)
{
  int v6; // r15d
  __int64 v8; // rbx
  char v9; // dl
  char v10; // al
  char v11; // dl
  char v12; // al
  __int16 v13; // dx
  __int16 v14; // ax
  int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v22; // dl
  char v23; // cl
  char v24; // dl
  __int16 v25; // cx
  __int16 v26; // dx
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _WORD v32[2]; // [rsp+20h] [rbp-50h] BYREF
  int v33; // [rsp+24h] [rbp-4Ch]
  __int64 v34; // [rsp+28h] [rbp-48h]
  unsigned __int64 v35; // [rsp+38h] [rbp-38h]

  v6 = a3;
  v35 = __readfsqword(0x28u);
  v8 = j__qalloc_or_throw(80, (__int64)a2, a3, a4);
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  sub_330970(v8, a4);
  *(_DWORD *)v8 = v6;
  *(_DWORD *)(v8 + 68) = a5;
  v9 = *(_BYTE *)(v8 + 32);
  *(_QWORD *)(v8 + 24) = a4;
  v10 = *a1;
  *a1 = v9;
  v11 = *(_BYTE *)(v8 + 33);
  *(_BYTE *)(v8 + 32) = v10;
  v12 = a1[1];
  a1[1] = v11;
  v13 = *(_WORD *)(v8 + 34);
  *(_BYTE *)(v8 + 33) = v12;
  v14 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = v13;
  v15 = *(_DWORD *)(v8 + 36);
  *(_WORD *)(v8 + 34) = v14;
  v16 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v15;
  v17 = *(_QWORD *)(v8 + 40);
  *(_DWORD *)(v8 + 36) = v16;
  v18 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v17;
  *(_QWORD *)(v8 + 40) = v18;
  v32[0] = *(_WORD *)a1;
  LOWORD(v18) = *((_WORD *)a1 + 1);
  *(_DWORD *)a1 = 4;
  v32[1] = v18;
  LODWORD(v18) = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = a5;
  v33 = v18;
  v19 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v8;
  v34 = v19;
  if ( (int)sub_15BC70((unsigned int *)v8, a2, 0, 0, nullptr, nullptr, a6, 0) > 0 )
  {
    v20 = *((_QWORD *)a1 + 1);
    if ( *(_DWORD *)v20 == 4 || *(_DWORD *)v20 == 67 && *(_DWORD *)(v20 + 36) == *(_DWORD *)(v20 + 68) )
    {
      v22 = *a1;
      *a1 = *(_BYTE *)(v20 + 32);
      v23 = *(_BYTE *)(v20 + 33);
      *(_BYTE *)(v20 + 32) = v22;
      v24 = a1[1];
      a1[1] = v23;
      v25 = *(_WORD *)(v20 + 34);
      *(_BYTE *)(v20 + 33) = v24;
      v26 = *((_WORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v25;
      v27 = *(_DWORD *)(v20 + 36);
      *(_WORD *)(v20 + 34) = v26;
      v28 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = v27;
      v29 = *(_QWORD *)(v20 + 40);
      *(_DWORD *)(v20 + 36) = v28;
      v30 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v29;
      *(_QWORD *)(v20 + 40) = v30;
      *(_BYTE *)(v8 + 32) = 0;
      if ( v8 )
      {
        sub_11CDA0(v8 + 64);
        sub_11CDA0(v8 + 48);
        sub_11CDA0(v8 + 32);
        j__qfree(v8);
      }
    }
  }
  sub_11CDA0((__int64)v32);
  return v35 - __readfsqword(0x28u);
}

