__int64 __fastcall sub_13870(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdi
  char v6; // dl
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128 v9; // xmm0
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 864);
  v13 = 0;
  v12 = 0;
  if ( *(_DWORD *)(v3 + 136) == 1 )
  {
    sub_3D100(v3, &v12);
    v10 = -1;
    v11 = -1;
    v5 = v12;
    if ( (unsigned __int64)v13 > 1 )
    {
      v6 = sub_19D60(v12, &v10, &v11);
      v7 = v10;
      if ( v6 && !v10 )
      {
        v7 = sub_13620(a1, v11);
        v10 = v7;
      }
      if ( v7 != -1 )
        *(_QWORD *)a2 = v7;
      if ( (unsigned __int64)v13 <= 1 )
      {
        v5 = v12;
      }
      else
      {
        v5 = *(_QWORD *)(a2 + 16);
        v8 = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(a2 + 16) = v12;
        v9 = _mm_loadh_ps((const double *)&v13 + 1);
        v12 = v5;
        *((_QWORD *)&v13 + 1) = v8;
        *(__m128 *)(a2 + 24) = v9;
      }
    }
    if ( v5 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
  }
  return 1;
}

