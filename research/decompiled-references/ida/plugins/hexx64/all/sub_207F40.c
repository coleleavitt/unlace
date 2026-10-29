__int64 __fastcall sub_207F40(__int64 a1, double a2, __m128 a3)
{
  unsigned int v3; // edx
  __int64 v4; // rax
  _QWORD *v6; // r12
  __int64 v8; // rdi
  __m128i **v9; // rsi
  __m128i *v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  int *v15; // rdx
  unsigned int v16; // esi
  int v17; // eax
  int v18; // r15d
  __int64 *v19; // rdx
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  _QWORD *v26; // r15
  _QWORD *v27; // [rsp+8h] [rbp-98h]
  int v28; // [rsp+10h] [rbp-90h] BYREF
  int **v29; // [rsp+18h] [rbp-88h]
  __int64 v30; // [rsp+20h] [rbp-80h] BYREF
  char v31; // [rsp+28h] [rbp-78h]
  int v32; // [rsp+2Ch] [rbp-74h]
  __int64 v33; // [rsp+30h] [rbp-70h] BYREF
  __int128 v34; // [rsp+38h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-58h]
  char v36; // [rsp+50h] [rbp-50h]
  int v37; // [rsp+58h] [rbp-48h]
  int v38; // [rsp+5Ch] [rbp-44h]
  char v39; // [rsp+60h] [rbp-40h]
  unsigned __int64 v40; // [rsp+68h] [rbp-38h]

  v3 = 0;
  v40 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v4 + 2) & 4) != 0 )
    return v3;
  v6 = *(_QWORD **)(v4 + 1504);
  sub_105060(*(_QWORD **)(a1 + 72));
  sub_105060(*(_QWORD **)(a1 + 80));
  **(_DWORD **)(a1 + 56) |= 0x200000u;
  if ( (unsigned int)sub_207820(a1, a2, a3) == -20 )
    return (unsigned int)-20;
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(__m128i ***)(a1 + 72);
  if ( *(_BYTE *)(v8 + 320) )
    return sub_10A8C0((_DWORD *)v8, v9, *(_QWORD *)(a1 + 80), a2);
  if ( *(_BYTE *)(v6[12] + 145LL) )
    return sub_10A8C0((_DWORD *)v8, v9, *(_QWORD *)(a1 + 80), a2);
  v10 = *v9;
  v11 = (_QWORD *)(*v9)->m128i_i64[0];
  if ( !v11 )
    return sub_10A8C0((_DWORD *)v8, v9, *(_QWORD *)(a1 + 80), a2);
  if ( !v10->m128i_i64[1] )
    return sub_10A8C0((_DWORD *)v8, v9, *(_QWORD *)(a1 + 80), a2);
  v27 = (_QWORD *)v11[1];
  if ( v27 == v11 )
    return sub_10A8C0((_DWORD *)v8, v9, *(_QWORD *)(a1 + 80), a2);
  while ( 1 )
  {
LABEL_9:
    if ( *((_BYTE *)v27 + 56) != 1 || !v27[4] )
      goto LABEL_20;
    v12 = v27[6];
    sub_1C69A0((__int64)&v28, v6, v12, *((_DWORD *)v27 + 16), a2);
    v14 = v28;
    v15 = &v28;
    if ( v28 == 2 )
    {
      v15 = *v29;
      v14 = **v29;
    }
    if ( v14 == 3 )
    {
      v16 = v15[2];
      if ( HIWORD(v16) )
        break;
    }
LABEL_19:
    cleanup_argloc();
LABEL_20:
    if ( (*v27 & 2) != 0 )
    {
LABEL_23:
      if ( (_QWORD *)v10->m128i_i64[0] == v27 )
        goto LABEL_24;
    }
    else
    {
      v22 = (_QWORD *)v27[2];
      if ( (*(_BYTE *)v22 & 2) == 0 )
      {
        do
        {
          v27 = v22;
          v22 = (_QWORD *)v22[1];
        }
        while ( (*(_BYTE *)v22 & 2) == 0 );
        goto LABEL_23;
      }
      v23 = (_QWORD *)(*v27 & 0xFFFFFFFFFFFFFFFCLL);
      v24 = *v23;
      if ( (*v23 & 2) == 0 )
      {
        while ( v27 == (_QWORD *)v23[2] )
        {
          v27 = v23;
          v25 = v24 & 0xFFFFFFFFFFFFFFFCLL;
          v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v24 & 2) != 0 )
          {
            v27 = (_QWORD *)v25;
            if ( v10->m128i_i64[0] != v25 )
              goto LABEL_9;
            goto LABEL_24;
          }
          v23 = (_QWORD *)v25;
        }
      }
      v27 = v23;
      if ( (_QWORD *)v10->m128i_i64[0] == v23 )
      {
LABEL_24:
        v8 = *(_QWORD *)(a1 + 56);
        v9 = *(__m128i ***)(a1 + 72);
        return sub_10A8C0((_DWORD *)v8, v9, *(_QWORD *)(a1 + 80), a2);
      }
    }
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, int *, __int64, _QWORD *))(*v6 + 168LL))(
          v6,
          (unsigned __int16)v16,
          v15,
          v13,
          v27 + 3);
  if ( v17 >= (int)v12 )
  {
    if ( !under_debugger )
      sub_383060(0xCD37u, a2);
    BUG();
  }
  v18 = *((_DWORD *)v27 + 16) + v12 - v17;
  v30 = v17;
  v19 = *(__int64 **)(a1 + 80);
  v31 = 1;
  v20 = *(_QWORD **)(a1 + 72);
  v32 = v18;
  if ( (unsigned int)sub_202CA0(a1, v20, v19, v10, (unsigned __int64)(v27 + 3), (__int64)&v30, a2, 0) )
  {
    a2 = 0.0;
    v33 = 0;
    v35 = v30;
    v38 = -1;
    v36 = v31;
    v39 = 1;
    v37 = v32;
    v34 = 0;
    v26 = sub_1041A0((unsigned __int64 *)v10, (__int64)&v33);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    v27 = v26;
    goto LABEL_19;
  }
  v21 = *(_QWORD **)(a1 + 56);
  if ( (*(_BYTE *)(v21[187] + 604LL) & 0x10) != 0 )
  {
    sub_1F08B0(v21, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
    goto LABEL_19;
  }
  cleanup_argloc();
  return (unsigned int)-20;
}

