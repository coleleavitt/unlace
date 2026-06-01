__int64 __fastcall sub_2150B0(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 *v4; // rax
  int v6; // ecx
  _QWORD *v7; // rsi
  __int64 v9; // rdx
  int v10; // r12d
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rdx
  char v16; // r14
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rsi
  __int64 v26; // rax
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // [rsp+8h] [rbp-90h]
  char v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+10h] [rbp-88h]
  __int64 v33; // [rsp+10h] [rbp-88h]
  __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  __int64 v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+20h] [rbp-78h] BYREF
  __int128 v38; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+40h] [rbp-58h] BYREF
  __int128 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 9 )
  {
    v4 = *(__int64 **)(a2 + 8);
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 < 0 || (v7 = *(_QWORD **)(a1 + 48), v9 = v6, (unsigned __int64)v6 >= v7[1]) )
    {
      if ( !under_debugger )
        sub_383060(0xCA57u, *(double *)a3.m128i_i64);
    }
    else
    {
      v10 = *(_DWORD *)(*v7 + 4LL * v6);
      if ( v6 == v10 )
        return 0;
      if ( !*(_BYTE *)(a1 + 56) )
        goto LABEL_11;
      v11 = *(_QWORD **)(a1 + 8);
      v12 = *(_QWORD *)(*v4 + 432);
      v13 = v12 + 104 * v9;
      v14 = v12 + 104LL * v10;
      if ( !*(_BYTE *)(v11[187] + 145LL) )
      {
        v15 = v4[1] + *(int *)(a2 + 4);
        if ( v15 > *(int *)(v14 + 88) )
        {
          if ( *(int *)(v13 + 88) < v15 )
          {
LABEL_10:
            *(_DWORD *)(v14 + 24) |= 0x400u;
            v4 = *(__int64 **)(a2 + 8);
            goto LABEL_11;
          }
          goto LABEL_24;
        }
LABEL_11:
        *((_DWORD *)v4 + 4) = v10;
        return 0;
      }
      v35 = *v4;
      v30 = v11[187];
      v16 = sub_1C3090((_DWORD *)v13, v30, 0);
      v32 = v30;
      v17 = sub_1C3090((_DWORD *)v14, v30, 0);
      v4 = *(__int64 **)(a2 + 8);
      v31 = *(_BYTE *)(a1 + 56);
      if ( v17 == v16 )
      {
        if ( !v31 )
          goto LABEL_11;
        v24 = v4[1] + *(int *)(a2 + 4);
        if ( v24 <= *(int *)(v14 + 88) )
          goto LABEL_11;
        if ( v24 > *(int *)(v13 + 88) )
          goto LABEL_10;
        v11 = *(_QWORD **)(a1 + 8);
LABEL_24:
        v31 = 0;
LABEL_25:
        v25 = (_DWORD *)v11[188];
        v38 = 0;
        v37 = 0;
        v39 = 0;
        v40 = 0;
        v33 = sub_1F4550(v13, v25, &v39, 2);
        v26 = sub_1F4550(v14, *(_DWORD **)(*(_QWORD *)(a1 + 8) + 1504LL), &v37, 2);
        sub_3311F0(v11, *(_QWORD *)(v14 + 16), 0x30u, v26, v33);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree(v39);
        }
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
        *(_DWORD *)(v14 + 24) |= 0x400u;
        v4 = *(__int64 **)(a2 + 8);
        if ( !v31 )
          goto LABEL_11;
        v22 = *(_DWORD *)(v14 + 88);
        goto LABEL_18;
      }
      v18 = *(int *)(v14 + 88);
      v19 = v4[1] + *(int *)(a2 + 4);
      v20 = *(_BYTE *)(a1 + 56) == 0;
      v21 = v32;
      v22 = *(_DWORD *)(v14 + 88);
      if ( v20 || v19 <= v18 )
        goto LABEL_19;
      v23 = *(int *)(v13 + 88);
      if ( (int)v23 > (int)v18 )
      {
        if ( v23 < v19 )
        {
          *(_DWORD *)(v14 + 24) |= 0x400u;
          v4 = *(__int64 **)(a2 + 8);
LABEL_18:
          v18 = v22;
          v19 = v4[1] + *(int *)(a2 + 4);
LABEL_19:
          v4[1] = v18 - v19;
          *(_DWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = v10;
          return 0;
        }
LABEL_37:
        v11 = *(_QWORD **)(a1 + 8);
        goto LABEL_25;
      }
      v34 = v35;
      v36 = v21;
      v27 = sub_207610(a2, *(int ***)(a1 + 32));
      if ( !(unsigned __int8)sub_1C3090((_DWORD *)v13, v36, 0) )
      {
        v28 = *(int *)(v13 + 88);
        v29 = *(int *)(a2 + 4);
        if ( (int)v28 >= v27 )
        {
          *(_DWORD *)(a2 + 4) = v27;
          sub_1207E0(
            (char *)a2,
            *(unsigned __int64 **)(v34 + 1504),
            9,
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
            v29,
            a3);
          return 0;
        }
        if ( v28 >= *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + v29 )
          goto LABEL_37;
        goto LABEL_34;
      }
      if ( (*(_BYTE *)(v13 + 25) & 4) != 0 )
      {
        if ( *(int *)(v13 + 88) >= *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + *(int *)(a2 + 4) )
          goto LABEL_37;
LABEL_34:
        *(_DWORD *)(v14 + 24) |= 0x400u;
        v22 = *(_DWORD *)(v14 + 88);
        v4 = *(__int64 **)(a2 + 8);
        goto LABEL_18;
      }
      if ( !under_debugger )
        sub_383060(0xCD2Au, *(double *)a3.m128i_i64);
    }
    BUG();
  }
  return 0;
}

