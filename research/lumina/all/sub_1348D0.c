unsigned __int64 __fastcall sub_1348D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  __int64 *v11; // r15
  int v12; // ebx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int16 v16; // cx
  int v17; // edx
  int v18; // eax
  _BYTE *v19; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 *v23; // r15
  __int64 v24; // r12
  __int64 v25; // rbx
  __int16 v26; // r14
  __int64 *v27; // r13
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rax
  __int64 *v31; // rbx
  int v32; // r13d
  __int64 *v33; // rax
  __int64 *v34; // [rsp+8h] [rbp-B0h]
  __int64 *v35; // [rsp+8h] [rbp-B0h]
  __int64 v37; // [rsp+18h] [rbp-A0h]
  __int64 *v38; // [rsp+20h] [rbp-98h]
  int v39; // [rsp+2Ch] [rbp-8Ch]
  __int64 v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+40h] [rbp-78h] BYREF
  __int64 v42; // [rsp+48h] [rbp-70h]
  __int128 v43; // [rsp+50h] [rbp-68h]
  __int128 v44; // [rsp+60h] [rbp-58h]
  __int64 v45; // [rsp+70h] [rbp-48h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v37 = *(_QWORD *)a1;
  v38 = *(__int64 **)(a1 + 16);
  if ( !v38 )
    v38 = sub_E2050((__int64 *)a1);
  if ( a8 == -1 )
  {
    v39 = sub_E1710((__int64)v38, 48, *(unsigned __int8 *)(a5 + 44), 0, 0);
    if ( *(int *)(a5 + 40) <= 0 )
    {
      v11 = nullptr;
      goto LABEL_15;
    }
    goto LABEL_5;
  }
  v39 = 0;
  if ( *(int *)(a5 + 40) > 0 )
  {
LABEL_5:
    v11 = nullptr;
    v12 = 0;
    do
    {
      v16 = -1;
      if ( a4 )
        v16 = *(_WORD *)(*(_QWORD *)(a4 + 8) + 2LL * v12);
      v34 = sub_DF230((__int64 *)a1, a3, a7, v16);
      if ( a6 )
        v13 = *(__int16 *)(a6 + 4LL * v12);
      else
        v13 = *(__int16 *)(a5 + 64);
      ++v12;
      v14 = sub_DEEF0(v37, 59, *(const char **)(*(_QWORD *)(*(_QWORD *)a5 + 8LL) + 16 * v13));
      v15 = sub_F04A0((__int64 *)a1, 53, (__int64)v34, (__int64)v14);
      v11 = sub_F07D0(a1, (__int64)v11, (__int64)v15);
    }
    while ( *(_DWORD *)(a5 + 40) > v12 );
    goto LABEL_13;
  }
  v11 = nullptr;
LABEL_13:
  if ( *(_QWORD *)a5 == a3 && a8 == 1 )
  {
    if ( *(char *)(a3 + 48) >= 0 )
    {
      v31 = sub_DF230((__int64 *)a1, a3, a7, -1);
      v41 = 0;
      LODWORD(v42) = 0;
      v32 = *(_DWORD *)(a2 + 72);
      v33 = sub_DEC00(v37, 167, (__int64)&v41, 0);
      if ( v33 )
      {
        *((_DWORD *)v33 + 11) = v32;
        v33[8] = a3;
        *((_WORD *)v33 + 24) = -1;
      }
      v30 = sub_F04A0((__int64 *)a1, 52, (__int64)v31, (__int64)v33);
    }
    else
    {
      v22 = 0;
      if ( *(_WORD *)(a4 + 94) )
      {
        v35 = v11;
        v40 = a5;
        v23 = nullptr;
        v24 = 0;
        v25 = a4;
        do
        {
          v26 = *(_WORD *)(*(_QWORD *)(v25 + 8) + 2 * v24);
          v27 = sub_DF230((__int64 *)a1, a3, a7, v26);
          v28 = sub_DEEF0(v37, 59, *(const char **)(*(_QWORD *)(a3 + 8) + 16LL * v26));
          v29 = sub_F04A0((__int64 *)a1, 45, (__int64)v27, (__int64)v28);
          v23 = sub_F07D0(a1, (__int64)v23, (__int64)v29);
          ++v24;
        }
        while ( *(unsigned __int16 *)(v25 + 94) > (int)v24 );
        v22 = (__int64)v23;
        a5 = v40;
        v11 = v35;
      }
      v30 = sub_F04A0((__int64 *)a1, 19, v22, 0);
    }
    v11 = sub_F07D0(a1, (__int64)v11, (__int64)v30);
  }
LABEL_15:
  v43 = 0;
  v45 = 0;
  v44 = 0;
  v42 = a2;
  v41 = a1;
  sub_E45E0((__int64)&v41, (__int64)v11);
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v21 = sub_12EFF0(a1, a2, (_DWORD)v11, 0, 0, 0, 0, 0);
    sub_E1710((__int64)v38, 158, *(unsigned __int8 *)(a5 + 44), a8, 0);
    if ( v21 )
      sub_133C90(v21, 0.0);
  }
  if ( v11 )
    sub_D7720(v37, (__int64)v11);
  if ( v39 )
  {
    v17 = *((_DWORD *)v38 + 36);
    v18 = v17 - 1;
    if ( v17 - 1 == v39 )
    {
      *((_DWORD *)v38 + 36) = v39;
    }
    else
    {
      v19 = byte_241F50;
      if ( v39 >= 0 )
        v18 = v39;
      if ( !*(_BYTE *)(*v38 + 103) )
        v19 = (_BYTE *)(v38[17] + 24LL * v18);
      *((_DWORD *)v19 + 2) = v17;
    }
  }
  return __readfsqword(0x28u) ^ v46;
}
