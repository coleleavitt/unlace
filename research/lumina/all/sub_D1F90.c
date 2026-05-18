__int64 __fastcall sub_D1F90(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v17; // eax
  unsigned __int64 v18; // rbp
  char *v19; // rbp
  int *v20; // rsi
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdi
  unsigned __int8 *v23; // r9
  unsigned __int8 *v24; // rax
  __int64 v25; // rcx
  unsigned __int8 *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // eax
  int *v29; // rsi
  _QWORD *v30; // r10
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned __int8 *i; // rcx
  unsigned int v34; // eax
  unsigned int v35; // [rsp+Ch] [rbp-4Ch]
  int v36; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v37; // [rsp+18h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v6 = sub_C2AB0(a1, a2, (unsigned int *)&v36);
  v7 = v6[2];
  if ( v7 )
  {
    if ( a3 )
    {
      v6[2] = a3;
      v6[3] = (__int64)a2;
    }
    else
    {
      v11 = (__int64 *)v6[1];
      v12 = (unsigned int)v36;
      v13 = *v6;
      if ( v11 )
        *v11 = v13;
      else
        *(_QWORD *)(a1 + 8) = v13;
      if ( *v6 )
      {
        v13 = v6[1];
        *(_QWORD *)(*v6 + 8) = v13;
      }
      v14 = *(_QWORD *)(a1 + 16);
      if ( v14 )
      {
        v15 = v14 + 16 * v12;
        if ( v6 == *(__int64 **)(v15 + 8) )
          *(_QWORD *)(v15 + 8) = *v6;
        --*(_DWORD *)v15;
      }
      sub_C91C0((__int64)v6, v13);
      if ( (*(_DWORD *)(a1 + 4))-- == 1 )
        sub_C9C70(a1, v13);
    }
    return v7;
  }
  if ( !a3 )
    return v7;
  v9 = sub_D1E10(32, (__int64)a2);
  v10 = (_QWORD *)v9;
  if ( !v9 )
    return a3;
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 16) = a3;
  v17 = *(_DWORD *)(a1 + 4) + 1;
  *(_DWORD *)(a1 + 4) = v17;
  if ( v17 > 9 && v17 > 2 * *(_DWORD *)a1 )
  {
    v18 = 2 * v17;
    if ( v18 > 0x40 )
      LODWORD(v18) = 64;
    if ( *(_DWORD *)a1 != (_DWORD)v18 )
    {
      if ( qword_2424C0 )
        qword_2424C0();
      v19 = (char *)sub_D1E10(16LL * (unsigned int)v18, (__int64)a2);
      if ( qword_2424C8 )
        qword_2424C8();
      v20 = *(int **)(a1 + 16);
      if ( !v19 )
        goto LABEL_39;
      sub_C91C0(*(_QWORD *)(a1 + 16), (__int64)v20);
      *(_QWORD *)(a1 + 16) = v19;
      v21 = (unsigned __int64)(*((int (__fastcall **)(char *))&xmmword_2414B0 + 1))(v19) >> 4;
      *(_DWORD *)a1 = v21;
      v35 = v21;
      memset(v19, 0, 16LL * (unsigned int)v21);
      v22 = *(_QWORD **)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0;
      if ( v22 )
      {
        v23 = byte_1BF000;
        do
        {
          v24 = (unsigned __int8 *)v22[3];
          v25 = *v24;
          v26 = v24 + 1;
          if ( (_BYTE)v25 )
          {
            v27 = 0;
            do
            {
              ++v26;
              v28 = v23[v25] + v27;
              v25 = *(v26 - 1);
              v27 = -1640531535 * v28;
            }
            while ( (_BYTE)v25 );
            v29 = (int *)&v19[16 * (v27 % v35)];
          }
          else
          {
            v29 = (int *)v19;
          }
          sub_CB870((_QWORD *)(a1 + 8), v29, v22);
          v22 = v30;
        }
        while ( v30 );
      }
      v31 = *a2;
      v32 = 0;
      for ( i = a2 + 1; (_BYTE)v31; v32 = -1640531535 * v34 )
      {
        ++i;
        v34 = byte_1BF000[v31] + v32;
        v31 = *(i - 1);
      }
      v36 = v32 % *(_DWORD *)a1;
    }
  }
  v20 = *(int **)(a1 + 16);
LABEL_39:
  if ( v20 )
    v20 += 4 * (unsigned int)v36;
  sub_CB870((_QWORD *)(a1 + 8), v20, v10);
  return v7;
}
