__int64 __fastcall sub_1001D0(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v5; // r12
  int v6; // ebp
  __int64 v7; // rbx
  int v8; // r14d
  __int64 v9; // rax
  _QWORD *v10; // rcx
  char *v11; // rsi
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // r13
  __int64 v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // rax
  _QWORD *v20; // r11
  __int64 v21; // r13
  _QWORD *v22; // r12
  unsigned int v23; // ebx
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v27; // rdi
  _QWORD *v28; // rdi
  _QWORD *v29; // r13
  _QWORD *v30; // [rsp+0h] [rbp-98h]
  unsigned int v31; // [rsp+0h] [rbp-98h]
  __int64 v32; // [rsp+8h] [rbp-90h]
  _QWORD *v33; // [rsp+10h] [rbp-88h]
  __int64 v34; // [rsp+18h] [rbp-80h]
  __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h]
  __int64 v39; // [rsp+40h] [rbp-58h]
  char *v40; // [rsp+48h] [rbp-50h]
  unsigned int v41; // [rsp+48h] [rbp-50h]
  int v42; // [rsp+50h] [rbp-48h]

  v5 = a2;
  v6 = a3;
  v7 = a1;
  v8 = *(_DWORD *)(a1 + 12);
  if ( v8 <= 0 || a4 + a3 <= v8 )
  {
    if ( a4 <= 0 )
    {
      if ( !a4 )
      {
        v27 = *(_QWORD *)(a1 + 16);
        if ( v27 )
        {
          memcpy((void *)(v27 + 8), a2, a3);
          return 0;
        }
      }
    }
    else if ( *(_QWORD *)(a1 + 24) > a4 )
    {
      sub_CD9B0(a1, a4);
    }
    if ( v6 <= 0 )
      return 0;
    v9 = *(_QWORD *)(v7 + 24);
    while ( 1 )
    {
      v10 = *(_QWORD **)(v7 + 32);
      v12 = v9 % *(int *)(v7 + 8);
      v13 = *(_DWORD *)(v7 + 8) - v12;
      v14 = v12;
      if ( v13 > v6 )
        v13 = v6;
      if ( !v12 )
      {
        v30 = *(_QWORD **)(v7 + 32);
        v15 = (_QWORD *)sub_FFAA0((unsigned int)(*(_DWORD *)(v7 + 8) + 8), *(int *)(v7 + 8));
        if ( !v15 )
          return 3082;
        *v15 = 0;
        if ( v30 )
          *v30 = v15;
        else
          *(_QWORD *)(v7 + 16) = v15;
        *(_QWORD *)(v7 + 32) = v15;
        v10 = v15;
      }
      v11 = v5;
      v6 -= v13;
      v5 += v13;
      memcpy((char *)v10 + v14 + 8, v11, v13);
      v9 = v13 + *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 24) = v9;
      if ( v6 <= 0 )
        return 0;
    }
  }
  v16 = *(_QWORD **)(a1 + 16);
  v34 = *(_QWORD *)a1;
  v35 = *(_QWORD *)(a1 + 32);
  v32 = *(_QWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 72);
  v31 = *(_DWORD *)(a1 + 8);
  v36 = *(_QWORD *)(a1 + 40);
  v33 = v16;
  v42 = *(_DWORD *)(a1 + 56);
  v39 = v17;
  v37 = *(_QWORD *)(a1 + 48);
  v38 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(v38 + 40))(
          a1,
          v17,
          a1,
          v42 & 0x1087F7F,
          0);
  if ( v18 )
  {
LABEL_25:
    if ( *(_QWORD *)v7 )
    {
      v41 = v18;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v18 = v41;
    }
    *(_DWORD *)(v7 + 12) = v8;
    *(_QWORD *)v7 = v34;
    *(_DWORD *)(v7 + 8) = v31;
    *(_QWORD *)(v7 + 16) = v33;
    *(_QWORD *)(v7 + 24) = v32;
    *(_QWORD *)(v7 + 32) = v35;
    *(_QWORD *)(v7 + 40) = v36;
    *(_QWORD *)(v7 + 48) = v37;
    *(_DWORD *)(v7 + 56) = v42;
    *(_QWORD *)(v7 + 64) = v38;
    *(_QWORD *)(v7 + 72) = v39;
    return v18;
  }
  else
  {
    if ( v16 )
    {
      v19 = (int)v31;
      v20 = v16;
      v40 = v5;
      v21 = 0;
      v22 = v20;
      v23 = v31;
      do
      {
        v24 = (__int64)(v22 + 1);
        if ( v32 < v21 + v19 )
          v23 = v32 - v21;
        v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 24LL))(a1, v24, v23, v21);
        if ( v25 )
        {
          v18 = v25;
          v7 = a1;
          goto LABEL_25;
        }
        v22 = (_QWORD *)*v22;
        v19 = (int)v23;
        v21 += (int)v23;
      }
      while ( v22 );
      v7 = a1;
      v28 = v33;
      v5 = v40;
      do
      {
        v29 = (_QWORD *)*v28;
        sub_C91C0((__int64)v28, v24);
        v28 = v29;
      }
      while ( v29 );
    }
    return (*(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64))(*(_QWORD *)v7 + 24LL))(
             v7,
             v5,
             (unsigned int)v6,
             a4);
  }
}
