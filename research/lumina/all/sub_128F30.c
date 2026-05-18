__int64 __fastcall sub_128F30(
        __int64 a1,
        int **a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        signed int a6,
        double a7,
        int a8)
{
  __int64 v10; // rbx
  char v11; // r12
  unsigned int v12; // ebp
  int v13; // eax
  int v14; // eax
  int *v15; // rsi
  unsigned int v16; // r12d
  unsigned int v17; // r13d
  signed int v18; // esi
  __int64 result; // rax
  _BYTE *v20; // rdx
  int v21; // eax
  int v22; // eax
  int v23; // r12d
  int v24; // eax
  _BYTE *v25; // r8
  int v26; // r13d
  __int64 v27; // r13
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r13d
  int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  int v34; // eax
  _BYTE *v35; // rdx
  int v36; // eax
  _BYTE *v37; // rdx
  __int64 v38; // rax
  signed int v39; // [rsp+4h] [rbp-64h]
  int v41; // [rsp+10h] [rbp-58h]
  int v42; // [rsp+14h] [rbp-54h]
  unsigned int v44; // [rsp+18h] [rbp-50h]
  int v45; // [rsp+1Ch] [rbp-4Ch]
  _BOOL4 v46; // [rsp+20h] [rbp-48h]
  _BYTE *v47; // [rsp+20h] [rbp-48h]
  unsigned int v48; // [rsp+28h] [rbp-40h]
  int v49; // [rsp+2Ch] [rbp-3Ch]

  v10 = *(_QWORD *)(a1 + 16);
  v11 = *((_BYTE *)a2 + 36) & 1;
  v46 = v11 == 0;
  v45 = **a2;
  v42 = v46 + a6 + v45;
  v41 = *((_DWORD *)a2 + 2);
  if ( a8 )
  {
    v12 = a4 - a8;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 56);
    v12 = v21 + 1;
    *(_DWORD *)(a1 + 56) = v42 + v21;
  }
  v13 = *(_DWORD *)(a3 + 12);
  if ( v13 )
    v39 = v13 + 1;
  else
    v39 = *(_DWORD *)(a3 + 8);
  v14 = *(_DWORD *)(a1 + 68) - 1;
  *(_DWORD *)(a1 + 68) = v14;
  v15 = *a2;
  *((_DWORD *)a2 + 7) = v14;
  sub_128C80(a1, v15, v12, a5, a5 == 0 ? 1 : 5, a7);
  if ( !v11 )
    sub_E1710(v10, 126, *((_DWORD *)a2 + 3), v12 + v45, 0);
  if ( a8 || a6 <= 0 )
  {
    if ( v41 <= 0 )
      goto LABEL_10;
  }
  else
  {
    sub_E1710(*(_QWORD *)(a1 + 16), 79, a4, v12 + v45 + v46, a6);
    if ( v41 <= 0 )
    {
LABEL_10:
      v44 = 0;
      v16 = v12 + v41;
      if ( !v39 )
      {
LABEL_15:
        v44 = sub_128ED0(a1, *((_DWORD *)a2 + 2), a2 + 5, a3, v12, v42, a7);
LABEL_16:
        result = sub_E1770(
                   (_QWORD *)v10,
                   ((*((_BYTE *)a2 + 36) & 1) != 0) - 118,
                   *((_DWORD *)a2 + 3),
                   v44,
                   v16,
                   v42 - v41);
        if ( v39 )
        {
          result = *((unsigned int *)a2 + 8);
          if ( !(_DWORD)result )
            result = *(unsigned int *)(v10 + 144);
          if ( v39 < 0 )
            v39 = *(_DWORD *)(v10 + 144) - 1;
          v20 = byte_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
            v20 = (_BYTE *)(*(_QWORD *)(v10 + 136) + 24LL * v39);
          *((_DWORD *)v20 + 2) = result;
        }
        return result;
      }
      goto LABEL_11;
    }
  }
  v44 = sub_128ED0(a1, *((_DWORD *)a2 + 2), a2 + 5, a3, v12, v42, a7);
  v22 = *(_DWORD *)(a1 + 56);
  v48 = v22 + 1;
  *(_DWORD *)(a1 + 56) = *((_DWORD *)a2 + 2) + v22;
  v49 = *((_DWORD *)a2 + 2);
  if ( v11 )
    v23 = sub_E1710(v10, 120, *((_DWORD *)a2 + 3), 0, 0);
  else
    v23 = sub_E1710(v10, 16, v12 + v45, 0, 0);
  sub_E1710(v10, 90, v48, v12, *((_DWORD *)a2 + 2));
  v24 = *((_DWORD *)a2 + 6);
  if ( v24 < 0 )
    v24 = *(_DWORD *)(v10 + 144) - 1;
  v25 = byte_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
    v25 = (_BYTE *)(*(_QWORD *)(v10 + 136) + 24LL * v24);
  result = *(_QWORD *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) )
  {
    v26 = v46 + v45 - v49 + a6;
    v47 = v25;
    *((_DWORD *)v25 + 2) = v26;
    v27 = *((_QWORD *)v25 + 2);
    memset(*(void **)(v27 + 24), 0, *(unsigned __int16 *)(v27 + 6));
    sub_DCC50(v10, -1, v27, 4294967288LL, v28, v29);
    *((_QWORD *)v47 + 2) = sub_F44C0(
                             (_BYTE **)a1,
                             *a2,
                             v41,
                             *(unsigned __int16 *)(v27 + 8) - 1 - (unsigned int)*(unsigned __int16 *)(v27 + 6),
                             a7);
    v30 = *(_DWORD *)(v10 + 144);
    sub_E1710(v10, 13, v30 + 1, 0, v30 + 1);
    v31 = *(_DWORD *)(a1 + 68) - 1;
    *(_DWORD *)(a1 + 68) = v31;
    *((_DWORD *)a2 + 5) = v31;
    v32 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v32;
    v33 = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 4) = v32;
    sub_E1710(v10, 9, v32, v33, 0);
    sub_E1710(v10, 146, *((_DWORD *)a2 + 3), 0, 0);
    if ( v39 )
      sub_E1710(v10, 16, v39, *((_DWORD *)a2 + 7), 0);
    v34 = *(_DWORD *)(v10 + 144);
    if ( v23 < 0 )
      v23 = v34 - 1;
    v35 = byte_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
      v35 = (_BYTE *)(*(_QWORD *)(v10 + 136) + 24LL * v23);
    *((_DWORD *)v35 + 2) = v34;
    sub_E1710(*(_QWORD *)(a1 + 16), 79, v12, v48, *((_DWORD *)a2 + 2));
    v36 = *(_DWORD *)(v10 + 144);
    if ( v30 < 0 )
      v30 = v36 - 1;
    v37 = byte_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
      v37 = (_BYTE *)(*(_QWORD *)(v10 + 136) + 24LL * v30);
    *((_DWORD *)v37 + 2) = v36;
    v16 = v12 + v41;
    if ( !v39 )
    {
LABEL_14:
      if ( v44 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_11:
    v17 = *((_DWORD *)a2 + 3);
    sub_E1710(v10, 59, v39, *(_DWORD *)(v10 + 144) + 4, 0);
    sub_E1710(v10, 31, v17, 0, 0);
    v18 = sub_E1710(v10, 39, v17, 0, v16);
    v39 = v18;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 103LL) )
    {
      v38 = *(_QWORD *)(v10 + 136) + 24LL * v18;
      *(_BYTE *)(v38 + 1) = -3;
      *(_DWORD *)(v38 + 16) = v45 - v41;
    }
    sub_E1710(v10, 130, v17, 0, 0);
    goto LABEL_14;
  }
  return result;
}
