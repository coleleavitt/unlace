unsigned __int64 __fastcall sub_11BC20(char *a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // rbx
  char v8; // dl
  char v9; // al
  char v10; // dl
  char v11; // al
  __int16 v12; // dx
  __int16 v13; // ax
  int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v21; // dl
  char v22; // cl
  char v23; // dl
  __int16 v24; // cx
  __int16 v25; // dx
  int v26; // ecx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _WORD v31[2]; // [rsp+20h] [rbp-50h] BYREF
  int v32; // [rsp+24h] [rbp-4Ch]
  __int64 v33; // [rsp+28h] [rbp-48h]
  unsigned __int64 v34; // [rsp+38h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  v7 = j__qalloc_or_throw();
  *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 72) = 0;
  sub_32ADE0(v7, a4);
  *(_DWORD *)v7 = a3;
  *(_DWORD *)(v7 + 68) = a5;
  v8 = *(_BYTE *)(v7 + 32);
  *(_QWORD *)(v7 + 24) = a4;
  v9 = *a1;
  *a1 = v8;
  v10 = *(_BYTE *)(v7 + 33);
  *(_BYTE *)(v7 + 32) = v9;
  v11 = a1[1];
  a1[1] = v10;
  v12 = *(_WORD *)(v7 + 34);
  *(_BYTE *)(v7 + 33) = v11;
  v13 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = v12;
  v14 = *(_DWORD *)(v7 + 36);
  *(_WORD *)(v7 + 34) = v13;
  v15 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v14;
  v16 = *(_QWORD *)(v7 + 40);
  *(_DWORD *)(v7 + 36) = v15;
  v17 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v16;
  *(_QWORD *)(v7 + 40) = v17;
  v31[0] = *(_WORD *)a1;
  LOWORD(v17) = *((_WORD *)a1 + 1);
  *(_DWORD *)a1 = 4;
  v31[1] = v17;
  LODWORD(v17) = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = a5;
  v32 = v17;
  v18 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v7;
  v33 = v18;
  if ( (int)sub_1570B0(v7, a2, 0, 0, 0, 0, 0) > 0 )
  {
    v19 = *((_QWORD *)a1 + 1);
    if ( *(_DWORD *)v19 == 4 || *(_DWORD *)v19 == 67 && *(_DWORD *)(v19 + 36) == *(_DWORD *)(v19 + 68) )
    {
      v21 = *a1;
      *a1 = *(_BYTE *)(v19 + 32);
      v22 = *(_BYTE *)(v19 + 33);
      *(_BYTE *)(v19 + 32) = v21;
      v23 = a1[1];
      a1[1] = v22;
      v24 = *(_WORD *)(v19 + 34);
      *(_BYTE *)(v19 + 33) = v23;
      v25 = *((_WORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v24;
      v26 = *(_DWORD *)(v19 + 36);
      *(_WORD *)(v19 + 34) = v25;
      v27 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = v26;
      v28 = *(_QWORD *)(v19 + 40);
      *(_DWORD *)(v19 + 36) = v27;
      v29 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v28;
      *(_QWORD *)(v19 + 40) = v29;
      *(_BYTE *)(v7 + 32) = 0;
      if ( v7 )
      {
        sub_1181E0(v7 + 64);
        sub_1181E0(v7 + 48);
        sub_1181E0(v7 + 32);
        j__qfree();
      }
    }
  }
  sub_1181E0((__int64)v31);
  return v34 - __readfsqword(0x28u);
}

