__int64 __fastcall sub_14DA40(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  bool v4; // zf
  unsigned int v8; // ebx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  __int128 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  char v20; // al
  __int128 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  char v25; // al
  char v26; // al
  __int64 v27; // rcx
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  char v35; // al
  __int64 v36; // [rsp+8h] [rbp-B8h]
  __int64 v37; // [rsp+8h] [rbp-B8h]
  __int64 v38; // [rsp+10h] [rbp-B0h]
  __int64 v39; // [rsp+18h] [rbp-A8h]
  __int64 v40; // [rsp+18h] [rbp-A8h]
  __int64 v41; // [rsp+18h] [rbp-A8h]
  __int64 v42; // [rsp+20h] [rbp-A0h]
  __int64 v43; // [rsp+28h] [rbp-98h]
  __int64 v44; // [rsp+28h] [rbp-98h]
  __int64 v45; // [rsp+28h] [rbp-98h]
  __int64 v46; // [rsp+30h] [rbp-90h]
  __int64 v48; // [rsp+40h] [rbp-80h] BYREF
  __int64 v49; // [rsp+48h] [rbp-78h] BYREF
  _QWORD v50[2]; // [rsp+50h] [rbp-70h] BYREF
  _BYTE v51[16]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v52[10]; // [rsp+70h] [rbp-50h] BYREF

  v52[3] = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v4 = *(_BYTE *)(a1 + 32) == 4;
  v50[1] = 0;
  v50[0] = 0xFFFFFFFF00000000LL;
  if ( v4 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( *(_DWORD *)v10 != 21 )
      goto LABEL_4;
    v46 = v10 + 48;
    if ( sub_11F4A0((unsigned __int8 *)(v10 + 48), a1 + 48, 0) )
    {
      v46 = v10 + 32;
    }
    else if ( !sub_11F4A0((unsigned __int8 *)(v10 + 32), a1 + 48, 0) )
    {
      goto LABEL_4;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 48) != 14
      || !sub_11F4A0(*(unsigned __int8 **)(a1 + 56), *(_QWORD *)(a1 + 56) + 16LL, 0)
      || (*(_BYTE *)(a1 + 36) & 1) != 0 )
    {
      goto LABEL_4;
    }
    v42 = *(_QWORD *)(a1 + 56);
    sub_11D380((__int64)v51, (unsigned __int8 *)(a1 + 32));
    sub_11D380((__int64)v52, (unsigned __int8 *)(a1 + 32));
    if ( !(unsigned __int8)sub_120BF0((unsigned __int64)v51, a2, *(_DWORD *)(a1 + 36) / 2) )
      goto LABEL_21;
    if ( !(unsigned __int8)sub_121190((unsigned __int64)v52, a2, *(_DWORD *)(a1 + 36) / 2, 0) )
      goto LABEL_21;
    *((_QWORD *)&v17 + 1) = v51;
    *(_QWORD *)&v17 = a3;
    v48 = a4;
    v18 = sub_122D80(v17, (__int64)&v48, 0);
    v19 = v18;
    if ( !v18 )
      goto LABEL_21;
    if ( *(_DWORD *)v18 != 21 )
      goto LABEL_21;
    if ( v48 != a4 )
    {
      v43 = v18;
      v20 = sub_11F4A0((unsigned __int8 *)(v18 + 64), (__int64)v51, 0);
      v19 = v43;
      if ( !v20 )
        goto LABEL_21;
    }
    *((_QWORD *)&v21 + 1) = v52;
    *(_QWORD *)&v21 = a3;
    v44 = v19;
    v49 = a4;
    v22 = sub_122D80(v21, (__int64)&v49, 0);
    v23 = v44;
    v24 = v22;
    if ( !v22 )
      goto LABEL_21;
    if ( *(_DWORD *)v22 != 21 )
      goto LABEL_21;
    if ( v49 != a4 )
    {
      v39 = v44;
      v45 = v22;
      v25 = sub_11F4A0((unsigned __int8 *)(v22 + 64), (__int64)v52, 0);
      v24 = v45;
      v23 = v39;
      if ( !v25 )
        goto LABEL_21;
    }
    v36 = v24;
    v40 = v23;
    v38 = v23 + 48;
    v26 = sub_11F4A0((unsigned __int8 *)(v23 + 48), v42, 0);
    v27 = v36;
    if ( v26 )
    {
      v38 = v40 + 32;
    }
    else
    {
      v35 = sub_11F4A0((unsigned __int8 *)(v40 + 32), v42, 0);
      v27 = v36;
      if ( !v35 )
      {
LABEL_21:
        sub_1166E0((__int64)v52);
        sub_1166E0((__int64)v51);
        goto LABEL_4;
      }
    }
    v37 = v27;
    v41 = v27 + 48;
    if ( sub_11F4A0((unsigned __int8 *)(v27 + 48), v42, 0) )
    {
      v41 = v37 + 32;
    }
    else if ( !sub_11F4A0((unsigned __int8 *)(v37 + 32), v42, 0) )
    {
      goto LABEL_21;
    }
    if ( v48 == a4 && a4 == v49 )
    {
      if ( !(unsigned __int8)sub_126870(a3[4].m128i_i64[0], v38, v41, (__int64)v50, 1, v28) )
        goto LABEL_21;
    }
    else
    {
      if ( !(unsigned __int8)sub_12A500(a3, v48, v38, v49, v41, 0) )
        goto LABEL_21;
      sub_AAE60((__int64)a3, a1, (__int64)v50, v48, v38, v49, v41, 0);
      if ( v49 && sub_11BB80(v48, *(_QWORD *)(v49 + 8), 0) )
        v29 = v49;
      else
        v29 = v48;
      if ( (unsigned __int8)sub_A35F0((__int64)a3, (__int64)v50, v29, a4) )
        goto LABEL_21;
    }
    sub_1166E0((__int64)v52);
    sub_1166E0((__int64)v51);
    v46 = 0;
  }
  v52[0] = a4;
  v11 = sub_306290(a2, a3, v52);
  v12 = v11;
  if ( !v11 || (unsigned __int8)sub_A35F0((__int64)a3, v11, v52[0], a4) )
    goto LABEL_4;
  if ( *(_BYTE *)(a1 + 32) == 4 )
  {
    v30 = v46;
    if ( *(_BYTE *)v46 == 4 )
    {
      v34 = *(_DWORD **)(v46 + 8);
      if ( *v34 == 8 )
        v30 = (__int64)(v34 + 8);
    }
    v31 = v12;
    if ( *(_BYTE *)v12 == 4 )
    {
      v33 = *(_DWORD **)(v12 + 8);
      if ( *v33 == 8 )
        v31 = (__int64)(v33 + 8);
    }
    if ( !(unsigned __int8)sub_14C820(a2, (unsigned __int64)v50, v30, v31, *(_QWORD *)(a1 + 24), a3, a4) )
    {
      if ( *(_BYTE *)v46 != 4 )
        goto LABEL_4;
      v32 = *(_QWORD *)(v46 + 8);
      if ( *(_DWORD *)v32 != 24 || !sub_11F4A0((unsigned __int8 *)(v32 + 32), v12, 0) )
        goto LABEL_4;
      sub_11EAC0((__int64)v50, (unsigned __int8 *)v46);
    }
LABEL_14:
    v13 = sub_14C980(a3[4].m128i_i64[0], (__int64)v50, *(_QWORD *)(a1 + 24));
    sub_1166E0(a1 + 32);
    v14 = HIDWORD(v50[0]);
    *(_BYTE *)(a1 + 32) = 4;
    *(_QWORD *)(a1 + 40) = v13;
    *(_DWORD *)(a1 + 36) = v14;
    sub_1166E0(a1 + 48);
    v15 = *(_DWORD *)(a1 + 68);
    v16 = 9;
    if ( *(_DWORD *)(a1 + 36) >= v15 )
    {
      v16 = 4;
      if ( *(_DWORD *)(a1 + 36) > v15 )
        v16 = 10;
    }
    *(_DWORD *)a1 = v16;
    v8 = 1;
    goto LABEL_5;
  }
  if ( sub_14BF90((__int64)v50, a2, v12) )
    goto LABEL_14;
LABEL_4:
  v8 = 0;
LABEL_5:
  sub_1166E0((__int64)v50);
  return v8;
}

