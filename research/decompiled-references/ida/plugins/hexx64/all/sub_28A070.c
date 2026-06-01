__int64 __fastcall sub_28A070(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r12d
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // rdi
  __int64 v15; // rsi
  __m128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-A0h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-98h] BYREF
  int v20; // [rsp+18h] [rbp-90h]
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int128 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+38h] [rbp-70h]
  __int128 v24; // [rsp+40h] [rbp-68h]
  __m128 v25; // [rsp+50h] [rbp-58h]
  int v26; // [rsp+60h] [rbp-48h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v3 = a1[2];
  v27 = __readfsqword(0x28u);
  v4 = a1[3];
  LODWORD(v3) = *(_DWORD *)(*(_QWORD *)(v3 + 8 * v4 - 8) + 8LL);
  LOBYTE(v4) = (_DWORD)v3 != 83 && (_DWORD)v3 != 71;
  if ( (_BYTE)v4 )
  {
    if ( !under_debugger )
      sub_383060(0xC5A8u, a3);
LABEL_19:
    BUG();
  }
  v5 = v4;
  v7 = (__int64 *)(a1[5] + 16LL * a1[6] - 16);
  v8 = (__int64 *)v7[1];
  if ( (__int64 *)a2 != v8 + 2 )
  {
    if ( !under_debugger )
      sub_383060(0xCDF5u, a3);
    goto LABEL_19;
  }
  v9 = *v7;
  v10 = *v8;
  if ( *v7 != *v8 && *(_DWORD *)(v10 + 24) == 72 && *(_DWORD *)(v10 + 28) == -1 )
  {
    v12 = *(_QWORD *)(v10 + 40);
    v13 = *(_DWORD *)(v12 + 8);
    if ( (unsigned int)(v13 - 55) <= 1 )
    {
      v14 = *(_QWORD *)(a2 + 24);
      v18 = *(_QWORD *)(v12 + 24);
      if ( (unsigned int)sub_256A60(v14, v18) == 1 )
      {
        v15 = *(_QWORD *)(a2 + 24);
        v16 = _mm_loadh_ps((const double *)&v18);
        v22 = 0;
        v26 = (v13 != 55) + 53;
        v20 = 2;
        v21 = 0;
        v23 = 0;
        v19 = (__int64 (__fastcall **)())&off_4E0C38;
        v24 = 0;
        v25 = v16;
        if ( (int)sub_255A80((__int64 *)&v19, v15, a2, *(double *)v16.m128_u64) > 0 )
        {
          v17 = *(_QWORD *)v10;
          **(_QWORD **)(v10 + 8) = *(_QWORD *)v10;
          *(_QWORD *)(v17 + 8) = *(_QWORD *)(v10 + 8);
          sub_255050(v10 + 16, *(double *)v16.m128_u64);
          qfree(v10);
          --*(_QWORD *)(v9 + 16);
          v5 = 1;
        }
        v19 = off_4DBCF8;
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
        if ( v21 )
        {
          *(_QWORD *)&v22 = 0;
          qfree(v21);
        }
      }
    }
  }
  return v5;
}

