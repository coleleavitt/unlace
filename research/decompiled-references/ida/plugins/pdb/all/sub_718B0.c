__int64 __fastcall sub_718B0(_QWORD *a1, unsigned int a2)
{
  __int64 *v3; // rbx
  unsigned __int16 v4; // r15
  unsigned int v5; // r12d
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  _QWORD *v11; // r9
  unsigned __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  char *v15; // rbx
  __int64 v16; // rbp
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 *v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __m128i v22; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int16 v23; // [rsp+14h] [rbp-74h] BYREF
  __int16 v24; // [rsp+16h] [rbp-72h] BYREF
  __int64 *v25[3]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __m128i v27; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v23 = 0;
  sub_67120(v25, (__int64)a1, a2, &v23);
  v3 = v25[0];
  if ( !v25[0] )
    return 0;
  v4 = v23;
  v5 = 0;
  if ( v23 )
  {
    v7 = *v25[0];
    v24 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64 *))(v7 + 32))(v25[0]);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int16 *, __int64))(*v3 + 48))(v3, &v24, 2)
      || !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v8)
      || (v24 & 0xFFFD) != 0x1201 )
    {
      v5 = 0;
      goto LABEL_8;
    }
    v26 = 0;
    v27 = 0;
    if ( v24 == 4609 )
      v9 = sub_681F0(a1, &v26, v25);
    else
      v9 = sub_71590(a1, &v26, v25, v4);
    v5 = v9;
    if ( !(_BYTE)v9 )
    {
LABEL_14:
      if ( v26 )
      {
        v27.m128i_i64[0] = 0;
        qfree(v26);
      }
LABEL_8:
      v3 = v25[0];
      if ( !v25[0] )
        return v5;
      goto LABEL_3;
    }
    v10 = a1[46];
    v11 = *(_QWORD **)(a1[45] + 8 * (a2 % v10));
    v12 = a2 % v10;
    if ( v11 )
    {
      v13 = (_QWORD *)*v11;
      if ( *(_DWORD *)(*v11 + 8LL) == a2 )
      {
LABEL_23:
        if ( v11 && *v11 )
        {
          v15 = (char *)(*v11 + 16LL);
LABEL_26:
          v16 = v26;
          v17 = _mm_loadu_si128(&v27);
          v26 = 0;
          v27 = 0;
          v18 = *(_QWORD *)v15;
          if ( *(_QWORD *)v15 )
          {
            *((_QWORD *)v15 + 1) = 0;
            v22 = v17;
            qfree(v18);
            v17 = _mm_load_si128(&v22);
          }
          *(_QWORD *)v15 = v16;
          *(__m128i *)(v15 + 8) = v17;
          goto LABEL_14;
        }
      }
      else
      {
        while ( 1 )
        {
          v14 = (_QWORD *)*v13;
          if ( !*v13 )
            break;
          v11 = v13;
          if ( v12 != *((unsigned int *)v14 + 2) % v10 )
            break;
          v13 = (_QWORD *)*v13;
          if ( *((_DWORD *)v14 + 2) == a2 )
            goto LABEL_23;
        }
      }
    }
    v19 = a1 + 45;
    v22.m128i_i64[0] = a2;
    v25[1] = v19;
    v20 = operator new(0x28u);
    *(_QWORD *)v20 = 0;
    *(_DWORD *)(v20 + 8) = a2;
    v21 = v22.m128i_i64[0];
    *(_QWORD *)(v20 + 16) = 0;
    *(_OWORD *)(v20 + 24) = 0;
    v25[2] = (__int64 *)v20;
    v15 = sub_6EF70((char **)v19, v12, v21, (char *)v20, 1u) + 16;
    goto LABEL_26;
  }
LABEL_3:
  (*(void (__fastcall **)(__int64 *))(*v3 + 8))(v3);
  return v5;
}

