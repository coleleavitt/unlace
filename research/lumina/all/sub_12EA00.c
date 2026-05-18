__int64 __fastcall sub_12EA00(__int64 a1, __int64 a2, _BOOL4 a3, int a4, __int64 **a5, double a6)
{
  __int64 v6; // r13
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rsi
  unsigned __int16 v10; // bp
  unsigned int v11; // r12d
  __int64 v12; // rdi
  unsigned int v13; // r14d
  const char *v14; // rax
  int v15; // ebx
  __int64 v16; // r12
  unsigned int v17; // ebp
  unsigned int v18; // eax
  int v19; // ebp
  __int64 v20; // rbx
  char *v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rax
  __int16 v24; // dx
  unsigned __int8 *v25; // r9
  _BOOL4 v27; // eax
  char v28; // si
  int v29; // eax
  int v30; // r9d
  __int64 v31; // rdx
  int v32; // eax
  _BYTE *v33; // rdx
  unsigned int v34; // r13d
  unsigned int v35; // r8d
  unsigned int v36; // ecx
  int v37; // [rsp+4h] [rbp-84h]
  unsigned int v38; // [rsp+4h] [rbp-84h]
  char *v41; // [rsp+10h] [rbp-78h]
  unsigned __int8 *v42; // [rsp+10h] [rbp-78h]
  __int64 v43; // [rsp+18h] [rbp-70h]
  __int64 *v44; // [rsp+20h] [rbp-68h]
  int v45; // [rsp+28h] [rbp-60h]
  int v46; // [rsp+2Ch] [rbp-5Ch]
  __int64 v48; // [rsp+38h] [rbp-50h]
  unsigned int v49; // [rsp+38h] [rbp-50h]
  unsigned int v50; // [rsp+40h] [rbp-48h]
  int v51; // [rsp+40h] [rbp-48h]
  __int64 v52; // [rsp+48h] [rbp-40h]

  v6 = a1;
  v7 = *(_QWORD *)(a2 + 96);
  v43 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 56);
  v9 = *(_QWORD *)(v7 + 32);
  v10 = *(_WORD *)(v7 + 54);
  v11 = v8 + 1;
  v37 = *(unsigned __int16 *)(v7 + 24);
  v12 = *(_QWORD *)a1;
  v45 = v37 + a4;
  v13 = v8 + 1;
  *(_DWORD *)(v6 + 56) = v37 + a4 + v8;
  v14 = (const char *)sub_E3A30(v12, v9);
  v44 = sub_DC720(*(_QWORD *)v6, v14);
  v46 = v10;
  v15 = v10;
  if ( v10 )
  {
    v49 = *(_DWORD *)(a2 + 8);
    sub_E1710(v43, 75, 0, v11, v10 + v11 - 1);
    if ( a3 )
    {
      sub_E1710(v43, 31, v49, 0, 0);
      v28 = 20;
    }
    else
    {
      sub_E1710(v43, 35, v49, 0, 0);
      v28 = 23;
    }
    v51 = sub_E1710(v43, 8, 0, 0, 0);
    v29 = sub_E1710(v43, v28, v49, 0, v11);
    v30 = v51;
    if ( !*(_BYTE *)(*(_QWORD *)v43 + 103LL) )
    {
      v31 = *(_QWORD *)(v43 + 136) + 24LL * v29;
      *(_BYTE *)(v31 + 1) = -3;
      *(_DWORD *)(v31 + 16) = v10;
    }
    *(_DWORD *)(a2 + 20) = v29;
    v32 = *(_DWORD *)(v43 + 144);
    if ( v51 < 0 )
      v30 = v32 - 1;
    v33 = byte_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v43 + 103LL) )
      v33 = (_BYTE *)(*(_QWORD *)(v43 + 136) + 24LL * v30);
    v52 = v6;
    *((_DWORD *)v33 + 2) = v32;
    v34 = 0;
    do
    {
      v35 = v11 + v34;
      v36 = v34++;
      sub_E1710(v43, 94, v49, v36, v35);
    }
    while ( v34 != v10 );
    v6 = v52;
  }
  if ( v37 > v10 )
  {
    v48 = v10;
    v16 = 8LL * v10;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = v13 + v15;
        v18 = sub_12E1A0(v6, *(__int64 **)(*(_QWORD *)(v7 + 64) + v16), a2, v15, a3, v13 + v15, a6);
        if ( v13 + v15 != v18 )
          break;
LABEL_6:
        ++v15;
        v16 += 8;
        if ( v37 == v15 )
          goto LABEL_10;
      }
      if ( v45 == 1 )
      {
        if ( v13 )
        {
          v50 = v18;
          sub_CEFE0(v6, v13);
          v13 = v50;
        }
        else
        {
          v13 = v18;
        }
        goto LABEL_6;
      }
      ++v15;
      v16 += 8;
      sub_E1710(v43, 80, v18, v17, 0);
      if ( v37 == v15 )
      {
LABEL_10:
        v19 = v37;
        v20 = 0;
        v38 = v13;
        v21 = (char *)v44 + v48;
        v22 = (unsigned int)(v19 - 1 - v46) + 1LL;
        while ( 1 )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(v7 + 64) + 8 * (v20 + v48));
          v24 = *(_WORD *)(v23 + 20);
          if ( (v24 & 1) != 0 )
            break;
          if ( (v24 & 0x100) != 0 )
            goto LABEL_14;
          v25 = *(unsigned __int8 **)(*(_QWORD *)v23 + 24LL);
          if ( (*(_BYTE *)(v23 + 19) & 8) == 0 )
          {
            v42 = *(unsigned __int8 **)(*(_QWORD *)v23 + 24LL);
            v27 = sub_C43F0(v42);
            v25 = v42;
            if ( v27 )
            {
              sub_E1710(v43, 50, v20 + v46 + v38, *(_DWORD *)(a2 + 12), 0);
              v25 = v42;
            }
          }
          if ( *(_DWORD *)(v6 + 48) )
            goto LABEL_14;
          v41 = (char *)v25;
          if ( (unsigned __int8)sub_C68F0(v25, v21[v20]) == 65
            || v21[v20] == 65
            || (unsigned int)sub_CEC30(v41, v21[v20]) )
          {
LABEL_13:
            v21[v20] = 65;
LABEL_14:
            if ( v22 == ++v20 )
              goto LABEL_23;
          }
          else if ( v22 == ++v20 )
          {
LABEL_23:
            v13 = v38;
            goto LABEL_24;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)v23 + 5LL) & 8) == 0 || !v44 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
LABEL_24:
  *a5 = v44;
  return v13;
}
