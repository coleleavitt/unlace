__int64 __fastcall sub_3DA6E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  volatile signed __int32 *v16; // r13
  __m128i v17; // xmm0
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rdi
  char v21; // al
  int v22; // [rsp+Ch] [rbp-9Ch]
  int v23; // [rsp+Ch] [rbp-9Ch]
  char v24; // [rsp+Ch] [rbp-9Ch]
  __m128i v25; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v26[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h]
  __int128 v28; // [rsp+38h] [rbp-70h]
  __m128i v29; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-48h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v11 = *(_DWORD *)(a1 + 12);
  v32 = __readfsqword(0x28u);
  v12 = a3;
  if ( *(_DWORD *)(a2 + 28) == v11 )
  {
    v13 = *(unsigned int *)(a2 + 12);
    if ( a3 )
      goto LABEL_3;
LABEL_25:
    *(_DWORD *)(a2 + 28) = v11;
    return v12;
  }
  v13 = *(unsigned int *)(a1 + 56);
  if ( !a3 )
    goto LABEL_25;
LABEL_3:
  if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(a3 + 72) && *(_DWORD *)(a2 + 12) == (_DWORD)v13 )
    goto LABEL_25;
  if ( *(_QWORD *)(a2 + 40) == *(_QWORD *)(a3 + 8)
    || (v22 = v13,
        v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                184,
                *(_QWORD *)a1,
                &callui,
                v13,
                a9,
                a10),
        LODWORD(v13) = v23,
        !v14) )
  {
    v16 = nullptr;
    v15 = 0;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 64);
    v16 = *(volatile signed __int32 **)(a1 + 72);
    *(_OWORD *)(a1 + 64) = 0;
  }
  v17.m128i_i64[0] = 0;
  v28 = 0;
  v26[0] = 0;
  v26[1] = -1;
  v27 = 0;
  v30 = 0;
  v31 = 3;
  v29 = 0;
  if ( !(unsigned __int8)sub_3DA460(a1, (__int64)v26, (_QWORD *)a2, v13, 0.0, a5, a6, a7) )
    goto LABEL_8;
  v17 = _mm_loadu_si128(&v29);
  v29 = 0;
  v25 = v17;
  v21 = sub_3D0810(a1, &v25);
  if ( v25.m128i_i64[1] )
  {
    v24 = v21;
    sub_3D0460((volatile signed __int32 *)v25.m128i_i64[1]);
    v21 = v24;
  }
  if ( v21 )
  {
    v19 = v30;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v30 + 8);
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(v19 + 12);
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v19 + 16);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(v19 + 20);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(v19 + 24);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(v19 + 28);
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(v19 + 32);
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v19 + 40);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v19 + 48);
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(v19 + 56);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(v19 + 64);
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 && (unsigned int)(*(_DWORD *)(v12 + 60) - 1) >= 2 )
      v12 = 0;
  }
  else
  {
LABEL_8:
    if ( v15 )
    {
      v18 = *(volatile signed __int32 **)(a1 + 72);
      *(_QWORD *)(a1 + 64) = v15;
      *(_QWORD *)(a1 + 72) = v16;
      if ( v18 )
        sub_3D0460(v18);
      v16 = nullptr;
    }
    if ( (unsigned int)(*(_DWORD *)(v12 + 60) - 1) <= 1 && *(int *)(*(_QWORD *)(v12 + 64) + 64LL) > 0 )
    {
      *(_DWORD *)(a2 + 8) = 0;
      *(_QWORD *)(a2 + 20) = 0;
      sub_3CFAB0(a1, a2, v12, *(double *)v17.m128i_i64);
    }
    v19 = v30;
  }
  if ( v19 )
    qfree();
  if ( v29.m128i_i64[1] )
    sub_3D0460((volatile signed __int32 *)v29.m128i_i64[1]);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v16 )
    sub_3D0460(v16);
  return v12;
}

