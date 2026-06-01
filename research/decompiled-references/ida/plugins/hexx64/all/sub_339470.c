__int64 __fastcall sub_339470(_QWORD *a1, __int64 a2, _QWORD *a3, unsigned __int64 a4, int *a5, double a6)
{
  int v6; // eax
  char v9; // dl
  char *v12; // rdi
  char v13; // dl
  unsigned __int64 v14; // rax
  char v15; // al
  char v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  char v19; // al
  char v20; // al
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v24[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a5;
  v24[1] = __readfsqword(0x28u);
  v23 = 0;
  v24[0] = 0;
  if ( (unsigned int)(v6 - 12) > 1 )
    return 0;
  v9 = *((_BYTE *)a5 + 32);
  if ( v9 == 1 )
  {
    v22 = a4;
    v15 = sub_3393B0(&v23, a2, a3, a4, a5[10], a6);
    a4 = v22;
    if ( !v15 )
    {
LABEL_19:
      v6 = *a5;
      goto LABEL_20;
    }
LABEL_12:
    v16 = *((_BYTE *)a5 + 48);
    if ( v16 == 2 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a5 + 7) + 16LL);
      goto LABEL_17;
    }
    if ( v16 == 10 )
    {
      v17 = *((_QWORD *)a5 + 7);
      if ( *(_BYTE *)v17 == 6 )
      {
        v18 = *(_QWORD *)(v17 + 8);
        if ( !a3 || v18 < a3[16] )
        {
LABEL_17:
          if ( *a5 == 13 )
            v18 = -(__int64)v18;
          goto LABEL_29;
        }
      }
    }
    goto LABEL_19;
  }
  if ( v9 == 10 )
  {
    v12 = *((char **)a5 + 5);
    v13 = *v12;
    if ( *v12 != 5 )
    {
      if ( v6 != 12 )
        return 0;
      goto LABEL_7;
    }
    v23 = *(_QWORD *)(*((_QWORD *)v12 + 1) + 8LL);
    goto LABEL_12;
  }
LABEL_20:
  if ( v6 != 12 )
    return 0;
  v19 = *((_BYTE *)a5 + 32);
  if ( v19 == 2 )
  {
    v14 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 16LL);
    goto LABEL_25;
  }
  if ( v19 != 10 )
    return 0;
  v12 = *((char **)a5 + 5);
  v13 = *v12;
LABEL_7:
  if ( v13 != 6 )
    return 0;
  v14 = *((_QWORD *)v12 + 1);
  if ( a3 )
  {
    if ( v14 >= a3[16] )
      return 0;
  }
LABEL_25:
  v23 = v14;
  v20 = *((_BYTE *)a5 + 48);
  if ( v20 == 1 )
  {
    if ( (unsigned __int8)sub_3393B0(v24, a2, a3, a4, a5[14], a6) )
    {
      v18 = v24[0];
      goto LABEL_17;
    }
    return 0;
  }
  if ( v20 != 10 )
    return 0;
  v21 = *((_QWORD *)a5 + 7);
  if ( *(_BYTE *)v21 != 5 )
    return 0;
  v18 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL);
LABEL_29:
  *a1 = v23 + v18;
  return 1;
}

