__int64 __fastcall sub_4A8A0(bool *a1)
{
  char *v1; // rax
  unsigned __int64 v2; // rcx
  bool *v3; // rbx
  __m128 v4; // xmm1
  bool *v5; // r15
  int v6; // eax
  char v7; // dl
  char *v9; // rax
  __int64 v10; // rdx
  __m128 v11; // xmm0
  char *v12; // [rsp+0h] [rbp-98h] BYREF
  char *v13; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v14[24]; // [rsp+10h] [rbp-88h] BYREF
  int v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  __int128 v17; // [rsp+38h] [rbp-60h]
  char v18; // [rsp+48h] [rbp-50h]
  unsigned __int64 v19; // [rsp+58h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  memset(v14, 0, sizeof(v14));
  v1 = sub_48F20((unsigned __int64)a1, 1u, 0x11u, 0, (__int64)v14);
  v12 = v1;
  if ( v1 )
  {
    v2 = *((_QWORD *)v1 + 1);
    v3 = a1 + 152;
    v4 = _mm_loadh_ps((const double *)v1);
    v15 = 0;
    v5 = a1 + 173;
    *(_QWORD *)&v14[16] = v2;
    *(__m128 *)v14 = v4;
    v16 = 0;
    v18 = byte_7FBE9;
    v6 = 0;
    v17 = 0;
    while ( 1 )
    {
      if ( v6 >= v2 )
        goto LABEL_3;
      v7 = *(_BYTE *)(*(_QWORD *)&v14[8] + v6);
      v15 = v6 + 1;
      if ( v3 )
        *v3 = v7 != 0;
      if ( v18 )
      {
        sub_1FAD0(&v16);
        if ( ++v3 == v5 )
        {
LABEL_10:
          sub_43EB0((__int64)v14);
          goto LABEL_11;
        }
      }
      else
      {
LABEL_3:
        if ( ++v3 == v5 )
          goto LABEL_10;
      }
      v6 = v15;
      v2 = *(_QWORD *)&v14[16];
    }
  }
  memset(v14, 0, sizeof(v14));
  v9 = sub_48F20((unsigned __int64)a1, 1u, 0xCu, 0, (__int64)v14);
  v13 = v9;
  if ( v9 )
  {
    v10 = *((_QWORD *)v9 + 1);
    v11 = _mm_loadh_ps((const double *)v9);
    v15 = 0;
    *(__m128 *)v14 = v11;
    *(_QWORD *)&v14[16] = v10;
    v16 = 0;
    v18 = byte_7FBE9;
    v17 = 0;
    sub_46B40((__int64)v14, a1 + 152);
    sub_46B40((__int64)v14, a1 + 153);
    sub_46B40((__int64)v14, a1 + 154);
    sub_46B40((__int64)v14, a1 + 155);
    sub_46B40((__int64)v14, a1 + 156);
    sub_46B40((__int64)v14, a1 + 157);
    sub_46B40((__int64)v14, a1 + 158);
    sub_43EB0((__int64)v14);
  }
  sub_44B80((_QWORD **)&v13);
LABEL_11:
  sub_44B80((_QWORD **)&v12);
  return 1;
}

