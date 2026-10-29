__int64 __fastcall sub_29700(
        __int64 a1,
        int a2,
        int a3,
        __int64 *a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // rax
  const char *v10; // r8
  __int64 v11; // rdx
  char v12; // bl
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  const char *v16; // rsi
  char v17; // al
  char v18; // dl
  int v19; // eax
  int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rax
  _DWORD *v26; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r13
  unsigned __int64 v34; // rdx
  size_t v35; // r10
  size_t v36; // r11
  __int64 v37; // rsi
  __int64 v38; // rsi
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rdx
  size_t v41; // [rsp+8h] [rbp-98h]
  size_t v42; // [rsp+18h] [rbp-88h]
  unsigned __int64 v44; // [rsp+20h] [rbp-80h]
  __int64 v49; // [rsp+50h] [rbp-50h] BYREF
  __int128 v50; // [rsp+58h] [rbp-48h]
  unsigned __int64 v51; // [rsp+68h] [rbp-38h]

  v9 = a4[1];
  v51 = __readfsqword(0x28u);
  v49 = 0;
  v50 = 0;
  if ( !v9 )
    goto LABEL_2;
  v28 = *a4;
  v29 = v9 - 1;
  v30 = *a4 + 24 * v9;
  if ( *a4 == v30 )
  {
    if ( v9 == 1 )
    {
LABEL_2:
      v10 = nptr;
      goto LABEL_3;
    }
LABEL_46:
    v29 = v50;
    v49 = qvector_reserve();
    v28 = *a4;
    v30 = *a4 + 24 * a4[1];
    if ( *a4 == v30 )
      goto LABEL_47;
    goto LABEL_29;
  }
  v31 = *a4;
  do
  {
    v32 = *(_QWORD *)(v31 + 8);
    if ( v32 )
      v29 = v32 + v29 - 1;
    v31 += 24;
  }
  while ( v30 != v31 );
  if ( v29 )
    goto LABEL_46;
LABEL_29:
  v33 = v28;
  do
  {
    if ( v29 > 1 )
    {
      v38 = v49;
      v39 = v29 - 1;
      v40 = v29 + 1;
      if ( *((_QWORD *)&v50 + 1) < v29 + 1 )
      {
        v49 = qvector_reserve();
        v39 = v29 - 1;
        v38 = v49;
        v40 = v29 + 1;
      }
      *(_QWORD *)&v50 = v40;
      *(_BYTE *)(v38 + v29) = 0;
      *(_BYTE *)(v49 + v39) = 59;
      v29 = v50;
    }
    v34 = *(_QWORD *)(v33 + 8);
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v34 != 1 )
      {
        v36 = v34 - 1;
        if ( v29 )
        {
          --v29;
          v36 = v35 + v29;
          v34 += v29;
        }
        v37 = v49;
        if ( *((_QWORD *)&v50 + 1) < v34 )
        {
          v44 = v34;
          v41 = v35;
          v42 = v36;
          v49 = qvector_reserve();
          v35 = v41;
          v37 = v49;
          v36 = v42;
          v34 = v44;
        }
        *(_QWORD *)&v50 = v34;
        *(_BYTE *)(v37 + v36) = 0;
        memcpy((void *)(v29 + v49), *(const void **)v33, v35);
        v29 = v50;
      }
    }
    v33 += 24;
  }
  while ( v30 != v33 );
LABEL_47:
  if ( !v29 )
    goto LABEL_2;
  LODWORD(v10) = v49;
LABEL_3:
  sub_58110(a1, (unsigned int)"dalvik_debmod_t::dbg_start_process(%s,%s,%s,%s,%x,%s,)\n", a2, a3, (_DWORD)v10, a5);
  v11 = a6;
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  sub_19F30((__int64)"HIDECANCEL\nInitializing...", "dalvik_debmod_t::dbg_start_process(%s,%s,%s,%s,%x,%s,)\n", v11);
  sub_1BCC0(a1);
  v12 = sub_22710((int *)&v49, a9);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui, v13, v14);
  if ( !v12 )
    return 0xFFFFFFFFLL;
  v15 = v49;
  if ( !(unsigned __int8)sub_23750(*(_DWORD *)(a1 + 1816)) )
    return 0xFFFFFFFFLL;
  v16 = nptr;
  if ( *(_QWORD *)(a1 + 1800) )
    v16 = *(const char **)(a1 + 1792);
  if ( !(unsigned __int8)sub_4AB10(a1 + 864, v16, *(unsigned int *)(a1 + 1816), a9) )
    return 4294967294LL;
  v17 = getinf();
  v18 = *(_BYTE *)(a1 + 36);
  v19 = v17 & 6;
  if ( v19 )
  {
    if ( v19 != 2 )
    {
      v20 = 8;
      if ( !v18 )
        goto LABEL_14;
      v21 = 8;
      v22 = *(_QWORD *)(a1 + 16);
      v20 = 8;
      goto LABEL_13;
    }
    v20 = 4;
    if ( !v18 )
      goto LABEL_14;
LABEL_12:
    v21 = 4;
    v22 = *(_QWORD *)(a1 + 8);
LABEL_13:
    *(_QWORD *)(a1 + 24) = v22;
    *(_DWORD *)(a1 + 32) = v21;
    goto LABEL_14;
  }
  v20 = 2;
  if ( v18 )
    goto LABEL_12;
LABEL_14:
  *(_DWORD *)(a1 + 276) = v20;
  if ( !(unsigned __int8)sub_4A530(a1 + 864) )
    return 4294967294LL;
  *(_DWORD *)(a1 + 1820) = 1;
  *(_DWORD *)(a1 + 656) = v15;
  if ( !(unsigned __int8)sub_293C0(a1) )
    return 4294967294LL;
  sub_27740(a1);
  v23 = *(_QWORD *)(a1 + 1856);
  if ( v23 )
  {
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      v26 = (_DWORD *)(*(_QWORD *)(a1 + 1848) + 40 * v25);
      if ( *v26 == 1 )
        break;
      v25 = ++v24;
      if ( v24 >= v23 )
        goto LABEL_22;
    }
    if ( v26 )
      *(_QWORD *)(a1 + 1832) = 1;
  }
LABEL_22:
  sub_26A00(a1, "<JDWP process>");
  return 1;
}

