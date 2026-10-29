unsigned __int64 __fastcall sub_1A000(__int64 a1, int a2, double a3, double a4)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-78h] BYREF
  __int64 v7; // [rsp+8h] [rbp-70h]
  __m128 v8; // [rsp+10h] [rbp-68h]
  __int128 v9; // [rsp+20h] [rbp-58h]
  int v10; // [rsp+30h] [rbp-48h]
  __int128 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  char v13; // [rsp+50h] [rbp-28h]
  __int16 v14; // [rsp+51h] [rbp-27h]
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v6 = off_2E750;
  v7 = a1;
  v8 = (__m128)-1LL;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 0;
  v11 = 0;
  if ( (unsigned int)getinf(5) == 11 )
  {
    v4 = *(_QWORD *)(v7 + 624);
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*(_QWORD *)(v7 + 624)) )
      {
        v10 = *(_DWORD *)(v4 + 60);
        if ( (unsigned int)(v10 - 2) <= 1 || v10 == 5 )
          sub_85B0(v7);
        sub_11390(v7);
        *(_QWORD *)&v9 = *(unsigned int *)(v4 + 56);
        v8 = _mm_loadh_ps((const double *)(v4 + 32));
        *((_QWORD *)&v9 + 1) = *(_QWORD *)(v4 + 24);
        sub_19A80((__int64)&v6, a2 | 2, *(double *)v8.m128_u64, a4);
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}

