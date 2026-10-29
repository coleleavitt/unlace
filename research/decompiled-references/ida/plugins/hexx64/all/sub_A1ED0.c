__int64 __fastcall sub_A1ED0(char *a1, _QWORD *a2, double a3, __m128 a4)
{
  char v4; // al
  unsigned int v6; // ebx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edx
  int v13; // esi
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v4 = *a1;
  v19 = __readfsqword(0x28u);
  if ( v4 == 1 )
  {
    v12 = *((_DWORD *)a1 + 1);
    v13 = *((_DWORD *)a1 + 2);
    v15 = 0;
    v16 = 0;
    sub_63E80(&v15, v13, v12, a3);
    v17 = 0;
    v18 = 0;
    v6 = sub_64820(&v15, a2);
    if ( (_BYTE)v6 )
      v6 = sub_317F40(a2 + 2, (__int64)&v17);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
    qfree(v15);
  }
  else
  {
    v6 = 0;
    if ( v4 == 5 )
    {
      v8 = *((__int64 **)a1 + 1);
      v9 = *((int *)a1 + 1);
      v18 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v10 = *v8;
      v11 = v8[1];
      v14.m128i_i64[1] = v9;
      v14.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 1496) + 24LL) + 16LL)
                       & (*(_QWORD *)(v10 + 1440) + v11);
      sub_316BB0(&v17, &v14, 0.0, a4);
      v6 = sub_64820(&v15, a2);
      if ( (_BYTE)v6 )
        v6 = sub_317F40(a2 + 2, (__int64)&v17);
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
      qfree(v15);
    }
  }
  return v6;
}

