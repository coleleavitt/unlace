unsigned __int64 __fastcall sub_1373E0(__int64 a1, __int64 *a2, __int64 a3)
{
  int *v3; // rbx
  int *v4; // r14
  double v6; // xmm0_8
  int v7; // esi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v14[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __int128 v16; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(int **)(a3 + 8);
    v4 = &v3[*(_QWORD *)(a3 + 16)];
    while ( v3 != v4 )
    {
      v6 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, (unsigned int)*v3);
      v7 = *v3;
      v14[0] = 0;
      v14[1] = 0;
      sub_63E80(v14, v7, v8, v6);
      v15 = 0;
      v16 = 0;
      sub_64640(a2, v14, v9, v10, v11, v12);
      sub_317C60(a2 + 2, (__int64)&v15);
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree(v15);
      }
      ++v3;
      qfree(v14[0]);
    }
  }
  return v17 - __readfsqword(0x28u);
}

