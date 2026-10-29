__int64 __fastcall sub_202B80(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  _QWORD *v4; // r12
  unsigned __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdi
  __m128i **v10; // rsi
  __m128i *v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  int *v16; // rdx
  unsigned int v17; // esi
  int v18; // eax
  int v19; // r15d
  __int64 *v20; // rdx
  _QWORD *v21; // rsi
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdi
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // r15
  __int64 v29; // [rsp-8h] [rbp-A8h]
  _QWORD *v30; // [rsp+8h] [rbp-98h]
  int v31; // [rsp+10h] [rbp-90h] BYREF
  int **v32; // [rsp+18h] [rbp-88h]
  __int64 v33; // [rsp+20h] [rbp-80h] BYREF
  char v34; // [rsp+28h] [rbp-78h]
  int v35; // [rsp+2Ch] [rbp-74h]
  __int64 v36; // [rsp+30h] [rbp-70h] BYREF
  __int128 v37; // [rsp+38h] [rbp-68h]
  __int64 v38; // [rsp+48h] [rbp-58h]
  char v39; // [rsp+50h] [rbp-50h]
  int v40; // [rsp+58h] [rbp-48h]
  int v41; // [rsp+5Ch] [rbp-44h]
  char v42; // [rsp+60h] [rbp-40h]
  unsigned __int64 v43; // [rsp+68h] [rbp-38h]

  v1 = 0;
  v43 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v2 + 2) & 4) != 0 )
    return v1;
  v4 = *(_QWORD **)(v2 + 1504);
  sub_1004A0(*(_QWORD **)(a1 + 72));
  sub_1004A0(*(_QWORD **)(a1 + 80));
  **(_DWORD **)(a1 + 56) |= 0x200000u;
  if ( (unsigned int)sub_202460(a1) == -20 )
    return (unsigned int)-20;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = *(__m128i ***)(a1 + 72);
  if ( *(_BYTE *)(v9 + 320) )
    return sub_105D00((_DWORD *)v9, v10, *(_QWORD *)(a1 + 80), v6, v7, v8);
  if ( *(_BYTE *)(v4[12] + 145LL) )
    return sub_105D00((_DWORD *)v9, v10, *(_QWORD *)(a1 + 80), v6, v7, v8);
  v11 = *v10;
  v12 = (*v10)->m128i_i64[0];
  if ( !v12 )
    return sub_105D00((_DWORD *)v9, v10, *(_QWORD *)(a1 + 80), v6, v7, v8);
  if ( !v11->m128i_i64[1] )
    return sub_105D00((_DWORD *)v9, v10, *(_QWORD *)(a1 + 80), v6, v7, v8);
  v6 = *(_QWORD *)(v12 + 8);
  v30 = (_QWORD *)v6;
  if ( v6 == v12 )
    return sub_105D00((_DWORD *)v9, v10, *(_QWORD *)(a1 + 80), v6, v7, v8);
  while ( 1 )
  {
LABEL_9:
    v7 = (_DWORD)v30 + 24;
    if ( *((_BYTE *)v30 + 56) != 1 || !v30[4] )
      goto LABEL_20;
    v13 = v30[6];
    sub_1C1B00((__int64)&v31, v4, v13, *((_DWORD *)v30 + 16));
    v15 = v31;
    v16 = &v31;
    if ( v31 == 2 )
    {
      v16 = *v32;
      v15 = **v32;
    }
    if ( v15 == 3 )
    {
      v17 = v16[2];
      if ( HIWORD(v17) )
        break;
    }
LABEL_19:
    cleanup_argloc();
LABEL_20:
    v6 = (unsigned __int64)v30;
    if ( (*v30 & 2) != 0 )
    {
LABEL_23:
      if ( (_QWORD *)v11->m128i_i64[0] == v30 )
        goto LABEL_24;
    }
    else
    {
      v25 = (_QWORD *)v30[2];
      if ( (*(_BYTE *)v25 & 2) == 0 )
      {
        do
        {
          v30 = v25;
          v25 = (_QWORD *)v25[1];
        }
        while ( (*(_BYTE *)v25 & 2) == 0 );
        goto LABEL_23;
      }
      v26 = (_QWORD *)(*v30 & 0xFFFFFFFFFFFFFFFCLL);
      v27 = *v26;
      if ( (*v26 & 2) == 0 )
      {
        while ( v30 == (_QWORD *)v26[2] )
        {
          v30 = v26;
          v6 = v27 & 0xFFFFFFFFFFFFFFFCLL;
          v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v27 & 2) != 0 )
          {
            v30 = (_QWORD *)v6;
            if ( v11->m128i_i64[0] != v6 )
              goto LABEL_9;
            goto LABEL_24;
          }
          v26 = (_QWORD *)v6;
        }
      }
      v30 = v26;
      if ( (_QWORD *)v11->m128i_i64[0] == v26 )
      {
LABEL_24:
        v9 = *(_QWORD *)(a1 + 56);
        v10 = *(__m128i ***)(a1 + 72);
        return sub_105D00((_DWORD *)v9, v10, *(_QWORD *)(a1 + 80), v6, v7, v8);
      }
    }
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, int *, __int64, _QWORD *))(*v4 + 168LL))(
          v4,
          (unsigned __int16)v17,
          v16,
          v14,
          v30 + 3);
  if ( v18 >= (int)v13 )
  {
    if ( !under_debugger )
      sub_37CFE0(52535);
    BUG();
  }
  v19 = *((_DWORD *)v30 + 16) + v13 - v18;
  v33 = v18;
  v20 = *(__int64 **)(a1 + 80);
  v34 = 1;
  v21 = *(_QWORD **)(a1 + 72);
  v35 = v19;
  if ( (unsigned int)sub_1FD8E0(a1, v21, v20, v11, (unsigned __int64)(v30 + 3), (__int64)&v33, 0) )
  {
    v36 = 0;
    v38 = v33;
    v41 = -1;
    v39 = v34;
    v42 = 1;
    v40 = v35;
    v37 = 0;
    v28 = sub_FF5E0((unsigned __int64 *)v11, (__int64)&v36);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree();
    }
    v30 = v28;
    goto LABEL_19;
  }
  v24 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(*(_QWORD *)(v24 + 1496) + 604LL) & 0x10) != 0 )
  {
    sub_1EB4F0(v24, -1, 20, v29, v22, v23);
    goto LABEL_19;
  }
  cleanup_argloc();
  return (unsigned int)-20;
}

