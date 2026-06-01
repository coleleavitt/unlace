__int64 __fastcall sub_215470(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  int v5; // ecx
  _QWORD *v6; // rsi
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rdx
  char v15; // r14
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rsi
  int v25; // eax
  int v26; // r9d
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // [rsp+8h] [rbp-90h]
  char v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+10h] [rbp-88h]
  int v33; // [rsp+10h] [rbp-88h]
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
    v3 = *(__int64 **)(a2 + 8);
    v5 = *((_DWORD *)v3 + 4);
    if ( v5 < 0 || (v6 = *(_QWORD **)(a1 + 48), v8 = v5, (unsigned __int64)v5 >= v6[1]) )
    {
      if ( !under_debugger )
        sub_3835A0(51799);
    }
    else
    {
      v9 = *(_DWORD *)(*v6 + 4LL * v5);
      if ( v5 == v9 )
        return 0;
      if ( !*(_BYTE *)(a1 + 56) )
        goto LABEL_11;
      v10 = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD *)(*v3 + 432);
      v12 = v11 + 104 * v8;
      v13 = v11 + 104LL * v9;
      if ( !*(_BYTE *)(*(_QWORD *)(v10 + 1496) + 145LL) )
      {
        v14 = v3[1] + *(int *)(a2 + 4);
        if ( v14 > *(int *)(v13 + 88) )
        {
          if ( *(int *)(v12 + 88) < v14 )
          {
LABEL_10:
            *(_DWORD *)(v13 + 24) |= 0x400u;
            v3 = *(__int64 **)(a2 + 8);
            goto LABEL_11;
          }
          goto LABEL_24;
        }
LABEL_11:
        *((_DWORD *)v3 + 4) = v9;
        return 0;
      }
      v35 = *v3;
      v30 = *(_QWORD *)(v10 + 1496);
      v15 = sub_1C2AD0((_DWORD *)v12, v30, 0);
      v32 = v30;
      v16 = sub_1C2AD0((_DWORD *)v13, v30, 0);
      v3 = *(__int64 **)(a2 + 8);
      v31 = *(_BYTE *)(a1 + 56);
      if ( v16 == v15 )
      {
        if ( !v31 )
          goto LABEL_11;
        v23 = v3[1] + *(int *)(a2 + 4);
        if ( v23 <= *(int *)(v13 + 88) )
          goto LABEL_11;
        if ( v23 > *(int *)(v12 + 88) )
          goto LABEL_10;
        v10 = *(_QWORD *)(a1 + 8);
LABEL_24:
        v31 = 0;
LABEL_25:
        v24 = *(_DWORD **)(v10 + 1504);
        v38 = 0;
        v37 = 0;
        v39 = 0;
        v40 = 0;
        v33 = sub_1F4910(v12, v24, &v39, 2);
        v25 = sub_1F4910(v13, *(_DWORD **)(*(_QWORD *)(a1 + 8) + 1504LL), &v37, 2);
        sub_331510(v10, *(_QWORD *)(v13 + 16), 48, v25, v33, v26);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree();
        }
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree();
        }
        *(_DWORD *)(v13 + 24) |= 0x400u;
        v3 = *(__int64 **)(a2 + 8);
        if ( !v31 )
          goto LABEL_11;
        v21 = *(_DWORD *)(v13 + 88);
        goto LABEL_18;
      }
      v17 = *(int *)(v13 + 88);
      v18 = v3[1] + *(int *)(a2 + 4);
      v19 = *(_BYTE *)(a1 + 56) == 0;
      v20 = v32;
      v21 = *(_DWORD *)(v13 + 88);
      if ( v19 || v18 <= v17 )
        goto LABEL_19;
      v22 = *(int *)(v12 + 88);
      if ( (int)v22 > (int)v17 )
      {
        if ( v22 < v18 )
        {
          *(_DWORD *)(v13 + 24) |= 0x400u;
          v3 = *(__int64 **)(a2 + 8);
LABEL_18:
          v17 = v21;
          v18 = v3[1] + *(int *)(a2 + 4);
LABEL_19:
          v3[1] = v17 - v18;
          *(_DWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = v9;
          return 0;
        }
LABEL_37:
        v10 = *(_QWORD *)(a1 + 8);
        goto LABEL_25;
      }
      v34 = v35;
      v36 = v20;
      v27 = sub_2079D0(a2, *(int ***)(a1 + 32));
      if ( !(unsigned __int8)sub_1C2AD0((_DWORD *)v12, v36, 0) )
      {
        v28 = *(int *)(v12 + 88);
        v29 = *(int *)(a2 + 4);
        if ( (int)v28 >= v27 )
        {
          *(_DWORD *)(a2 + 4) = v27;
          sub_120220((char *)a2, *(_QWORD *)(v34 + 1504), 9, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), v29);
          return 0;
        }
        if ( v28 >= *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + v29 )
          goto LABEL_37;
        goto LABEL_34;
      }
      if ( (*(_BYTE *)(v12 + 25) & 4) != 0 )
      {
        if ( *(int *)(v12 + 88) >= *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + *(int *)(a2 + 4) )
          goto LABEL_37;
LABEL_34:
        *(_DWORD *)(v13 + 24) |= 0x400u;
        v21 = *(_DWORD *)(v13 + 88);
        v3 = *(__int64 **)(a2 + 8);
        goto LABEL_18;
      }
      if ( !under_debugger )
        sub_3835A0(52522);
    }
    BUG();
  }
  return 0;
}

