__int64 __fastcall sub_AA3D0(__int128 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned int a5, double a6)
{
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r12
  unsigned __int8 *v20; // r13
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // al
  int *v25; // r8
  unsigned __int8 *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  int *v29; // [rsp+8h] [rbp-A8h]
  __int64 v30; // [rsp+10h] [rbp-A0h]
  __int64 v31; // [rsp+18h] [rbp-98h]
  unsigned __int64 *v32; // [rsp+20h] [rbp-90h]
  unsigned __int8 *v33; // [rsp+20h] [rbp-90h]
  char *v34; // [rsp+28h] [rbp-88h]
  int v35; // [rsp+44h] [rbp-6Ch] BYREF
  __int64 v36; // [rsp+48h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v38[10]; // [rsp+60h] [rbp-50h] BYREF

  v6 = a5;
  v38[3] = __readfsqword(0x28u);
  LOBYTE(v6) = a4 & a5;
  if ( (a4 & (unsigned __int8)a5) == 0 )
    return v6;
  v7 = *((_QWORD *)&a1 + 1);
  if ( **((_DWORD **)&a1 + 1) == 4 )
  {
    v10 = a2 + 32;
    if ( !sub_125B60((unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL), a2 + 32, 0) )
      return 0;
    v11 = *(_DWORD *)(a2 + 36);
    if ( !(unsigned __int8)sub_11FD80((char *)(a2 + 48), v38, 1u) || 8 * v11 - 1 != v38[0] )
      return 0;
    sub_123A40((__int64)v38, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL), v12, v13);
    *((_QWORD *)&a1 + 1) = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    v6 = sub_132E20(a1, (__int64)v38, *(_QWORD *)(a2 + 8), a2 + 64, 4u);
    if ( (_BYTE)v6 )
    {
      if ( LOBYTE(v38[0]) == 4 )
      {
        v6 = 0;
      }
      else
      {
        v32 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( sub_A9400(*(_QWORD *)(a1 + 64), (_DWORD *)a2, v10, 0, 0, a6)
          && sub_131730(v32, (const __m128i *)a1, a2, v10, 2 * *(_DWORD *)(a2 + 36), 1u, 1u) )
        {
          ++*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL);
        }
        else
        {
          *(_DWORD *)a2 = 8;
          sub_11CDA0(a2 + 48);
        }
        sub_12AB50((unsigned __int8 *)v38, (__int64)v32, SHIDWORD(v38[0]), 2);
        sub_125180(a2 + 64, (unsigned __int8 *)v38);
        sub_A1280((int)v32, a2, *(_DWORD *)(v7 + 4));
        if ( (unsigned __int8)sub_A9F90(a1, v7, a2) )
          sub_11D5A0(v7);
      }
    }
    goto LABEL_27;
  }
  if ( **((_DWORD **)&a1 + 1) != 10 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( !(unsigned __int8)sub_11FD80((char *)(*((_QWORD *)&a1 + 1) + 48LL), nullptr, 1u) )
      return 0;
    v15 = *(_DWORD *)(a2 + 36);
    if ( !(unsigned __int8)sub_11FD80((char *)(a2 + 48), v38, 1u)
      || 8 * v15 - 1 != v38[0]
      || !sub_125B60((unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 32LL), a2 + 32, 0) )
    {
      return 0;
    }
    sub_123A40((__int64)v38, (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL), v16, v17);
    *((_QWORD *)&a1 + 1) = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    v6 = sub_132E20(a1, (__int64)v38, *(_QWORD *)(a2 + 8), a2 + 64, 1u);
    if ( (_BYTE)v6 )
    {
      sub_12B6F0(v7, v14, 8, -1, 1);
      sub_11CA10((char *)(v7 + 64), (char *)v38);
      sub_A1280(v14, v7, *(_DWORD *)(a2 + 4));
      sub_11D890(v7, a2);
      if ( (unsigned __int8)sub_A9F90(a1, v7, a2) )
        sub_11D5A0(v7);
    }
LABEL_27:
    sub_11CDA0((__int64)v38);
    return v6;
  }
  if ( !(unsigned __int8)sub_152630(a2, &v35) )
    return 0;
  if ( 8 * *(_DWORD *)(a2 + 36) <= v35 )
    return 0;
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 4 )
    return 0;
  v18 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 40LL);
  if ( *(_DWORD *)v18 != 16 )
    return 0;
  v19 = 1LL << v35;
  if ( (unsigned __int64)v35 >= 0x40 )
    v19 = 0;
  v20 = (unsigned __int8 *)(v18 + 48);
  if ( !(unsigned __int8)sub_11FD80((char *)(v18 + 48), v38, 1u) )
    return 0;
  if ( v19 != v38[0] )
    return 0;
  v34 = (char *)(a2 + 64);
  v33 = (unsigned __int8 *)(*((_QWORD *)&a1 + 1) + 64LL);
  if ( !(unsigned __int8)sub_12CF30(
                           *(_QWORD *)(a1 + 64),
                           *((_QWORD *)&a1 + 1) + 64LL,
                           (unsigned __int8 *)(a2 + 64),
                           0,
                           0,
                           v21) )
    return 0;
  v36 = a2;
  *((_QWORD *)&a1 + 1) = a2 + 32;
  v30 = a2 + 32;
  v22 = sub_129440(a1, (__int64)&v36, 1);
  if ( !v22 )
    return 0;
  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( *(_DWORD *)v22 != 11 )
  {
    if ( *(_BYTE *)(v22 + 64) )
    {
      v29 = (int *)v22;
      v24 = sub_129F00(v30, v31, (unsigned __int8 *)(v22 + 64), v23);
      v25 = v29;
      if ( v24 )
        goto LABEL_38;
    }
    return 0;
  }
  if ( *(_BYTE *)(v22 + 32) != 4 )
    return 0;
  v25 = *(int **)(v22 + 40);
LABEL_38:
  v37[1] = 0;
  v37[0] = 0xFFFFFFFF00000000LL;
  if ( sub_119990(v31, (__int64)v37, a1, v36, v25, v19 - 1)
    && (v26 = (unsigned __int8 *)(v18 + 32),
        (unsigned __int8)sub_12EA80(v31, (const __m128i *)a1, v7, v18 + 32, v36, (__int64)v37, 0)) )
  {
    sub_123A40((__int64)v38, v33, v27, v28);
    *((_QWORD *)&a1 + 1) = *(_QWORD *)(v7 + 8);
    v6 = sub_132E20(a1, (__int64)v38, *(_QWORD *)(a2 + 8), (__int64)v34, 1u);
    if ( (_BYTE)v6 )
    {
      sub_125180(v30, v26);
      sub_125180(a2 + 48, v20);
      sub_11CA10(v34, (char *)v38);
      *(_DWORD *)a2 = 16;
      sub_A1280(v31, a2, *(_DWORD *)(v7 + 4));
      if ( (unsigned __int8)sub_A9F90(a1, v7, a2) )
        sub_11D5A0(v7);
    }
    sub_11CDA0((__int64)v38);
  }
  else
  {
    v6 = 0;
  }
  sub_11CDA0((__int64)v37);
  return v6;
}

