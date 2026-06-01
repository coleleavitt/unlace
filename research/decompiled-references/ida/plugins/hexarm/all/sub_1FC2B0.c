__int64 __fastcall sub_1FC2B0(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  int v14; // r15d
  int v15; // eax
  int v16; // eax
  __int64 v17; // r15
  char v18; // al
  int v19; // ecx
  unsigned __int64 v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // r12
  int v23; // edx
  __int64 v24; // rdi
  char v25; // al
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  char v35; // [rsp+28h] [rbp-B0h]
  int v36; // [rsp+2Ch] [rbp-ACh]
  __m128i v37; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-98h] BYREF
  __int64 v39; // [rsp+48h] [rbp-90h]
  unsigned __int64 v40; // [rsp+50h] [rbp-88h] BYREF
  __int64 v41; // [rsp+58h] [rbp-80h]
  __m128i v42; // [rsp+60h] [rbp-78h] BYREF
  __int64 v43; // [rsp+70h] [rbp-68h] BYREF
  __int64 v44; // [rsp+78h] [rbp-60h]
  __int64 v45; // [rsp+80h] [rbp-58h] BYREF
  __int128 v46; // [rsp+88h] [rbp-50h]
  unsigned __int64 v47; // [rsp+98h] [rbp-40h]

  v9 = a4[22];
  v47 = __readfsqword(0x28u);
  v37 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  if ( !(unsigned __int8)sub_1C2B50((__int64)a4, (__int64)&v37, v9) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1C2DC0((__int64)a4, v13, (__int64)&v43, 0);
    if ( (_QWORD)v46 )
    {
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree();
      }
      goto LABEL_26;
    }
    v14 = sub_64360(&v43, 0);
    v15 = sub_64600(&v43);
    v37.m128i_i8[8] = 1;
    v37.m128i_i64[0] = v14;
    v37.m128i_i32[3] = v15 - v14 + 1;
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree();
    }
    qfree();
  }
  v38 = -1;
  v39 = 0;
  if ( !(unsigned __int8)sub_1213F0((char *)a5, (__int64)&v38, v10, v11, v12) )
    return 0;
  v16 = 1;
  if ( *(_DWORD *)(a5 + 4) != -1 )
  {
    v17 = *(_QWORD *)(a1 + 32);
    if ( sub_11C690((unsigned __int8 *)a5, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL)) )
      v16 = *(_DWORD *)(a5 + 4);
    else
      v16 = sub_2079D0(a5, v17);
  }
  HIDWORD(v39) = v16;
  sub_32FC40(&v37, &v38);
  v18 = sub_229050(*(_QWORD *)(a1 + 8), a4);
  v19 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) & 0x10;
  if ( v19 )
    LOBYTE(v19) = v37.m128i_i32[3] == *(_DWORD *)(a5 + 4);
  v35 = v18;
  if ( !sub_1FB910((unsigned int *)&v37, *(_QWORD *)(a1 + 8), a6, v19, v18) )
    return 0;
  if ( *(_BYTE *)(a1 + 109) )
  {
    v36 = 0;
    v20 = 0;
  }
  else
  {
    v20 = *(int *)(a1 + 104);
    v36 = *(_DWORD *)(a1 + 104);
  }
  v21 = *(_QWORD **)(a1 + 48);
  if ( v20 < v21[1] )
  {
    while ( 1 )
    {
      v22 = *v21 + 104 * v20;
      if ( a4 == (_DWORD *)v22 || (*(_BYTE *)(v22 + 25) & 0x10) != 0 )
        goto LABEL_48;
      v23 = *(_DWORD *)(v22 + 88);
      v24 = *v21 + 104 * v20;
      v40 = -1;
      v41 = 0;
      if ( (unsigned __int8)sub_1C2B50(v24, (__int64)&v40, v23) )
      {
        if ( v37.m128i_i8[8] == (_BYTE)v41
          && v37.m128i_i32[3]
          && HIDWORD(v41)
          && v37.m128i_i32[3] + v37.m128i_i64[0] - 1 >= v40
          && SHIDWORD(v41) + v40 - 1 >= v37.m128i_i64[0]
          && (v20 >= *(int *)(a1 + 104) || sub_1F0CB0(*(_QWORD *)(a1 + 8), (__int64)&v40, *(_QWORD *)(v22 + 16))) )
        {
          v27 = a3[1];
          v28 = (_DWORD *)(*a3 + 4 * v27);
          v29 = (_DWORD *)*a3;
          if ( (_DWORD *)*a3 == v28 )
            goto LABEL_57;
          while ( (_DWORD)v20 != *v29 )
          {
            if ( v28 == ++v29 )
              goto LABEL_57;
          }
          if ( v28 == v29 )
          {
LABEL_57:
            if ( a3[2] < (unsigned __int64)(v27 + 1) )
            {
              v30 = qvector_reserve();
              v31 = a3[1];
              *a3 = v30;
              v28 = (_DWORD *)(v30 + 4 * v31);
            }
            *v28 = v20;
            ++a3[1];
          }
          if ( v37.m128i_i8[8] != (_BYTE)v41
            || !v37.m128i_i32[3]
            || v40 < v37.m128i_i64[0]
            || v37.m128i_i32[3] + v37.m128i_i64[0] - 1 < v40 + SHIDWORD(v41) - 1 )
          {
            sub_32FC40(&v37, &v40);
            if ( !sub_1FB910((unsigned int *)&v37, *(_QWORD *)(a1 + 8), a6, 0, v35) )
            {
              *(_DWORD *)(v22 + 24) |= 0x400u;
              return 0;
            }
            v20 = v36 - 1;
          }
        }
        v21 = *(_QWORD **)(a1 + 48);
LABEL_48:
        if ( ++v20 >= v21[1] )
          break;
      }
      else
      {
        if ( ((*(_DWORD *)v22 - 2) & 0xFFFFFFFD) != 0 )
        {
          if ( !under_debugger )
            sub_3835A0(52922);
LABEL_71:
          BUG();
        }
        v43 = 0;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        sub_1C2BF0(v22, (__int64)&v43, *(_DWORD *)(v22 + 88), 0, 0);
        if ( v37.m128i_i8[8] == 5 )
        {
          v42 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v37), (__m128i)(unsigned __int64)v37.m128i_i32[3]);
          v25 = sub_318230(&v45, &v42, 0);
        }
        else
        {
          if ( v37.m128i_i8[8] != 1 )
          {
            if ( !under_debugger )
              sub_3835A0(51892);
            goto LABEL_71;
          }
          v25 = sub_64460(&v43, v37.m128i_i32[0], v37.m128i_i32[3]);
        }
        if ( v25 )
        {
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree();
          }
LABEL_26:
          qfree();
          return 0;
        }
        if ( v45 )
        {
          *(_QWORD *)&v46 = 0;
          qfree();
        }
        ++v20;
        qfree();
        v21 = *(_QWORD **)(a1 + 48);
        if ( v20 >= v21[1] )
          break;
      }
    }
  }
  if ( (unsigned int)(*a4 - 1) > 2 )
  {
    if ( !under_debugger )
      sub_3835A0(51036);
    goto LABEL_71;
  }
  sub_32FA90(&v37, a2);
  return v37.m128i_u32[3];
}

