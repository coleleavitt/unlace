unsigned __int64 __fastcall sub_3F46C0(_QWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rcx
  int *v9; // rax
  int v10; // r8d
  unsigned __int8 *v11; // rax
  unsigned int *v12; // rbx
  int v13; // edx
  unsigned int *v14; // r15
  unsigned int v15; // ecx
  __int64 v17; // rax
  int v18; // [rsp+8h] [rbp-B0h]
  int v19; // [rsp+10h] [rbp-A8h]
  int v20; // [rsp+1Ch] [rbp-9Ch]
  _DWORD v21[3]; // [rsp+28h] [rbp-90h]
  _DWORD v22[3]; // [rsp+34h] [rbp-84h] BYREF
  unsigned __int8 v23[4]; // [rsp+40h] [rbp-78h] BYREF
  int v24; // [rsp+44h] [rbp-74h]
  int v25; // [rsp+48h] [rbp-70h]
  unsigned __int8 v26[16]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v27[16]; // [rsp+60h] [rbp-58h] BYREF
  char v28; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v6 = 0;
  v29 = __readfsqword(0x28u);
  v7 = 0;
  v21[1] = a4;
  v21[2] = a5;
  v21[0] = a3;
  do
  {
    if ( v21[v7] != -1 && ((dword_411780[v7] & a2) != 0 || (dword_4117A0[v7] & a2) != 0) )
    {
      v8 = v6++;
      v22[v8] = v7;
    }
    ++v7;
  }
  while ( v7 != 3 );
  if ( v6 <= 0 )
  {
LABEL_25:
    v10 = -1;
  }
  else
  {
    v9 = v22;
    while ( 1 )
    {
      v10 = *v9;
      if ( (unsigned int)*v9 <= 7 && (dword_4117A0[v10] & a2) != 0 )
        break;
      if ( ++v9 == &v22[v6] )
        goto LABEL_25;
    }
  }
  v11 = v23;
  do
  {
    *((_DWORD *)v11 + 1) = -1;
    v11 += 16;
    *((_WORD *)v11 - 8) = 0;
    *((_WORD *)v11 - 7) = 0;
    *((_QWORD *)v11 - 1) = 0;
  }
  while ( v11 != (unsigned __int8 *)&v28 );
  if ( v10 == -1 )
  {
    if ( a6 )
    {
      v17 = a1[104];
      v23[0] = 1;
      v24 = 1;
      v25 = *(_DWORD *)(v17 + 352);
    }
  }
  else
  {
    v19 = v10;
    sub_3EA8C0((__int64)a1, (__int64)v23, v21[v10], v10);
    v10 = v19;
  }
  if ( v6 > 0 )
  {
    v12 = v22;
    v13 = 1;
    v14 = &v22[v6];
    do
    {
      while ( 1 )
      {
        v15 = *v12;
        if ( v10 != *v12 && v15 <= 7 && (dword_411780[v15] & a2) != 0 && v13 <= 2 )
          break;
        if ( ++v12 == v14 )
          goto LABEL_23;
      }
      v20 = v10;
      v18 = v13 + 1;
      sub_3EA8C0((__int64)a1, (__int64)&v23[16 * v13], v21[v15], v15);
      ++v12;
      v13 = v18;
      v10 = v20;
    }
    while ( v12 != v14 );
  }
LABEL_23:
  sub_3EB6F0(a1, 62, v26, v27, v23);
  sub_175B00((_QWORD *)(a1[1] + 1000LL), a1 + 5);
  sub_118BA0((__int64)v27);
  sub_118BA0((__int64)v26);
  sub_118BA0((__int64)v23);
  return v29 - __readfsqword(0x28u);
}

