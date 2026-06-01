__int64 __fastcall sub_A4F90(__int64 a1, unsigned int *a2, _QWORD *a3, _QWORD *a4, double a5, __m128 a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // r9d
  int v14; // eax
  int v15; // edx
  __int64 v16; // r14
  int v17; // edx
  unsigned __int64 v18; // r9
  __int64 *v19; // r8
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  bool v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rax
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-98h]
  __int64 *v30; // [rsp+10h] [rbp-90h]
  __int64 (__fastcall **v32)(); // [rsp+20h] [rbp-80h] BYREF
  __int128 v33; // [rsp+28h] [rbp-78h]
  __int128 v34; // [rsp+38h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-58h] BYREF
  __int128 v36; // [rsp+50h] [rbp-50h]
  unsigned __int64 v37; // [rsp+68h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v8 = *a2;
  if ( (unsigned int)v8 > 0x3E )
  {
    v15 = *a2;
    if ( *((_BYTE *)a2 + 64) != 8 )
    {
LABEL_11:
      if ( v15 != 67 || a2[9] != a2[17] )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  else
  {
    v9 = 0x587FFC0000000000LL;
    if ( _bittest64(&v9, v8) )
      return 0;
    if ( *((_BYTE *)a2 + 64) != 8 )
    {
      if ( (_DWORD)v8 != 4 )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  v16 = *((_QWORD *)a2 + 9);
  v17 = *(_DWORD *)(v16 + 284);
  if ( (unsigned int)(v17 - 2) > 2 )
    goto LABEL_15;
  v21 = *(_QWORD *)(v16 + 24);
  if ( *(_BYTE *)v21 != 10 || **(_BYTE **)(v21 + 8) != 5 )
  {
LABEL_17:
    v15 = v8;
    goto LABEL_18;
  }
  if ( (unsigned __int8)sub_11FD80((char *)(v21 + 80), &v32, 1u) && !v32 )
  {
    v33 = 0u;
    v34 = 0;
    sub_32FE70(v16, (__int64 *)&v32, a1, 1, 0.0, a6);
    v27 = (__int64 *)sub_670E0(*(_QWORD **)(a1 + 64), (__int64)&v32, v25, v26);
    if ( !sub_17C4E0(v27, (__int64)&v32, *(_DWORD *)(a1 + 72), 0xFFFFFFFF, *((_QWORD *)a2 + 1), 0, 1u, 0) )
    {
      if ( *((_QWORD *)&v33 + 1) )
      {
        *(_QWORD *)&v34 = 0;
        qfree(*((__int64 *)&v33 + 1));
      }
      qfree((__int64)v32);
      return 0;
    }
    if ( *((_QWORD *)&v33 + 1) )
    {
      *(_QWORD *)&v34 = 0;
      qfree(*((__int64 *)&v33 + 1));
    }
    qfree((__int64)v32);
  }
  if ( *((_BYTE *)a2 + 64) == 8 )
  {
    v17 = *(_DWORD *)(*((_QWORD *)a2 + 9) + 284LL);
LABEL_15:
    if ( v17 == 11 )
      return 0;
    LODWORD(v8) = *a2;
    goto LABEL_17;
  }
  v15 = *a2;
LABEL_18:
  if ( v15 != 4 )
    goto LABEL_11;
LABEL_6:
  v11 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v11 + 1) & 0x40) == 0
    && *((_BYTE *)a2 + 32) == 5
    && !(unsigned __int8)sub_1EF9B0(v11, *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL), a2[9]) )
  {
    v18 = (int)a2[9];
    v19 = (__int64 *)(*(_QWORD *)(a1 + 64) + 184LL);
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**((_QWORD **)a2 + 5) + 1496LL) + 24LL) + 16LL)
        & (*(_QWORD *)(**((_QWORD **)a2 + 5) + 1440LL) + *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL));
    v32 = nullptr;
    v33 = 0;
    if ( v18 + v20 - 1 >= v20 )
    {
      v29 = v18;
      v30 = v19;
      v32 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v32, 0, 1, 16);
      v19 = v30;
      v28 = (unsigned __int64 *)&v32[2 * v33];
      *v28 = v20;
      v28[1] = v29;
      *(_QWORD *)&v33 = v33 + 1;
    }
    if ( !(unsigned __int8)sub_317F40(v19, (__int64)&v32) )
    {
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree((__int64)v32);
      }
      return 0;
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree((__int64)v32);
    }
  }
LABEL_7:
  if ( (unsigned __int8)sub_64820(a3, a4) && (unsigned __int8)sub_317F40(a4 + 2, (__int64)(a3 + 2)) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 605LL) & 0x40) != 0 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      v34 = 0u;
      v32 = off_4DBF00;
      v35 = 0;
      v33 = v22;
      v36 = 0;
      sub_11F760(a2, &v32);
      v24 = sub_A4C00((const __m128i *)a1, (__int64)a2, (const void **)&v35, v23);
      v32 = off_4DBF00;
      if ( v24 )
      {
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree(v35);
        }
        return 0;
      }
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35);
      }
    }
  }
  else if ( !sub_A0E80(a2) )
  {
    return 0;
  }
  LOBYTE(v14) = sub_11A5E0(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1496LL), a1, (__int64)a2, (__int64)a2, v12, v13);
  return v14 ^ 1u;
}

