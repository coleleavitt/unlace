__int64 __fastcall sub_179140(__int64 a1, __int64 a2, __m128i a3, __m128 a4, __m128 a5)
{
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // r12d
  int v13; // r12d
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // r12
  char v17; // al
  __m128i v18; // [rsp+10h] [rbp-178h] BYREF
  __int64 *v19; // [rsp+20h] [rbp-168h]
  __int64 **v20; // [rsp+28h] [rbp-160h]
  __int64 v21[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned __int64 *v22[4]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v23[2]; // [rsp+60h] [rbp-128h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-118h] BYREF
  __m128 v25; // [rsp+78h] [rbp-110h]
  const void *v26[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 *v27; // [rsp+A0h] [rbp-E8h]
  __m128i v28; // [rsp+A8h] [rbp-E0h] BYREF
  _QWORD v29[6]; // [rsp+C0h] [rbp-C8h] BYREF
  int v30; // [rsp+F0h] [rbp-98h]
  _QWORD v31[3]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v32; // [rsp+118h] [rbp-70h]
  __int64 v33; // [rsp+120h] [rbp-68h]
  char v34; // [rsp+128h] [rbp-60h]
  __int64 v35; // [rsp+130h] [rbp-58h]
  int v36; // [rsp+138h] [rbp-50h]
  unsigned __int64 v37; // [rsp+148h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a2 && *(_QWORD *)(a2 + 8) )
  {
    sub_124680((__int64)v21, a1, a2, 1, *(double *)a3.m128i_i64, a4);
    sub_127A20((__int64)v23, a1, a2, 0, v5, v6, *(double *)a3.m128i_i64, a4);
    if ( (unsigned __int8)sub_64780(v21, v23)
      || (v20 = &v24, v19 = (__int64 *)v22, v7 = sub_318470(v22, (__int64)&v24), (_BYTE)v7) )
    {
      v7 = 0;
    }
    else
    {
      sub_64280(v21, v23, *(double *)a3.m128i_i64);
      sub_316CB0(v19, &v24, v9, v10);
      v29[5] = a2;
      v35 = a2;
      v11 = *(_QWORD *)(a2 + 8);
      v29[0] = &off_4DE068;
      v29[1] = 0;
      v29[3] = 0;
      v29[4] = 0;
      v30 = 0;
      v29[2] = a1;
      v31[1] = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v31[0] = &off_4DE090;
      v36 = 0;
      v31[2] = a1;
      if ( v11 )
      {
        v12 = 0;
        do
        {
          sub_11F760((_BYTE *)v11, v29);
          if ( v30 != v12 )
            sub_167810(a1, (unsigned int *)v11, 6u, a3, a4, a5);
          v32 = v11;
          v13 = v36;
          sub_11E900((_BYTE *)v11, (__int64)v31);
          if ( v36 != v13 )
            sub_167810(a1, (unsigned int *)v11, 6u, a3, a4, a5);
          sub_127A20((__int64)v26, a1, v11, 1, v14, v15, *(double *)a3.m128i_i64, a4);
          sub_648D0(v23, v26, *(double *)a3.m128i_i64);
          a3 = 0;
          v16 = v27;
          v27 = nullptr;
          a4 = (__m128)_mm_loadu_si128(&v28);
          v28 = 0;
          if ( v24 )
          {
            v18 = (__m128i)a4;
            v25.m128_u64[0] = 0;
            qfree((__int64)v24);
            a4 = (__m128)_mm_load_si128(&v18);
            v24 = v16;
            v25 = a4;
            if ( v27 )
            {
              v28.m128i_i64[0] = 0;
              qfree((__int64)v27);
            }
          }
          else
          {
            v24 = v16;
            v25 = a4;
          }
          qfree((__int64)v26[0]);
          if ( (unsigned __int8)sub_64780(v21, v23) )
            break;
          v17 = sub_318470((unsigned __int64 **)v19, (__int64)v20);
          v12 = v30;
          if ( v17 )
            break;
          v11 = *(_QWORD *)(v11 + 8);
        }
        while ( v11 );
        v7 = 1;
        if ( !v30 )
          LOBYTE(v7) = v36 != 0;
      }
    }
    if ( v24 )
    {
      v25.m128_u64[0] = 0;
      qfree((__int64)v24);
    }
    qfree(v23[0]);
    if ( v22[0] )
    {
      v22[1] = nullptr;
      qfree((__int64)v22[0]);
    }
    qfree(v21[0]);
  }
  else
  {
    return 0;
  }
  return v7;
}

