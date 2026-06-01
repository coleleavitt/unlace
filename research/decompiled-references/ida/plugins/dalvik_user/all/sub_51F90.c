__int64 __fastcall sub_51F90(unsigned __int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  _WORD *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 i; // rdi
  __int64 v12; // rax
  char *v13; // rax
  __int64 v14; // rdx
  __m128 v15; // xmm0
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int8 v25; // [rsp+0h] [rbp-108h]
  __int64 v26; // [rsp+0h] [rbp-108h]
  __int64 v27; // [rsp+0h] [rbp-108h]
  __int64 v29; // [rsp+8h] [rbp-100h]
  __int64 v30; // [rsp+8h] [rbp-100h]
  unsigned __int32 v31; // [rsp+14h] [rbp-F4h] BYREF
  char *v32; // [rsp+18h] [rbp-F0h] BYREF
  _WORD *v33; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v34; // [rsp+28h] [rbp-E0h]
  __int64 v35; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v41; // [rsp+70h] [rbp-98h]
  char v42; // [rsp+78h] [rbp-90h]
  __m128 v43; // [rsp+80h] [rbp-88h] BYREF
  __int64 v44; // [rsp+90h] [rbp-78h]
  int v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  __int128 v47; // [rsp+A8h] [rbp-60h]
  char v48; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+C8h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v34 = 0;
  v33 = (_WORD *)qvector_reserve();
  *v33 = 35;
  v6 = v33;
  v7 = v34 + 1;
  v8 = v34 + 2;
  *(_QWORD *)&v34 = v34 + 1;
  if ( *((_QWORD *)&v34 + 1) < v8 )
  {
    v33 = (_WORD *)qvector_reserve();
    v6 = v33;
    v7 = v34;
  }
  v6[v7] = 34;
  *(_QWORD *)&v34 = v34 + 1;
  qmutex_lock();
  sub_43F20((__int64)&v35, byte_7FBE9, 0x400u);
  sub_46BB0((__int64)&v35, *(_DWORD *)(a1 + 8), a3);
  sub_46BB0((__int64)&v35, *(_DWORD *)(a1 + 16), a4);
  sub_46AA0((__int64)&v35, 1u);
  if ( byte_7FBE9 )
  {
    v20 = v40;
    v21 = 2;
    if ( v40 )
    {
      v21 = v40 + 1;
      v22 = v39;
      v20 = v40 - 1;
      if ( v41 >= v40 + 1 )
        goto LABEL_21;
    }
    else
    {
      v22 = v39;
      if ( v41 >= 2 )
      {
LABEL_21:
        v40 = v21;
        *(_BYTE *)(v22 + v20) = 123;
        *(_BYTE *)(v39 + v20 + 1) = 0;
        goto LABEL_5;
      }
    }
    v29 = v20;
    v26 = v21;
    v39 = qvector_reserve();
    v20 = v29;
    v22 = v39;
    v21 = v26;
    goto LABEL_21;
  }
LABEL_5:
  sub_46AA0((__int64)&v35, a2[5].m128i_u32[1]);
  v25 = a2[6].m128i_i8[0];
  if ( v42 )
    sub_1FAD0(&v39);
  v9 = v36;
  v10 = v37;
  for ( i = v35; v37 < v36 + 1; v10 = v37 )
  {
    v37 = v38 + v10;
    v12 = qrealloc();
    i = v12;
    if ( !v12 )
      sub_43DF0((__int64)"JDWP encoder");
    v35 = v12;
    v9 = v36;
  }
  *(_BYTE *)(i + v9) = v25;
  ++v36;
  if ( !byte_7FBE9 )
    goto LABEL_11;
  v17 = v40;
  v18 = 2;
  if ( v40 )
  {
    v18 = v40 + 1;
    v19 = v39;
    v17 = v40 - 1;
    if ( v41 >= v40 + 1 )
      goto LABEL_18;
LABEL_30:
    v30 = v17;
    v27 = v18;
    v39 = qvector_reserve();
    v17 = v30;
    v19 = v39;
    v18 = v27;
    goto LABEL_18;
  }
  v19 = v39;
  if ( v41 < 2 )
    goto LABEL_30;
LABEL_18:
  v40 = v18;
  *(_BYTE *)(v19 + v17) = 125;
  *(_BYTE *)(v39 + v17 + 1) = 0;
LABEL_11:
  v13 = sub_48F20(a1, 0x10u, 1u, (__int64)&v35, (__int64)&v33);
  v32 = v13;
  if ( v13 )
  {
    v14 = *((_QWORD *)v13 + 1);
    v15 = _mm_loadh_ps((const double *)v13);
    v45 = 0;
    v44 = v14;
    v43 = v15;
    v46 = 0;
    v48 = byte_7FBE9;
    v47 = 0;
    v16 = sub_46430((__int64)&v43, &v31, 1);
    if ( (_BYTE)v16 )
    {
      v16 = 0;
      if ( v31 == 1 )
        v16 = sub_473C0((__int64)&v43, a2 + 6);
    }
    sub_43EB0((__int64)&v43);
  }
  else
  {
    v16 = 0;
  }
  sub_44B80((_QWORD **)&v32);
  sub_43FA0((__int64)&v35);
  qmutex_unlock();
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  return v16;
}

