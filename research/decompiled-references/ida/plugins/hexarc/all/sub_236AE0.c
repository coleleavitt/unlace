__int64 __fastcall sub_236AE0(_QWORD *a1, _BYTE *a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rcx
  unsigned int v6; // r13d
  const __m128i *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r15
  const __m128i *v11; // rbp
  int v12; // eax
  __int64 v13; // rax
  int v14; // edx
  char v15; // dl
  __int64 v16; // [rsp+8h] [rbp-1C0h] BYREF
  _QWORD v17[5]; // [rsp+10h] [rbp-1B8h] BYREF
  char v18; // [rsp+38h] [rbp-190h]
  __int64 v19; // [rsp+40h] [rbp-188h]
  int v20; // [rsp+48h] [rbp-180h]
  __int64 v21; // [rsp+50h] [rbp-178h] BYREF
  __int64 v22; // [rsp+58h] [rbp-170h]
  const __m128i *v23; // [rsp+60h] [rbp-168h]
  __int64 v24; // [rsp+90h] [rbp-138h]
  int v25; // [rsp+A0h] [rbp-128h]
  char v26; // [rsp+A4h] [rbp-124h]
  char v27; // [rsp+A5h] [rbp-123h]
  __int64 v28; // [rsp+A8h] [rbp-120h]
  __int64 v29; // [rsp+B0h] [rbp-118h]
  char v30; // [rsp+D8h] [rbp-F0h]
  char v31; // [rsp+180h] [rbp-48h]
  unsigned __int64 v32; // [rsp+188h] [rbp-40h]

  v5 = a1[100];
  v32 = __readfsqword(0x28u);
  sub_22F900((__int64)&v21, (__int64)a1, (unsigned __int64)(a1 + 54), v5);
  v6 = sub_205030(a1, v24, a3, a4, a5);
  if ( v6 )
  {
LABEL_2:
    if ( !v29 )
      goto LABEL_9;
    goto LABEL_3;
  }
  v9 = v22;
  v10 = 0;
  if ( *(int *)(v22 + 64) > 0 )
  {
    while ( 1 )
    {
      v11 = *(const __m128i **)(*(_QWORD *)(v9 + 528) + 8 * v10);
      v25 = *(_QWORD *)(v9 + 440);
      v27 = 0;
      v23 = v11;
      do
      {
        v12 = sub_118EF0(v11, (__int64)&v21);
        if ( v12 >= 0 )
        {
          if ( v27 )
            goto LABEL_17;
        }
        else
        {
          if ( v12 != -36 )
            goto LABEL_18;
          if ( v27 )
          {
LABEL_17:
            v12 = -36;
LABEL_18:
            v6 = v12;
            goto LABEL_2;
          }
        }
      }
      while ( v12 == -36 );
      if ( v12 )
      {
        if ( !under_debugger )
          sub_37B760(52214);
        BUG();
      }
      v9 = v22;
      v14 = *(_DWORD *)(v22 + 64);
      if ( v14 <= (int)v10 + 1 )
        break;
      if ( (unsigned int)++v10 >= v14 )
        sub_21FAC0(v11);
    }
  }
  if ( v29 )
  {
    if ( (*(_DWORD *)a1 & 0x8000000) != 0 )
    {
LABEL_3:
      if ( v31 )
      {
        v17[3] = 0;
        v17[4] = 0;
        v17[2] = v23;
        v7 = *(const __m128i **)(v22 + 520);
        v17[1] = v22;
        v18 = 0;
        v17[0] = off_4AC060;
        v19 = v24;
        v20 = 0;
        if ( v7 )
        {
          do
          {
            while ( (unsigned int)sub_118EF0(v7, (__int64)v17) )
              ;
            v7 = (const __m128i *)v7->m128i_i64[1];
          }
          while ( v7 );
          if ( v20 )
            v6 = -36;
        }
      }
      goto LABEL_9;
    }
    v13 = 0;
    if ( v28 )
      v13 = *(_QWORD *)(v28 + 8);
    if ( v13 == v28 )
    {
LABEL_27:
      if ( (*(_DWORD *)v22 & 0x40000) != 0 || !(unsigned int)sub_228880((__int64)&v21) )
        goto LABEL_2;
    }
    else
    {
      while ( 1 )
      {
        v16 = v13;
        if ( !(unsigned __int8)sub_236170((__int64)&v21, &v16) )
          break;
        v13 = v16;
        if ( v16 == v28 )
        {
          v15 = sub_235E30((__int64)&v21, &v16);
          v13 = v16;
          if ( !v15 )
            break;
        }
        if ( v13 == v28 )
          goto LABEL_27;
      }
      if ( (v30 & 4) == 0
        || (*(_DWORD *)v22 & 0x40000) == 0 && !(unsigned int)sub_228880((__int64)&v21) && (v30 & 4) == 0 )
      {
        v6 = -10;
        goto LABEL_2;
      }
    }
    v6 = -36;
    goto LABEL_2;
  }
LABEL_9:
  *a2 = v26;
  sub_220170(&v21);
  return v6;
}

