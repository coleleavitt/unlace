__int64 __fastcall sub_1FCAD0(__int64 a1, _DWORD *a2, unsigned __int8 *a3, __int64 a4, __int64 a5, char a6, double a7)
{
  unsigned __int8 v10; // al
  int **v11; // r14
  bool v12; // r14
  int v13; // r11d
  unsigned __int8 v14; // r8
  char v15; // al
  int v16; // r9d
  __int16 v17; // r11
  unsigned __int8 v18; // r8
  __int64 v19; // rdi
  int v20; // eax
  unsigned int v21; // ebx
  _QWORD *v23; // rdi
  bool v24; // al
  __int64 v25; // rsi
  char v26; // al
  int v27; // eax
  unsigned __int64 v28; // [rsp+0h] [rbp-90h]
  unsigned __int8 v30; // [rsp+1Ah] [rbp-76h]
  unsigned __int8 v31; // [rsp+1Bh] [rbp-75h]
  int v32; // [rsp+1Ch] [rbp-74h]
  int v34; // [rsp+20h] [rbp-70h]
  int v35; // [rsp+20h] [rbp-70h]
  __int16 v36; // [rsp+20h] [rbp-70h]
  __int16 v37; // [rsp+20h] [rbp-70h]
  __int64 v39; // [rsp+30h] [rbp-60h] BYREF
  __int64 v40; // [rsp+38h] [rbp-58h] BYREF
  __int64 v41; // [rsp+40h] [rbp-50h] BYREF
  __int64 v42; // [rsp+48h] [rbp-48h]
  unsigned __int64 v43; // [rsp+58h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  v39 = 0;
  if ( a5 )
    copy_tinfo_t();
  v10 = sub_242770(*(_QWORD *)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), (__int64)a3, &v39, 0);
  v11 = *(int ***)(a1 + 32);
  v30 = v10;
  if ( *((_DWORD *)a3 + 1) == -1 )
  {
    v32 = 1;
  }
  else if ( sub_11CC50(a3, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), 0, a7) )
  {
    v11 = *(int ***)(a1 + 32);
    v32 = *((_DWORD *)a3 + 1);
  }
  else
  {
    v32 = sub_207610((__int64)a3, v11);
    v11 = *(int ***)(a1 + 32);
  }
  v12 = sub_1226C0((__int64)v11, (__int64)a3);
  if ( v12 && !(_BYTE)v39 )
  {
    sub_32C150(&v41, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v32);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( *(_BYTE *)(a1 + 108) && (**(_BYTE **)(a1 + 8) & 1) != 0 )
  {
    v13 = 0;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) + 1LL == a4 )
      v13 = (a4 == get_item_end()) << 9;
    v14 = *a3;
    if ( *a3 != 1 )
      goto LABEL_14;
LABEL_25:
    v23 = *(_QWORD **)(a1 + 8);
    if ( !a5 )
      LOWORD(v13) = v13 | 1;
    *a2 = sub_1F6B00(v23, *((_DWORD *)a3 + 2), v32, &v39, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL), a4, a7, v13);
    goto LABEL_21;
  }
  v14 = *a3;
  v13 = 0;
  if ( *a3 == 1 )
    goto LABEL_25;
LABEL_14:
  v31 = v14;
  v34 = v13;
  v41 = -1;
  v42 = 0;
  v15 = sub_1219B0((char *)a3, (__int64)&v41);
  v17 = v34;
  v18 = v31;
  if ( !v15 || (_BYTE)v42 != 5 )
    goto LABEL_16;
  v28 = v41;
  if ( (unsigned __int8)sub_229280(
                          *(_QWORD *)(a1 + 8),
                          v41,
                          (__int64)a3,
                          *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
                          v31,
                          v16) )
  {
    v35 = (8 * sub_1226C0(*(_QWORD *)(a1 + 32), (__int64)a3)) | v34 | (32 * v30);
    v24 = sub_229080(*(_QWORD *)(a1 + 8), v28, *((_DWORD *)a3 + 1), a6);
    v25 = *(_QWORD *)(a1 + 8);
    v36 = v35 | (v24 << 7);
    HIDWORD(v42) = v32;
    v26 = sub_1F0A50(&v41, v25, 1, a4, a7);
    v17 = v36;
    v18 = v31;
    if ( v26 )
    {
      if ( (_BYTE)v42 != 5 )
        sub_1FB070(a7);
      if ( (unsigned __int8)sub_232C00(*(_QWORD *)(a1 + 8), v41, SHIDWORD(v42)) )
        goto LABEL_37;
      v17 = v36;
      if ( v12 )
      {
        sub_32C080(&v40, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), SHIDWORD(v42));
        copy_tinfo_t();
        clear_tinfo_t();
        v17 = v36;
        if ( !(_BYTE)v39 || (v27 = verify_tinfo(), v17 = v36, v27) )
        {
          v37 = v17 & 0xFFF7;
          clear_tinfo_t();
          v17 = v37;
        }
      }
      LOBYTE(v40) = 0;
      goto LABEL_17;
    }
    if ( *((_DWORD *)a3 + 1) == -1 )
      HIDWORD(v42) = -1;
LABEL_16:
    LOBYTE(v40) = 0;
    if ( v18 == 15 )
    {
      v20 = sub_1F6FD0(*(_QWORD **)(a1 + 8), (__int64)a3, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL), a4, v17, &v40, a7);
      goto LABEL_19;
    }
LABEL_17:
    v19 = *(_QWORD *)(a1 + 8);
    if ( (_BYTE)v42 != 5 )
      sub_1FB070(a7);
    v20 = sub_232C90(v19, v41, SHIDWORD(v42), (__int64)&v39, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL), a4, v17, &v40);
LABEL_19:
    *a2 = v20;
    if ( v20 == -1 )
    {
      v21 = -10;
      goto LABEL_22;
    }
    if ( !(_BYTE)v40 )
      goto LABEL_21;
LABEL_37:
    v21 = -36;
    goto LABEL_22;
  }
  *a2 = -1;
LABEL_21:
  v21 = 0;
LABEL_22:
  clear_tinfo_t();
  return v21;
}

