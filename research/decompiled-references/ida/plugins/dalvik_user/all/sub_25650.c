__int64 __fastcall sub_25650(__int64 a1, unsigned __int64 a2, const char *a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // ebx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r14
  const char *v14; // rdi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  __m128i v17; // xmm0
  const void *v18; // r13
  const void *v19; // r15
  const void *v20; // r15
  _QWORD *v21; // [rsp+8h] [rbp-F0h]
  __int64 v22; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-E0h]
  const char *v24; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+28h] [rbp-D0h]
  __m128i v26; // [rsp+40h] [rbp-B8h] BYREF
  char *v27; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+58h] [rbp-A0h]
  void *dest; // [rsp+68h] [rbp-90h] BYREF
  __int128 v30; // [rsp+70h] [rbp-88h]
  void *v31; // [rsp+80h] [rbp-78h] BYREF
  __int128 v32; // [rsp+88h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-60h]
  __m128i v34; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+B8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v5 = sub_135E0(a1, a2);
  v22 = 0;
  v23 = 0;
  if ( a2
    && ((v6 = v5, *(_DWORD *)(v5 + 1076)) || a2 != (int)a2 && (!(_DWORD)a2 || (a2 & 7) == 0 && (unsigned int)a2 > 0x100))
    && (unsigned __int8)sub_4EA10(v5 + 864, &v22, a2)
    && (_BYTE)v22 == 1
    && (v21 = (_QWORD *)(v6 + 1040), (v9 = sub_25060((_QWORD *)(v6 + 1040), v23)) != nullptr) )
  {
    v27 = nullptr;
    dest = nullptr;
    v31 = nullptr;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v10 = v9[1];
    v11 = *v9;
    v12 = *v9 + 112 * v10;
    if ( 112 * v10 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v11 + 24);
        v14 = nptr;
        if ( v13 )
          v14 = *(const char **)(v11 + 16);
        if ( !strcmp(v14, a3) )
          break;
        v11 += 112;
        if ( v11 == v12 )
        {
          v7 = 0;
          goto LABEL_31;
        }
      }
      v26 = _mm_loadu_si128((const __m128i *)v11);
      if ( v13 && &v27 != (char **)(v11 + 16) && v13 != 1 )
      {
        v18 = *(const void **)(v11 + 16);
        v27 = (char *)qvector_reserve();
        *(_QWORD *)&v28 = v13;
        memmove(v27, v18, v13 - 1);
        v27[v13 - 1] = 0;
      }
      if ( &dest != (void **)(v11 + 40) )
      {
        v15 = *(_QWORD *)(v11 + 48);
        if ( v15 > 1 )
        {
          v19 = *(const void **)(v11 + 40);
          if ( *((_QWORD *)&v30 + 1) < v15 )
            dest = (void *)qvector_reserve();
          *(_QWORD *)&v30 = v15;
          memmove(dest, v19, v15 - 1);
          *((char *)dest + v15 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v30 = 0;
        }
      }
      if ( &v31 != (void **)(v11 + 64) )
      {
        v16 = *(_QWORD *)(v11 + 72);
        if ( v16 > 1 )
        {
          v20 = *(const void **)(v11 + 64);
          if ( *((_QWORD *)&v32 + 1) < v16 )
            v31 = (void *)qvector_reserve();
          *(_QWORD *)&v32 = v16;
          memmove(v31, v20, v16 - 1);
          *((char *)v31 + v16 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v32 = 0;
        }
      }
      v17 = _mm_loadu_si128((const __m128i *)(v11 + 96));
      v33 = *(_DWORD *)(v11 + 88);
      v34 = v17;
      v7 = sub_253E0(v21, &v26, a2);
      if ( (_BYTE)v7 )
      {
        v24 = nullptr;
        v25 = 0;
        v7 = sub_19B20(a1, (__int64 *)&v24, v34.m128i_i8);
        if ( !(_BYTE)v7 && (unsigned __int64)v25 > 1 )
          sub_11340((__int64)"%s\n", v24);
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree();
        }
      }
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree();
      }
LABEL_31:
      if ( dest )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
    }
    else
    {
      v7 = 0;
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return v7;
}

