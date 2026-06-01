__int64 __fastcall sub_33E0(__int64 a1, __int64 a2, unsigned int *a3, char a4)
{
  __int64 v5; // r12
  __int64 v7; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp+8h] [rbp-1A0h]
  _WORD v25[2]; // [rsp+18h] [rbp-190h] BYREF
  unsigned int v26; // [rsp+1Ch] [rbp-18Ch]
  char v27[12]; // [rsp+20h] [rbp-188h] BYREF
  int v28; // [rsp+2Ch] [rbp-17Ch]
  unsigned int v29; // [rsp+30h] [rbp-178h]
  unsigned int v30; // [rsp+38h] [rbp-170h]
  char v31[6]; // [rsp+40h] [rbp-168h] BYREF
  unsigned __int16 v32; // [rsp+46h] [rbp-162h]
  char v33; // [rsp+57h] [rbp-151h]
  unsigned int v34; // [rsp+D8h] [rbp-D0h]
  int v35; // [rsp+DCh] [rbp-CCh]
  int v36; // [rsp+E8h] [rbp-C0h]
  int v37; // [rsp+ECh] [rbp-BCh]
  char v38[12]; // [rsp+140h] [rbp-68h] BYREF
  int v39; // [rsp+14Ch] [rbp-5Ch]
  unsigned int v40; // [rsp+150h] [rbp-58h]
  int v41; // [rsp+154h] [rbp-54h]
  unsigned __int64 v42; // [rsp+168h] [rbp-40h]

  v5 = a2;
  v7 = *(_QWORD *)(a1 + 152);
  v42 = __readfsqword(0x28u);
  if ( netnode_valobj(v7, v31, 248) <= 0 || (v33 & 2) != 0 || !v36 || v37 != 1 )
  {
    if ( a4 )
    {
      v10 = fopenRB(a2);
      v11 = v10;
      if ( v10 )
      {
        v12 = qfsize(v10);
        if ( v34 && v35 && v34 + v35 == v12 )
          v12 = v34;
        qfseek(v11, v12 - 8, 0);
        if ( qfread(v11, v25, 8) != 8 )
          goto LABEL_50;
        if ( v25[0] == 16966
          && (unsigned __int16)(v25[1] - 14640) <= 0x800u
          && v26 > 0x1F
          && v26 < (unsigned __int64)(v12 - 8) )
        {
          v29 = v26;
          v30 = v12 - v26;
          v18 = (unsigned int)v12 - v26;
LABEL_30:
          qfseek(v11, v18, 0);
          v20 = v29;
          *a3 = v29;
          v21 = v20;
          v22 = qalloc(v20);
          *(_QWORD *)(a1 + 120) = v22;
          if ( !v22 )
            sub_2E20((__int64)"tds debug-info", 0);
          if ( v21 == qfread(v11, v22, v21) )
          {
            qfclose(v11);
            return 1;
          }
LABEL_50:
          sub_2D30(v5);
        }
        qfclose(v11);
      }
    }
    return 0;
  }
  v13 = 1;
  if ( !v32 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( netnode_supval(*(_QWORD *)(a1 + 152), v13, v38, 40, 83) <= 0 )
      return 0xFFFFFFFFLL;
    if ( v39 == v36 )
      break;
    if ( v32 < (unsigned int)++v13 )
      return 0xFFFFFFFFLL;
  }
  v14 = v40;
  if ( v40 <= 0x3CuLL )
    return 0xFFFFFFFFLL;
  v15 = v41;
  if ( !v41 )
    return 0xFFFFFFFFLL;
  if ( a4 )
  {
    v11 = fopenRB(a2);
    if ( v11 )
      goto LABEL_20;
  }
  else
  {
    v23 = a2;
    while ( 1 )
    {
      v24 = v23;
      if ( (unsigned __int8)qfileexist(v23) )
        break;
      v23 = sub_3090(0, a2, (__int64)"Please specify the TDS file");
      if ( !v23 )
        return 4294967294LL;
    }
    if ( v24 )
    {
      v11 = fopenRB(v24);
      if ( v11 )
      {
        v5 = v24;
LABEL_20:
        v16 = qfsize(v11);
        v17 = v14;
        if ( v15 >= v14 )
          v17 = v15;
        if ( v17 < v16 && v16 - v15 >= v14 )
        {
          qfseek(v11, v15, 0);
          if ( qfread(v11, v27, 28) != 28 )
            goto LABEL_50;
          if ( !v28 )
          {
            v18 = v30;
            if ( v30 >= v15 + 28 )
            {
              v19 = v14 + v15;
              if ( v30 < v19 && v29 > 0x20 && v19 - v30 + 28 >= v29 )
                goto LABEL_30;
            }
          }
        }
        qfclose(v11);
        return 0xFFFFFFFFLL;
      }
    }
  }
  return 4294967294LL;
}

